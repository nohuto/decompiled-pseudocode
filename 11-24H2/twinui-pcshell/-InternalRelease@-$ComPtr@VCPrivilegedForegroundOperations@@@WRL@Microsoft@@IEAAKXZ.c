/*
 * XREFs of ?InternalRelease@?$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180098E7C
 * Callers:
 *     ?VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800987EC (-VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollec.c)
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x180110290 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedForegroundOperations@@V.c)
 *     ??$MakeAndInitialize@VCPrivilegedForegroundOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedForegroundOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x180110468 (--$MakeAndInitialize@VCPrivilegedForegroundOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperat.c)
 *     ??1?$PrivilegedOperationsServiceBase@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@QEAA@XZ @ 0x18022E2EC (--1-$PrivilegedOperationsServiceBase@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOpe.c)
 *     ??$MakeAndInitialize@VVirtualDesktopAnimationSyncNotifications@@V1@AEAK@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VVirtualDesktopAnimationSyncNotifications@@@WRL@Microsoft@@@012@AEAK@Z @ 0x1802A14C8 (--$MakeAndInitialize@VVirtualDesktopAnimationSyncNotifications@@V1@AEAK@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedForegroundOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180098EB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedForeg.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CPrivilegedForegroundOperations>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedForegroundOperations,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
