/*
 * XREFs of PiUEventFreeEventEntry @ 0x14096741C
 * Callers:
 *     PiUEventDereferenceEventEntry @ 0x1409673BC (PiUEventDereferenceEventEntry.c)
 *     PiUEventNotifyUserMode @ 0x14096D4D4 (PiUEventNotifyUserMode.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventFreeEventEntry(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)P[3];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x59706E50u);
  v3 = (void *)P[2];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x59706E50u);
  v4 = (void *)P[6];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x59706E50u);
  ExFreePoolWithTag(P, 0x59706E50u);
}
