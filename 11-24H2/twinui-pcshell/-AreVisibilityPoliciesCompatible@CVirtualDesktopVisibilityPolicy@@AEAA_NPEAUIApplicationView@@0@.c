/*
 * XREFs of ?AreVisibilityPoliciesCompatible@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@0@Z @ 0x18054E144
 * Callers:
 *     ?AreVisibilityPoliciesEqual@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@0@Z @ 0x18054E230 (-AreVisibilityPoliciesEqual@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@0@Z.c)
 *     ?CopyVisibilityPolicy@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@0@Z @ 0x18054E310 (-CopyVisibilityPolicy@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVirtualDesktopVisibilityPolicy::AreVisibilityPoliciesCompatible(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IApplicationView *a3)
{
  __int64 v3; // rax
  char v4; // bl
  __int64 (__fastcall *v6)(struct IApplicationView *, int *); // rax
  int v8; // eax
  __int64 v9; // rdx
  _DWORD v11[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  CVirtualDesktopVisibilityPolicy *v13; // [rsp+50h] [rbp+20h] BYREF
  int v14; // [rsp+58h] [rbp+28h] BYREF
  int v15; // [rsp+68h] [rbp+38h] BYREF

  v13 = this;
  v3 = *(_QWORD *)a2;
  v4 = 0;
  v14 = 0;
  LODWORD(v13) = 0;
  v11[0] = 0;
  v6 = *(__int64 (__fastcall **)(struct IApplicationView *, int *))(v3 + 216);
  v15 = 0;
  v8 = v6(a2, &v14);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, CVirtualDesktopVisibilityPolicy **))(*(_QWORD *)a3 + 216LL))(
           a3,
           &v13);
    if ( v8 >= 0 )
    {
      if ( v14 != (_DWORD)v13 )
        return v4;
      v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, _DWORD *))(*(_QWORD *)a2 + 336LL))(a2, v11);
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a3 + 336LL))(a3, &v15);
        if ( v8 >= 0 )
          return v11[0] == v15;
        v9 = 300LL;
      }
      else
      {
        v9 = 299LL;
      }
    }
    else
    {
      v9 = 297LL;
    }
  }
  else
  {
    v9 = 296LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
    (const char *)(unsigned int)v8);
  return v4;
}
