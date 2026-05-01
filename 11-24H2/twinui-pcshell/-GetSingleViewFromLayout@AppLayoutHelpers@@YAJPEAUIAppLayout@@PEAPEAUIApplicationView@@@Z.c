/*
 * XREFs of ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x180542420
 * Callers:
 *     ?GetAppId@CDragVisual@@UEAAJPEAPEAG@Z @ 0x180542140 (-GetAppId@CDragVisual@@UEAAJPEAPEAG@Z.c)
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x180542F00 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1805440B0 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180545E58 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AppLayoutHelpers::GetSingleViewFromLayout(
        AppLayoutHelpers *this,
        struct IAppLayout *a2,
        struct IApplicationView **a3)
{
  int v5; // ebx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(AppLayoutHelpers *, _QWORD, GUID *, __int64 *); // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)a2 = 0LL;
  v5 = -2147467259;
  if ( (*(unsigned int (__fastcall **)(AppLayoutHelpers *, struct IAppLayout *, struct IApplicationView **))(*(_QWORD *)this + 72LL))(
         this,
         a2,
         a3) == 1 )
  {
    v6 = *(_QWORD *)this;
    v9 = 0LL;
    v7 = *(__int64 (__fastcall **)(AppLayoutHelpers *, _QWORD, GUID *, __int64 *))(v6 + 96);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    v5 = v7(this, 0LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v9);
    if ( v5 >= 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9) == 1 )
      v5 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IAppLayout *))(*(_QWORD *)v9 + 48LL))(
             v9,
             &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
             a2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  }
  return (unsigned int)v5;
}
