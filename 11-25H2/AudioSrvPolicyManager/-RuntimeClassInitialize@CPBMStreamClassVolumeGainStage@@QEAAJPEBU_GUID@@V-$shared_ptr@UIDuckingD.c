/*
 * XREFs of ?RuntimeClassInitialize@CPBMStreamClassVolumeGainStage@@QEAAJPEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x18003107C
 * Callers:
 *     ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x18001DC10 (--$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V-$shared_ptr@UIDuckingDescr.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D180 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall CPBMStreamClassVolumeGainStage::RuntimeClassInitialize(__int64 a1, __int128 *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v7; // rdx
  std::_Ref_count_base *v8; // rcx
  __int128 v9; // xmm0
  std::_Ref_count_base *v10; // rcx

  v3 = a3[1];
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  v7 = a3[1];
  *(_QWORD *)(a1 + 56) = *a3;
  v8 = *(std::_Ref_count_base **)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v7;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v9 = *a2;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 16) = v9;
  v10 = (std::_Ref_count_base *)a3[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return 0LL;
}
