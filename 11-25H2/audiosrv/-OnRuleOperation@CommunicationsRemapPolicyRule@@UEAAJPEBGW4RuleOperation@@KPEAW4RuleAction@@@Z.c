/*
 * XREFs of ?OnRuleOperation@CommunicationsRemapPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z @ 0x18011FE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAV?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@PEAPEAUIMMDevice@@@Z @ 0x18008E680 (-GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CommunicationsRemapPolicyRule::OnRuleOperation(__int64 a1, __int64 a2, int a3, int a4, _DWORD *a5)
{
  _DWORD *v7; // r15
  HRESULT Instance; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  LPVOID v11; // rbx
  __int64 (__fastcall *v12)(LPVOID, __int64, _DWORD **); // rdi
  int v14; // eax
  __int64 v15; // rcx
  void *v16; // rcx
  unsigned __int16 *v17; // rax
  __int64 v18; // r14
  int v19; // r8d
  int v20; // edx
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  LPVOID v23[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v25; // [rsp+80h] [rbp+30h] BYREF

  v7 = a5;
  *a5 = 1;
  if ( !a3 && (*(_BYTE *)(a1 + 80) & 1) != 0 && a4 == 1 )
  {
    a5 = 0LL;
    v21 = 0LL;
    pv = 0LL;
    v25 = 0;
    v23[0] = 0LL;
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 v23);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v10 = 112LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\remappolicyrule.cpp",
        (const char *)(unsigned int)Instance);
      CoTaskMemFree(pv);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&a5);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v23);
      return v9;
    }
    v11 = v23[0];
    v12 = *(__int64 (__fastcall **)(LPVOID, __int64, _DWORD **))(*(_QWORD *)v23[0] + 40LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&a5);
    Instance = v12(v11, a2, &a5);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v10 = 115LL;
      goto LABEL_12;
    }
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v21);
    Instance = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a5)(
                 (__int64)a5,
                 &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                 &v21);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v10 = 116LL;
      goto LABEL_12;
    }
    Instance = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 24LL))(v21, &v25);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v10 = 117LL;
      goto LABEL_12;
    }
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&a5);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v21);
    v14 = *(_DWORD *)(a1 + 68);
    if ( (v14 == 2 || v25 == v14)
      && (wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&a5),
          (int)CDefaultDeviceManager::GetDefaultEndpoint(v15, v25, *(_DWORD *)(a1 + 64), 0LL, &a5) >= 0)
      && (*(int (__fastcall **)(_DWORD *, LPVOID *))(*(_QWORD *)a5 + 40LL))(a5, &pv) >= 0 )
    {
      v16 = pv;
      v17 = (unsigned __int16 *)pv;
      v18 = a2 - (_QWORD)pv;
      do
      {
        v19 = *(unsigned __int16 *)((char *)v17 + v18);
        v20 = *v17 - v19;
        if ( v20 )
          break;
        ++v17;
      }
      while ( v19 );
      if ( !v20 )
      {
        *(_BYTE *)(a1 + 344) = 1;
        *(_DWORD *)(a1 + 76) = *(_DWORD *)(a1 + 64);
        *v7 = 4 - (*(_DWORD *)(a1 + 68) != 2);
      }
    }
    else
    {
      v16 = pv;
    }
    CoTaskMemFree(v16);
    pv = 0LL;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&a5);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v23);
  }
  return 0LL;
}
