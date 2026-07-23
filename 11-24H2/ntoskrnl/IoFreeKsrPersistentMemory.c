/*
 * XREFs of IoFreeKsrPersistentMemory @ 0x140718A80
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoFreeKsrPersistentMemory(char *P, __int64 a2, __int64 a3)
{
  struct _MDL *v4; // rdx
  void *v5; // rcx
  void *v6; // rcx

  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  LOBYTE(a3) = 1;
  KsrFreePersistedMemoryBlock(P + 16, *((_QWORD *)P + 4), a3);
  v4 = (struct _MDL *)*((_QWORD *)P + 1);
  if ( v4 )
  {
    v5 = (void *)*((_QWORD *)P + 5);
    if ( v5 )
      MmUnmapLockedPages(v5, v4);
    ExFreePoolWithTag(*((PVOID *)P + 1), 0x61706E50u);
  }
  v6 = (void *)*((_QWORD *)P + 6);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x61706E50u);
  ExFreePoolWithTag(P, 0x61706E50u);
  return 0LL;
}
