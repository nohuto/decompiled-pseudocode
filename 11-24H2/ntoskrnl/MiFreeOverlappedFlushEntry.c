/*
 * XREFs of MiFreeOverlappedFlushEntry @ 0x140371070
 * Callers:
 *     MmFlushSection @ 0x140240CC4 (MmFlushSection.c)
 *     MiFlushComplete @ 0x140370EF0 (MiFlushComplete.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiFlushRelease @ 0x1403710F0 (MiFlushRelease.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFreeOverlappedFlushEntry(_QWORD *P)
{
  struct _KEVENT *v1; // rdi
  void *v3; // rcx

  v1 = (struct _KEVENT *)P[4];
  MiFlushRelease(*(_QWORD *)*P, *P, P[1]);
  v3 = (void *)P[5];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  *(_DWORD *)P[3] = *((_DWORD *)P + 5);
  if ( *((int *)P + 5) < 0 )
    *(_QWORD *)(P[3] + 8LL) = 0LL;
  ExFreePoolWithTag(P, 0);
  return KeSetEvent(v1, 0, 0);
}
