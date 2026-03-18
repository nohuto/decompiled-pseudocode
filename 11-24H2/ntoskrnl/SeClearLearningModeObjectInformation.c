/*
 * XREFs of SeClearLearningModeObjectInformation @ 0x140408FE0
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x1404323F0 (RtlpAllowsLowBoxAccess.c)
 *     ObReferenceObjectByName @ 0x14083F230 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x1408679A4 (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByNameEx @ 0x14089BB40 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
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
