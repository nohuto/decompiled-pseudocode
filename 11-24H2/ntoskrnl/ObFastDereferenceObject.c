/*
 * XREFs of ObFastDereferenceObject @ 0x140356880
 * Callers:
 *     IopDequeueIrpFromFileObject @ 0x14031A230 (IopDequeueIrpFromFileObject.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140355988 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SepDesktopAppxSubProcessToken @ 0x140355ABC (SepDesktopAppxSubProcessToken.c)
 *     SeSetLearningModeObjectInformation @ 0x1404BBE8C (SeSetLearningModeObjectInformation.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14085CCAC (PspAllocateAndQueryNotificationChannel.c)
 *     PfpPrivSourceEnum @ 0x1408EE170 (PfpPrivSourceEnum.c)
 *     DbgkCreateThread @ 0x1408FED24 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x1408FF7F8 (PspMapSystemDll.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14090910C (PopEtGetProcessSidAndPackageIdentity.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140909E2C (ExpWnfQueryCurrentUserSID.c)
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x140910DC8 (EtwTiLogImpersonateClient.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140922ACC (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwTiLogSyscallUsage @ 0x140934948 (EtwTiLogSyscallUsage.c)
 *     PspExitLastThread @ 0x1409374F0 (PspExitLastThread.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093A830 (EtwpPsProvProcessEnumCallback.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14094B234 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpBuildProcessEvent @ 0x14094B5C0 (EtwpBuildProcessEvent.c)
 *     EtwTraceAppStateChange @ 0x14094C00C (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x14094D000 (EtwpPsProvTraceProcess.c)
 *     PfSnCheckModernApp @ 0x140961CE8 (PfSnCheckModernApp.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140987584 (MiIsUserQueryVmCallerTrusted.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409AB3F4 (AlpcpPortQueryConnectedSidInfo.c)
 *     PspSetQuotaLimits @ 0x1409AFD58 (PspSetQuotaLimits.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A03CD8 (PspGetNoChildProcessRestrictedPolicy.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A167F4 (AlpcpCheckConnectionSecurity.c)
 *     NtImpersonateAnonymousToken @ 0x140A2F610 (NtImpersonateAnonymousToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A2F9D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     PspInitializeProcessSecurity @ 0x140A30A28 (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x140A30C24 (SeSubProcessToken.c)
 *     SeIsTokenAssignableToProcess @ 0x140A31678 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x140A31830 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140A318CC (SepIsSiblingTokenByPointer.c)
 *     PspGetRedirectionTrustPolicy @ 0x140A5EBB8 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x140A65014 (PspSetRedirectionTrustPolicy.c)
 *     EtwpApplyPackageIdFilter @ 0x140A7F91C (EtwpApplyPackageIdFilter.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140A9BC5C (PspSetNoChildProcessRestrictedPolicy.c)
 *     ExpGetProcessInformation @ 0x140ADAE00 (ExpGetProcessInformation.c)
 *     MmInitSystemDll @ 0x140BDE990 (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x140C35304 (PspInitPhase3.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x140846830 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409D2920 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409D2A68 (ObpDeregisterObject.c)
 */

char __fastcall ObFastDereferenceObject(__int64 *a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 BugCheckParameter4; // rax
  __int64 v5; // rtt
  signed __int64 v6; // rax
  bool v7; // cc

  _m_prefetchw(a1);
  BugCheckParameter4 = *a1;
  while ( (a2 ^ BugCheckParameter4) < 0xF )
  {
    v5 = BugCheckParameter4;
    BugCheckParameter4 = _InterlockedCompareExchange64(a1, BugCheckParameter4 + 1, BugCheckParameter4);
    if ( v5 == BugCheckParameter4 )
    {
      if ( ObpTraceFlags )
        LOBYTE(BugCheckParameter4) = ObpPushStackInfo(a2 - 48, 0, 1u, a3);
      return BugCheckParameter4;
    }
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(a2 - 48, 0, 1u, a3);
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v6 <= 1;
  BugCheckParameter4 = v6 - 1;
  if ( v7 )
  {
    if ( *(_QWORD *)(a2 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a2 - 48) >> 8)],
        a2,
        1uLL,
        *(_QWORD *)(a2 - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, a2, 2uLL, BugCheckParameter4);
    if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      LOBYTE(BugCheckParameter4) = ObpDeferObjectDeletion(a2 - 48);
    }
    else
    {
      if ( (*(_BYTE *)(a2 - 22) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)(a2 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a2 - 22) & 0x7F]) + 24LL) )
      {
        ObpHandleRevocationBlockRemoveObject();
      }
      if ( ObpTraceFlags )
        ObpDeregisterObject(a2 - 48);
      LOBYTE(BugCheckParameter4) = ObpRemoveObjectRoutine(a2 - 48, 0LL);
    }
  }
  return BugCheckParameter4;
}
