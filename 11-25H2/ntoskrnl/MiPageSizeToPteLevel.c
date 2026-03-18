/*
 * XREFs of MiPageSizeToPteLevel @ 0x1403FD95C
 * Callers:
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 *     MiVadPageTableChargeLevel @ 0x1403FD8E0 (MiVadPageTableChargeLevel.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiComputeAweCharges @ 0x1406E9E6C (MiComputeAweCharges.c)
 *     NtMapUserPhysicalPages @ 0x1407EA270 (NtMapUserPhysicalPages.c)
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
