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

LOGICAL __fastcall EtwpFreeLoggerContext(unsigned int *BaseAddress)
{
  __int64 v1; // rdx
  unsigned int *v3; // rdi
  unsigned int *v4; // r8
  unsigned int *v5; // rdi
  void *v6; // r8
  void *v7; // r8
  void *v8; // r8
  void *v9; // r8
  unsigned int *v11; // rbp
  unsigned int *v12; // r14
  void *ProcessHeap; // rcx
  unsigned int *v14; // r8
  LARGE_INTEGER DelayInterval; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF

  v1 = BaseAddress[5];
  DelayInterval.QuadPart = -3000000LL;
  if ( *(int *)(EtwpLoggerArray + 16 * v1 + 8) > 1 )
  {
    do
      ZwDelayExecution(0, &DelayInterval);
    while ( *(int *)(EtwpLoggerArray + 16LL * BaseAddress[5] + 8) > 1 );
  }
  if ( (BaseAddress[77] & 0x4000000) != 0 )
    EtwpShutdownCompression(BaseAddress);
  if ( *((_QWORD *)BaseAddress + 51) )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)BaseAddress + 51, &RegionSize, 0x8000u);
  }
  NtClose(*((HANDLE *)BaseAddress + 15));
  NtClose(*((HANDLE *)BaseAddress + 14));
  RtlDeleteCriticalSection((PRTL_CRITICAL_SECTION)(BaseAddress + 18));
  if ( *((_QWORD *)BaseAddress + 18) )
    RtlFreeAnsiString((PUNICODE_STRING)(BaseAddress + 34));
  if ( *((_QWORD *)BaseAddress + 20) )
    RtlFreeAnsiString((PUNICODE_STRING)(BaseAddress + 38));
  if ( *((_QWORD *)BaseAddress + 22) )
    RtlFreeAnsiString((PUNICODE_STRING)(BaseAddress + 42));
  v3 = (unsigned int *)*((_QWORD *)BaseAddress + 56);
  while ( v3 != BaseAddress + 112 )
  {
    v4 = v3;
    v3 = *(unsigned int **)v3;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  v5 = (unsigned int *)*((_QWORD *)BaseAddress + 58);
  while ( v5 != BaseAddress + 116 )
  {
    v11 = v5;
    v12 = (unsigned int *)*((_QWORD *)v5 + 3);
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v12 == v5 + 6 )
        break;
      v14 = v12;
      v12 = *(unsigned int **)v12;
      RtlFreeHeap(ProcessHeap, 0, v14);
    }
    v5 = *(unsigned int **)v5;
    RtlFreeHeap(ProcessHeap, 0, v11);
  }
  v6 = (void *)*((_QWORD *)BaseAddress + 62);
  if ( v6 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  v7 = (void *)*((_QWORD *)BaseAddress + 63);
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  v8 = (void *)*((_QWORD *)BaseAddress + 65);
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  v9 = (void *)*((_QWORD *)BaseAddress + 67);
  if ( v9 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  EtwpFreeStreamIndexMap((__int64)BaseAddress);
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * BaseAddress[5]), 1LL);
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * BaseAddress[5] + 8));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
