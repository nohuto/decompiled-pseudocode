/*
 * XREFs of ExDestroyHandleTable @ 0x1409E5220
 * Callers:
 *     AlpcpAllocateMessageFromExtendedTables @ 0x140741C20 (AlpcpAllocateMessageFromExtendedTables.c)
 *     ObInitProcess @ 0x14093BD38 (ObInitProcess.c)
 *     RtlDestroyAtomTable @ 0x1409E4ED0 (RtlDestroyAtomTable.c)
 *     ObKillProcess @ 0x1409E4FC8 (ObKillProcess.c)
 * Callees:
 *     ExpFreeHandleTable @ 0x1409E5244 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1409E5378 (ExpRemoveHandleTable.c)
 */

__int64 __fastcall ExDestroyHandleTable(PVOID P)
{
  ExpRemoveHandleTable();
  return ExpFreeHandleTable(P);
}
