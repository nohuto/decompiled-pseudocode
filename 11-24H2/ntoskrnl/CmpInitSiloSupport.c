/*
 * XREFs of CmpInitSiloSupport @ 0x1407D60A4
 * Callers:
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     PspStorageAllocSlot @ 0x14077C298 (PspStorageAllocSlot.c)
 *     CmInitServerSiloState @ 0x1407D6024 (CmInitServerSiloState.c)
 */

__int64 CmpInitSiloSupport()
{
  __int64 result; // rax

  result = PspStorageAllocSlot((ULONG *)&CmpSiloContextSlot);
  if ( (int)result >= 0 )
    return CmInitServerSiloState();
  return result;
}
