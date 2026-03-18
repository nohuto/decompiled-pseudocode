/*
 * XREFs of ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1400345DC
 * Callers:
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x14006ACEC (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1401AA510 (DxgkGetSharedPrimaryHandle.c)
 *     ?GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z @ 0x1401C10C8 (-GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z.c)
 *     DxgkGetAdapter @ 0x1401D1E10 (DxgkGetAdapter.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401D6B28 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x140264B4C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     DxgkDisplayOnOff @ 0x1402DAD00 (DxgkDisplayOnOff.c)
 *     DxgkOpenAdapterFromDeviceName @ 0x140342220 (DxgkOpenAdapterFromDeviceName.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1403687B0 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?DxgIsRemoteSession@@YAHXZ @ 0x1403733A4 (-DxgIsRemoteSession@@YAHXZ.c)
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1403734C8 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOG.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1403A6D68 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@@Z @ 0x1403FE340 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

bool __fastcall DXGPROCESS::IsRemoteConnection(DXGPROCESS *this)
{
  __int64 v1; // rax
  char v2; // bl

  v1 = *((_QWORD *)this + 11);
  v2 = 0;
  if ( v1 )
    return (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v1 + 240))(0LL, 0LL, 0LL) != 0;
  return v2;
}
