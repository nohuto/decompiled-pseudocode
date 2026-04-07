/*
 * XREFs of ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x18003D564
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003D11C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18003D43C (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseResources@CSecondaryWindowRepresentation@@AEAAXW4WindowFramePart@1@@Z @ 0x18003D598 (-ReleaseResources@CSecondaryWindowRepresentation@@AEAAXW4WindowFramePart@1@@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::ReleaseAllResources(CSecondaryWindowRepresentation *this)
{
  unsigned int i; // ebx

  for ( i = 0; i < 5; ++i )
    CSecondaryWindowRepresentation::ReleaseResources(this, i);
}
