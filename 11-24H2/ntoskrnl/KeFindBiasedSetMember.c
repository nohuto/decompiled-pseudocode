/*
 * XREFs of KeFindBiasedSetMember @ 0x140405380
 * Callers:
 *     NtGetCurrentProcessorNumber @ 0x140A78080 (NtGetCurrentProcessorNumber.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindBiasedSetMember(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  int v3; // r10d
  int v4; // edx
  unsigned __int64 v5; // rax

  v2 = a1;
  v3 = 0;
  v4 = a2 % (unsigned int)__popcnt(a1) + 1;
  if ( !v4 )
    return 0xFFFFFFFFLL;
  do
  {
    _BitScanForward64(&v5, v2);
    v3 += v5 + 1;
    v2 >>= (unsigned __int8)v5 + 1;
    --v4;
  }
  while ( v4 );
  return (unsigned int)(v3 - 1);
}
