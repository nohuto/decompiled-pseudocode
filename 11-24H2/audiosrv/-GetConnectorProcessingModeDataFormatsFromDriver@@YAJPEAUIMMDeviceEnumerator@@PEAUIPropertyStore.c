/*
 * XREFs of ?GetConnectorProcessingModeDataFormatsFromDriver@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@U23@_K@wil@@@Z @ 0x180166BF4
 * Callers:
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18003FD9C (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180016924 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180040830 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180061BC8 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?reset@?$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@U23@_K@wil@@QEAAXXZ @ 0x18013ACBC (-reset@-$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=1
__int64 __fastcall GetConnectorProcessingModeDataFormatsFromDriver(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        int a4,
        char **a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 (__fastcall *v13)(__int64, PROPVARIANT, __int64 **); // rbx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // rax
  unsigned int v26; // ebx
  unsigned __int64 v27; // rcx
  char *v28; // rbx
  void *v29; // rcx
  int v30; // edi
  unsigned int *v31; // rax
  void *v32; // rcx
  char *v33; // r12
  char *v34; // rdi
  unsigned int i; // r14d
  char *v36; // rcx
  struct tWAVEFORMATEX **v37; // rdx
  int v38; // eax
  unsigned int v39; // r15d
  char *v40; // rcx
  char *v41; // rax
  __int64 *v42; // [rsp+30h] [rbp-108h] BYREF
  int v43[2]; // [rsp+38h] [rbp-100h] BYREF
  __int64 *v44; // [rsp+40h] [rbp-F8h] BYREF
  __int64 *v45; // [rsp+48h] [rbp-F0h] BYREF
  unsigned int *v46; // [rsp+50h] [rbp-E8h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v48; // [rsp+68h] [rbp-D0h]
  void *v49[2]; // [rsp+70h] [rbp-C8h] BYREF
  PROPVARIANT v50[2]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+90h] [rbp-A8h]
  unsigned __int64 v52; // [rsp+98h] [rbp-A0h] BYREF
  char *v53; // [rsp+A0h] [rbp-98h] BYREF
  char *v54; // [rsp+A8h] [rbp-90h]
  unsigned int **v55; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-80h] BYREF
  char v57; // [rsp+C0h] [rbp-78h]
  _DWORD v58[6]; // [rsp+C8h] [rbp-70h] BYREF
  struct _tagpropertykey v59; // [rsp+E0h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v58[0] = 590439624;
  v58[1] = 1283267372;
  v58[2] = 1907779772;
  v58[3] = 1730509416;
  v58[4] = 1;
  if ( a4 == 3 )
  {
    v59 = PKEY_Endpoint_KeywordDetector_ConnectorId;
  }
  else
  {
    *(_QWORD *)&v59.fmtid.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v59.fmtid.Data4 = 0xFC181731B718BA83uLL;
    v59.pid = 1;
  }
  *(_OWORD *)pvar = 0LL;
  v48 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(a2, v58, pvar);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( LOWORD(pvar[0]) == 31 )
    {
      *(_OWORD *)v50 = 0LL;
      v51 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(
              a2,
              &v59,
              v50);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v42 = 0LL;
        v13 = *(__int64 (__fastcall **)(__int64, PROPVARIANT, __int64 **))(*(_QWORD *)a1 + 40LL);
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v42);
        v14 = v13(a1, pvar[1], &v42);
        v15 = v14;
        if ( v14 >= 0 )
        {
          *(_QWORD *)v43 = 0LL;
          v16 = *v42;
          *(_QWORD *)v43 = 0LL;
          v17 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v16 + 24))(
                  v42,
                  &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                  1LL);
          v18 = v17;
          if ( v17 >= 0 )
          {
            v44 = 0LL;
            v19 = **(_QWORD **)v43;
            v44 = 0LL;
            v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(v19 + 56))(
                    *(_QWORD *)v43,
                    LODWORD(v50[1]),
                    &v44);
            v21 = v20;
            if ( v20 >= 0 )
            {
              v45 = 0LL;
              v22 = *v44;
              v45 = 0LL;
              v23 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 **, int *))(v22 + 104))(
                      v44,
                      23LL,
                      &GUID_915aed0f_c782_41d6_b0dc_1ed22d1ee5cb,
                      &v45,
                      v43);
              v24 = v23;
              if ( v23 >= 0 )
              {
                v46 = 0LL;
                v25 = *v45;
                v55 = &v46;
                v56 = 0LL;
                v57 = 1;
                *(_OWORD *)v49 = *a3;
                v26 = (*(__int64 (__fastcall **)(__int64 *, void **, __int64 *))(v25 + 32))(v45, v49, &v56);
                wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v55);
                if ( (v26 & 0x80000000) == 0 )
                {
                  v27 = v46[1];
                  if ( (_DWORD)v27 )
                  {
                    v28 = 0LL;
                    v49[0] = 0LL;
                    v52 = 0LL;
                    v30 = ULongLongMult(v27, 8uLL, &v52);
                    if ( v30 >= 0 )
                    {
                      v30 = CTCoAllocPolicy::Alloc(v29, 1, v52, v49);
                      v28 = (char *)v49[0];
                    }
                    if ( v30 >= 0 )
                    {
                      v31 = v46;
                      v32 = (void *)v46[1];
                      v49[0] = v28;
                      v49[1] = v32;
                      v33 = (char *)(v46 + 2);
                      v34 = 0LL;
                      for ( i = 0; i < v31[1]; ++i )
                      {
                        v36 = &v33[*(unsigned int *)&v33[4 * i]];
                        if ( *(_DWORD *)v36 >= 0x52u )
                        {
                          v37 = (struct tWAVEFORMATEX **)&v28[8 * (_QWORD)v34++];
                          v38 = CloneWaveFormat((const struct tWAVEFORMATEX *)(v36 + 64), v37);
                          v39 = v38;
                          if ( v38 < 0 )
                          {
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)0x3D5,
                              (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                              (const char *)(unsigned int)v38);
                            wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,unsigned __int64>::reset((__int64)v49);
                            wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                              (void **)&v46,
                              0LL);
                            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
                            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
                            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v43);
                            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
                            PropVariantClear(v50);
                            PropVariantClear(pvar);
                            return v39;
                          }
                          v31 = v46;
                        }
                      }
                      v49[0] = 0LL;
                      v49[1] = 0LL;
                      v53 = v28;
                      v54 = v34;
                      if ( a5 != &v53 )
                      {
                        wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,unsigned __int64>::reset((__int64)a5);
                        v40 = *a5;
                        v41 = a5[1];
                        *a5 = v28;
                        a5[1] = v34;
                        v53 = v40;
                        v54 = v41;
                      }
                      wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,unsigned __int64>::reset((__int64)&v53);
                      wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,unsigned __int64>::reset((__int64)v49);
                      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                        (void **)&v46,
                        0LL);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v43);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
                      PropVariantClear(v50);
                      PropVariantClear(pvar);
                      return 0LL;
                    }
                    else
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x3C7,
                        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                        (const char *)(unsigned int)v30);
                      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                        (void **)&v46,
                        0LL);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v43);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
                      PropVariantClear(v50);
                      PropVariantClear(pvar);
                      return (unsigned int)v30;
                    }
                  }
                  else
                  {
                    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                      (void **)&v46,
                      0LL);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v43);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
                    PropVariantClear(v50);
                    PropVariantClear(pvar);
                    return 2147943568LL;
                  }
                }
                else if ( v26 == -2147023728 || v26 == -2147024846 )
                {
                  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                    (void **)&v46,
                    0LL);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v43);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
                  PropVariantClear(v50);
                  PropVariantClear(pvar);
                  return v26;
                }
                else
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x3C2,
                    (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                    (const char *)v26);
                  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                    (void **)&v46,
                    0LL);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v43);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
                  PropVariantClear(v50);
                  PropVariantClear(pvar);
                  return v26;
                }
              }
              else if ( v23 == -2147467262 )
              {
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v43);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
                PropVariantClear(v50);
                PropVariantClear(pvar);
                return 2147500034LL;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x3BF,
                  (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                  (const char *)(unsigned int)v23);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v43);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
                PropVariantClear(v50);
                PropVariantClear(pvar);
                return v24;
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3BC,
                (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                (const char *)(unsigned int)v20);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v43);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
              PropVariantClear(v50);
              PropVariantClear(pvar);
              return v21;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3B9,
              (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
              (const char *)(unsigned int)v17);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v43);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
            PropVariantClear(v50);
            PropVariantClear(pvar);
            return v18;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3B6,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)(unsigned int)v14);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
          PropVariantClear(v50);
          PropVariantClear(pvar);
          return v15;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3B3,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v11);
        PropVariantClear(v50);
        PropVariantClear(pvar);
        return v12;
      }
    }
    else
    {
      PropVariantClear(pvar);
      return 2290679812LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AF,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v8);
    PropVariantClear(pvar);
    return v9;
  }
}
