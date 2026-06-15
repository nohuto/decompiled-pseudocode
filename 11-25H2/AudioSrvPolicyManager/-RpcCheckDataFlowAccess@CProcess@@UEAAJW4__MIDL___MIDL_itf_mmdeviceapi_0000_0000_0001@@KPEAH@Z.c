/*
 * XREFs of ?RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAH@Z @ 0x180017E60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001BA28 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EF7C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ??$?0$0DD@@StringReference@Internal@Windows@@QEAA@AEAY0DD@$$CBG@Z @ 0x180031F44 (--$-0$0DD@@StringReference@Internal@Windows@@QEAA@AEAY0DD@$$CBG@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800380E0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::RpcCheckDataFlowAccess(
        CProcess *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        unsigned int a3,
        int *a4)
{
  __int64 v8; // rax
  int v9; // r15d
  char *v10; // r13
  HRESULT v11; // eax
  void *v12; // rdx
  unsigned int v13; // r8d
  _QWORD *v14; // rax
  int ActivationFactory; // eax
  int v16; // ebx
  unsigned int v17; // eax
  unsigned __int64 v18; // r12
  HRESULT v19; // eax
  IUnknown *v20; // rbx
  __int64 v21; // rdx
  int v22; // eax
  unsigned int dwAuthnLevel; // [rsp+20h] [rbp-59h]
  IUnknown *pProxy; // [rsp+40h] [rbp-39h] BYREF
  int v25; // [rsp+48h] [rbp-31h] BYREF
  int v26[2]; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-21h]
  ULONG (__stdcall *Release)(IUnknown *); // [rsp+60h] [rbp-19h]
  HSTRING string; // [rsp+68h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  if ( a2 )
  {
    if ( a2 != eCapture )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xACD,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    v8 = 1LL;
    v9 = 0;
  }
  else
  {
    v8 = 0LL;
    v9 = 0;
    *((_DWORD *)this + 54) = 0;
  }
  v10 = (char *)this + 4 * v8;
  if ( *((_DWORD *)v10 + 54) == -2147023728 )
  {
    v11 = CoInitializeEx(0LL, 0);
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(retaddr, v12, v13, (const char *)(unsigned int)v11, dwAuthnLevel);
    pProxy = 0LL;
    v14 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[51])v12);
    ActivationFactory = RoGetActivationFactory(*v14, &GUID_518f3880_4e5c_4524_ab03_cd01336b2178, &pProxy);
    v16 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAE0,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_11:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&pProxy);
      CoUninitialize();
      return (unsigned int)v16;
    }
    v17 = RpcImpersonateClient(0LL);
    if ( v17 )
    {
      v16 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0xAE2,
              (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
              (const char *)v17,
              dwAuthnLevel);
      goto LABEL_11;
    }
    v18 = -1LL;
    v19 = CoSetProxyBlanket(
            pProxy,
            0xFFFFFFFF,
            0xFFFFFFFF,
            (OLECHAR *)0xFFFFFFFFFFFFFFFFLL,
            0,
            3u,
            (RPC_AUTH_IDENTITY_HANDLE)0xFFFFFFFFFFFFFFFFLL,
            0x40u);
    v16 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAEC,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v19);
      RpcRevertToSelf();
      goto LABEL_11;
    }
    v20 = pProxy;
    Release = pProxy->lpVtbl[2].Release;
    *(_QWORD *)v26 = 0LL;
    v27 = *((_DWORD *)this + 40);
    do
      ++v18;
    while ( c_szCapabilityMicrophone[v18] );
    if ( v18 > 0xFFFFFFFF )
    {
      LODWORD(v18) = -1;
      RaiseException(0xC000000D, 1u, 0, 0LL);
    }
    WindowsCreateStringReference(c_szCapabilityMicrophone, v18, &hstringHeader, &string);
    v16 = ((__int64 (__fastcall *)(IUnknown *, HSTRING, _QWORD, _QWORD, int *))Release)(v20, string, v27, a3, v26);
    if ( v16 < 0 )
    {
      v21 = 2802LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v16);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v26);
      RpcRevertToSelf();
      goto LABEL_11;
    }
    v25 = 3;
    v16 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v26 + 152LL))(*(_QWORD *)v26, &v25);
    if ( v16 < 0 )
    {
      v21 = 2805LL;
      goto LABEL_22;
    }
    v22 = -2005139338;
    if ( v25 == 3 )
      v22 = 0;
    *((_DWORD *)v10 + 54) = v22;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v26);
    RpcRevertToSelf();
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&pProxy);
    CoUninitialize();
  }
  if ( a4 )
  {
    LOBYTE(v9) = *((_DWORD *)v10 + 54) == 0;
    *a4 = v9;
  }
  return 0LL;
}
