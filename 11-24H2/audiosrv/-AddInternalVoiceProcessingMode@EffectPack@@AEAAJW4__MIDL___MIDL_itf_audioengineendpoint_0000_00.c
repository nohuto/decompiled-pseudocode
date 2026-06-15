/*
 * XREFs of ?AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x18008BC98
 * Callers:
 *     ?AddOsProcessingModeSupport@EffectPack@@AEAAJXZ @ 0x18008C044 (-AddOsProcessingModeSupport@EffectPack@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReadFormatProperty@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@AEAV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@Z @ 0x18002C0F0 (-ReadFormatProperty@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@AEAV-$unique_struct@UtagPROPVAR.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800313A0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180032B00 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x180035780 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180039630 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z @ 0x1800397A0 (-AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18003A868 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18003AFBC (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18004D54C (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x180054928 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     ??A?$span@H$0?0@gsl@@QEBAAEAH_K@Z @ 0x18005CC64 (--A-$span@H$0-0@gsl@@QEBAAEAH_K@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18006F118 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x180132A2C (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EffectPack::AddInternalVoiceProcessingMode(unsigned __int64 *a1, __int64 a2, _OWORD *a3, int a4)
{
  _DWORD *v7; // rax
  unsigned __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // r13d
  __int64 v11; // rax
  int v12; // r15d
  _DWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  int OverridingChain; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 *v25; // rdi
  int v26; // eax
  SystemEffectDescriptor *v27; // rax
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-69h] BYREF
  __int64 v29; // [rsp+58h] [rbp-59h]
  _BYTE v30[56]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-11h]
  PROPVARIANT v32[2]; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+7h]
  struct _tagpropertykey v34; // [rsp+C8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  if ( (*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)a1[198] + 56LL))(a1[198]) == 1 )
  {
    v7 = (_DWORD *)gsl::span<int,-1>::operator[](a1 + 202, 0LL);
    v8 = a1 + 214;
    if ( *v7 )
    {
      v20 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v8, 0LL);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           v20,
                           &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
      {
        v21 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](a1 + 214, 0LL);
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
                              v21,
                              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
        {
          OverridingChain = -2147418113;
          v15 = 3094LL;
          goto LABEL_6;
        }
        v22 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](a1 + 214, 0LL);
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                              v22,
                              &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
        {
          v15 = 3095LL;
          goto LABEL_5;
        }
        v23 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](a1 + 236, 0LL);
        if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                              v23,
                              v24,
                              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
        {
          v15 = 3097LL;
          goto LABEL_5;
        }
      }
    }
    else
    {
      v9 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v8, 0LL);
      v10 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
              v9,
              &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf);
      v11 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](a1 + 214, 0LL);
      v12 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
              v11,
              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      *(_DWORD *)gsl::span<int,-1>::operator[](a1 + 202, 0LL) = 1;
      v13 = (_DWORD *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](a1 + 214, 0LL);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v13);
      v14 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](a1 + 214, 0LL);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            v14,
                            &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
      {
        v15 = 3070LL;
LABEL_5:
        OverridingChain = -2147024882;
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)OverridingChain);
        return (unsigned int)OverridingChain;
      }
      *(_DWORD *)gsl::span<int,-1>::operator[](a1 + 219, 0LL) = 1;
      if ( v10 == -1 )
      {
        v19 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](a1 + 236, 0LL);
        if ( v12 == -1 )
        {
          if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                                v19,
                                v18,
                                &GUID_00000000_0000_0000_0000_000000000000) )
          {
            v15 = 3085LL;
            goto LABEL_5;
          }
        }
        else if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                                   v19,
                                   v18,
                                   &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
        {
          v15 = 3081LL;
          goto LABEL_5;
        }
      }
    }
    memset(&v34, 0, sizeof(v34));
    *(GUID *)pvar = GUID_461d14af_a88e_4be1_a809_d8bfd44b0121;
    if ( (int)GetProcessingModeSpecificMixFormatKey((struct _GUID *)pvar, 0, &v34) >= 0 )
    {
      *(_OWORD *)v32 = 0LL;
      v33 = 0LL;
      ReadFormatProperty(*(_QWORD *)(a1[198] + 72), (__int64)&v34, v32);
      if ( LOWORD(v32[0]) == 65 && (*(_WORD *)(v33 + 2) != 1 || *(_DWORD *)(v33 + 4) != 16000) )
      {
        *(_OWORD *)pvar = 0LL;
        v29 = 0LL;
        (*(void (__fastcall **)(_QWORD, struct _tagpropertykey *, PROPVARIANT *))(**(_QWORD **)(a1[198] + 72) + 48LL))(
          *(_QWORD *)(a1[198] + 72),
          &v34,
          pvar);
        PropVariantClear(pvar);
      }
      PropVariantClear(v32);
    }
    *(GUID *)v32 = GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
    v25 = a1 + 182;
    v26 = gsl::span<SystemEffectDescriptor,-1>::operator[](a1 + 182, 0LL);
    v31 = 0LL;
    *(_OWORD *)pvar = *a3;
    OverridingChain = SystemEffectDescriptor::CreateOverridingChain(v26, (__int64)pvar, 1, (int)v32, 2, 0, (__int64)v30);
    if ( OverridingChain < 0 )
    {
      v15 = 3137LL;
      goto LABEL_6;
    }
    if ( !a4 )
    {
      v27 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](v25, 0LL);
      *(_OWORD *)v32 = *a3;
      OverridingChain = SystemEffectDescriptor::AddEnhancementsDisabledProcessingMode(v27, (struct _GUID *)v32);
      if ( OverridingChain < 0 )
      {
        v15 = 3142LL;
        goto LABEL_6;
      }
    }
  }
  return 0LL;
}
