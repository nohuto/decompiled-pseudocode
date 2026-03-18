/*
 * XREFs of PsReferenceEffectiveToken @ 0x140969860
 * Callers:
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140292108 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SepDesktopAppxSubProcessToken @ 0x14029223C (SepDesktopAppxSubProcessToken.c)
 *     SepReferenceTokenByHandle @ 0x140361130 (SepReferenceTokenByHandle.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     SeLogAccessFailure @ 0x1403CF70C (SeLogAccessFailure.c)
 *     RtlpQueryLowBoxId @ 0x140435C80 (RtlpQueryLowBoxId.c)
 *     RtlpAllowsLowBoxAccess @ 0x140435DDC (RtlpAllowsLowBoxAccess.c)
 *     SeCaptureAtomTableCallout @ 0x140479248 (SeCaptureAtomTableCallout.c)
 *     SeSetLearningModeObjectInformation @ 0x1404BCD2C (SeSetLearningModeObjectInformation.c)
 *     ExpWnfQueryCurrentUserSID @ 0x14083E098 (ExpWnfQueryCurrentUserSID.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140969360 (PspAllocateAndQueryNotificationChannel.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1409D1878 (MiIsUserQueryVmCallerTrusted.c)
 *     SeSubProcessToken @ 0x140A0C9E8 (SeSubProcessToken.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     PspUnlockThreadSecurityShared @ 0x14041DA20 (PspUnlockThreadSecurityShared.c)
 */

ULONG_PTR __fastcall PsReferenceEffectiveToken(__int64 a1, ULONG a2, _DWORD *a3, bool *a4, int *a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rsi
  ULONG_PTR result; // rax
  __int64 *v13; // r13
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
      PspUnlockThreadSecurityShared(a1, (__int64)v16);
      if ( v14 )
      {
        *a3 = 2;
        return (ULONG_PTR)v14;
      }
    }
    else
    {
      PspUnlockThreadSecurityShared(a1, (__int64)v16);
    }
  }
  result = PsReferencePrimaryTokenWithTag(Process, a2);
  *a3 = 1;
  *a4 = 0;
  if ( a6 )
    *a6 = *(_BYTE *)(Process + 1530);
  return result;
}
