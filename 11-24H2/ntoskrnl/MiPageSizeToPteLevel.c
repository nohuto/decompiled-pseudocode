/*
 * XREFs of MiPageSizeToPteLevel @ 0x14041EFEC
 * Callers:
 *     MiVadPageTableChargeLevel @ 0x14041EF70 (MiVadPageTableChargeLevel.c)
 *     MiWriteAwePtes @ 0x1404BA130 (MiWriteAwePtes.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiComputeAweCharges @ 0x1406F57C8 (MiComputeAweCharges.c)
 *     NtMapUserPhysicalPages @ 0x1407FA100 (NtMapUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageSizeToPteLevel(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 i; // rdx

  result = 0LL;
  for ( i = 2LL; i >= -1; --i )
  {
    if ( a1 <= MiPageSizes[i] )
      break;
    result = (unsigned int)(result + 1);
  }
  return result;
}
