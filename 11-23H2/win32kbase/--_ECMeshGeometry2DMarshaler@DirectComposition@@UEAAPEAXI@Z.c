/*
 * XREFs of ??_ECMeshGeometry2DMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C020DEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CMeshGeometry2DMarshaler@DirectComposition@@UEAA@XZ @ 0x1C020D9EC (--1CMeshGeometry2DMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CMeshGeometry2DMarshaler *__fastcall DirectComposition::CMeshGeometry2DMarshaler::`vector deleting destructor'(
        DirectComposition::CMeshGeometry2DMarshaler *this,
        char a2)
{
  DirectComposition::CMeshGeometry2DMarshaler::~CMeshGeometry2DMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
