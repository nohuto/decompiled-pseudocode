/*
 * XREFs of CmpAllocateParseContext @ 0x1407C9868
 * Callers:
 *     CmCreateKey @ 0x140AD24C0 (CmCreateKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmpInitializeParseContext @ 0x140913DE0 (CmpInitializeParseContext.c)
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
