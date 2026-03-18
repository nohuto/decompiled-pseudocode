/*
 * XREFs of PfProcessCreateNotification @ 0x140826108
 * Callers:
 *     PspNotifyThreadCreation @ 0x14090B188 (PspNotifyThreadCreation.c)
 * Callees:
 *     PfpPartitionFromParent @ 0x140499120 (PfpPartitionFromParent.c)
 *     PfSnBeginAppLaunch @ 0x1408261B4 (PfSnBeginAppLaunch.c)
 *     PfCalculateProcessHash @ 0x140827880 (PfCalculateProcessHash.c)
 *     PfCheckDeprioritizeImage @ 0x1408B6190 (PfCheckDeprioritizeImage.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfProcessCreateNotification(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  PVOID P; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 )
    return 3221225659LL;
  v3 = PfpPartitionFromParent(*(_QWORD *)(a1 + 1880));
  P = 0LL;
  if ( v3 && (*(_DWORD *)(v3 + 72) & 1) != 0 || (dword_140E66CD0 & 1) != 0 )
  {
    PfCalculateProcessHash(a1, (char *)&P + 1);
    if ( (dword_140E66CD0 & 1) != 0 && *(_DWORD *)(a1 + 900) && (unsigned int)PfCheckDeprioritizeImage() )
      _InterlockedOr((volatile signed __int32 *)(a1 + 500), 0x4000u);
  }
  PfSnBeginAppLaunch(a1, P, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
