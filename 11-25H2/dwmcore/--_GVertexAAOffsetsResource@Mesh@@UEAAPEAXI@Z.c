/*
 * XREFs of ??_GVertexAAOffsetsResource@Mesh@@UEAAPEAXI@Z @ 0x1801FA5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

Mesh::VertexAAOffsetsResource *__fastcall Mesh::VertexAAOffsetsResource::`scalar deleting destructor'(
        Mesh::VertexAAOffsetsResource *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 24LL);
    else
      operator delete(this);
  }
  return this;
}
