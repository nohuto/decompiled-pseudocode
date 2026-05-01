/*
 * XREFs of ?IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1802696A0
 * Callers:
 *     ?IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18054E570 (-IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtua.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802875C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4Report.c)
 *     ?IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z @ 0x180287EA0 (-IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CVirtualDesktopVisibilityPolicy::IsVisible(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        __int64 (__fastcall ***a3)(struct IVirtualDesktop *, GUID *, __int64 *))
{
  bool v5; // bl
  int v6; // eax
  __int64 v7; // rdx
  CVirtualDesktopVisibilityPolicy *v8; // rcx
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  __int64 (__fastcall **v13)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rdx
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-40h] BYREF
  int v20; // [rsp+24h] [rbp-3Ch] BYREF
  int v21; // [rsp+28h] [rbp-38h] BYREF
  __int64 v22; // [rsp+30h] [rbp-30h] BYREF
  __int128 v23; // [rsp+38h] [rbp-28h] BYREF
  __int128 v24; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v5 = 0;
  v23 = 0LL;
  v19 = 0;
  v20 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 216LL))(a2, &v19);
  if ( v6 >= 0 )
  {
    if ( !v19 )
      return 1;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4A,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v6);
  }
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    v7);
  if ( !CVirtualDesktopVisibilityPolicy::IsAppBarView(v8, a2) )
  {
    v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 336LL))(a2, &v20);
    if ( v9 >= 0 )
    {
      if ( v20 )
        return 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x57,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v9);
    }
    v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *), __int128 *))(*a3)[4])(
            a3,
            &v23);
    v11 = retaddr;
    if ( v10 < 0 )
    {
      v12 = 93LL;
LABEL_14:
      wil::details::in1diag3::_Log_Hr(
        v11,
        (void *)v12,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v10);
      return v5;
    }
    if ( v23 != __PAIR128__(0x1012647F7CCD4687LL, 0x4658059A45DB96FFLL) )
    {
      v24 = 0LL;
      v10 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)a2 + 200LL))(a2, &v24);
      v11 = retaddr;
      if ( v10 < 0 )
      {
        v12 = 102LL;
        goto LABEL_14;
      }
      v21 = 0;
      v13 = *a3;
      v22 = 0LL;
      v14 = (*v13)((struct IVirtualDesktop *)a3, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v22);
      v15 = retaddr;
      if ( v14 >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 56LL))(v22, &v21);
        v15 = retaddr;
        if ( v14 >= 0 )
        {
          if ( v21 )
          {
            v18 = v24 - v23;
            if ( (_QWORD)v24 == (_QWORD)v23 )
              v18 = *((_QWORD *)&v24 + 1) - *((_QWORD *)&v23 + 1);
            v5 = v18 == 0;
            goto LABEL_25;
          }
LABEL_20:
          if ( v24 == __PAIR128__(0xACBBFB00FD1B6482uLL, 0x4CF966F2C2DDEA68LL)
            || v24 == __PAIR128__(0xDCA7AE0176DB7CA8uLL, 0x4AB24DE3BB64D5B7LL)
            || v24 == __PAIR128__(0xF37E7C3AA90DD8ABuLL, 0x45D551C0B4620C71LL)
            || v24 == v23 )
          {
            v5 = 1;
          }
LABEL_25:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
          return v5;
        }
        v16 = 109LL;
      }
      else
      {
        v16 = 107LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v15,
        (void *)v16,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_20;
    }
  }
  return 1;
}
