/*
 * XREFs of ?IsOrphanedView@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktopCollection@@@Z @ 0x180229000
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CVirtualDesktopVisibilityPolicy::IsOrphanedView(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktopCollection *a3)
{
  char v5; // di
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  int (__fastcall *v13)(struct IVirtualDesktopCollection *, __int128 *, __int64 *); // rbx
  int v14; // [rsp+20h] [rbp-30h] BYREF
  int v15; // [rsp+24h] [rbp-2Ch] BYREF
  __int64 v16; // [rsp+28h] [rbp-28h] BYREF
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v17 = 0LL;
  v5 = 0;
  v14 = 0;
  v15 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 216LL))(a2, &v14);
  if ( v6 >= 0 )
  {
    if ( !v14 )
      return 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF9,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v6);
  }
  v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 336LL))(a2, &v15);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFA,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_7;
  }
  if ( v15 )
    return 0;
LABEL_7:
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)a2 + 200LL))(a2, &v17);
  if ( v8 >= 0 )
  {
    v16 = 0LL;
    v10 = v17 - 0x4CF966F2C2DDEA68LL;
    if ( (_QWORD)v17 == 0x4CF966F2C2DDEA68LL )
      v10 = *((_QWORD *)&v17 + 1) + 0x534404FF02E49B7ELL;
    if ( v10 )
    {
      v11 = v17 - 0x4AB24DE3BB64D5B7LL;
      if ( (_QWORD)v17 == 0x4AB24DE3BB64D5B7LL )
        v11 = *((_QWORD *)&v17 + 1) + 0x235851FE89248358LL;
      if ( v11 )
      {
        v12 = v17 - 0x45D551C0B4620C71LL;
        if ( (_QWORD)v17 == 0x45D551C0B4620C71LL )
          v12 = *((_QWORD *)&v17 + 1) + 0xC8183C556F22755LL;
        if ( v12 )
        {
          v13 = *(int (__fastcall **)(struct IVirtualDesktopCollection *, __int128 *, __int64 *))(*(_QWORD *)a3 + 88LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
          if ( v13(a3, &v17, &v16) < 0 )
            v5 = 1;
        }
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    return v5;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFF,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v8);
    return 1;
  }
}
