/*
 * XREFs of ?SetViewCollectionInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x180564A70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18002CBE4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18007DA98 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802116FC (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802AF27C (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualPinnedAppsHandler::SetViewCollectionInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationViewCollection *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  const char *v6; // r9
  struct IApplicationView *v8; // rbx
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rdi
  int v11; // eax
  _QWORD *v12; // r12
  _QWORD *i; // rsi
  _QWORD *v14; // rdx
  int v15; // eax
  char v16; // al
  __int64 v17; // rcx
  bool v18; // zf
  unsigned __int8 (__fastcall *v19)(__int64, struct IApplicationView *, int *); // rax
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rdx
  int v23[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v24; // [rsp+28h] [rbp-70h] BYREF
  int v25; // [rsp+30h] [rbp-68h]
  unsigned int v26; // [rsp+38h] [rbp-60h] BYREF
  struct IApplicationView *v27[2]; // [rsp+40h] [rbp-58h] BYREF
  int v28; // [rsp+50h] [rbp-48h] BYREF
  __int64 v29[8]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v31; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+20h] BYREF

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 10, (__int64)a2);
  v3 = *((_QWORD *)this + 10);
  if ( !v3 )
    return 0LL;
  v32 = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  try
  {
    v5 = v4(v3, &v32);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xF3,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v5,
        v23[0]);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      (__int64)&v24,
      v32);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
      (__int64)&v26,
      (__int64)&v24,
      0);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
      (__int64)&v28,
      (__int64)&v24,
      v25);
    while ( 1 )
    {
      if ( v26 == v28 && v27[1] == (struct IApplicationView *)v29[1] )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v29);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v27);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
        return 0LL;
      }
      v8 = v27[0];
      *(struct IApplicationView **)v23 = v27[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v23);
      v33 = 0LL;
      v9 = *((_QWORD *)this + 6);
      v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 368LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
      v11 = v10(v9, &v33);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xF7,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v11,
          v23[0]);
      v12 = (_QWORD *)*((_QWORD *)this + 12);
      for ( i = (_QWORD *)*((_QWORD *)this + 11); i != v12; i += 4 )
      {
        v31 = 0;
        v14 = i;
        if ( i[3] > 7uLL )
          v14 = (_QWORD *)*i;
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, int *))(**(_QWORD **)v23 + 152LL))(*(_QWORD *)v23, v14, &v31);
        if ( v15 >= 0 )
        {
          if ( v31 )
          {
            v16 = 1;
            goto LABEL_22;
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xFE,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
            (const char *)(unsigned int)v15);
        }
      }
      v16 = 0;
LABEL_22:
      v17 = *((_QWORD *)this + 8);
      LOBYTE(v31) = 0;
      v18 = v16 == 0;
      v19 = *(unsigned __int8 (__fastcall **)(__int64, struct IApplicationView *, int *))(*(_QWORD *)v17 + 120LL);
      if ( v18 )
      {
        if ( v19(v17, v8, &v31) )
        {
          if ( (_BYTE)v31 )
          {
            v20 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *, __int64))(*(_QWORD *)this + 104LL))(
                    this,
                    v8,
                    v33);
            v21 = retaddr;
            if ( v20 < 0 )
            {
              v22 = 268LL;
              goto LABEL_31;
            }
          }
        }
      }
      else if ( !v19(v17, v8, &v31) || !(_BYTE)v31 )
      {
        v20 = VirtualPinnedAppsHandler::PinViewInternal(this, v8, 1);
        v21 = retaddr;
        if ( v20 < 0 )
        {
          v22 = 260LL;
LABEL_31:
          wil::details::in1diag3::_Log_Hr(
            v21,
            (void *)v22,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
            (const char *)(unsigned int)v20);
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v23);
      ++v26;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v26);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x114,
                           (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
                           v6);
  }
  return 0LL;
}
