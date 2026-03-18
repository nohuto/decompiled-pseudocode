/*
 * XREFs of MiGetAweViewPageSize @ 0x1403FBB48
 * Callers:
 *     MiDeleteVadAwePtes @ 0x1403FB8D8 (MiDeleteVadAwePtes.c)
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiGetAwePageSizeFromVa @ 0x140676D04 (MiGetAwePageSizeFromVa.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140677250 (MiReferenceIncomingPhysicalPages.c)
 *     MiComputeAweCharges @ 0x1406E9E6C (MiComputeAweCharges.c)
 *     NtMapUserPhysicalPages @ 0x1407EA270 (NtMapUserPhysicalPages.c)
 *     MiGetAweVadPageSize @ 0x1409D236C (MiGetAweVadPageSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweViewPageSize(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 40) & 3;
  if ( v1 == 1 )
    return 16LL;
  if ( v1 == 2 )
    return 512LL;
  result = 0LL;
  if ( v1 == 3 )
    return 0x40000LL;
  return result;
}
