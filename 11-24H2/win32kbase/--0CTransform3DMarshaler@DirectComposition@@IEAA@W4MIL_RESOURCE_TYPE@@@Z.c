/*
 * XREFs of ??0CTransform3DMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400730C4
 * Callers:
 *     ??0CTransformMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073070 (--0CTransformMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CMatrixTransform3DMarshaler@DirectComposition@@QEAA@XZ @ 0x14013E124 (--0CMatrixTransform3DMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14007311C (--0CEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *DirectComposition::CTransform3DMarshaler::CTransform3DMarshaler()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  DirectComposition::CEffectMarshaler::CEffectMarshaler();
  result = v0;
  *v0 = &DirectComposition::CTransformMarshaler::`vftable';
  return result;
}
