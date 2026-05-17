/*
 * XREFs of RtlpVerGetConditionMask @ 0x1800ACEC0
 * Callers:
 *     RtlSwitchedVVI @ 0x1800A97F0 (RtlSwitchedVVI.c)
 *     RtlVerifyVersionInfo @ 0x1800ABEF0 (RtlVerifyVersionInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpVerGetConditionMask(unsigned __int64 a1, unsigned int a2)
{
  int v2; // eax
  char v3; // r8

  v2 = 0;
  do
  {
    v3 = v2++;
    a2 >>= 1;
  }
  while ( a2 );
  return (a1 >> (3 * v3)) & 7;
}
