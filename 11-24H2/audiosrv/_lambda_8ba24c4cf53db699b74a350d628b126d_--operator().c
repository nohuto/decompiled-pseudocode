/*
 * XREFs of _lambda_8ba24c4cf53db699b74a350d628b126d_::operator() @ 0x180131684
 * Callers:
 *     ?AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ @ 0x1800680B0 (-AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x180027D1C (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800313A0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x1800313F0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180032B00 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033924 (-IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x180035780 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180039630 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18003ADB4 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_8ba24c4cf53db699b74a350d628b126d_::operator()(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned __int64 v6; // r12
  _QWORD *v7; // r13
  unsigned __int64 v8; // r14
  int v9; // r15d
  __int64 SupportedConnectorModesInternal; // rsi
  int DefaultEffectChainClsids; // ebx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rbx
  GUID v17; // xmm6
  int v18; // r14d
  __int64 v19; // rax
  int OverridingChain; // esi
  int v21; // eax
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rax
  BOOL v25; // esi
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD v32[2]; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v33[2]; // [rsp+58h] [rbp-71h] BYREF
  SystemEffectDescriptor *v34; // [rsp+60h] [rbp-69h]
  __int64 v35; // [rsp+68h] [rbp-61h]
  _BYTE v36[56]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-21h]
  __int64 v38; // [rsp+B0h] [rbp-19h]
  GUID v39; // [rsp+B8h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+57h]

  v6 = a2;
  v38 = a3;
  v7 = *(_QWORD **)a1;
  v8 = a2;
  v34 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                    (unsigned __int64 *)(*(_QWORD *)a1 + 1440LL),
                                    a2);
  v9 = 0;
  v32[0] = 0LL;
  v32[1] = 0LL;
  SupportedConnectorModesInternal = EffectPack::GetSupportedConnectorModesInternal(v7, (unsigned int)v6, 1, 0);
  v35 = SupportedConnectorModesInternal;
  DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                               v34,
                               (struct CAudioSignalProcessingModeArray *)v32,
                               v33,
                               0LL);
  if ( DefaultEffectChainClsids < 0 )
  {
    v12 = 2950LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DefaultEffectChainClsids);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v32);
    v14 = *(_QWORD *)(a3 + 56);
    if ( v14 )
    {
      LOBYTE(v13) = v14 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v13);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return (unsigned int)DefaultEffectChainClsids;
  }
  if ( a5 <= 0 )
  {
LABEL_17:
    if ( (_DWORD)v6 != 1
      && !v9
      && (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModesInternal,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) != -1 )
    {
      v23 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
              v22,
              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      v24 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v36, a3);
      v25 = v23 != -1;
      v39 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                   (int)v34,
                                   (__int64)&v39,
                                   1,
                                   (int)&unk_18018F920,
                                   1,
                                   v25,
                                   v24);
      if ( DefaultEffectChainClsids < 0 )
      {
        v12 = 2981LL;
        goto LABEL_3;
      }
      v39 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      if ( !(unsigned int)EffectPack::IsAPOModeSupported(v7, 1LL, (__int128 *)&v39, v6) )
      {
        v29 = gsl::span<SystemEffectDescriptor,-1>::operator[](v7 + 182, v8);
        v37 = 0LL;
        v39 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                     v29,
                                     (__int64)&v39,
                                     0,
                                     0,
                                     2,
                                     v25,
                                     (__int64)v36);
        if ( DefaultEffectChainClsids < 0 )
        {
          v12 = 2987LL;
          goto LABEL_3;
        }
      }
    }
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v32);
    v31 = *(_QWORD *)(a3 + 56);
    if ( v31 )
    {
      LOBYTE(v30) = v31 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 32LL))(v31, v30);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return 0LL;
  }
  *(_QWORD *)v33 = a5;
  v16 = 0LL;
  while ( 1 )
  {
    v17 = *off_1801D8320[v16];
    v39 = v17;
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModesInternal,
                         &v39) == -1 )
    {
      v18 = 0;
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64)v32, &v39) == -1 )
        goto LABEL_15;
    }
    else
    {
      v18 = 1;
    }
    v19 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v36, a3);
    v39 = v17;
    OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                        (int)v34,
                        (__int64)&v39,
                        1,
                        (int)&unk_18018F920,
                        1,
                        v18,
                        v19);
    if ( OverridingChain < 0 )
      break;
    v39 = v17;
    if ( !(unsigned int)EffectPack::IsAPOModeSupported(v7, 1LL, (__int128 *)&v39, v6) )
    {
      v21 = gsl::span<SystemEffectDescriptor,-1>::operator[](v7 + 182, v6);
      v37 = 0LL;
      v39 = v17;
      OverridingChain = SystemEffectDescriptor::CreateOverridingChain(v21, (__int64)&v39, 0, 0, 2, v18, (__int64)v36);
      if ( OverridingChain < 0 )
      {
        v26 = 2967LL;
        goto LABEL_24;
      }
    }
    ++v9;
    SupportedConnectorModesInternal = v35;
LABEL_15:
    if ( ++v16 >= *(__int64 *)v33 )
    {
      v8 = v6;
      goto LABEL_17;
    }
  }
  v26 = 2961LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v26,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)OverridingChain);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v32);
  v28 = *(_QWORD *)(a3 + 56);
  if ( v28 )
  {
    LOBYTE(v27) = v28 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 32LL))(v28, v27);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return (unsigned int)OverridingChain;
}
