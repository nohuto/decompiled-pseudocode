/*
 * XREFs of ??0CEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14007311C
 * Callers:
 *     ??0CTransform3DMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400730C4 (--0CTransform3DMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CFilterEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14013934C (--0CFilterEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ??0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14007321C (--0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *DirectComposition::CEffectMarshaler::CEffectMarshaler()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  DirectComposition::CPropertyChangeResourceMarshaler::CPropertyChangeResourceMarshaler();
  result = v0;
  *v0 = &DirectComposition::CTransformMarshaler::`vftable';
  return result;
}
