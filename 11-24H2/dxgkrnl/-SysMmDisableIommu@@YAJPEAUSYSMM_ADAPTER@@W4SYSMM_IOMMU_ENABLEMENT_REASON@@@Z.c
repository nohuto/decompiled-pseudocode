/*
 * XREFs of ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140285110
 * Callers:
 *     SysMmTestDisableIommu @ 0x140095F10 (SysMmTestDisableIommu.c)
 *     DxgpDisableIommuFromReference @ 0x14019D4B8 (DxgpDisableIommuFromReference.c)
 *     ?SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z @ 0x140284230 (-SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ??$SmmAcquirePushLockExclusive@$0DA@@@YAXPEAU?$SYSMM_PUSHLOCK@$0DA@@@@Z @ 0x140050A70 (--$SmmAcquirePushLockExclusive@$0DA@@@YAXPEAU-$SYSMM_PUSHLOCK@$0DA@@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$00@@YAXPEAU?$SYSMM_PUSHLOCK@$00@@@Z @ 0x140051190 (--$SmmReleasePushLockExclusive@$00@@YAXPEAU-$SYSMM_PUSHLOCK@$00@@@Z.c)
 *     ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064960 (-SmmGetIommuInterfaceVersion@@YAKXZ.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140284A94 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmTelemetryDisableIommu@@YAXPEBUSYSMM_ADAPTER@@II@Z @ 0x140287E20 (-SmmTelemetryDisableIommu@@YAXPEBUSYSMM_ADAPTER@@II@Z.c)
 */

__int64 __fastcall SysMmDisableIommu(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // [rsp+20h] [rbp-38h]

  v3 = a2;
  if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
  {
    WdLogSingleEntry0(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 3040;
  }
  else if ( (unsigned int)SmmGetIommuInterfaceVersion() >= 2 )
  {
    v6 = 0;
    SmmAcquirePushLockExclusive<48>(v5 + 64);
    v11 = *(unsigned int *)(a1 + 96);
    if ( ((unsigned int)v11 & (unsigned int)v3) == 0 )
    {
      WdLogSingleEntry5(0LL, 484LL, 3LL, a1, v11, v3);
      WdLogGlobalForLineNumber = 3062;
    }
    v12 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = a1;
    *(_QWORD *)(v12 + 32) = v3;
    WdLogGlobalForLineNumber = 3067;
    if ( *(_DWORD *)(a1 + 96) == (_DWORD)v3 )
      v6 = SmmIommuSwitchToPassthrough((struct SYSMM_ADAPTER *)a1);
    if ( v6 >= 0 )
    {
      SmmTelemetryDisableIommu((const struct SYSMM_ADAPTER *)a1, v3, *(_DWORD *)(a1 + 96));
      if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
      {
        LODWORD(v14) = v3;
        McTemplateK0pt_EtwWriteTransfer((__int64)SysMmControlGuid_Context, (__int64)"\n", v13, a1, v14);
      }
      *(_DWORD *)(a1 + 96) &= ~(_DWORD)v3;
    }
    SmmReleasePushLockExclusive<1>(a1 + 64);
    return (unsigned int)v6;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3046;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"Can only disable IOMMU from v2+ interface",
      3046LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  return result;
}
