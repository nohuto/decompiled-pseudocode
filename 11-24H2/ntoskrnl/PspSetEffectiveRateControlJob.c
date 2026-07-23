/*
 * XREFs of PspSetEffectiveRateControlJob @ 0x140777F38
 * Callers:
 *     PspSetRateControlJobPreCallback @ 0x140778720 (PspSetRateControlJobPreCallback.c)
 *     PspEstablishJobHierarchy @ 0x14091B360 (PspEstablishJobHierarchy.c)
 * Callees:
 *     <none>
 */

void __fastcall PspSetEffectiveRateControlJob(__int64 a1, __int64 a2)
{
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x2000000u);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1552), 0xFDFFFFFF);
  *(_QWORD *)(a1 + 1040) = a2;
}
