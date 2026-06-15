/*
 * XREFs of ?IsEffectPackConfigurationApplicableToEndpoint@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18012CE00
 * Callers:
 *     ?AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18012AA04 (-AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV-$shared_ptr@$$CBUEff.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??$regex_match@GV?$regex_traits@G@std@@@std@@YA_NPEBGAEBV?$basic_regex@GV?$regex_traits@G@std@@@0@W4match_flag_type@regex_constants@0@@Z @ 0x180127C9C (--$regex_match@GV-$regex_traits@G@std@@@std@@YA_NPEBGAEBV-$basic_regex@GV-$regex_traits@G@std@@@.c)
 *     _lambda_efd74d121090e6c2d69567c811563fad_::operator() @ 0x18012A4BC (_lambda_efd74d121090e6c2d69567c811563fad_--operator().c)
 *     ?GetPnpDevnodeFromMMDevice@CEndpointCharacteristics@@AEAAJPEAPEAUIMMDevice@@@Z @ 0x18012C6C0 (-GetPnpDevnodeFromMMDevice@CEndpointCharacteristics@@AEAAJPEAPEAUIMMDevice@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CEndpointCharacteristics::IsEffectPackConfigurationApplicableToEndpoint(
        CEndpointCharacteristics *this,
        __int64 *a2,
        _BYTE *a3)
{
  unsigned __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rax
  char v9; // di
  LPCWCH *v10; // rsi
  LPCWCH *v11; // r15
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  struct IMMDevice *v14; // rbx
  HRESULT (__stdcall *OpenPropertyStore)(IMMDevice *, DWORD, IPropertyStore **); // rdi
  __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned int v18; // edi
  __int64 *v19; // rbx
  __int64 *v20; // rsi
  int v22; // [rsp+30h] [rbp-59h] BYREF
  __int64 v23; // [rsp+38h] [rbp-51h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v25; // [rsp+50h] [rbp-39h]
  _QWORD v26[3]; // [rsp+58h] [rbp-31h] BYREF
  char v27; // [rsp+70h] [rbp-19h]
  __int128 v28; // [rsp+78h] [rbp-11h]
  __int64 v29; // [rsp+88h] [rbp-1h]
  struct IMMDevice *v30[2]; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  *a3 = 0;
  v26[0] = this;
  v26[1] = a2;
  v26[2] = &v22;
  v27 = 1;
  v22 = 1;
  if ( *((_DWORD *)this + 16) == 3 )
    goto LABEL_52;
  v22 = 4;
  if ( *((_DWORD *)this + 110) )
  {
    if ( !*((_DWORD *)this + 111) && *(_OWORD *)(*a2 + 1936) != PKEY_FX_EffectPack_Schema_Internal_V1 )
      goto LABEL_52;
  }
  v22 = 7;
  v6 = *((int *)this + 59);
  if ( v6 < 2 )
  {
    v8 = *a2;
    if ( *(_BYTE *)(v6 + *a2 + 1915) )
    {
      v9 = 0;
      v22 = 2;
      v10 = *(LPCWCH **)(v8 + 1864);
      v11 = *(LPCWCH **)(v8 + 1872);
      while ( v10 != v11 )
      {
        if ( *((_QWORD *)this + 52)
          && (CompareStringOrdinal(*v10, -1, L"*", -1, 1) == 2
           || CompareStringOrdinal(*v10, -1, *((LPCWCH *)this + 52), -1, 1) == 2) )
        {
          v9 = 1;
          break;
        }
        ++v10;
      }
      if ( *(_BYTE *)(*a2 + 1912) )
      {
        v22 = 6;
        *(_OWORD *)pvar = 0LL;
        v25 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
               *((_QWORD *)this + 9),
               &PKEY_Endpoint_IsBluetooth,
               pvar) >= 0
          && LOWORD(pvar[0]) == 11
          && LOWORD(pvar[1]) )
        {
          v9 = 1;
        }
        PropVariantClear(pvar);
      }
      if ( *(_BYTE *)(*a2 + 1913) )
      {
        v22 = 5;
        *(_OWORD *)pvar = 0LL;
        v25 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
               *((_QWORD *)this + 9),
               &PKEY_Endpoint_IsUSB,
               pvar) >= 0
          && LOWORD(pvar[0]) == 11
          && LOWORD(pvar[1]) )
        {
          v9 = 1;
        }
        PropVariantClear(pvar);
      }
      if ( v9 )
      {
        v22 = 3;
        v12 = *(_QWORD **)(*a2 + 1824);
        v13 = *(_QWORD **)(*a2 + 1832);
        if ( v12 != v13 )
        {
          *(GUID *)v30 = GUID_00000000_0000_0000_0000_000000000000;
          while ( (*v12 != *((_QWORD *)this + 53) || v12[1] != *((_QWORD *)this + 54))
               && (*v12 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
                || v12[1] != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
          {
            v12 += 2;
            if ( v12 == v13 )
              goto LABEL_52;
          }
          v22 = 8;
          if ( (*(_QWORD *)(*a2 + 1896) - *(_QWORD *)(*a2 + 1888)) / 40LL )
          {
            v30[0] = 0LL;
            v23 = 0LL;
            *(_OWORD *)pvar = 0LL;
            v25 = 0LL;
            v28 = 0LL;
            v29 = 0LL;
            wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)v30);
            CEndpointCharacteristics::GetPnpDevnodeFromMMDevice(this, v30);
            v14 = v30[0];
            if ( v30[0] )
            {
              OpenPropertyStore = v30[0]->lpVtbl->OpenPropertyStore;
              v16 = v23;
              v23 = 0LL;
              if ( v16 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
              if ( ((int (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))OpenPropertyStore)(v14, 0LL, &v23) >= 0
                && (*(int (__fastcall **)(__int64, const DEVPROPKEY *, PROPVARIANT *))(*(_QWORD *)v23 + 40LL))(
                     v23,
                     &DEVPKEY_Device_HardwareIds,
                     pvar) >= 0
                && LOWORD(pvar[0]) == 4127 )
              {
                v17 = (unsigned int)pvar[1];
                if ( LODWORD(pvar[1]) )
                {
                  v18 = 0;
                  while ( 1 )
                  {
                    v19 = *(__int64 **)(*a2 + 1888);
                    v20 = *(__int64 **)(*a2 + 1896);
                    if ( v19 != v20 )
                      break;
LABEL_49:
                    if ( ++v18 >= v17 )
                      goto LABEL_50;
                  }
                  while ( !std::regex_match<unsigned short,std::regex_traits<unsigned short>>(
                             *(_QWORD *)(v25 + 8LL * v18),
                             v19) )
                  {
                    v19 += 5;
                    if ( v19 == v20 )
                    {
                      v17 = (unsigned int)pvar[1];
                      goto LABEL_49;
                    }
                  }
                  PropVariantClear(pvar);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v30);
                  v7 = 0;
                  goto LABEL_54;
                }
              }
            }
LABEL_50:
            PropVariantClear(pvar);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v30);
          }
          v22 = 0;
          *a3 = 1;
        }
      }
    }
LABEL_52:
    v27 = 0;
    lambda_efd74d121090e6c2d69567c811563fad_::operator()((__int64)v26);
    return 0LL;
  }
  v7 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83F,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x8000FFFFLL);
LABEL_54:
  v27 = 0;
  lambda_efd74d121090e6c2d69567c811563fad_::operator()((__int64)v26);
  return v7;
}
