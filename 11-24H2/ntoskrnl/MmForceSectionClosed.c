/*
 * XREFs of MmForceSectionClosed @ 0x140477460
 * Callers:
 *     <none>
 * Callees:
 *     MiForceSectionClosed @ 0x140315054 (MiForceSectionClosed.c)
 */

BOOLEAN __stdcall MmForceSectionClosed(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN DelayClose)
{
  int v3; // ebx
  int v4; // eax

  v3 = DelayClose != 0 ? 5 : 1;
  v4 = MiForceSectionClosed((__int64)SectionObjectPointer, DelayClose != 0 ? 5 : 1, 0);
  if ( !v4 )
    v4 = MiForceSectionClosed((__int64)SectionObjectPointer, v3 & 0xFC | 2u, 0);
  return v4 != 2;
}
