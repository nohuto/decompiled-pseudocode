/*
 * XREFs of ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitor@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@$$QEAPEAUIUnknown@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitor@@@Z @ 0x18014B780
 * Callers:
 *     ?ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU2@@Z @ 0x18014B6A0 (-ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplic.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18014BBBC (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIIm.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SizeConversionViewInfo@@QEAA@XZ @ 0x1804EA81C (--0SizeConversionViewInfo@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IUnknown *,IApplicationView * &,IImmersiveMonitor * &>(
        SizeConversionViewInfo **a1,
        struct IUnknown **a2,
        struct IApplicationView **a3,
        struct IImmersiveMonitor **a4)
{
  unsigned int v8; // edi
  void *v9; // rax
  SizeConversionViewInfo *v10; // rbx
  int v11; // ebp
  SizeConversionViewInfo *v13; // [rsp+20h] [rbp-28h] BYREF
  void *v14; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0;
  *a1 = 0LL;
  v9 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v9;
  if ( v9 )
  {
    v10 = SizeConversionViewInfo::SizeConversionViewInfo((SizeConversionViewInfo *)v9);
    v13 = v10;
    v14 = 0LL;
    v11 = SizeConversionViewInfo::RuntimeClassInitialize(v10, *a2, *a3, *a4);
    if ( v11 < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v14);
      return (unsigned int)v11;
    }
    if ( v10 )
      (*(void (__fastcall **)(SizeConversionViewInfo *))(*(_QWORD *)v10 + 8LL))(v10);
    *a1 = v10;
    if ( v10 )
      (*(void (__fastcall **)(SizeConversionViewInfo *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v8;
}
