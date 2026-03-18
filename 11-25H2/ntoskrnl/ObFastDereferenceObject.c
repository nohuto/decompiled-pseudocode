/*
 * XREFs of ObFastDereferenceObject @ 0x1402930B0
 * Callers:
 *     IopDequeueIrpFromFileObject @ 0x140284230 (IopDequeueIrpFromFileObject.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140292108 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SepDesktopAppxSubProcessToken @ 0x14029223C (SepDesktopAppxSubProcessToken.c)
 *     SeSetLearningModeObjectInformation @ 0x1404BCD2C (SeSetLearningModeObjectInformation.c)
 *     PfSnCheckModernApp @ 0x140827568 (PfSnCheckModernApp.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14083D388 (PopEtGetProcessSidAndPackageIdentity.c)
 *     ExpWnfQueryCurrentUserSID @ 0x14083E098 (ExpWnfQueryCurrentUserSID.c)
 *     PsImpersonateClient @ 0x1408A51C0 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x1408A5C84 (EtwTiLogImpersonateClient.c)
 *     PspGetRedirectionTrustPolicy @ 0x1408BA06C (PspGetRedirectionTrustPolicy.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408BE0D4 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpBuildProcessEvent @ 0x1408BE460 (EtwpBuildProcessEvent.c)
 *     PfpPrivSourceEnum @ 0x1408DED60 (PfpPrivSourceEnum.c)
 *     EtwTiLogSyscallUsage @ 0x1408EA178 (EtwTiLogSyscallUsage.c)
 *     DbgkCreateThread @ 0x14090B274 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x14090B898 (PspMapSystemDll.c)
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 *     EtwTraceAppStateChange @ 0x14091FF00 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x140921388 (EtwpPsProvTraceProcess.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409260EC (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140969360 (PspAllocateAndQueryNotificationChannel.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409C2254 (AlpcpPortQueryConnectedSidInfo.c)
 *     PspSetQuotaLimits @ 0x1409C2688 (PspSetQuotaLimits.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1409D1878 (MiIsUserQueryVmCallerTrusted.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A0902C (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspInitializeProcessSecurity @ 0x140A0C7EC (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x140A0C9E8 (SeSubProcessToken.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A0F5F0 (AlpcpCheckConnectionSecurity.c)
 *     NtImpersonateAnonymousToken @ 0x140A29C90 (NtImpersonateAnonymousToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A2A050 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeIsTokenAssignableToProcess @ 0x140A2AC34 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x140A2ADEC (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140A2AE88 (SepIsSiblingTokenByPointer.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140A5C6C0 (EtwpPsProvProcessEnumCallback.c)
 *     PspSetRedirectionTrustPolicy @ 0x140A62D9C (PspSetRedirectionTrustPolicy.c)
 *     EtwpApplyPackageIdFilter @ 0x140A7C304 (EtwpApplyPackageIdFilter.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140A9616C (PspSetNoChildProcessRestrictedPolicy.c)
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
 *     MmInitSystemDll @ 0x140BCD990 (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x140C24038 (PspInitPhase3.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409CF610 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409CF758 (ObpDeregisterObject.c)
 */

__int64 __fastcall ObFastDereferenceObject(__int64 *a1, ULONG_PTR a2, __int64 a3)
{
  __int64 result; // rax
  ULONG_PTR v5; // r9
  __int64 v6; // rtt
  signed __int64 v7; // rax
  bool v8; // cc

  _m_prefetchw(a1);
  result = *a1;
  while ( 1 )
  {
    v5 = a2 ^ result;
    if ( (a2 ^ result) >= 0xF )
      break;
    a3 = result + 1;
    v6 = result;
    result = _InterlockedCompareExchange64(a1, result + 1, result);
    if ( v6 == result )
    {
      if ( ObpTraceFlags )
        return ObpPushStackInfo((int)a2 - 48);
      return result;
    }
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(a2 - 48);
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v8 = v7 <= 1;
  result = v7 - 1;
  if ( v8 )
  {
    if ( *(_QWORD *)(a2 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a2 - 48) >> 8)],
        a2,
        1uLL,
        *(_QWORD *)(a2 - 40));
    if ( result < 0 )
      KeBugCheckEx(0x18u, 0LL, a2, 2uLL, result);
    if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      return ObpDeferObjectDeletion(a2 - 48, a2, a3, v5);
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
      return ObpRemoveObjectRoutine(a2 - 48, 0LL);
    }
  }
  return result;
}
