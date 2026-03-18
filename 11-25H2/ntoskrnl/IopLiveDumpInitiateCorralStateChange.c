/*
 * XREFs of IopLiveDumpInitiateCorralStateChange @ 0x14059828C
 * Callers:
 *     IopLiveDumpCollectPages @ 0x140596B54 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpCorralProcessors @ 0x140596F50 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpUncorralProcessors @ 0x14059AD10 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     IopLiveDumpProcessCorralStateChange @ 0x140469354 (IopLiveDumpProcessCorralStateChange.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14049B334 (IopLiveDumpGetMillisecondCounter.c)
 */

__int64 __fastcall IopLiveDumpInitiateCorralStateChange(__int64 a1, __int32 a2, __int64 *a3)
{
  __int64 v3; // rbp
  __int64 MillisecondCounter; // rdi
  __int64 result; // rax
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a1;
  MillisecondCounter = 0LL;
  *a3 = 0LL;
  if ( (*(_DWORD *)(v3 + 80) & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  _InterlockedExchange((volatile __int32 *)(a1 + 16), 0);
  _InterlockedExchange((volatile __int32 *)(a1 + 12), a2);
  if ( a2 == 7 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  else
    IopLiveDumpProcessCorralStateChange(a1, a1 + 112);
  v9 = 0;
  while ( *(_DWORD *)(a1 + 16) != *(_DWORD *)(a1 + 20) )
    KeYieldProcessorEx(&v9);
  result = *(unsigned int *)(v3 + 80);
  if ( (result & 0x80u) != 0LL )
  {
    result = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
    *a3 = result;
  }
  return result;
}
