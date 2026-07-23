/*
 * XREFs of RtlpHpLfhSlotActiveSubsegmentReset @ 0x14044E4E8
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x1404322C0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140604374 (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     RtlpHpLfhSubsegmentReserveBlock @ 0x14044E52C (RtlpHpLfhSubsegmentReserveBlock.c)
 */

__int64 __fastcall RtlpHpLfhSlotActiveSubsegmentReset(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = _InterlockedExchange64((volatile __int64 *)(a1 + 56), 0LL);
  v2 = result & 0xFFF;
  if ( (result & 0xFFF) != 0 )
  {
    LOWORD(v2) = -(result & 0xFFF);
    return RtlpHpLfhSubsegmentReserveBlock(result & 0xFFFFFFFFFFFFF000uLL & -(__int64)((result & 0xFFF) != 0), v2);
  }
  return result;
}
