/*
 * XREFs of ?GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAV?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@PEAPEAUIMMDevice@@@Z @ 0x18008E680
 * Callers:
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x18008E304 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     ?OnRuleOperation@CommunicationsRemapPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z @ 0x18011FE90 (-OnRuleOperation@CommunicationsRemapPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z.c)
 * Callees:
 *     ?GetEndpointLevel@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_J@Z @ 0x18004F9E0 (-GetEndpointLevel@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_J@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18004FB30 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?IsAvoidAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800539A0 (-IsAvoidAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CDefaultDeviceManager::GetDefaultEndpoint(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5)
{
  unsigned int v5; // r15d
  void (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v8; // esi
  void (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rdi
  unsigned int v10; // r12d
  int v11; // r14d
  unsigned int v12; // r13d
  _QWORD *v13; // r10
  unsigned __int16 *v14; // rax
  char *v15; // r9
  int v16; // edx
  int v17; // r8d
  void (__fastcall ***v18)(_QWORD, GUID *, _QWORD *); // rcx
  void (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // rsi
  __int64 v20; // r15
  void (__fastcall ***v21)(_QWORD, GUID *, _QWORD *); // rsi
  void (__fastcall ***v22)(_QWORD, GUID *, _QWORD *); // rax
  _QWORD *v23; // rcx
  void (__fastcall ***v24)(_QWORD, GUID *, _QWORD *); // rsi
  void (__fastcall ***v25)(_QWORD, GUID *, _QWORD *); // rax
  int v26; // eax
  LPVOID pv; // [rsp+30h] [rbp-D0h] BYREF
  void (__fastcall ***v29)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp-C8h] BYREF
  void (__fastcall ***v30)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v32; // [rsp+4Ch] [rbp-B4h]
  unsigned int v33; // [rsp+50h] [rbp-B0h]
  unsigned int v34; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v36; // [rsp+60h] [rbp-A0h]
  struct _FILETIME FileTime; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v39; // [rsp+78h] [rbp-88h]
  LPVOID ppv; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h]
  FILETIME FileTime2; // [rsp+98h] [rbp-68h] BYREF
  FILETIME v44; // [rsp+A0h] [rbp-60h] BYREF
  void (__fastcall ***v45)(_QWORD, GUID *, _QWORD *); // [rsp+A8h] [rbp-58h]
  PROPVARIANT pvar[2]; // [rsp+B0h] [rbp-50h] BYREF
  SYSTEMTIME *v47; // [rsp+C0h] [rbp-40h]
  _QWORD *v48; // [rsp+C8h] [rbp-38h]
  void (__fastcall ***v49)(_QWORD, GUID *, _QWORD *); // [rsp+D0h] [rbp-30h]
  SYSTEMTIME SystemTime; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int16 v51[16]; // [rsp+E8h] [rbp-18h] BYREF

  v48 = a4;
  v5 = a3;
  v33 = a3;
  v36 = a2;
  v39 = a5;
  v34 = 0;
  ppv = 0LL;
  v38 = 0LL;
  v7 = 0LL;
  v45 = 0LL;
  v42 = -1LL;
  v8 = 0;
  v32 = 0;
  FileTime2 = 0LL;
  v9 = 0LL;
  v49 = 0LL;
  v10 = 0;
  v44 = 0LL;
  v11 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 24LL))(ppv, a2, 1LL, &v38);
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v38 + 24LL))(v38, &v34);
      if ( v11 >= 0 )
      {
        if ( v34 )
        {
          v11 = StringCchPrintfW(v51, 13LL, L"Level:%x", v5);
          if ( v11 >= 0 )
          {
            v12 = 0;
            if ( v34 )
            {
              do
              {
                v29 = 0LL;
                v30 = 0LL;
                pv = 0LL;
                FileTime = 0LL;
                v41 = 0LL;
                v31 = 0;
                v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v38 + 32LL))(v38, v12, &v29);
                if ( v11 < 0 )
                {
                  CoTaskMemFree(pv);
                  pv = 0LL;
                  if ( v30 )
                    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v30)[2])(v30);
                  if ( v29 )
                    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v29)[2])(v29);
                  goto LABEL_121;
                }
                LODWORD(v35) = 0;
                if ( (int)GetNeverSetAsDefaultProperty(v29, v36, v5, &v35) >= 0 && (_DWORD)v35 )
                {
                  CoTaskMemFree(pv);
                  pv = 0LL;
                  if ( v30 )
                    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v30)[2])(v30);
                  if ( v29 )
                    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v29)[2])(v29);
                }
                else
                {
                  v11 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *), LPVOID *))(*v29)[5])(
                          v29,
                          &pv);
                  if ( v11 < 0 )
                  {
                    CoTaskMemFree(pv);
                    pv = 0LL;
                    if ( v30 )
                      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v30)[2])(v30);
                    if ( v29 )
                      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v29)[2])(v29);
                    goto LABEL_121;
                  }
                  if ( v48 && (v13 = (_QWORD *)*v48) != 0LL )
                  {
                    while ( 1 )
                    {
                      v14 = (unsigned __int16 *)v13[2];
                      v15 = (char *)((_BYTE *)pv - (_BYTE *)v14);
                      do
                      {
                        v16 = *(unsigned __int16 *)&v15[(_QWORD)v14];
                        v17 = *v14 - v16;
                        if ( v17 )
                          break;
                        ++v14;
                      }
                      while ( v16 );
                      if ( !v17 )
                        break;
                      v13 = (_QWORD *)*v13;
                      if ( !v13 )
                        goto LABEL_24;
                    }
                    CoTaskMemFree(pv);
                    pv = 0LL;
                    if ( v30 )
                      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v30)[2])(v30);
                    if ( v29 )
                      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v29)[2])(v29);
                  }
                  else
                  {
LABEL_24:
                    if ( (unsigned int)IsAvoidAsDefault((__int64)v29, v36, v5) )
                    {
                      CoTaskMemFree(pv);
                      pv = 0LL;
                      if ( v30 )
                        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v30)[2])(v30);
                      if ( v29 )
                        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v29)[2])(v29);
                    }
                    else
                    {
                      v18 = v30;
                      if ( v30 != v29 )
                      {
                        v19 = v30;
                        v18 = 0LL;
                        v30 = 0LL;
                        if ( v29 )
                        {
                          (**v29)(v29, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21, &v30);
                          v18 = v30;
                        }
                        if ( v19 )
                        {
                          ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v19)[2])(v19);
                          v18 = v30;
                        }
                        v8 = v32;
                      }
                      if ( !v18 )
                      {
                        v11 = -2147024809;
                        CoTaskMemFree(pv);
                        pv = 0LL;
                        if ( v30 )
                          ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v30)[2])(v30);
                        if ( v29 )
                          ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v29)[2])(v29);
                        goto LABEL_121;
                      }
                      v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned int *))(*v18)[9])(v18, v5, &v31);
                      if ( v11 < 0 )
                      {
                        CoTaskMemFree(pv);
                        pv = 0LL;
                        if ( v30 )
                          ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v30)[2])(v30);
                        if ( v29 )
                          ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v29)[2])(v29);
                        goto LABEL_121;
                      }
                      v35 = 0LL;
                      *(_DWORD *)&SystemTime.wYear = 67137;
                      *(_QWORD *)&SystemTime.wDayOfWeek = 65537LL;
                      *(_DWORD *)&SystemTime.wSecond = 0;
                      *(_OWORD *)pvar = 0LL;
                      v47 = 0LL;
                      v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(*v29)[4])(v29, 0LL, &v35);
                      if ( v11 >= 0 )
                      {
                        v11 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v35 + 40LL))(
                                v35,
                                &PKEY_Endpoint_CreationTime,
                                pvar);
                        if ( v11 >= 0 )
                        {
                          if ( LOWORD(pvar[0]) == 65 )
                          {
                            if ( LODWORD(pvar[1]) == 16 )
                            {
                              if ( v47 )
                              {
                                SystemTime = *v47;
                                if ( !SystemTimeToFileTime(&SystemTime, &FileTime) )
                                  v11 = -2147467259;
                              }
                              else
                              {
                                v11 = -2147467259;
                              }
                            }
                            else
                            {
                              v11 = -2147467259;
                            }
                          }
                          else
                          {
                            v11 = -2147467259;
                          }
                        }
                      }
                      PropVariantClear(pvar);
                      if ( v35 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
                      if ( v11 < 0 )
                      {
                        CoTaskMemFree(pv);
                        pv = 0LL;
                        if ( v30 )
                          ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v30)[2])(v30);
                        if ( v29 )
                          ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v29)[2])(v29);
                        goto LABEL_121;
                      }
                      if ( (int)GetEndpointLevel(v29, v5, &v41) < 0 )
                      {
                        if ( v31 > v10 || v31 == v10 && CompareFileTime(&FileTime, &v44) == 1 )
                        {
                          v24 = v29;
                          if ( v9 != v29 )
                          {
                            if ( v29 )
                              ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v29)[1])(v29);
                            if ( v9 )
                              ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
                            v9 = v24;
                            v49 = v24;
                          }
                          v10 = v31;
                          v44 = FileTime;
                          v8 = v32;
                        }
                      }
                      else
                      {
                        v20 = v41;
                        if ( v41 > v42
                          || v41 == v42 && (v31 > v8 || v31 == v8 && CompareFileTime(&FileTime, &FileTime2) == 1) )
                        {
                          v21 = v29;
                          if ( v7 != v29 )
                          {
                            if ( v29 )
                              ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v29)[1])(v29);
                            if ( v7 )
                              ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v7)[2])(v7);
                            v7 = v21;
                            v45 = v21;
                          }
                          v42 = v20;
                          v8 = v31;
                          v32 = v31;
                          FileTime2 = FileTime;
                        }
                        v5 = v33;
                      }
                      CoTaskMemFree(pv);
                      pv = 0LL;
                      if ( v30 )
                        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v30)[2])(v30);
                      if ( v29 )
                        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v29)[2])(v29);
                    }
                  }
                }
                ++v12;
              }
              while ( v12 < v34 );
              if ( v9 && (!v7 || v10 > v8 || v10 >= 0x60000000) )
              {
                v22 = v9;
                v9 = 0LL;
                v23 = v39;
                *v39 = v22;
                goto LABEL_118;
              }
            }
            if ( v7 )
            {
              v25 = v7;
              v7 = 0LL;
              v45 = 0LL;
              v23 = v39;
              *v39 = v25;
            }
            else
            {
              v23 = v39;
            }
LABEL_118:
            v26 = v11;
            if ( !*v23 )
              v26 = -2147023728;
            v11 = v26;
          }
        }
        else
        {
          v11 = -2147023728;
        }
      }
    }
  }
LABEL_121:
  if ( v9 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
  if ( v7 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v7)[2])(v7);
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v11;
}
