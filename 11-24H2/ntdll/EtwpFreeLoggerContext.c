/*
 * XREFs of EtwpFreeLoggerContext @ 0x18008EA0C
 * Callers:
 *     EtwpStopUmLogger @ 0x18008C4B4 (EtwpStopUmLogger.c)
 *     EtwpStartUmLogger @ 0x18008CCDC (EtwpStartUmLogger.c)
 *     EtwpLogger @ 0x18008DC40 (EtwpLogger.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     EtwpFreeStreamIndexMap @ 0x18008E9CC (EtwpFreeStreamIndexMap.c)
 *     RtlDeleteCriticalSection @ 0x18008FEC0 (RtlDeleteCriticalSection.c)
 *     RtlFreeAnsiString @ 0x1800B4B90 (RtlFreeAnsiString.c)
 *     EtwpShutdownCompression @ 0x180111430 (EtwpShutdownCompression.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x180162310 (ZwDelayExecution.c)
 */

__int64 __fastcall EtwpFreeLoggerContext(unsigned __int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v3; // rdi
  unsigned __int64 v4; // r8
  _QWORD *v5; // rdi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 v11; // rbp
  _QWORD *v12; // r14
  void *ProcessHeap; // rcx
  unsigned __int64 v14; // r8
  int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+54h] [rbp+Ch]
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v16 = -1;
  v1 = *(unsigned int *)(a1 + 20);
  v15 = -3000000;
  if ( *(int *)(EtwpLoggerArray + 16 * v1 + 8) > 1 )
  {
    do
      ZwDelayExecution(0LL, &v15);
    while ( *(int *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20) + 8) > 1 );
  }
  if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0 )
    EtwpShutdownCompression(a1);
  if ( *(_QWORD *)(a1 + 408) )
  {
    v17 = 0LL;
    ZwFreeVirtualMemory(-1LL, a1 + 408, &v17, 0x8000LL);
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
  v3 = *(_QWORD **)(a1 + 448);
  while ( v3 != (_QWORD *)(a1 + 448) )
  {
    v4 = (unsigned __int64)v3;
    v3 = (_QWORD *)*v3;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  v5 = *(_QWORD **)(a1 + 464);
  while ( v5 != (_QWORD *)(a1 + 464) )
  {
    v11 = (unsigned __int64)v5;
    v12 = (_QWORD *)v5[3];
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v12 == v5 + 3 )
        break;
      v14 = (unsigned __int64)v12;
      v12 = (_QWORD *)*v12;
      RtlFreeHeap((__int64)ProcessHeap, 0, v14);
    }
    v5 = (_QWORD *)*v5;
    RtlFreeHeap((__int64)ProcessHeap, 0, v11);
  }
  v6 = *(_QWORD *)(a1 + 496);
  if ( v6 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  v7 = *(_QWORD *)(a1 + 504);
  if ( v7 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
  v8 = *(_QWORD *)(a1 + 520);
  if ( v8 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
  v9 = *(_QWORD *)(a1 + 536);
  if ( v9 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  EtwpFreeStreamIndexMap(a1);
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)), 1LL);
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20) + 8));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
