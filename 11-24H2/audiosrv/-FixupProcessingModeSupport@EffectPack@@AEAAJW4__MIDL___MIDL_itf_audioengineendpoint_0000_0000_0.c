/*
 * XREFs of ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180038F98
 * Callers:
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x1800A0DA4 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800313A0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180032B00 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x180035780 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?GetFilteredProcessingModesForStreaming@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4ApoType@@_NAEAVCAudioSignalProcessingModeArray@@@Z @ 0x180039554 (-GetFilteredProcessingModesForStreaming@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x1800397E0 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180039C00 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18003A494 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003A750 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18003A868 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?AposRegisteredAsLfxGfx@EffectPackConfiguration@@QEBA_NXZ @ 0x18003A90C (-AposRegisteredAsLfxGfx@EffectPackConfiguration@@QEBA_NXZ.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z @ 0x18014AFA0 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall EffectPack::FixupProcessingModeSupport(EffectPack *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // r14
  unsigned int v7; // r15d
  int v8; // edx
  SystemEffectDescriptor *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  SystemEffectDescriptor *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // r12d
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rdx
  __int64 v23; // rax
  int FilteredProcessingModesForStreaming; // eax
  _QWORD *v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // r15d
  __int64 v28; // r12
  unsigned int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // r15d
  int v38; // eax
  __int64 v39; // rdx
  SystemEffectDescriptor *v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  SystemEffectDescriptor *v43; // rax
  unsigned int i; // ebx
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // r9
  __int64 v48; // rdx
  int v49; // eax
  int OverridingChain; // eax
  __int64 v51; // [rsp+30h] [rbp-61h]
  void *v52[2]; // [rsp+48h] [rbp-49h] BYREF
  void *v53; // [rsp+58h] [rbp-39h] BYREF
  __int64 v54; // [rsp+60h] [rbp-31h]
  void *Block[2]; // [rsp+68h] [rbp-29h] BYREF
  struct _GUID v56; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v57[56]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v58; // [rsp+C0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v4 = (int)a2;
  v6 = (int)a2;
  if ( (unsigned __int64)(int)a2 >= *((_QWORD *)this + 202) )
    goto LABEL_68;
  v7 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 203) + 4LL * (int)a2) )
  {
    if ( (a2 & 0xFFFFFFFC) != 0 || (_DWORD)a2 == 2 )
      return 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v16 = 96LL * (int)a2;
    v17 = *((_QWORD *)this + 196);
    v18 = *(_DWORD *)(v17 + v16 + 1328);
    v19 = *(_QWORD *)(v17 + v16 + 1336);
    v20 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    v21 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    while ( v7 < v18 )
    {
      v22 = (_QWORD *)(v19 + 16LL * v7);
      v23 = *v22 - v21;
      if ( *v22 == v21 )
        v23 = v22[1] - v20;
      if ( v23 )
      {
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v53, v22) )
        {
          v11 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4D3,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x8007000ELL);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xDC8,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x8007000ELL);
          goto LABEL_64;
        }
        v20 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        v21 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      }
      ++v7;
    }
    v52[0] = 0LL;
    v52[1] = 0LL;
    LOBYTE(a4) = *((_BYTE *)this + 1592);
    FilteredProcessingModesForStreaming = EffectPack::GetFilteredProcessingModesForStreaming(
                                            this,
                                            (unsigned int)v4,
                                            1LL,
                                            a4,
                                            v52);
    v11 = FilteredProcessingModesForStreaming;
    if ( FilteredProcessingModesForStreaming < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDCC,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)FilteredProcessingModesForStreaming);
      goto LABEL_63;
    }
    Block[0] = 0LL;
    Block[1] = 0LL;
    v26 = *((_QWORD *)this + 196);
    v27 = *(_DWORD *)(v16 + v26 + 1392);
    v28 = *(_QWORD *)(v16 + v26 + 1400);
    v29 = 0;
    v30 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    v31 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    while ( v29 < v27 )
    {
      v25 = (_QWORD *)(v28 + 16LL * v29);
      v32 = *v25 - v31;
      if ( *v25 == v31 )
        v32 = v25[1] - v30;
      if ( v32 )
      {
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(Block, v25) )
        {
          v11 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4D3,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x8007000ELL);
          v33 = 3536LL;
          goto LABEL_34;
        }
        v30 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        v31 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      }
      ++v29;
    }
    if ( v6 < *((_QWORD *)this + 180) )
    {
      v34 = *((_QWORD *)this + 196);
      v35 = *(_QWORD *)(v16 + v34 + 1320);
      v36 = *(unsigned int *)(v16 + v34 + 1312);
      v37 = v54;
      v51 = v16 + *((_QWORD *)this + 181) + 16LL;
      if ( (int)v54 <= 0 )
      {
        v38 = SystemEffectChainDescriptor::CreateEffectChain(&v53, 0LL, 0LL, (unsigned int)v36, v35, v51);
        v11 = v38;
        if ( v38 < 0 )
        {
          v39 = 166LL;
LABEL_46:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v39,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v38);
          v33 = 3541LL;
LABEL_34:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v33,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)v11);
          if ( Block[0] )
            free(Block[0]);
          if ( v52[0] )
            free(v52[0]);
          if ( v53 )
            free(v53);
          return v11;
        }
      }
      else
      {
        v38 = SystemEffectChainDescriptor::CreateEffectChain(&v53, v36, v35, 0LL, 0LL, v51);
        v11 = v38;
        if ( v38 < 0 )
        {
          v39 = 161LL;
          goto LABEL_46;
        }
      }
      v40 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                        (unsigned __int64 *)this + 182,
                                        v6);
      v41 = SystemEffectDescriptor::SetDefaultEffectChain(
              v40,
              (struct CAudioSignalProcessingModeArray *)v52,
              *(_DWORD *)(96 * (v6 + 14) + *((_QWORD *)this + 196)),
              *(const struct _GUID **)(v16 + *((_QWORD *)this + 196) + 1352));
      v11 = v41;
      if ( v41 >= 0 )
      {
        v43 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                          (unsigned __int64 *)this + 184,
                                          v6);
        v41 = SystemEffectDescriptor::SetDefaultEffectChain(
                v43,
                (struct CAudioSignalProcessingModeArray *)Block,
                *(_DWORD *)(v16 + *((_QWORD *)this + 196) + 1376),
                *(const struct _GUID **)(v16 + *((_QWORD *)this + 196) + 1384));
        v11 = v41;
        if ( v41 >= 0 )
        {
          *(_QWORD *)&v56.Data1 = 0LL;
          *(_QWORD *)v56.Data4 = 0LL;
          for ( i = 0; (int)i < v37; ++i )
          {
            v45 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v53, i);
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64)v52, v45) == -1 )
            {
              v46 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v53, i);
              if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v56, v46) )
              {
                v11 = -2147024882;
                v47 = 2147942414LL;
                v48 = 3566LL;
LABEL_61:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v48,
                  (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                  (const char *)v47);
                ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v56);
                goto LABEL_62;
              }
            }
          }
          if ( *(int *)v56.Data4 > 0 )
          {
            v49 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 182, v6);
            v58 = 0LL;
            OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                                v49,
                                (unsigned int)&v56,
                                0,
                                0,
                                2,
                                1,
                                (__int64)v57);
            v11 = OverridingChain;
            if ( OverridingChain < 0 )
            {
              v47 = (unsigned int)OverridingChain;
              v48 = 3573LL;
              goto LABEL_61;
            }
          }
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v56);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(Block);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v52);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v53);
          return 0LL;
        }
        v42 = 3549LL;
      }
      else
      {
        v42 = 3545LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v42,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v41);
LABEL_62:
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(Block);
LABEL_63:
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v52);
LABEL_64:
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v53);
      return v11;
    }
    _o_terminate(v30, v25);
LABEL_68:
    _o_terminate(this, a2);
    __debugbreak();
    JUMPOUT(0x18003954ELL);
  }
  if ( (_DWORD)a2 != 3
    && EffectPackConfiguration::AposRegisteredAsLfxGfx(*((EffectPackConfiguration **)this + 196))
    && !v8 )
  {
    v9 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 180, v4);
    v10 = *((_QWORD *)this + 196);
    v56 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v11 = SystemEffectDescriptor::SetDefaultEffectChain(
            v9,
            &v56,
            *(_DWORD *)(v10 + 1792),
            *(const struct _GUID **)(v10 + 1800));
    if ( (v11 & 0x80000000) != 0 )
    {
      v12 = 3516LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v11);
      return v11;
    }
    v14 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 182, v6);
    v15 = *((_QWORD *)this + 196);
    v56 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v11 = SystemEffectDescriptor::SetDefaultEffectChain(
            v14,
            &v56,
            *(_DWORD *)(v15 + 1808),
            *(const struct _GUID **)(v15 + 1816));
    if ( (v11 & 0x80000000) != 0 )
    {
      v12 = 3517LL;
      goto LABEL_8;
    }
  }
  return 0LL;
}
