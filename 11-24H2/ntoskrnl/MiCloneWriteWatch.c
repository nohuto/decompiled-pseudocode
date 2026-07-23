/*
 * XREFs of MiCloneWriteWatch @ 0x140682328
 * Callers:
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

void *__fastcall MiCloneWriteWatch(__int64 a1)
{
  int v1; // edx
  __int64 v2; // r8
  unsigned __int64 LockedVadEvent; // rax
  __int64 v4; // r9

  MiLocateLockedVadEvent(a1, 4);
  LockedVadEvent = MiLocateLockedVadEvent(v2, v1);
  return memmove(
           *(void **)(LockedVadEvent + 24),
           *(const void **)(v4 + 24),
           (unsigned __int64)(*(_QWORD *)(LockedVadEvent + 16) + 7LL) >> 3);
}
