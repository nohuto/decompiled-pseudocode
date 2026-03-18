/*
 * XREFs of CmpInitSiloSupport @ 0x1407C6460
 * Callers:
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 * Callees:
 *     PspStorageAllocSlot @ 0x14076C848 (PspStorageAllocSlot.c)
 *     CmInitServerSiloState @ 0x1407C63E4 (CmInitServerSiloState.c)
 */

__int64 CmpInitSiloSupport()
{
  __int64 result; // rax

  result = PspStorageAllocSlot((ULONG *)&CmpSiloContextSlot);
  if ( (int)result >= 0 )
    return CmInitServerSiloState();
  return result;
}
