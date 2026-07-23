/*
 * XREFs of EtwpGetNextAvailableLoggerId @ 0x1800A8CF0
 * Callers:
 *     EtwpStartUmLogger @ 0x1800A879C (EtwpStartUmLogger.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 */

__int64 __fastcall EtwpGetNextAvailableLoggerId(__int64 a1, unsigned int *a2)
{
  PVOID Heap; // rax
  void *v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // r8d
  unsigned int i; // edx

  if ( !EtwpLoggerArray )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x400uLL);
    v5 = Heap;
    if ( !Heap )
      return 1450LL;
    v6 = Heap;
    v7 = 64LL;
    do
    {
      *v6 = 1LL;
      v6 += 2;
      --v7;
    }
    while ( v7 );
    if ( _InterlockedCompareExchange64(&EtwpLoggerArray, (signed __int64)v5, 0LL) )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  v8 = (*(_DWORD *)(a1 + 64) & 0x20000) != 0 ? 64 : 8;
  for ( i = (*(_DWORD *)(a1 + 64) & 0x20000) != 0 ? 8 : 0; i < v8; ++i )
  {
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * i + 8));
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(EtwpLoggerArray + 16LL * i), 3LL, 1LL) == 1 )
    {
      *a2 = i;
      return 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * i + 8));
  }
  return 1450LL;
}
