/*
 * XREFs of ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x180052FBC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$1 @ 0x180581A90 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconFr_ea_180581A90.c)
 * Callees:
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052ABC (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x18005451C (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?Query@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180054A2C (-Query@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@.c)
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x180054A8C (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 *     ?RenderTransparentCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKAEBUCRect@Geometry@@@Z @ 0x180054B60 (-RenderTransparentCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKAEBUCRect@Geometry@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180211CD0 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18021F1C0 (--1-$unique_storage@U-$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHDC__@@P6AHPEAU1@@Z$1?DeleteDC@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802CEAA4 (--1-$unique_storage@U-$resource_policy@PEAUHDC__@@P6AHPEAU1@@Z$1-DeleteDC@@YAH0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  LONG v3; // r14d
  __int64 v5; // rbx
  winrt::impl **v6; // rax
  struct winrt::impl::hstring_header *v7; // rdx
  HSTRING v8; // r12
  winrt::impl **v9; // rax
  struct winrt::impl::hstring_header *v10; // rdx
  HSTRING v11; // r13
  LONG v12; // esi
  PCWSTR StringRawBuffer; // rax
  __int64 v14; // rdx
  WCHAR *lfFaceName; // rcx
  signed __int64 v16; // r8
  WCHAR v17; // ax
  WCHAR *v18; // rax
  HFONT v19; // rdi
  HDC CompatibleDC; // rbx
  HBITMAP v21; // rsi
  unsigned __int16 v22; // r9
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow *v23; // rcx
  const struct Geometry::CRect *offset; // [rsp+28h] [rbp-D8h]
  HFONT v26; // [rsp+30h] [rbp-D0h] BYREF
  UINT32 v27; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v28; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v29; // [rsp+48h] [rbp-B8h] BYREF
  UINT32 length; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h]
  HDC v32; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v33[6]; // [rsp+68h] [rbp-98h] BYREF
  void *ppvBits; // [rsp+80h] [rbp-80h] BYREF
  PCWSTR v35; // [rsp+88h] [rbp-78h]
  HBITMAP v36; // [rsp+90h] [rbp-70h] BYREF
  HGDIOBJ h; // [rsp+98h] [rbp-68h]
  HDC v38; // [rsp+A0h] [rbp-60h]
  BITMAPINFO pbmi; // [rsp+A8h] [rbp-58h] BYREF
  LOGFONTW lf; // [rsp+E0h] [rbp-20h] BYREF

  v3 = a3;
  v32 = (HDC)a2;
  v31 = a3;
  v29 = 0LL;
  v28 = 0LL;
  v5 = a1 + 48;
  v6 = (winrt::impl **)winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
                         (__int64 **)(a1 + 48),
                         &v26);
  v8 = (HSTRING)winrt::impl::duplicate_hstring(*v6, v7);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v29);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v29);
  v29 = v8;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v26);
  v9 = (winrt::impl **)winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::Query(
                         v5,
                         &v26);
  v11 = (HSTRING)winrt::impl::duplicate_hstring(*v9, v10);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v28);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v28);
  v28 = v11;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v26);
  memset_0(&lf, 0, sizeof(lf));
  v12 = -HIDWORD(v31);
  lf.lfHeight = -HIDWORD(v31);
  lf.lfWeight = 400;
  lf.lfCharSet = 0;
  lf.lfQuality = 5;
  length = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(v11, &length);
  v14 = 32LL;
  lfFaceName = lf.lfFaceName;
  v16 = (char *)StringRawBuffer - (char *)lf.lfFaceName;
  do
  {
    if ( v14 == -2147483614 )
      break;
    v17 = *(WCHAR *)((char *)lfFaceName + v16);
    if ( !v17 )
      break;
    *lfFaceName++ = v17;
    --v14;
  }
  while ( v14 );
  v18 = lfFaceName - 1;
  if ( v14 )
    v18 = lfFaceName;
  *v18 = 0;
  v19 = CreateFontIndirectW(&lf);
  v26 = v19;
  if ( !v19 )
  {
    *a2 = 0LL;
    goto LABEL_20;
  }
  CompatibleDC = CreateCompatibleDC(0LL);
  v32 = CompatibleDC;
  if ( CompatibleDC )
  {
    pbmi.bmiHeader.biSize = 44;
    memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
    pbmi.bmiHeader.biWidth = v3;
    pbmi.bmiHeader.biHeight = v12;
    *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
    ppvBits = 0LL;
    v21 = CreateDIBSection(CompatibleDC, &pbmi, 0, &ppvBits, 0LL, 0);
    v36 = v21;
    if ( v21 )
    {
      v27 = 0;
      v35 = WindowsGetStringRawBuffer(v8, &v27);
      if ( v27 == 1 )
      {
        h = SelectObject(CompatibleDC, v21);
        v38 = CompatibleDC;
        v33[0] = 0;
        v33[1] = 0;
        v33[2] = v3;
        v33[3] = HIDWORD(v31);
        GDIHelpers::RenderTransparentCenteredGlyph(CompatibleDC, (HDC)v19, (HFONT)*v35, v22, (unsigned int)v33, offset);
        if ( h )
          SelectObject(CompatibleDC, h);
        *a2 = winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromBitmap(v23, v21);
        DeleteObject(v21);
        DeleteDC(CompatibleDC);
        goto LABEL_14;
      }
    }
    *a2 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>(&v36);
    wil::details::unique_storage<wil::details::resource_policy<HDC__ *,int (*)(HDC__ *),&int DeleteDC(HDC__ *),wistd::integral_constant<unsigned __int64,0>,HDC__ *,HDC__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HDC__ *,int (*)(HDC__ *),&int DeleteDC(HDC__ *),wistd::integral_constant<unsigned __int64,0>,HDC__ *,HDC__ *,0,std::nullptr_t>>(&v32);
LABEL_20:
    wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>(&v26);
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v28);
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v29);
    return a2;
  }
  *a2 = 0LL;
LABEL_14:
  DeleteObject(v19);
  if ( v11 )
    WindowsDeleteString(v11);
  if ( v8 )
    WindowsDeleteString(v8);
  return a2;
}
