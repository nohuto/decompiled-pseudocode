/*
 * XREFs of PsReferenceEffectiveToken @ 0x14085D1B0
 * Callers:
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140355988 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SepDesktopAppxSubProcessToken @ 0x140355ABC (SepDesktopAppxSubProcessToken.c)
 *     SepReferenceTokenByHandle @ 0x140359440 (SepReferenceTokenByHandle.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     SeLogAccessFailure @ 0x14035F070 (SeLogAccessFailure.c)
 *     RtlpQueryLowBoxId @ 0x1404322A0 (RtlpQueryLowBoxId.c)
 *     RtlpAllowsLowBoxAccess @ 0x1404323F0 (RtlpAllowsLowBoxAccess.c)
 *     SeCaptureAtomTableCallout @ 0x14047A560 (SeCaptureAtomTableCallout.c)
 *     SeSetLearningModeObjectInformation @ 0x1404BBE8C (SeSetLearningModeObjectInformation.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14085CCAC (PspAllocateAndQueryNotificationChannel.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140909E2C (ExpWnfQueryCurrentUserSID.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140987584 (MiIsUserQueryVmCallerTrusted.c)
 *     SeSubProcessToken @ 0x140A30C24 (SeSubProcessToken.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PspUnlockThreadSecurityShared @ 0x14041AFC0 (PspUnlockThreadSecurityShared.c)
 */

ULONG_PTR __fastcall PsReferenceEffectiveToken(__int64 a1, ULONG a2, _DWORD *a3, bool *a4, int *a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rsi
  ULONG_PTR result; // rax
  _QWORD *v13; // r13
  void *v14; // r12
  __int64 v15; // [rsp+20h] [rbp-38h]
  struct _KTHREAD *v16; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1440) & 8) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 544);
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v13 = KeAbPreAcquire(a1 + 1424, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1424), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 1424), 0, v13, a1 + 1424);
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
    if ( (*(_DWORD *)(a1 + 1440) & 8) != 0 )
    {
      v14 = (void *)(*(_QWORD *)(a1 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v14, a2);
      *a5 = *(_DWORD *)(a1 + 1336) & 3;
      *a4 = (*(_BYTE *)(a1 + 1336) & 4) != 0;
      if ( a6 )
        *a6 = *(_BYTE *)(v15 + 1530);
      PspUnlockThreadSecurityShared(a1);
      if ( v14 )
      {
        *a3 = 2;
        return (ULONG_PTR)v14;
      }
    }
    else
    {
      PspUnlockThreadSecurityShared(a1);
    }
  }
  result = PsReferencePrimaryTokenWithTag(Process, a2);
  *a3 = 1;
  *a4 = 0;
  if ( a6 )
    *a6 = *(_BYTE *)(Process + 1530);
  return result;
}
