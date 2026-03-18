/*
 * XREFs of MiGetAweViewPageSize @ 0x1404BA0FC
 * Callers:
 *     MiDeleteVadAwePtes @ 0x1404B9E8C (MiDeleteVadAwePtes.c)
 *     MiWriteAwePtes @ 0x1404BA130 (MiWriteAwePtes.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiGetAwePageSizeFromVa @ 0x140682524 (MiGetAwePageSizeFromVa.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140682A70 (MiReferenceIncomingPhysicalPages.c)
 *     MiComputeAweCharges @ 0x1406F57C8 (MiComputeAweCharges.c)
 *     NtMapUserPhysicalPages @ 0x1407FA100 (NtMapUserPhysicalPages.c)
 *     MiGetAweVadPageSize @ 0x140988078 (MiGetAweVadPageSize.c)
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
