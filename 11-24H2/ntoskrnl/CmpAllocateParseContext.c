/*
 * XREFs of CmpAllocateParseContext @ 0x1406F509C
 * Callers:
 *     CmpParseKey @ 0x14089F150 (CmpParseKey.c)
 *     CmOpenKey @ 0x1409E3DB0 (CmOpenKey.c)
 *     CmCreateKey @ 0x140A26874 (CmCreateKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     CmpInitializeParseContext @ 0x14092D400 (CmpInitializeParseContext.c)
 */

__int64 CmpAllocateParseContext()
{
  __int64 Pool; // rax
  __int64 v1; // rbx

  Pool = CmpAllocatePool(0x40uLL);
  v1 = Pool;
  if ( Pool )
    CmpInitializeParseContext(Pool);
  return v1;
}
