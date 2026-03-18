/*
 * XREFs of ?EmitUpdateCommands@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140236720
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F94B0 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetAttenuation1@CCompositionPointLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140236328 (-EmitSetAttenuation1@CCompositionPointLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetAttenuation2@CCompositionPointLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1402363A0 (-EmitSetAttenuation2@CCompositionPointLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetColor@CCompositionPointLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140236418 (-EmitSetColor@CCompositionPointLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCoordinateSpace@CCompositionPointLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140236498 (-EmitSetCoordinateSpace@CCompositionPointLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetIntensity@CCompositionPointLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14023651C (-EmitSetIntensity@CCompositionPointLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMaxAttenuationCutoff@CCompositionPointLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140236598 (-EmitSetMaxAttenuationCutoff@CCompositionPointLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBa.c)
 *     ?EmitSetMinAttenuationCutoff@CCompositionPointLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140236614 (-EmitSetMinAttenuationCutoff@CCompositionPointLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBa.c)
 *     ?EmitSetOffset@CCompositionPointLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140236690 (-EmitSetOffset@CCompositionPointLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CCompositionPointLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionPointLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl
  char *v5; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x100) != 0 )
    {
      v7 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
        return v4;
      v5 = (char *)v7;
      *(_DWORD *)v7 = 16;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 3) = 0;
      *((_DWORD *)v5 + 1) = 89;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 24);
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    if ( DirectComposition::CCompositionPointLightMarshaler::EmitSetAttenuation1(this, a2)
      && DirectComposition::CCompositionPointLightMarshaler::EmitSetAttenuation2(this, a2)
      && DirectComposition::CCompositionPointLightMarshaler::EmitSetColor(this, a2)
      && DirectComposition::CCompositionPointLightMarshaler::EmitSetCoordinateSpace(this, a2)
      && DirectComposition::CCompositionPointLightMarshaler::EmitSetOffset(this, a2)
      && DirectComposition::CCompositionPointLightMarshaler::EmitSetIntensity(this, a2)
      && DirectComposition::CCompositionPointLightMarshaler::EmitSetMinAttenuationCutoff(this, a2)
      && DirectComposition::CCompositionPointLightMarshaler::EmitSetMaxAttenuationCutoff(this, a2) )
    {
      return 1;
    }
  }
  return v4;
}
