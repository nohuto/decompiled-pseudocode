/*
 * XREFs of ??$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnappedWindowModel@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1805A4000
 * Callers:
 *     ?CSnappedWindowModel_CreateInstanceWithRegions@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEBU_GUID@@PEAPEAX@Z @ 0x1802C2884 (-CSnappedWindowModel_CreateInstanceWithRegions@@YAJPEAUIApplicationView@@PEAUIApplicationViewCol.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0CSnappedWindowModel@@QEAA@XZ @ 0x180091DFC (--0CSnappedWindowModel@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800925AC (-RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplic_ea_1800925AC.c)
 *     ?Attach@?$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z @ 0x1801B1FC4 (-Attach@-$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSnappedWindowModel,CSnappedWindowModel,IApplicationView * &,IApplicationViewCollection * &,IImmersiveMonitorManager * &,enum SnappedWindowOcclusionModel &,std::deque<tagRECT> const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5,
        __int64 a6)
{
  void *v10; // rax
  int v11; // edi
  CSnappedWindowModel *v12; // rax
  __int64 v13; // r9
  __int64 *v14; // rbx
  void *v16; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v17; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v10;
  v17 = (__int64 *)v10;
  if ( v10 )
  {
    v12 = CSnappedWindowModel::CSnappedWindowModel((CSnappedWindowModel *)v10);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<PositionerPriority>::Attach((__int64 *)&v17, (__int64)v12);
    v16 = 0LL;
    v13 = *a4;
    v14 = v17;
    v11 = CSnappedWindowModel::RuntimeClassInitialize(v17, *a2, *a3, v13, *a5, a6);
    if ( v11 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(__int64 *))(*v14 + 8))(v14);
      *a1 = v14;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
      v11 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    }
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v16);
  return (unsigned int)v11;
}
