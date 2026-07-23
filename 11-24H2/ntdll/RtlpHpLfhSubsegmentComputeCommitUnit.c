/*
 * XREFs of RtlpHpLfhSubsegmentComputeCommitUnit @ 0x1800DDAD0
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x180065C18 (RtlpHpLfhSubsegmentInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentComputeCommitUnit(unsigned int a1, int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ecx

  if ( (RtlpHpAppCompatFlags & 2) == 0 )
  {
    v3 = 2 * a2;
    if ( ((2 * a2 - 1) & (2 * a2)) != 0 )
    {
      _BitScanReverse(&v4, v3);
      v3 = 1 << (v4 + 1);
    }
    if ( v3 <= 0x1000 )
      v3 = 4096;
    if ( v3 <= a1 >> 6 )
      v3 = a1 >> 6;
    if ( v3 < a1 )
      return v3;
  }
  return a1;
}
