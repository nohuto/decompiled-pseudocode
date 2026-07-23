/*
 * XREFs of PsReferenceEffectiveToken @ 0x140858F20
 * Callers:
 *     SepReferenceTokenByHandle @ 0x1403E36B0 (SepReferenceTokenByHandle.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140422764 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     RtlpQueryLowBoxId @ 0x1404247E0 (RtlpQueryLowBoxId.c)
 *     RtlpAllowsLowBoxAccess @ 0x14042492C (RtlpAllowsLowBoxAccess.c)
 *     SeLogAccessFailure @ 0x140438750 (SeLogAccessFailure.c)
 *     SeCaptureAtomTableCallout @ 0x1404764B4 (SeCaptureAtomTableCallout.c)
 *     SeSetLearningModeObjectInformation @ 0x1404B6F50 (SeSetLearningModeObjectInformation.c)
 *     SepDesktopAppxSubProcessToken @ 0x1404EBED4 (SepDesktopAppxSubProcessToken.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140858A1C (PspAllocateAndQueryNotificationChannel.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1408E154C (ExpWnfQueryCurrentUserSID.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x14096FD94 (MiIsUserQueryVmCallerTrusted.c)
 *     PsConvertToGuiThread @ 0x140AC9700 (PsConvertToGuiThread.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     PspUnlockThreadSecurityShared @ 0x14040AFC0 (PspUnlockThreadSecurityShared.c)
 */

ULONG_PTR __fastcall PsReferenceEffectiveToken(__int64 a1, ULONG a2, _DWORD *a3, bool *a4, int *a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rsi
  ULONG_PTR result; // rax
  char *v13; // r13
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
    v13 = (char *)KeAbPreAcquire(a1 + 1424, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1424), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 1424), 0, v13, a1 + 1424);
    if ( v13 )
      v13[10] = 1;
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
