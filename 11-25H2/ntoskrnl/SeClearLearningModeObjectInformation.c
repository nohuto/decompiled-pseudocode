/*
 * XREFs of SeClearLearningModeObjectInformation @ 0x140401830
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x140435DDC (RtlpAllowsLowBoxAccess.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     ObReferenceObjectByNameEx @ 0x140914400 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140915290 (ObReferenceObjectByName.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 */

void SeClearLearningModeObjectInformation()
{
  struct _KTHREAD *CurrentThread; // rcx
  int v1; // eax
  struct _LIST_ENTRY *Blink; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( KeGetCurrentIrql() )
    v1 = 2;
  else
    v1 = KeGetCurrentThread()->ApcState.InProgressFlags & 1;
  Blink = CurrentThread[1].WaitBlock[1].WaitListEntry.Blink;
  if ( Blink )
  {
    if ( LODWORD(Blink->Blink) == v1 )
    {
      CurrentThread[1].WaitBlock[1].WaitListEntry.Blink = Blink->Flink;
      if ( Blink[2].Flink )
      {
        if ( Blink[3].Flink )
          RtlFreeAnsiString((PUNICODE_STRING)&Blink[2].Blink);
      }
    }
  }
}
