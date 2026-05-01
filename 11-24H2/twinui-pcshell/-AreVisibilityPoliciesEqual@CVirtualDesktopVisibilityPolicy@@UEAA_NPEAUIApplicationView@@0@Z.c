/*
 * XREFs of ?AreVisibilityPoliciesEqual@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@0@Z @ 0x18054E230
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?AreVisibilityPoliciesCompatible@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@0@Z @ 0x18054E144 (-AreVisibilityPoliciesCompatible@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@0@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVirtualDesktopVisibilityPolicy::AreVisibilityPoliciesEqual(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IApplicationView *a3)
{
  char v5; // bl
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  int v10[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_OWORD *)v10 = 0LL;
  v11 = 0LL;
  v5 = 0;
  if ( CVirtualDesktopVisibilityPolicy::AreVisibilityPoliciesCompatible(this, a2, a3) )
  {
    v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 200LL))(a2, v10);
    if ( v6 < 0 )
    {
      v7 = 287LL;
LABEL_4:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v6);
      return v5;
    }
    v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)a3 + 200LL))(a3, &v11);
    if ( v6 < 0 )
    {
      v7 = 288LL;
      goto LABEL_4;
    }
    v8 = *(_QWORD *)v10 - v11;
    if ( *(_QWORD *)v10 == (_QWORD)v11 )
      v8 = *(_QWORD *)&v10[2] - *((_QWORD *)&v11 + 1);
    if ( !v8 )
      return 1;
  }
  return v5;
}
