/*
 * XREFs of ExDestroyHandleTable @ 0x140972988
 * Callers:
 *     AlpcpAllocateMessageFromExtendedTables @ 0x140735C00 (AlpcpAllocateMessageFromExtendedTables.c)
 *     RtlDestroyAtomTable @ 0x14091D100 (RtlDestroyAtomTable.c)
 *     ObInitProcess @ 0x1409716EC (ObInitProcess.c)
 *     ObKillProcess @ 0x140972730 (ObKillProcess.c)
 * Callees:
 *     ExpFreeHandleTable @ 0x1409729AC (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x140972AE0 (ExpRemoveHandleTable.c)
 */

__int64 __fastcall ExDestroyHandleTable(PVOID P)
{
  ExpRemoveHandleTable();
  return ExpFreeHandleTable(P);
}
