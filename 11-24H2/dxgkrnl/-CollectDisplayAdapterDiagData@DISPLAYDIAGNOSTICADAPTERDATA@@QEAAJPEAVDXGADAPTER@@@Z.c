/*
 * XREFs of ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401BF658
 * Callers:
 *     ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1401BE7DC (-AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x14004F168 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1401BE6A4 (-AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?AddDriverBlackboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1401BE8A0 (-AddDriverBlackboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
 *     ?AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1401BEB20 (-AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
 *     ?AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1401BEC58 (-AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1403F81A4 (-AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::CollectDisplayAdapterDiagData(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  NTSTATUS v5; // esi
  __int64 v6; // [rsp+30h] [rbp-78h]
  __int64 v7; // [rsp+30h] [rbp-78h]
  _BYTE OutputBuffer[80]; // [rsp+40h] [rbp-68h] BYREF

  if ( !a2 )
    return 3221225485LL;
  *((_QWORD *)this + 1) = *(_QWORD *)((char *)a2 + 412);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 105);
  *((_BYTE *)this + 20) = DXGADAPTER::IsBddFallbackDriver(a2);
  memset(OutputBuffer, 0, 0x4CuLL);
  v5 = ZwPowerInformation(SystemPowerCapabilities, 0LL, 0, OutputBuffer, 0x4Cu);
  if ( v5 >= 0 )
  {
    *((_BYTE *)this + 3504) = OutputBuffer[2] != 0;
    *((_BYTE *)this + 3505) = *((_BYTE *)DXGGLOBAL::GetGlobal() + 305168);
    *((_BYTE *)this + 3506) = *((_BYTE *)DXGGLOBAL::GetGlobal() + 305169);
  }
  DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnSourceInfo(this, (ADAPTER_DISPLAY **)a2);
  DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnTargetInfo(this, a2);
  if ( DISPLAYDIAGNOSTICADAPTERDATA::AddDMMSegmentBuffer(this, a2) < 0 )
    *((_BYTE *)this + 56) = 0;
  v6 = (unsigned int)Feature_DriverWhiteboxData__private_featureState;
  if ( (Feature_DriverWhiteboxData__private_featureState & 0x10) == 0 )
  {
    LODWORD(v6) = Feature_DriverWhiteboxData__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_DriverWhiteboxData__private_descriptor, v6, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v6,
      3,
      (__int64)&Feature_DriverWhiteboxData__private_descriptor);
  }
  if ( (int)DISPLAYDIAGNOSTICADAPTERDATA::AddDriverWhiteboxInfo((struct DXGADAPTER **)this) < 0 )
    *((_BYTE *)this + 3248) = 0;
  if ( *((_BYTE *)this + 21) )
  {
    v7 = (unsigned int)Feature_DriverBlackboxData__private_featureState;
    if ( (Feature_DriverBlackboxData__private_featureState & 0x10) == 0 )
    {
      LODWORD(v7) = Feature_DriverBlackboxData__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_DriverBlackboxData__private_descriptor,
        v7,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v7,
        3,
        (__int64)&Feature_DriverBlackboxData__private_descriptor);
    }
    if ( (int)DISPLAYDIAGNOSTICADAPTERDATA::AddDriverBlackboxInfo(this) < 0 )
      *((_BYTE *)this + 3488) = 0;
  }
  return (unsigned int)v5;
}
