/*
 * XREFs of IopLiveDumpInitiateCorralStateChange @ 0x14059891C
 * Callers:
 *     IopLiveDumpCollectPages @ 0x1405971E8 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpCorralProcessors @ 0x1405975E0 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpUncorralProcessors @ 0x14059B3A0 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     IopLiveDumpProcessCorralStateChange @ 0x14045F638 (IopLiveDumpProcessCorralStateChange.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140495FD4 (IopLiveDumpGetMillisecondCounter.c)
 */

__int64 __fastcall IopLiveDumpInitiateCorralStateChange(__int64 a1, __int32 a2, __int64 *a3)
{
  __int64 v3; // rbp
  __int64 MillisecondCounter; // rdi
  __int64 result; // rax
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

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
