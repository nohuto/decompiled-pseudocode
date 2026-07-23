/*
 * XREFs of ExDestroyHandleTable @ 0x1409DFC80
 * Callers:
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14073FB50 (AlpcpAllocateMessageFromExtendedTables.c)
 *     ObInitProcess @ 0x14094D010 (ObInitProcess.c)
 *     RtlDestroyAtomTable @ 0x1409DF930 (RtlDestroyAtomTable.c)
 *     ObKillProcess @ 0x1409DFA28 (ObKillProcess.c)
 * Callees:
 *     ExpFreeHandleTable @ 0x1409DFCA4 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1409DFDD8 (ExpRemoveHandleTable.c)
 */

__int64 __fastcall ExDestroyHandleTable(PVOID P)
{
  ExpRemoveHandleTable();
  return ExpFreeHandleTable(P);
}
