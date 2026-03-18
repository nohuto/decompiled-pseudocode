/*
 * XREFs of ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1403AB104
 * Callers:
 *     ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x140184CDC (-SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x14025D540 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402D80F8 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1403AAD74 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 * Callees:
 *     ?GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x14004207C (-GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1400420F0 (-GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1400644D4 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

void __fastcall DMMVIDPNPRESENTPATH::Serialize(DMMVIDPNPRESENTPATH *this, struct _D3DKMDT_VIDPN_PRESENT_PATH *const a2)
{
  UINT MacroVisionTriggerBits; // esi
  __int64 v5; // rax
  __int128 *v6; // rax
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v7; // xmm1_8
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]

  MacroVisionTriggerBits = 0;
  a2->VidPnSourceId = *(_DWORD *)(*((_QWORD *)this + 11) + 24LL);
  a2->VidPnTargetId = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  a2->ImportanceOrdinal = *((_DWORD *)this + 26);
  a2->ContentTransformation.Scaling = *((_DWORD *)this + 28);
  a2->ContentTransformation.Rotation = *((_DWORD *)this + 29);
  a2->VisibleFromActiveTLOffset = (D3DKMDT_2DOFFSET)*((_QWORD *)this + 16);
  a2->VisibleFromActiveBROffset = (D3DKMDT_2DOFFSET)*((_QWORD *)this + 17);
  a2->VidPnTargetColorBasis = *((_DWORD *)this + 36);
  a2->VidPnTargetColorCoeffDynamicRanges = *(D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES *)((char *)this + 148);
  a2->Content = *((_DWORD *)this + 41);
  v5 = *((_QWORD *)this + 23);
  if ( v5 )
  {
    v8 = *(_OWORD *)(v5 + 16);
    v9 = *(_QWORD *)(v5 + 32);
    v6 = &v10;
    v10 = v8;
    v11 = v9;
  }
  else
  {
    v6 = &v12;
    v12 = *(_OWORD *)&g_DefaultGammaRamp.Type;
    v13 = 0LL;
  }
  v7 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)*((_QWORD *)v6 + 2);
  *(_OWORD *)&a2->GammaRamp.Type = *v6;
  a2->GammaRamp.Data.pRgb256x3x16 = v7;
  a2->CopyProtection.CopyProtectionSupport = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)*((_DWORD *)this + 42);
  a2->CopyProtection.CopyProtectionType = *((_DWORD *)this + 43);
  DMMVIDPNPRESENTPATH::GetScalingSupport(this, &a2->ContentTransformation.ScalingSupport);
  DMMVIDPNPRESENTPATH::GetRotationSupport(this, &a2->ContentTransformation.RotationSupport);
  if ( *((_DWORD *)this + 43) == 2 )
    MacroVisionTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits(this);
  a2->CopyProtection.APSTriggerBits = MacroVisionTriggerBits;
  memset(a2->CopyProtection.OEMCopyProtection, 0, sizeof(a2->CopyProtection.OEMCopyProtection));
}
