/*
 * XREFs of EtwpGetNextAvailableLoggerId @ 0x1800B5EE0
 * Callers:
 *     EtwpStartUmLogger @ 0x1800B598C (EtwpStartUmLogger.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall EtwpGetNextAvailableLoggerId(__int64 a1, unsigned int *a2)
{
  __int64 Heap; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  _QWORD *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // r8d
  unsigned int i; // edx

  if ( !EtwpLoggerArray )
  {
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0x400uLL);
    v6 = Heap;
    if ( !Heap )
      return 1450LL;
    v7 = (_QWORD *)Heap;
    v8 = 64LL;
    do
    {
      *v7 = 1LL;
      v7 += 2;
      --v8;
    }
    while ( v8 );
    if ( _InterlockedCompareExchange64(&EtwpLoggerArray, v6, 0LL) )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6, v5);
  }
  v9 = (*(_DWORD *)(a1 + 64) & 0x20000) != 0 ? 64 : 8;
  for ( i = (*(_DWORD *)(a1 + 64) & 0x20000) != 0 ? 8 : 0; i < v9; ++i )
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
