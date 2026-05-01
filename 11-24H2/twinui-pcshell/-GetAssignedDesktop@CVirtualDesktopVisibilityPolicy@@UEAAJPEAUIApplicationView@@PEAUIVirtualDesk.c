/*
 * XREFs of ?GetAssignedDesktop@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktopCollection@@PEAPEAUIVirtualDesktop@@@Z @ 0x18054E460
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::GetAssignedDesktop(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktopCollection *a3,
        struct IVirtualDesktop **a4)
{
  __int64 v4; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a4 = 0LL;
  v4 = *(_QWORD *)a2;
  *(_OWORD *)v13 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(v4 + 200))(a2, v13);
  if ( v7 < 0 )
  {
    v8 = 278LL;
    goto LABEL_3;
  }
  v10 = *(_QWORD *)v13 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)v13 == *(_QWORD *)&GUID_NULL.Data1 )
    v10 = *(_QWORD *)&v13[2] - *(_QWORD *)GUID_NULL.Data4;
  if ( v10 )
  {
    v11 = *(_QWORD *)v13 - 0x4CF966F2C2DDEA68LL;
    if ( *(_QWORD *)v13 == 0x4CF966F2C2DDEA68LL )
      v11 = *(_QWORD *)&v13[2] + 0x534404FF02E49B7ELL;
    if ( v11 )
    {
      v12 = *(_QWORD *)v13 - 0x4AB24DE3BB64D5B7LL;
      if ( *(_QWORD *)v13 == 0x4AB24DE3BB64D5B7LL )
        v12 = *(_QWORD *)&v13[2] + 0x235851FE89248358LL;
      if ( v12 )
      {
        v7 = (*(__int64 (__fastcall **)(struct IVirtualDesktopCollection *, int *, struct IVirtualDesktop **))(*(_QWORD *)a3 + 88LL))(
               a3,
               v13,
               a4);
        if ( v7 >= 0 )
          return (unsigned int)v7;
        v8 = 280LL;
LABEL_3:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
          (const char *)(unsigned int)v7);
        return (unsigned int)v7;
      }
    }
  }
  return 2147943568LL;
}
