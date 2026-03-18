/*
 * XREFs of ??0CTransformMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073070
 * Callers:
 *     ??0CMatrixTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x140071398 (--0CMatrixTransformMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CManipulationTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x140072F1C (--0CManipulationTransformMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CTransform3DMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400730C4 (--0CTransform3DMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *DirectComposition::CTransformMarshaler::CTransformMarshaler()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  DirectComposition::CTransform3DMarshaler::CTransform3DMarshaler();
  result = v0;
  *v0 = &DirectComposition::CTransformMarshaler::`vftable';
  return result;
}
