/*
 * XREFs of RtlpHpLfhSlotActiveSubsegmentReset @ 0x1800DF800
 * Callers:
 *     RtlpHpLfhPrivateSlotShutdown @ 0x180060ADC (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpLfhSlotActiveSubsegmentReset(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rax
  __int16 v3; // cx
  __int16 v4; // r8
  unsigned __int64 result; // rax
  int v6; // r8d

  v1 = 0LL;
  v2 = _InterlockedExchange64((volatile __int64 *)(a1 + 56), 0LL);
  v3 = v2;
  v4 = v2;
  result = v2 & 0xFFFFFFFFFFFFF000uLL;
  if ( (v3 & 0xFFF) != 0 )
    v1 = result;
  v6 = v4 & 0xFFF;
  if ( v6 )
    *(_WORD *)(v1 + 32) += v6;
  return result;
}
