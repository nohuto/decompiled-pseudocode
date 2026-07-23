/*
 * XREFs of CmpAllocateParseContext @ 0x1406F309C
 * Callers:
 *     CmpParseKey @ 0x1408A77F0 (CmpParseKey.c)
 *     CmOpenKey @ 0x1409DE810 (CmOpenKey.c)
 *     CmCreateKey @ 0x140A1B2F4 (CmCreateKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmpInitializeParseContext @ 0x14092F540 (CmpInitializeParseContext.c)
 */

__int64 CmpAllocateParseContext()
{
  __int64 Pool; // rax
  __int64 v1; // rbx

  Pool = CmpAllocatePool(0x40uLL, 0x1D0uLL, 0x34364D43u);
  v1 = Pool;
  if ( Pool )
    CmpInitializeParseContext(Pool);
  return v1;
}
