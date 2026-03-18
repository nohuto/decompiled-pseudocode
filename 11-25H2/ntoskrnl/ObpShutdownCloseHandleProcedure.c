/*
 * XREFs of ObpShutdownCloseHandleProcedure @ 0x140737EC0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1403A9600 (DbgPrint.c)
 *     ExGetHandlePointer @ 0x140431FD0 (ExGetHandlePointer.c)
 *     ExUnlockHandleTableEntry @ 0x140972390 (ExUnlockHandleTableEntry.c)
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
