/*
 * XREFs of ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@$$QEAPEAUIUnknown@@AEAPEAUIApplicationView@@@Z @ 0x18014BC4C
 * Callers:
 *     ?ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z @ 0x1804EAB50 (-ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x18014BD10 (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SizeConversionViewInfo@@QEAA@XZ @ 0x1804EA81C (--0SizeConversionViewInfo@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IUnknown *,IApplicationView * &>(
        SizeConversionViewInfo **a1,
        struct IUnknown **a2,
        struct IApplicationView **a3)
{
  void *v6; // rax
  int v7; // edi
  SizeConversionViewInfo *v8; // rbx
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  SizeConversionViewInfo *v11; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v10);
    return (unsigned int)v7;
  }
  v8 = SizeConversionViewInfo::SizeConversionViewInfo((SizeConversionViewInfo *)v6);
  v11 = v8;
  v10 = 0LL;
  v7 = SizeConversionViewInfo::RuntimeClassInitialize(v8, *a2, *a3);
  if ( v7 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    goto LABEL_5;
  }
  if ( v8 )
    (*(void (__fastcall **)(SizeConversionViewInfo *))(*(_QWORD *)v8 + 8LL))(v8);
  *a1 = v8;
  if ( v8 )
    (*(void (__fastcall **)(SizeConversionViewInfo *))(*(_QWORD *)v8 + 16LL))(v8);
  return 0LL;
}
