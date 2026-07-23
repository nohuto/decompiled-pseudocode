/*
 * XREFs of ObFastDereferenceObject @ 0x140324D60
 * Callers:
 *     IopDequeueIrpFromFileObject @ 0x1402C2DC0 (IopDequeueIrpFromFileObject.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140422764 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SeSetLearningModeObjectInformation @ 0x1404B6F50 (SeSetLearningModeObjectInformation.c)
 *     SepDesktopAppxSubProcessToken @ 0x1404EBED4 (SepDesktopAppxSubProcessToken.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140858A1C (PspAllocateAndQueryNotificationChannel.c)
 *     PfpPrivSourceEnum @ 0x14085F9A0 (PfpPrivSourceEnum.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1408E082C (PopEtGetProcessSidAndPackageIdentity.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1408E154C (ExpWnfQueryCurrentUserSID.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x1408E8518 (EtwTiLogImpersonateClient.c)
 *     PspGetRedirectionTrustPolicy @ 0x1408EB35C (PspGetRedirectionTrustPolicy.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408EF7A4 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpBuildProcessEvent @ 0x1408EFB30 (EtwpBuildProcessEvent.c)
 *     EtwTraceAppStateChange @ 0x1408F057C (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x1408F1570 (EtwpPsProvTraceProcess.c)
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 *     EtwTiLogSyscallUsage @ 0x1408F7468 (EtwTiLogSyscallUsage.c)
 *     DbgkCreateThread @ 0x140921604 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x1409220D8 (PspMapSystemDll.c)
 *     PfSnCheckModernApp @ 0x1409497A8 (PfSnCheckModernApp.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x14096FD94 (MiIsUserQueryVmCallerTrusted.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409950F4 (AlpcpPortQueryConnectedSidInfo.c)
 *     PspSetQuotaLimits @ 0x140999A58 (PspSetQuotaLimits.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A00208 (PspGetNoChildProcessRestrictedPolicy.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A0F9D4 (AlpcpCheckConnectionSecurity.c)
 *     NtImpersonateAnonymousToken @ 0x140A24050 (NtImpersonateAnonymousToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A24410 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeIsTokenAssignableToProcess @ 0x140A255F4 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x140A257AC (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140A25848 (SepIsSiblingTokenByPointer.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140A56950 (EtwpPsProvProcessEnumCallback.c)
 *     PspSetRedirectionTrustPolicy @ 0x140A5D7E4 (PspSetRedirectionTrustPolicy.c)
 *     EtwpApplyPackageIdFilter @ 0x140A7975C (EtwpApplyPackageIdFilter.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140A971CC (PspSetNoChildProcessRestrictedPolicy.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140AA71D0 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     PsConvertToGuiThread @ 0x140AC9700 (PsConvertToGuiThread.c)
 *     PspInitializeProcessSecurity @ 0x140ACAA98 (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 *     MmInitSystemDll @ 0x140BE0990 (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x140C37444 (PspInitPhase3.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409C2750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
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
