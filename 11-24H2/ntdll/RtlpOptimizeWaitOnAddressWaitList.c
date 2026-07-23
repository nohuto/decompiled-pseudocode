/*
 * XREFs of RtlpOptimizeWaitOnAddressWaitList @ 0x180030880
 * Callers:
 *     RtlWaitOnAddress @ 0x180030330 (RtlWaitOnAddress.c)
 *     RtlpWaitOnAddress @ 0x1800305D0 (RtlpWaitOnAddress.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlpOptimizeWaitOnAddressWaitList(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  unsigned __int64 v3; // rdx
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  char v6; // cl
  signed __int64 v7; // rtt

  result = *a1;
  do
  {
    v3 = result & 0xFFFFFFFFFFFFFFFCuLL;
    v4 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !*(_QWORD *)((result & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
    {
      do
      {
        v5 = v4;
        v4 = (_QWORD *)v4[2];
        v4[3] = v5;
      }
      while ( !v4[4] );
    }
    *(_QWORD *)(v3 + 32) = v4[4];
    v6 = result & 1;
    if ( (result & 1) != 0 )
      v3 = 0LL;
    v7 = result;
    result = _InterlockedCompareExchange64(a1, v3, result);
  }
  while ( v7 != result );
  if ( v6 )
    return RtlpWaitOnAddressWakeEntireList(result);
  return result;
}
