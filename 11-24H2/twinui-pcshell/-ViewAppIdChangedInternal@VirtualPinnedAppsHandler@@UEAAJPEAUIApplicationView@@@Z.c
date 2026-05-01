/*
 * XREFs of ?ViewAppIdChangedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180236890
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?IsAppIdPinnedInternal@VirtualPinnedAppsHandler@@AEAA_NPEBG@Z @ 0x1801F5EA8 (-IsAppIdPinnedInternal@VirtualPinnedAppsHandler@@AEAA_NPEBG@Z.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802AF27C (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualPinnedAppsHandler::ViewAppIdChangedInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rdx
  LPVOID pv[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v14; // [rsp+68h] [rbp+28h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF

  pv[0] = 0LL;
  v4 = *(_QWORD *)a2;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, LPVOID *))(v4 + 136))(a2, pv) >= 0
    && (unsigned __int8)VirtualPinnedAppsHandler::IsAppIdPinnedInternal(this, (const unsigned __int16 *)pv[0]) )
  {
    v5 = VirtualPinnedAppsHandler::PinViewInternal(this, a2, 1);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12E,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v5);
LABEL_13:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)pv);
      return v6;
    }
  }
  else
  {
    v14 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, char *))(**((_QWORD **)this + 8) + 120LL))(
           *((_QWORD *)this + 8),
           a2,
           &v14)
      && v14 )
    {
      v15 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 440LL))(*((_QWORD *)this + 6))
        || (v7 = *((_QWORD *)this + 6),
            v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 368LL),
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15),
            v9 = v8(v7, &v15),
            v6 = v9,
            v9 >= 0) )
      {
        v9 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *, __int64))(*(_QWORD *)this + 104LL))(
               this,
               a2,
               v15);
        v6 = v9;
        if ( v9 >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
          goto LABEL_15;
        }
        v10 = 315LL;
      }
      else
      {
        v10 = 313LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      goto LABEL_13;
    }
  }
LABEL_15:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return 0LL;
}
