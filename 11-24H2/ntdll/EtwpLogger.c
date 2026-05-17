/*
 * XREFs of EtwpLogger @ 0x18008DC40
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x1800042C0 (RtlExitUserThread.c)
 *     EtwpFinalizeLogFileHeader @ 0x18003ED60 (EtwpFinalizeLogFileHeader.c)
 *     EtwpSendSessionNotification @ 0x18008C158 (EtwpSendSessionNotification.c)
 *     EtwpStopLoggerInstance @ 0x18008DE70 (EtwpStopLoggerInstance.c)
 *     EtwpFlushActiveBuffers @ 0x18008E264 (EtwpFlushActiveBuffers.c)
 *     EtwpFreeLoggerContext @ 0x18008EA0C (EtwpFreeLoggerContext.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     NtWaitForSingleObject @ 0x180161D10 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x180161E50 (ZwSetEvent.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 */

void __fastcall __noreturn EtwpLogger(__int64 a1)
{
  void *UniqueThread; // rdx
  LARGE_INTEGER *v3; // r8
  NTSTATUS v4; // eax
  BOOL v5; // esi
  int active; // eax
  int v7; // edi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // rcx
  void *v13; // rsi
  int v14; // eax
  bool v15; // zf
  int v16; // [rsp+40h] [rbp+8h] BYREF

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 24) = UniqueThread;
  v16 = 2;
  NtSetInformationThread(-2LL, 3LL, &v16);
  while ( *(_DWORD *)(a1 + 312) )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 328) )
      v3 = (LARGE_INTEGER *)(a1 + 328);
    v4 = NtWaitForSingleObject(*(HANDLE *)(a1 + 112), 0, v3);
    v5 = v4 == 258 || !v4 && (*(_BYTE *)(a1 + 316) & 2) != 0;
    active = EtwpFlushActiveBuffers(a1, v5);
    v7 = active;
    if ( (*(_BYTE *)(a1 + 316) & 1) != 0 && active >= 0 && !v5 )
      v7 = EtwpFlushActiveBuffers(a1, 1LL);
    v8 = *(_DWORD *)(a1 + 316);
    if ( (v8 & 4) != 0 || (v8 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(a1, 0);
      v13 = *(void **)(a1 + 128);
      *(_QWORD *)(a1 + 128) = 0LL;
      v14 = EtwpAddLogHeaderToLogFile(a1, 0LL, 0LL, 0LL);
      *(_DWORD *)(a1 + 40) = v14;
      v7 = v14;
      if ( v14 >= 0 )
      {
        NtClose(v13);
        if ( (*(_BYTE *)(a1 + 316) & 1) != 0 )
          EtwpSendSessionNotification(a1, 1, 0);
      }
      else
      {
        v15 = (*(_BYTE *)(a1 + 316) & 4) == 0;
        *(_QWORD *)(a1 + 128) = v13;
        if ( !v15 )
          v7 = 0;
      }
      *(_DWORD *)(a1 + 316) &= ~1u;
      v8 = *(_DWORD *)(a1 + 316);
    }
    if ( (v8 & 0x10) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 128) == 0LL;
      *(_DWORD *)(a1 + 316) = v8 & 0xFFFFFFEF;
      if ( !v15 )
        EtwpFinalizeLogFileHeader(a1, 1);
    }
    v9 = *(_DWORD *)(a1 + 316);
    if ( (v9 & 6) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 120);
      *(_DWORD *)(a1 + 316) = v9 & 0xFFFFFFF9;
      ZwSetEvent(v10, 0LL);
    }
    if ( v7 < 0 )
      EtwpStopLoggerInstance(a1);
  }
  EtwpFlushActiveBuffers(a1, 1LL);
  v11 = EtwpFinalizeLogFileHeader(a1, 0);
  NtClose(*(HANDLE *)(a1 + 128));
  *(_QWORD *)(a1 + 128) = 0LL;
  if ( v11 > 0 )
    v11 = (unsigned __int16)v11 | 0xC0070000;
  v12 = *(_QWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 40) = v11;
  ZwSetEvent(v12, 0LL);
  EtwpFreeLoggerContext(a1);
  RtlExitUserThread(0);
}
