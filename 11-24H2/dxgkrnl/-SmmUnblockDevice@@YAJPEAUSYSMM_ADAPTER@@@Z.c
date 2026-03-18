/*
 * XREFs of ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140284EFC
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140285BC0 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x140050C58 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x140056FDC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064960 (-SmmGetIommuInterfaceVersion@@YAKXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140284A94 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140285294 (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 */

__int64 __fastcall SmmUnblockDevice(struct SYSMM_ADAPTER *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // rbp
  __int64 v5; // rcx
  unsigned int *v6; // rsi
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+68h] [rbp+10h] BYREF

  if ( (unsigned int)SmmGetIommuInterfaceVersion() < 2 || (*(_DWORD *)(v2 + 20) & 4) == 0 )
    return 0LL;
  v3 = 0;
  v4 = **(_QWORD **)(v2 + 392);
  if ( SmmUseIommuV2Interface() || SmmUseIommuV3Interface() )
  {
    v6 = (unsigned int *)(v5 + 100);
    ((void (__fastcall *)(__int64, __int64))qword_140161598)(v4, v5 + 100);
    v7 = *v6;
    if ( (_DWORD)v7 == 2 || (*((_DWORD *)a1 + 22) & 8) != 0 )
      return v3;
    if ( (v7 & 2) != 0 )
    {
      v8 = SmmIommuSwitchToPassthrough(a1);
      v3 = v8;
      if ( v8 < 0 )
      {
        WdLogSingleEntry1(4LL, v8);
        WdLogGlobalForLineNumber = 3241;
      }
      return v3;
    }
    if ( (v7 & 1) == 0 )
    {
      WdLogSingleEntry1(2LL, v7);
      v11 = *v6;
      WdLogGlobalForLineNumber = 3302;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"QueryAvailableDomainTypes returned unexpected list of available types. No passthrough or translate domains avail"
         "able. AvailableDomainTypes=0x%.8x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)-1073741823;
    }
    v9 = SysMmEnableIommu(a1, 1LL);
    v3 = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry1(4LL, v9);
      WdLogGlobalForLineNumber = 3254;
      return v3;
    }
    v12 = 1;
    if ( SmmUseIommuV2Interface() || SmmUseIommuV3Interface() )
    {
      v3 = ((__int64 (__fastcall *)(void (__fastcall *)(struct _IOMMU_INTERFACE_STATE_CHANGE *, _DWORD *), struct SYSMM_ADAPTER *, __int64, int *))qword_1401615A0)(
             SmmDomainTypeStateChangeCallback,
             a1,
             v4,
             &v12);
      if ( (v3 & 0x80000000) == 0 )
        return v3;
    }
    else
    {
      v3 = -1073741823;
    }
    WdLogSingleEntry1(2LL, (int)v3);
    WdLogGlobalForLineNumber = 3292;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to register domain state callback. Status=0x%.8x",
      (int)v3,
      0LL,
      0LL,
      0LL,
      0LL);
    return v3;
  }
  return 3221225473LL;
}
