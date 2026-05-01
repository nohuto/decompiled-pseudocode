/*
 * XREFs of ?ViewAddedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x1801C9E70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802AF27C (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualPinnedAppsHandler::ViewAddedInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // edi
  const WCHAR *v8; // r15
  __int64 v9; // rbp
  __int64 i; // rdi
  const WCHAR *v11; // rcx
  int v13; // eax
  int v14; // edi
  LPCWCH lpString2[4]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0;
  lpString2[0] = 0LL;
  v5 = *(_QWORD *)a2;
  lpString2[1] = (LPCWCH)-1LL;
  lpString2[2] = (LPCWCH)-1LL;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, LPCWCH *))(v5 + 136))(a2, lpString2);
  v7 = v6;
  if ( v6 == -2147023728 )
  {
LABEL_17:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpString2);
    return v4;
  }
  else if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x120,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)(unsigned int)v6);
    if ( lpString2[0] )
      CoTaskMemFree((LPVOID)lpString2[0]);
    return v7;
  }
  else
  {
    v8 = lpString2[0];
    v9 = *((_QWORD *)this + 12);
    for ( i = *((_QWORD *)this + 11); i != v9; i += 32LL )
    {
      v11 = (const WCHAR *)i;
      if ( *(_QWORD *)(i + 24) > 7uLL )
        v11 = *(const WCHAR **)i;
      if ( CompareStringOrdinal(v11, -1, v8, -1, 1) == 2 )
      {
        v13 = VirtualPinnedAppsHandler::PinViewInternal(this, a2, 1);
        v14 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x124,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
            (const char *)(unsigned int)v13);
          v4 = v14;
          goto LABEL_17;
        }
        break;
      }
    }
    if ( lpString2[0] )
      CoTaskMemFree((LPVOID)lpString2[0]);
    return 0LL;
  }
}
