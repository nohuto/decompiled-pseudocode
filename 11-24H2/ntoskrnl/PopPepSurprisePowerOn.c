/*
 * XREFs of PopPepSurprisePowerOn @ 0x1403A60EC
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x1403A6200 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     PopPepRequestWork @ 0x1402BFC80 (PopPepRequestWork.c)
 *     PopPepReleaseActivityLink @ 0x1402C1CE0 (PopPepReleaseActivityLink.c)
 *     PopPepTriggerActivity @ 0x1402C1E00 (PopPepTriggerActivity.c)
 *     PopPepPromoteActivities @ 0x1402C2120 (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x1403A76F0 (PopPepLockActivityLink.c)
 */

void __fastcall PopPepSurprisePowerOn(__int64 a1)
{
  char v2; // si
  unsigned int v3; // ebx
  KIRQL v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v2 = PopPepLockActivityLink(a1, 0LL, 6LL, 0LL, &v4);
  if ( !*(_DWORD *)(a1 + 140) && !*(_BYTE *)(a1 + 136) && !**(_DWORD **)(a1 + 72) )
  {
    v3 = *(_DWORD *)(a1 + 120);
    PopPepTriggerActivity(a1, 0LL, 0, 0);
    PopPepPromoteActivities(a1, 0LL, 1);
    PopPepRequestWork(a1, v3, *(_DWORD *)(a1 + 120));
  }
  PopPepReleaseActivityLink(a1, 0LL, v2, v4);
}
