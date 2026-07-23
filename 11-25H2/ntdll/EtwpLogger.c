/*
 * XREFs of EtwpLogger @ 0x1800B6AE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180008DE0 (RtlExitUserThread.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x180092750 (EtwpFinalizeLogFileHeader.c)
 *     EtwpSendSessionNotification @ 0x1800B4E14 (EtwpSendSessionNotification.c)
 *     EtwpStopLoggerInstance @ 0x1800B6D10 (EtwpStopLoggerInstance.c)
 *     EtwpFlushActiveBuffers @ 0x1800B7104 (EtwpFlushActiveBuffers.c)
 *     EtwpFreeLoggerContext @ 0x1800B78AC (EtwpFreeLoggerContext.c)
 *     NtWaitForSingleObject @ 0x1801632A0 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x1801633E0 (ZwSetEvent.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 */

void __fastcall __noreturn EtwpLogger(char *BaseAddress)
{
  void *UniqueThread; // rdx
  LARGE_INTEGER *v3; // r8
  NTSTATUS v4; // eax
  BOOL v5; // esi
  int active; // eax
  int v7; // edi
  int v8; // eax
  int v9; // eax
  void *v10; // rcx
  int v11; // edi
  void *v12; // rcx
  void *v13; // rsi
  NTSTATUS v14; // eax
  bool v15; // zf
  int ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  *((_DWORD *)BaseAddress + 10) = 0;
  *((_QWORD *)BaseAddress + 3) = UniqueThread;
  ThreadInformation = 2;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
  while ( *((_DWORD *)BaseAddress + 78) )
  {
    v3 = 0LL;
    if ( *((_QWORD *)BaseAddress + 41) )
      v3 = (LARGE_INTEGER *)(BaseAddress + 328);
    v4 = NtWaitForSingleObject(*((HANDLE *)BaseAddress + 14), 0, v3);
    v5 = v4 == 258 || !v4 && (BaseAddress[316] & 2) != 0;
    active = EtwpFlushActiveBuffers(BaseAddress, v5);
    v7 = active;
    if ( (BaseAddress[316] & 1) != 0 && active >= 0 && !v5 )
      v7 = EtwpFlushActiveBuffers(BaseAddress, 1LL);
    v8 = *((_DWORD *)BaseAddress + 79);
    if ( (v8 & 4) != 0 || (v8 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader((__int64)BaseAddress, 0);
      v13 = (void *)*((_QWORD *)BaseAddress + 16);
      *((_QWORD *)BaseAddress + 16) = 0LL;
      v14 = EtwpAddLogHeaderToLogFile((__int64)BaseAddress, 0LL, 0, 0);
      *((_DWORD *)BaseAddress + 10) = v14;
      v7 = v14;
      if ( v14 >= 0 )
      {
        NtClose(v13);
        if ( (BaseAddress[316] & 1) != 0 )
          EtwpSendSessionNotification((__int64)BaseAddress, 1, 0);
      }
      else
      {
        v15 = (BaseAddress[316] & 4) == 0;
        *((_QWORD *)BaseAddress + 16) = v13;
        if ( !v15 )
          v7 = 0;
      }
      *((_DWORD *)BaseAddress + 79) &= ~1u;
      v8 = *((_DWORD *)BaseAddress + 79);
    }
    if ( (v8 & 0x10) != 0 )
    {
      v15 = *((_QWORD *)BaseAddress + 16) == 0LL;
      *((_DWORD *)BaseAddress + 79) = v8 & 0xFFFFFFEF;
      if ( !v15 )
        EtwpFinalizeLogFileHeader((__int64)BaseAddress, 1);
    }
    v9 = *((_DWORD *)BaseAddress + 79);
    if ( (v9 & 6) != 0 )
    {
      v10 = (void *)*((_QWORD *)BaseAddress + 15);
      *((_DWORD *)BaseAddress + 79) = v9 & 0xFFFFFFF9;
      ZwSetEvent(v10, 0LL);
    }
    if ( v7 < 0 )
      EtwpStopLoggerInstance(BaseAddress);
  }
  EtwpFlushActiveBuffers(BaseAddress, 1LL);
  v11 = EtwpFinalizeLogFileHeader((__int64)BaseAddress, 0);
  NtClose(*((HANDLE *)BaseAddress + 16));
  *((_QWORD *)BaseAddress + 16) = 0LL;
  if ( v11 > 0 )
    v11 = (unsigned __int16)v11 | 0xC0070000;
  v12 = (void *)*((_QWORD *)BaseAddress + 15);
  *((_DWORD *)BaseAddress + 10) = v11;
  ZwSetEvent(v12, 0LL);
  EtwpFreeLoggerContext(BaseAddress);
  RtlExitUserThread(0);
}
