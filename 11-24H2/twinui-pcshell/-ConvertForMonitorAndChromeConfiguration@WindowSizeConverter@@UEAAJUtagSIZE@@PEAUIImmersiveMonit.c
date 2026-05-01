/*
 * XREFs of ?ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x18014B860
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x1800B2900 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@AEAPEAUIImmersiveMonitor@@AEAH2AEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18014B95C (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIAppli.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowSizeConverter::ConvertForMonitorAndChromeConfiguration(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        struct IImmersiveMonitor *a3,
        int a4,
        int a5,
        struct IApplicationViewTitlebarConfiguration *a6,
        struct tagSIZE *a7)
{
  int v9; // eax
  unsigned int v10; // edi
  struct SizeConversionViewInfo *v11; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  struct SizeConversionViewInfo *v15; // rcx
  struct SizeConversionViewInfo *v16[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IImmersiveMonitor *v18; // [rsp+70h] [rbp+30h] BYREF
  int v19; // [rsp+78h] [rbp+38h] BYREF

  v19 = a4;
  v18 = a3;
  v16[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v16);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IImmersiveMonitor * &,int &,int &,IApplicationViewTitlebarConfiguration * &>(
         (unsigned int)v16,
         (unsigned int)&v18,
         (unsigned int)&v19,
         (unsigned int)&a5,
         (__int64)&a6);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v13 = WindowSizeConverter::ConvertWithViewInfo((WindowSizeConverter *)((char *)this - 88), a2, v16[0], a7);
    v14 = v13;
    if ( v13 >= 0 )
    {
      v15 = v16[0];
      if ( v16[0] )
      {
        v16[0] = 0LL;
        (*(void (__fastcall **)(struct SizeConversionViewInfo *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v16);
      return v14;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13E,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v9);
    v11 = v16[0];
    if ( v16[0] )
    {
      v16[0] = 0LL;
      (*(void (__fastcall **)(struct SizeConversionViewInfo *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return v10;
  }
}
