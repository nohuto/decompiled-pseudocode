/*
 * XREFs of PopPepSurprisePowerOn @ 0x1403112AC
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x1403111B0 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     PopPepLockActivityLink @ 0x140312A80 (PopPepLockActivityLink.c)
 *     PopPepRequestWork @ 0x1403170D0 (PopPepRequestWork.c)
 *     PopPepReleaseActivityLink @ 0x140319150 (PopPepReleaseActivityLink.c)
 *     PopPepTriggerActivity @ 0x140319270 (PopPepTriggerActivity.c)
 *     PopPepPromoteActivities @ 0x140319590 (PopPepPromoteActivities.c)
 */

__int64 __fastcall PopPepSurprisePowerOn(__int64 a1)
{
  char v2; // si
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v6; // ebx
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v2 = PopPepLockActivityLink(a1, 0LL, 6LL);
  if ( !*(_DWORD *)(a1 + 140) && !*(_BYTE *)(a1 + 136) && !**(_DWORD **)(a1 + 72) )
  {
    v6 = *(_DWORD *)(a1 + 120);
    PopPepTriggerActivity(a1, 0LL, 0LL, 0LL, &v7);
    PopPepPromoteActivities(a1, 0LL, 1LL);
    PopPepRequestWork(a1, v6, *(unsigned int *)(a1 + 120));
  }
  LOBYTE(v4) = v7;
  LOBYTE(v3) = v2;
  return PopPepReleaseActivityLink(a1, 0LL, v3, v4);
}
