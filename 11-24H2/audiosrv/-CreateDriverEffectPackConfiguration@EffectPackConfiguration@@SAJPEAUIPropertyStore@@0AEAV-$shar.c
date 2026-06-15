/*
 * XREFs of ?CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x180050468
 * Callers:
 *     ?CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x1800503AC (-CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800313A0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180032B00 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18003A68C (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18003A868 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18003AFBC (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005009C (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Construct_in_place@UEffectPackConfiguration@@AEAU_GUID@@@std@@YAXAEAUEffectPackConfiguration@@AEAU_GUID@@@Z @ 0x180050AD4 (--$_Construct_in_place@UEffectPackConfiguration@@AEAU_GUID@@@std@@YAXAEAUEffectPackConfiguration.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigurationSettings@@@Z @ 0x180145224 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigura.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall EffectPackConfiguration::CreateDriverEffectPackConfiguration(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r13
  unsigned __int64 *v5; // rax
  unsigned __int64 *v6; // rbx
  unsigned __int64 *v7; // r14
  unsigned __int8 v9; // r15
  unsigned int v10; // eax
  __int64 v11; // rsi
  HRESULT v12; // eax
  unsigned int v13; // r14d
  int Configuration; // eax
  unsigned int v15; // esi
  char *v16; // rsi
  char *v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  int v20; // r13d
  unsigned __int64 v21; // rcx
  int v22; // r14d
  __int64 v23; // r11
  unsigned int v24; // eax
  __int64 v25; // rsi
  HRESULT v26; // eax
  unsigned int v27; // r14d
  __int64 v28; // rax
  CAudioSignalProcessingModeArray *v29; // rax
  int v30; // eax
  unsigned int v31; // r14d
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+30h] [rbp-B8h]
  __int64 v34; // [rsp+38h] [rbp-B0h] BYREF
  int v35; // [rsp+40h] [rbp-A8h]
  int v36; // [rsp+44h] [rbp-A4h]
  unsigned __int64 v37; // [rsp+48h] [rbp-A0h]
  __int64 v38; // [rsp+50h] [rbp-98h]
  _QWORD *v39; // [rsp+58h] [rbp-90h]
  unsigned __int64 *v40; // [rsp+60h] [rbp-88h] BYREF
  std::_Ref_count_base *v41; // [rsp+68h] [rbp-80h]
  GUID pclsid; // [rsp+70h] [rbp-78h] BYREF
  _DWORD v43[3]; // [rsp+80h] [rbp-68h] BYREF
  char v44; // [rsp+8Ch] [rbp-5Ch] BYREF
  _DWORD v45[3]; // [rsp+90h] [rbp-58h] BYREF
  char v46; // [rsp+9Ch] [rbp-4Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v39 = a3;
  v3 = a2;
  v38 = a2;
  v5 = (unsigned __int64 *)operator new(0x818uLL);
  v6 = v5;
  *(_QWORD *)&pclsid.Data1 = v5;
  if ( v5 )
  {
    *(_OWORD *)v5 = 0LL;
    *((_DWORD *)v5 + 2) = 1;
    *((_DWORD *)v5 + 3) = 1;
    *v5 = (unsigned __int64)&std::_Ref_count_obj2<EffectPackConfiguration>::`vftable';
    std::_Construct_in_place<EffectPackConfiguration,_GUID &>(v5 + 2, &DRIVER_APO_EFFECTPACK_ID);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = v6 + 2;
  v40 = v6 + 2;
  v41 = (std::_Ref_count_base *)v6;
  if ( v6 == (unsigned __int64 *)-16LL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BC,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
      (const char *)0x8007000ELL);
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)0xFFFFFFFFFFFFFFF0LL);
    return 2147942414LL;
  }
  if ( !v3 || g_bIsGlobalDisableThirdPartyEnhancements )
  {
LABEL_60:
    std::shared_ptr<std::function<void (void)>>::operator=(v39, (__int64 *)&v40);
    if ( v41 )
      std::_Ref_count_base::_Decref(v41);
    return 0LL;
  }
  v34 = 0LL;
  v35 = 0;
  v36 = 0;
  v9 = 0;
  *(_OWORD *)pvar = 0LL;
  v33 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a1 + 40LL))(
         a1,
         &PKEY_Constrained_APO_ProcessingMode_List_For_Streaming,
         pvar) < 0
    || LOWORD(pvar[0]) != 4127
    || (v10 = (unsigned int)pvar[1]) == 0 )
  {
LABEL_25:
    PropVariantClear(pvar);
    Configuration = EffectPackConfiguration::ReadConfiguration(v7, v3, v3, ((v9 ^ 1) << 6) | 0x10789u);
    v15 = Configuration;
    if ( Configuration < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EA,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)Configuration);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v34);
      if ( v6 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
      return v15;
    }
    if ( v9 )
    {
      v45[0] = 0;
      v45[1] = 1;
      v45[2] = 3;
      v16 = (char *)v45;
      do
      {
        v43[0] = 0;
        v43[1] = 1;
        v43[2] = 2;
        v17 = (char *)v43;
        v18 = 3LL * *(int *)v16;
        *(_QWORD *)&pclsid.Data1 = v18;
        do
        {
          v19 = 4 * (v18 + *(unsigned int *)v17);
          v20 = v7[v19 + 166];
          v21 = v7[v19 + 167];
          v37 = v21;
          if ( v20 )
          {
            v22 = v20 - 1;
            if ( v20 - 1 >= 0 )
            {
              do
              {
                if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                     (__int64)&v34,
                                     (_QWORD *)(v21 + 16LL * (unsigned int)v22)) == -1 )
                {
                  memcpy_0((void *)v23, (const void *)(v23 + 16), 16LL * (unsigned int)(v20 - v22 - 1));
                  --v20;
                }
                --v22;
                v21 = v37;
              }
              while ( v22 >= 0 );
              v18 = *(_QWORD *)&pclsid.Data1;
            }
            v7 = v6 + 2;
            LODWORD(v6[v19 + 168]) = v20;
          }
          v17 += 4;
        }
        while ( v17 != &v44 );
        v16 += 4;
      }
      while ( v16 != &v46 );
      v3 = v38;
    }
    *(_OWORD *)pvar = 0LL;
    v33 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v3 + 40LL))(
           v3,
           &PKEY_APO_SWFallback_ProcessingModes,
           pvar) >= 0
      && LOWORD(pvar[0]) == 4127 )
    {
      v24 = (unsigned int)pvar[1];
      if ( LODWORD(pvar[1]) )
      {
        v25 = 0LL;
        while ( (unsigned int)v25 < v24 )
        {
          pclsid = 0LL;
          v26 = CLSIDFromString(*(LPCOLESTR *)(v33 + 8 * v25), &pclsid);
          v27 = v26;
          if ( v26 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x310,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
              (const char *)(unsigned int)v26);
            PropVariantClear(pvar);
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v34);
            if ( v6 )
              std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
            return v27;
          }
          v28 = *(_QWORD *)&pclsid.Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
          if ( *(_QWORD *)&pclsid.Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
            v28 = *(_QWORD *)pclsid.Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
          if ( v28 )
          {
            v29 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                                       v6 + 257,
                                                       0LL);
            v30 = CAudioSignalProcessingModeArray::AddMultiple(v29, 1u, &pclsid);
            v31 = v30;
            if ( v30 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x314,
                (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
                (const char *)(unsigned int)v30);
              PropVariantClear(pvar);
              ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v34);
              if ( v6 )
                std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
              return v31;
            }
          }
          v25 = (unsigned int)(v25 + 1);
          v24 = (unsigned int)pvar[1];
        }
      }
    }
    PropVariantClear(pvar);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v34);
    goto LABEL_60;
  }
  v9 = 1;
  v11 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v11 >= v10 )
    {
      v7 = v6 + 2;
      v3 = v38;
      goto LABEL_25;
    }
    pclsid = 0LL;
    v12 = CLSIDFromString(*(LPCOLESTR *)(v33 + 8 * v11), &pclsid);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2CF,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)v12);
      PropVariantClear(pvar);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v34);
      if ( v6 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
      return v13;
    }
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((__int64)&v34, &pclsid) )
      break;
    v11 = (unsigned int)(v11 + 1);
    v10 = (unsigned int)pvar[1];
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D0,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
    (const char *)0x8007000ELL);
  PropVariantClear(pvar);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v34);
  if ( v6 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
  return 2147942414LL;
}
