/*
 * XREFs of ?_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804CAEB0
 * Callers:
 *     ?UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ @ 0x1804CAB90 (-UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ.c)
 *     ?v_LayoutChildren@CScrollViewerHost@@MEAAXXZ @ 0x1804CAF50 (-v_LayoutChildren@CScrollViewerHost@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804BACD0 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_GetIdealChildLocation@CScrollViewerHost@@AEAA?AUCRect@Geometry@@XZ @ 0x1804CABEC (-_GetIdealChildLocation@CScrollViewerHost@@AEAA-AUCRect@Geometry@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CScrollViewerHost::_LayoutWithoutScrollButtons(CScrollViewerHost *this)
{
  __int64 v2; // rcx
  __int64 IdealChildLocation; // rax
  __int64 v4; // r10
  void (__fastcall *v5)(__int64, __int64); // r11
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 57);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2);
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 56,
    &v6);
  IdealChildLocation = CScrollViewerHost::_GetIdealChildLocation((__int64)this, v7);
  v5(v4, IdealChildLocation);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
}
