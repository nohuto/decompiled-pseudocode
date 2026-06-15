/*
 * XREFs of _lambda_337836fad6503ddf3ac4b1bf88bbe274_::operator() @ 0x180130D5C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_337836fad6503ddf3ac4b1bf88bbe274__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x1801398D0 (std--_Func_impl_no_alloc__lambda_337836fad6503ddf3ac4b1bf88bbe274__long_SystemEffec_ea_1801398D0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800313A0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x1800355D8 (-PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180039868 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18003A868 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18003A92C (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18003AFBC (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     _lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_::operator() @ 0x180054644 (_lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_--operator().c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18006F118 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800A158C (-LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MI.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _lambda_b22d32747e6e160a9ad72c43aac845ac_::operator() @ 0x180132420 (_lambda_b22d32747e6e160a9ad72c43aac845ac_--operator().c)
 *     ?IsInterleavedLoopbackSupported@CEndpointCharacteristics@@QEAAHXZ @ 0x1801358E8 (-IsInterleavedLoopbackSupported@CEndpointCharacteristics@@QEAAHXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_337836fad6503ddf3ac4b1bf88bbe274_::operator()(
        __int64 *a1,
        int *a2,
        SystemEffectChainDescriptor *a3)
{
  __int64 v4; // rax
  int DelayedAECInsertionPolicy; // ebx
  struct _AEC_POLICY_RESULTS *v8; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  struct EffectPack *v11; // rcx
  int v12; // ebx
  GUID *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  int updated; // r14d
  int v18; // ebx
  int v19; // ebx
  struct EffectPack *v20; // r13
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  struct EffectPack *v27; // rbx
  unsigned __int64 *v28; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  struct _GUID *v33; // rax
  struct EffectPack *v34; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v35; // edi
  struct _GUID v36; // xmm0
  int v37; // [rsp+30h] [rbp-50h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _AEC_POLICY_RESULTS *v39; // [rsp+48h] [rbp-38h]
  SystemEffectChainDescriptor *v40; // [rsp+50h] [rbp-30h]
  struct _GUID v41; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v37 = 0;
  v39 = 0LL;
  v4 = *a1;
  *(_OWORD *)pvar = 0LL;
  v40 = a3;
  DelayedAECInsertionPolicy = (*(__int64 (__fastcall **)(_QWORD, __int64 *, PROPVARIANT *))(**(_QWORD **)(*(_QWORD *)(v4 + 1584) + 72LL)
                                                                                          + 40LL))(
                                *(_QWORD *)(*(_QWORD *)(v4 + 1584) + 72LL),
                                a1 + 1,
                                pvar);
  if ( DelayedAECInsertionPolicy < 0 )
    goto LABEL_37;
  v8 = v39;
  if ( LOWORD(pvar[0]) != 65 || LODWORD(pvar[1]) != 68 || *(_DWORD *)v39 != 5 )
    goto LABEL_36;
  v9 = *a1;
  v10 = *(_QWORD *)(*a1 + 1584);
  v11 = (struct EffectPack *)*a1;
  v41 = (struct _GUID)*((_OWORD *)a1 + 6);
  DelayedAECInsertionPolicy = EffectPolicy::GetDelayedAECInsertionPolicy(
                                v11,
                                *(struct IPropertyStore **)(v10 + 72),
                                (struct SystemEffectDescriptor *)a2,
                                &v41,
                                (enum INBOX_AEC_INSERTION_POLICY *)&v37,
                                v39);
  if ( DelayedAECInsertionPolicy < 0 )
  {
LABEL_6:
    PropVariantClear(pvar);
    goto LABEL_37;
  }
  v12 = v37;
  if ( v37 == 2 )
  {
    if ( *((_DWORD *)a1 + 28) != 3
      || (unsigned int)CEndpointCharacteristics::IsInterleavedLoopbackSupported(*(CEndpointCharacteristics **)(v9 + 1584)) )
    {
      v13 = &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
    }
    else
    {
      v13 = &GUID_7ecead6d_6452_4ded_b567_7bb9947d7669;
    }
  }
  else
  {
    v13 = &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3;
  }
  v14 = *((int *)a1 + 28);
  v41 = *v13;
  v15 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(v9 + 1712), v14);
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       v15,
                       &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
  {
    if ( !v12 )
      goto LABEL_34;
    updated = lambda_b22d32747e6e160a9ad72c43aac845ac_::operator()(a1 + 15);
    if ( updated < 0 )
    {
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD50,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
  }
  if ( v12 )
  {
    v18 = v12 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          v20 = (struct EffectPack *)*a1;
          v21 = *((int *)a1 + 28);
          v22 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(*a1 + 1712), v21);
          v23 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v22, a1 + 12);
          updated = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                      (__int64)a2,
                      v40,
                      1u,
                      (__int64)&v41,
                      1,
                      v23 != -1);
          if ( updated < 0 )
          {
            PropVariantClear(pvar);
            goto LABEL_16;
          }
          v24 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)v20 + 248, v21);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v24, a1 + 12) != -1 )
          {
            v25 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)v20 + 214, v21);
            if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v25, (_OWORD *)a1 + 6) )
            {
LABEL_25:
              DelayedAECInsertionPolicy = -2147024882;
              goto LABEL_37;
            }
            v26 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)v20 + 248, v21);
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v26, a1 + 12);
          }
          goto LABEL_34;
        }
LABEL_36:
        PropVariantClear(pvar);
        DelayedAECInsertionPolicy = -2147418113;
        goto LABEL_37;
      }
    }
    DelayedAECInsertionPolicy = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                                  (__int64)a2,
                                  a3,
                                  1u,
                                  (__int64)&v41,
                                  2,
                                  0);
    if ( DelayedAECInsertionPolicy < 0 )
      goto LABEL_6;
    v27 = (struct EffectPack *)*a1;
    v28 = (unsigned __int64 *)(*a1 + 1712);
    v29 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v28, a2[12]);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v29, a1 + 12) != -1 )
    {
      v30 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)v27 + 248, *((int *)a1 + 28));
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v30, (_OWORD *)a1 + 6) )
        goto LABEL_25;
      v31 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v28, a2[12]);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v31, a1 + 12);
    }
    if ( *((_DWORD *)v8 + 16) == 8 )
    {
      v32 = *((_DWORD *)v27 + 528);
      if ( v32 )
      {
        *((_DWORD *)v27 + 528) = v32 - 1;
        *((_DWORD *)v40 + 4) = 1;
      }
    }
  }
LABEL_34:
  v33 = lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_::operator()((__int64)(a1 + 19), &v41);
  v34 = (struct EffectPack *)*a1;
  v35 = *((_DWORD *)a1 + 28);
  v36 = *v33;
  v41 = (struct _GUID)*((_OWORD *)a1 + 6);
  *(struct _GUID *)((char *)v8 + 44) = v36;
  LogAecEffectPolicyInsertion(
    *((const struct _tlgProvider_t **)v34 + 265),
    v8,
    *(const unsigned __int16 **)(*((_QWORD *)v34 + 198) + 48LL),
    &v41,
    v35);
  DelayedAECInsertionPolicy = CEndpointCharacteristics::PersistAECPolicy(
                                *((CEndpointCharacteristics **)v34 + 198),
                                v35,
                                (const struct _tagpropertykey *)(a1 + 1),
                                v8);
  PropVariantClear(pvar);
  if ( DelayedAECInsertionPolicy >= 0 )
    return 0LL;
LABEL_37:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD50,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)DelayedAECInsertionPolicy);
  return (unsigned int)DelayedAECInsertionPolicy;
}
