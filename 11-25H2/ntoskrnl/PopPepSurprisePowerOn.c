/*
 * XREFs of PopPepSurprisePowerOn @ 0x14048CA9C
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x14048C950 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     PopPepReleaseActivityLink @ 0x1402BE970 (PopPepReleaseActivityLink.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     PopPepTriggerActivity @ 0x1402BEB90 (PopPepTriggerActivity.c)
 *     PopPepPromoteActivities @ 0x1402BEEB0 (PopPepPromoteActivities.c)
 *     PopPepRequestWork @ 0x1402C126C (PopPepRequestWork.c)
 */

void __fastcall PopPepSurprisePowerOn(__int64 a1)
{
  KIRQL v2; // si
  unsigned int v3; // ebx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 125) = 1;
  if ( !*(_DWORD *)(a1 + 140) && !*(_BYTE *)(a1 + 136) && !**(_DWORD **)(a1 + 72) )
  {
    v3 = *(_DWORD *)(a1 + 120);
    PopPepTriggerActivity(a1, 0LL, 0, 0);
    PopPepPromoteActivities(a1, 0LL, 1);
    PopPepRequestWork(a1, v3, *(_DWORD *)(a1 + 120));
  }
  PopPepReleaseActivityLink(a1, 0LL, 1, v2);
}
