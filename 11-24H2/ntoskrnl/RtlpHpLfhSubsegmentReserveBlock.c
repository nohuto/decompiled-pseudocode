/*
 * XREFs of RtlpHpLfhSubsegmentReserveBlock @ 0x14044E52C
 * Callers:
 *     RtlpHpLfhSlotActiveSubsegmentReset @ 0x14044E4E8 (RtlpHpLfhSlotActiveSubsegmentReset.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentReserveBlock(__int64 a1, __int16 a2)
{
  unsigned int v2; // r8d

  if ( a2 > 0 )
  {
    v2 = *(unsigned __int16 *)(a1 + 32);
    if ( a2 < v2 )
      LOWORD(v2) = a2;
  }
  else
  {
    LOWORD(v2) = a2;
  }
  *(_WORD *)(a1 + 32) -= v2;
  return (unsigned __int16)v2;
}
