/*
 * XREFs of MiPageSizeToPteLevel @ 0x140414D2C
 * Callers:
 *     MiVadPageTableChargeLevel @ 0x140414CB0 (MiVadPageTableChargeLevel.c)
 *     MiWriteAwePtes @ 0x1404B4FD0 (MiWriteAwePtes.c)
 *     MiProtectAweRegion @ 0x1404BDA90 (MiProtectAweRegion.c)
 *     MiComputeAweCharges @ 0x1406F37C8 (MiComputeAweCharges.c)
 *     NtMapUserPhysicalPages @ 0x1407FA870 (NtMapUserPhysicalPages.c)
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
