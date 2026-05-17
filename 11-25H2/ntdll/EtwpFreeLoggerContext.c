/*
 * XREFs of EtwpFreeLoggerContext @ 0x1800B78AC
 * Callers:
 *     EtwpStopUmLogger @ 0x1800B5164 (EtwpStopUmLogger.c)
 *     EtwpStartUmLogger @ 0x1800B598C (EtwpStartUmLogger.c)
 *     EtwpLogger @ 0x1800B6AE0 (EtwpLogger.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlFreeAnsiString @ 0x1800832E0 (RtlFreeAnsiString.c)
 *     EtwpFreeStreamIndexMap @ 0x1800B786C (EtwpFreeStreamIndexMap.c)
 *     RtlDeleteCriticalSection @ 0x1800B9240 (RtlDeleteCriticalSection.c)
 *     EtwpShutdownCompression @ 0x18011445C (EtwpShutdownCompression.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x1801638A0 (ZwDelayExecution.c)
 */

__int64 __fastcall EtwpFreeLoggerContext(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rdx
  __int64 v4; // r9
  _QWORD *v5; // rdi
  __int64 v6; // r8
  _QWORD *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rbp
  _QWORD *v15; // r14
  void *ProcessHeap; // rcx
  __int64 v17; // r8
  int v18; // [rsp+50h] [rbp+8h] BYREF
  int v19; // [rsp+54h] [rbp+Ch]
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v19 = -1;
  v1 = *(unsigned int *)(a1 + 20);
  v18 = -3000000;
  if ( *(int *)(EtwpLoggerArray + 16 * v1 + 8) > 1 )
  {
    do
      ZwDelayExecution(0LL, &v18);
    while ( *(int *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20) + 8) > 1 );
  }
  if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0 )
    EtwpShutdownCompression(a1);
  if ( *(_QWORD *)(a1 + 408) )
  {
    v20 = 0LL;
    ZwFreeVirtualMemory(-1LL, a1 + 408, &v20, 0x8000LL);
  }
  NtClose(*(HANDLE *)(a1 + 120));
  NtClose(*(HANDLE *)(a1 + 112));
  RtlDeleteCriticalSection(a1 + 72);
  if ( *(_QWORD *)(a1 + 144) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 136));
  if ( *(_QWORD *)(a1 + 160) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 152));
  if ( *(_QWORD *)(a1 + 176) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 168));
  v5 = *(_QWORD **)(a1 + 448);
  while ( v5 != (_QWORD *)(a1 + 448) )
  {
    v6 = (__int64)v5;
    v5 = (_QWORD *)*v5;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6, v4);
  }
  v7 = *(_QWORD **)(a1 + 464);
  while ( v7 != (_QWORD *)(a1 + 464) )
  {
    v14 = (__int64)v7;
    v15 = (_QWORD *)v7[3];
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v15 == v7 + 3 )
        break;
      v17 = (__int64)v15;
      v15 = (_QWORD *)*v15;
      RtlFreeHeap((__int64)ProcessHeap, 0, v17, v4);
    }
    v7 = (_QWORD *)*v7;
    RtlFreeHeap((__int64)ProcessHeap, 0, v14, v4);
  }
  v8 = *(_QWORD *)(a1 + 496);
  if ( v8 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8, v4);
  v9 = *(_QWORD *)(a1 + 504);
  if ( v9 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9, v4);
  v10 = *(_QWORD *)(a1 + 520);
  if ( v10 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10, v4);
  v11 = *(_QWORD *)(a1 + 536);
  if ( v11 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11, v4);
  EtwpFreeStreamIndexMap(a1, v3, v11, v4);
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)), 1LL);
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20) + 8));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1, v12);
}
