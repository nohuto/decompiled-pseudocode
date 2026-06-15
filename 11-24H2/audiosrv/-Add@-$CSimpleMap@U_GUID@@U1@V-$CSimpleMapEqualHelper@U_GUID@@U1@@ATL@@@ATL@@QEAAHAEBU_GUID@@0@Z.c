/*
 * XREFs of ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x180132A2C
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005C46C (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x18008BC98 (-AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     _lambda_b22d32747e6e160a9ad72c43aac845ac_::operator() @ 0x180132420 (_lambda_b22d32747e6e160a9ad72c43aac845ac_--operator().c)
 *     ?EnsureRawSupportForBtleMic@EffectPack@@AEAAJXZ @ 0x180133E08 (-EnsureRawSupportForBtleMic@EffectPack@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
        __int64 *a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  GUID *v10; // rcx
  _OWORD *v11; // r8

  v5 = _o__recalloc(*a1, *((_DWORD *)a1 + 4) + 1, 16LL);
  if ( !v5 )
    return 0LL;
  v6 = a1[1];
  *a1 = v5;
  v7 = _o__recalloc(v6, *((_DWORD *)a1 + 4) + 1, 16LL);
  if ( !v7 )
    return 0LL;
  v8 = *a1;
  v9 = 16LL * *((int *)a1 + 4);
  a1[1] = v7;
  v10 = (GUID *)(v9 + v8);
  if ( v10 )
    *v10 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v11 = (_OWORD *)(v9 + a1[1]);
  if ( v11 )
    *v11 = *a3;
  ++*((_DWORD *)a1 + 4);
  return 1LL;
}
