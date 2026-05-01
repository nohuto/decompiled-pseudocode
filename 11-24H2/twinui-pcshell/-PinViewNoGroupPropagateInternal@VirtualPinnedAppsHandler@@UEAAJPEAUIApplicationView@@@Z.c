/*
 * XREFs of ?PinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180564960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?IsAppIdPinnedInternal@VirtualPinnedAppsHandler@@AEAA_NPEBG@Z @ 0x1801F5EA8 (-IsAppIdPinnedInternal@VirtualPinnedAppsHandler@@AEAA_NPEBG@Z.c)
 *     ?PinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802AF2BC (-PinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualPinnedAppsHandler::PinViewNoGroupPropagateInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  int (__fastcall *v4)(struct IApplicationView *, unsigned __int16 **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int16 *v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !(*(unsigned int (__fastcall **)(VirtualPinnedAppsHandler *))(*(_QWORD *)this + 128LL))(this) )
  {
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v4 = *(int (__fastcall **)(struct IApplicationView *, unsigned __int16 **))(*(_QWORD *)a2 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v8);
    v9 = -1LL;
    v10 = -1LL;
    if ( v4(a2, &v8) >= 0 )
      VirtualPinnedAppsHandler::IsAppIdPinnedInternal(this, v8);
    v5 = VirtualPinnedAppsHandler::PinViewNoGroupPropagateInternal(this, a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v5);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v8);
      return v6;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v8);
  }
  return 0LL;
}
