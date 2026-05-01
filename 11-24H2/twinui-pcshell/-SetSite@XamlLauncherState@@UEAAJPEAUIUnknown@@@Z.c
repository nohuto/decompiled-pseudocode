/*
 * XREFs of ?SetSite@XamlLauncherState@@UEAAJPEAUIUnknown@@@Z @ 0x180060EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XamlLauncherState::SetSite(XamlLauncherState *this, struct IUnknown *a2)
{
  __int64 *v2; // rdi
  HRESULT Service; // eax
  unsigned int v6; // ebp
  HRESULT v8; // edi
  __int64 v9; // rdx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 288);
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
    Service = IUnknown_QueryService(
                a2,
                &IID_IImmersiveWindowMessageService,
                &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
                (void **)v2);
    v6 = Service;
    if ( Service < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x129,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)Service);
      return v6;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v2 + 24LL))(
           *v2,
           0LL,
           ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
           (char *)this + 280);
    if ( v8 < 0 )
    {
      v9 = 298LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 14);
    v8 = IUnknown_QueryService(
           a2,
           &IID_IImmersiveSessionIdleDetector,
           &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
           (void **)this + 14);
    if ( v8 < 0 )
    {
      v9 = 300LL;
      goto LABEL_6;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 14) + 32LL))(
           *((_QWORD *)this + 14),
           ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
           (char *)this + 284);
    if ( v8 < 0 )
    {
      v9 = 301LL;
      goto LABEL_6;
    }
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, char *))QueryInterface)(
            a2,
            &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
            (char *)this + 120);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12F,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v11);
      return v12;
    }
  }
  else
  {
    if ( *((_DWORD *)this + 70) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 32LL))(*v2);
      *((_DWORD *)this + 70) = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
    if ( *((_DWORD *)this + 71) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14));
      *((_DWORD *)this + 71) = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  }
  return 0LL;
}
