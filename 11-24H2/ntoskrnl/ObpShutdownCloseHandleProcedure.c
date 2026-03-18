/*
 * XREFs of ObpShutdownCloseHandleProcedure @ 0x140743EE0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1402CB260 (DbgPrint.c)
 *     ExGetHandlePointer @ 0x1404275E0 (ExGetHandlePointer.c)
 *     ExUnlockHandleTableEntry @ 0x14093D890 (ExUnlockHandleTableEntry.c)
 */

char __fastcall ObpShutdownCloseHandleProcedure(__int64 a1, __int64 *a2, int a3, _DWORD *a4)
{
  unsigned __int64 HandlePointer; // rbx

  HandlePointer = ExGetHandlePointer(a2);
  ExUnlockHandleTableEntry(a1, a2);
  DbgPrint("\tFound object %p(handle %08lx)\n", (const void *)(HandlePointer + 48), a3);
  ++*a4;
  return 0;
}
