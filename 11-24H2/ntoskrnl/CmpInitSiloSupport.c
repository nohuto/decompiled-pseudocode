/*
 * XREFs of CmpInitSiloSupport @ 0x1407D5BB4
 * Callers:
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 * Callees:
 *     PspStorageAllocSlot @ 0x14077C3E8 (PspStorageAllocSlot.c)
 *     CmInitServerSiloState @ 0x1407D5B34 (CmInitServerSiloState.c)
 */

__int64 CmpInitSiloSupport()
{
  __int64 result; // rax

  result = PspStorageAllocSlot((ULONG *)&CmpSiloContextSlot);
  if ( (int)result >= 0 )
    return CmInitServerSiloState();
  return result;
}
