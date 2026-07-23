/*
 * XREFs of PfProcessCreateNotification @ 0x140948348
 * Callers:
 *     PspNotifyThreadCreation @ 0x140921518 (PspNotifyThreadCreation.c)
 * Callees:
 *     PfpPartitionFromParent @ 0x140492A30 (PfpPartitionFromParent.c)
 *     PfSnBeginAppLaunch @ 0x1409483F4 (PfSnBeginAppLaunch.c)
 *     PfCalculateProcessHash @ 0x140949AC0 (PfCalculateProcessHash.c)
 *     PfCheckDeprioritizeImage @ 0x1409DC928 (PfCheckDeprioritizeImage.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfProcessCreateNotification(ULONG_PTR a1, __int64 a2)
{
  __int64 v3; // rax
  PVOID P; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 )
    return 3221225659LL;
  v3 = PfpPartitionFromParent(*(_QWORD *)(a1 + 1880));
  P = 0LL;
  if ( v3 && (*(_DWORD *)(v3 + 72) & 1) != 0 || (dword_140E670E0 & 1) != 0 )
  {
    PfCalculateProcessHash(a1, (char *)&P + 1);
    if ( (dword_140E670E0 & 1) != 0 && *(_DWORD *)(a1 + 900) && (unsigned int)PfCheckDeprioritizeImage() )
      _InterlockedOr((volatile signed __int32 *)(a1 + 500), 0x4000u);
  }
  PfSnBeginAppLaunch(a1);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
