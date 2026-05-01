/*
 * XREFs of ?OnViewAdded@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@@Z @ 0x1801A7DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802875C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4Report.c)
 *     ?IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z @ 0x180287EA0 (-IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopVisibilityPolicy::OnViewAdded(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3,
        struct IVirtualDesktopCollection *a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rax
  struct IVirtualDesktop *v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  CVirtualDesktopVisibilityPolicy *v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  int (__fastcall *v29)(struct IVirtualDesktopCollection *, __int128 *, __int64 *); // rbx
  __int64 v30; // [rsp+20h] [rbp-40h] BYREF
  __int128 v31; // [rsp+28h] [rbp-38h] BYREF
  GUID v32; // [rsp+38h] [rbp-28h] BYREF
  __int128 v33; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v31 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)a2 + 200LL))(a2, &v31);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD4,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v8);
  }
  else
  {
    v9 = 0LL;
    v30 = 0LL;
    v10 = *((_QWORD *)&v31 + 1);
    v11 = v31 - 0x4CF966F2C2DDEA68LL;
    if ( (_QWORD)v31 == 0x4CF966F2C2DDEA68LL )
      v11 = *((_QWORD *)&v31 + 1) + 0x534404FF02E49B7ELL;
    if ( !v11 )
      return 0LL;
    v12 = v31 - 0x4AB24DE3BB64D5B7LL;
    if ( (_QWORD)v31 == 0x4AB24DE3BB64D5B7LL )
      v12 = *((_QWORD *)&v31 + 1) + 0x235851FE89248358LL;
    if ( !v12 )
      return 0LL;
    v13 = v31 - 0x45D551C0B4620C71LL;
    if ( (_QWORD)v31 == 0x45D551C0B4620C71LL )
      v13 = *((_QWORD *)&v31 + 1) + 0xC8183C556F22755LL;
    if ( !v13 )
      return 0LL;
    v14 = v31 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)v31 == *(_QWORD *)&GUID_NULL.Data1 )
      v14 = *((_QWORD *)&v31 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( v14 )
    {
      v28 = v31 - 0x4658059A45DB96FFLL;
      if ( (_QWORD)v31 == 0x4658059A45DB96FFLL )
        v28 = *((_QWORD *)&v31 + 1) - 0x1012647F7CCD4687LL;
      if ( v28 )
      {
        v29 = *(int (__fastcall **)(struct IVirtualDesktopCollection *, __int128 *, __int64 *))(*(_QWORD *)a4 + 88LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
        if ( v29(a4, &v31, &v30) >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
          return 0LL;
        }
        v9 = v30;
      }
    }
    if ( v9 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  v33 = 0LL;
  v15 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, __int128 *, __int64))(*(_QWORD *)a3 + 32LL))(a3, &v33, v10);
  if ( v15 >= 0 )
  {
    v16 = v33 - 0x4658059A45DB96FFLL;
    if ( (_QWORD)v33 == 0x4658059A45DB96FFLL )
      v16 = *((_QWORD *)&v33 + 1) - 0x1012647F7CCD4687LL;
    v17 = 0LL;
    if ( v16 )
      v17 = a3;
    LODWORD(v30) = 0;
    v18 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 336LL))(a2, &v30);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xBF,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v18);
    }
    else if ( (_DWORD)v30 )
    {
      return 0LL;
    }
    LOBYTE(v19) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
      v19);
    if ( !CVirtualDesktopVisibilityPolicy::IsAppBarView(v20, a2) )
    {
      v32 = GUID_NULL;
      if ( v17 )
      {
        v21 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, GUID *))(*(_QWORD *)v17 + 32LL))(v17, &v32);
        v15 = v21;
        if ( v21 < 0 )
        {
          v26 = 176LL;
LABEL_40:
          v25 = (unsigned int)v21;
          goto LABEL_41;
        }
        v24 = *(_QWORD *)&v32.Data1 - 0x4658059A45DB96FFLL;
        if ( *(_QWORD *)&v32.Data1 == 0x4658059A45DB96FFLL )
          v24 = *(_QWORD *)v32.Data4 - 0x1012647F7CCD4687LL;
        if ( !v24 )
        {
          v15 = -2147024809;
          v25 = 2147942487LL;
          v26 = 180LL;
LABEL_41:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v26,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
            (const char *)v25);
LABEL_42:
          v27 = 234LL;
          goto LABEL_38;
        }
      }
      v21 = (*(__int64 (__fastcall **)(struct IApplicationView *, GUID *))(*(_QWORD *)a2 + 208LL))(a2, &v32);
      v15 = v21;
      if ( v21 >= 0 )
      {
        v22 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 2) + 72LL))(
                *((_QWORD *)this + 2),
                a2);
        v15 = v22;
        if ( v22 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB9,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
            (const char *)(unsigned int)v22);
        if ( v15 >= 0 )
          return 0LL;
        goto LABEL_42;
      }
      v26 = 184LL;
      goto LABEL_40;
    }
    return 0LL;
  }
  v27 = 228LL;
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v27,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
    (const char *)(unsigned int)v15);
  return (unsigned int)v15;
}
