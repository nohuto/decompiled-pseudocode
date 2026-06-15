/*
 * XREFs of ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x18006D6EC
 * Callers:
 *     ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180037D2C (-DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x180071BF8 (-DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?DeriveStreamFormatFromMixFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18013365C (-DeriveStreamFormatFromMixFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoin.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ValidateAPOInputFormat(struct IAudioMediaType *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  double v4; // xmm1_8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a1->lpVtbl->GetAudioFormat)(a1);
  if ( !v1 )
  {
    v2 = 7672LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x88890008LL);
    return 2290679816LL;
  }
  v4 = (double)*(int *)(v1 + 4);
  if ( v4 > 384000.0 )
  {
    v2 = 7675LL;
    goto LABEL_3;
  }
  if ( v4 < 10.0 )
  {
    v2 = 7676LL;
    goto LABEL_3;
  }
  if ( *(_WORD *)(v1 + 2) > 0x1000u )
  {
    v2 = 7677LL;
    goto LABEL_3;
  }
  if ( !*(_WORD *)(v1 + 2) )
  {
    v2 = 7678LL;
    goto LABEL_3;
  }
  return 0LL;
}
