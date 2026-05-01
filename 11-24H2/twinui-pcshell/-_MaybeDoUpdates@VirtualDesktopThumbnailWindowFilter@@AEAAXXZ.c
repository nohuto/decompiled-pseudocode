/*
 * XREFs of ?_MaybeDoUpdates@VirtualDesktopThumbnailWindowFilter@@AEAAXXZ @ 0x1804AE590
 * Callers:
 *     ?EndUpdates@VirtualDesktopThumbnailWindowFilter@@UEAAXXZ @ 0x1804ADDB0 (-EndUpdates@VirtualDesktopThumbnailWindowFilter@@UEAAXXZ.c)
 *     ?ViewVirtualDesktopChanged@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIApplicationView@@@Z @ 0x1804AE370 (-ViewVirtualDesktopChanged@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopThumbnailWindowFilter::_MaybeDoUpdates(VirtualDesktopThumbnailWindowFilter *this)
{
  __int64 *v2; // r14
  __int64 *v3; // rbp
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, GUID *, __int64 *); // rbx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 10) && *((_BYTE *)this + 44) )
  {
    v2 = (__int64 *)*((_QWORD *)this + 8);
    v3 = &v2[*((_QWORD *)this + 9)];
    while ( v2 != v3 )
    {
      v8 = 0LL;
      v4 = *v2;
      v5 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)*v2 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
      if ( v5(v4, &GUID_26416599_c4b3_4461_aa83_8894655817db, &v8) >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x6B,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
            (const char *)(unsigned int)v6);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
      ++v2;
    }
    *((_BYTE *)this + 44) = 0;
  }
}
