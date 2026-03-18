/*
 * XREFs of VfPoolCheckIncorrectFreeApi @ 0x140B9A3D8
 * Callers:
 *     ViIovExFreePoolWithTag_Entry @ 0x1406A4010 (ViIovExFreePoolWithTag_Entry.c)
 *     ViIovExFreePool_Entry @ 0x1406A4030 (ViIovExFreePool_Entry.c)
 * Callees:
 *     VfIrpDatabaseCheckExFreePool @ 0x140BA3E64 (VfIrpDatabaseCheckExFreePool.c)
 */

__int64 __fastcall VfPoolCheckIncorrectFreeApi(ULONG_PTR a1)
{
  return VfIrpDatabaseCheckExFreePool(a1);
}
