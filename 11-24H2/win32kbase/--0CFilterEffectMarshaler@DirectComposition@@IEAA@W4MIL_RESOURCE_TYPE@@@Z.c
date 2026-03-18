/*
 * XREFs of ??0CFilterEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14013934C
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140076C18 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14007311C (--0CEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler()
{
  __int64 v0; // rcx

  DirectComposition::CEffectMarshaler::CEffectMarshaler();
  *(_QWORD *)v0 = &DirectComposition::CFilterEffectMarshaler::`vftable';
  *(_DWORD *)(v0 + 72) = 0;
  *(_QWORD *)(v0 + 80) = 0LL;
  *(_QWORD *)(v0 + 88) = 0LL;
  *(_QWORD *)(v0 + 96) = 0LL;
  *(_DWORD *)(v0 + 104) = 0;
  return v0;
}
