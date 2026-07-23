/*
 * XREFs of RtlpHpLfhSubsegmentComputeCommitUnit @ 0x1403D9204
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x1403D8348 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x1403D90D8 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1404E751C (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentComputeCommitUnit(unsigned int a1, int a2)
{
  unsigned int v2; // edx
  unsigned int v4; // ecx

  v2 = 2 * a2;
  if ( ((v2 - 1) & v2) != 0 )
  {
    _BitScanReverse(&v4, v2);
    v2 = 1 << (v4 + 1);
  }
  if ( v2 <= 0x1000 )
    v2 = 4096;
  if ( v2 <= a1 >> 6 )
    v2 = a1 >> 6;
  if ( v2 < a1 )
    return v2;
  return a1;
}
