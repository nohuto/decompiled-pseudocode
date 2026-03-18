/*
 * XREFs of SmmIommuCreateDomain @ 0x1402846EC
 * Callers:
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x140284848 (SmmIommuSwitchToGpuVaIoMmu.c)
 *     SmmIommuSwitchToTranslation @ 0x140284B64 (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x140050C58 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x140056FDC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064960 (-SmmGetIommuInterfaceVersion@@YAKXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 SmmIommuCreateDomain()
{
  __int64 v0; // rdx
  char v1; // cl
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( SmmUseIommuV3Interface() )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))qword_140161530)(
             v1 != 0 ? 3 : 0,
             0LL,
             0LL,
             0LL,
             v0);
  if ( v1 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1867;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Iommu interface does not support Pasid",
      1867LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  else if ( SmmUseIommuV2Interface() )
  {
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))qword_140161530)(0LL, 0LL, 0LL, 0LL, v3);
  }
  else if ( (unsigned int)SmmGetIommuInterfaceVersion() < 3 )
  {
    LOBYTE(v4) = 1;
    return ((__int64 (__fastcall *)(__int64))qword_140161530)(v4);
  }
  else
  {
    return 3221225473LL;
  }
}
