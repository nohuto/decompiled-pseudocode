/*
 * XREFs of PopNetInitialize @ 0x140C34034
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     PopInitializeIRTimer @ 0x1405CA5AC (PopInitializeIRTimer.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     PopNetSetConnectivityConstraint @ 0x14075BA58 (PopNetSetConnectivityConstraint.c)
 *     RtlLengthRequiredSid @ 0x14086B5A0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x1409DE5C0 (RtlInitializeSid.c)
 *     ExSubscribeWnfStateChange @ 0x140A12490 (ExSubscribeWnfStateChange.c)
 *     PopNetPublishWnfStateUpdate @ 0x140A93E94 (PopNetPublishWnfStateUpdate.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x140ABAA4C (PopTraceStandbyConnectivityUpdate.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopNetInitialize(int a1)
{
  ULONG v1; // eax
  _DWORD *Pool2; // rax
  _DWORD *v3; // rbx
  NTSTATUS v4; // edi
  __int64 v5; // r8
  __int64 v6; // r8
  int v7; // ecx
  int ExplicitScope; // [rsp+20h] [rbp-28h]
  int ExplicitScopea; // [rsp+20h] [rbp-28h]
  char Buffer; // [rsp+50h] [rbp+8h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp+10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  Buffer = 0;
  if ( a1 )
  {
    if ( a1 != 3 )
      return 0;
    if ( PopNetDeferLogRequest )
      PopTraceStandbyConnectivityUpdate(PopNetStandbyState, PopNetStandbyReason);
    if ( PopEnforceDisconnectedStandby )
    {
      v7 = 2;
    }
    else
    {
      if ( PopNetStandbyStateMask )
      {
LABEL_20:
        ZwUpdateWnfStateData(&WNF_PO_OPPORTUNISTIC_CS, &Buffer, 1u, 0LL, 0LL, 0, 0);
        if ( !PopEnforceDisconnectedStandby && PopPlatformAoAcCapabilityInitialized && PopPlatformAoAc )
          ExSubscribeWnfStateChange((__int64)&IdentifierAuthority, (__int64)&WNF_SEB_SYSTEM_LPE);
        return 0;
      }
      if ( PopPlatformAoAcCapabilityInitialized && PopPlatformAoAc )
      {
        if ( !PopNetStandbyStatePublished && !PopNetStandbyState )
          PopNetPublishWnfStateUpdate(1);
        goto LABEL_20;
      }
      v7 = 6;
    }
    PopNetSetConnectivityConstraint(v7);
    goto LABEL_20;
  }
  v1 = RtlLengthRequiredSid(6u);
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, v1, 0x74654E50uLL);
  v3 = Pool2;
  if ( Pool2 )
  {
    v4 = RtlInitializeSid(Pool2, &IdentifierAuthority, 6u);
    if ( v4 < 0 )
    {
      ExFreePoolWithTag(v3, 0x74654E50u);
      return (unsigned int)v4;
    }
    v3[2] = 80;
    v3[3] = 1988685059;
    v3[4] = 1921232356;
    v3[5] = 378231328;
    v3[6] = -1590824699;
    v3[7] = 890457928;
    PopNetBIServiceSid = v3;
    PopInitializeIRTimer(
      (unsigned __int64)&PopNetEvaluationTimer,
      (__int64)PopNetEvaluationTimerCallback,
      v5,
      (__int64)PopNetEvaluationWorkerCallback,
      ExplicitScope,
      0,
      2);
    PopInitializeIRTimer(
      (unsigned __int64)&PopNetRefreshTimer,
      (__int64)PopNetRefreshTimerCallback,
      v6,
      (__int64)PopNetRefreshTimerWorkerCallback,
      ExplicitScopea,
      5,
      2);
    return 0;
  }
  return (unsigned int)-1073741801;
}
