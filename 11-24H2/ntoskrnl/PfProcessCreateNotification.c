/*
 * XREFs of PfProcessCreateNotification @ 0x140960888
 * Callers:
 *     PspNotifyThreadCreation @ 0x1408FEC38 (PspNotifyThreadCreation.c)
 * Callees:
 *     PfpPartitionFromParent @ 0x140498054 (PfpPartitionFromParent.c)
 *     PfCheckDeprioritizeImage @ 0x1408E6188 (PfCheckDeprioritizeImage.c)
 *     PfSnBeginAppLaunch @ 0x140960934 (PfSnBeginAppLaunch.c)
 *     PfCalculateProcessHash @ 0x140962000 (PfCalculateProcessHash.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfProcessCreateNotification(ULONG_PTR a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v5; // ecx
  PVOID P; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 )
    return 3221225659LL;
  v3 = PfpPartitionFromParent(*(_QWORD *)(a1 + 1880));
  P = 0LL;
  if ( v3 && (*(_DWORD *)(v3 + 72) & 1) != 0 || (dword_140E66F90 & 1) != 0 )
  {
    PfCalculateProcessHash(a1, (char *)&P + 1);
    if ( (dword_140E66F90 & 1) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 900);
      if ( v5 )
      {
        if ( (unsigned int)PfCheckDeprioritizeImage(v5) )
          _InterlockedOr((volatile signed __int32 *)(a1 + 500), 0x4000u);
      }
    }
  }
  PfSnBeginAppLaunch(a1);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
