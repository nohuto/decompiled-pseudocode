/*
 * XREFs of IopAllocateIrpMustSucceed @ 0x140284370
 * Callers:
 *     IoCancelFileOpen @ 0x1406F7A40 (IoCancelFileOpen.c)
 *     IopDeleteFile @ 0x14083E070 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     IopFreeBandwidthContract @ 0x140ABE044 (IopFreeBandwidthContract.c)
 * Callees:
 *     IopAllocateReserveIrp @ 0x14025CDD8 (IopAllocateReserveIrp.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 */

PIRP __fastcall IopAllocateIrpMustSucceed(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  PIRP result; // rax
  LARGE_INTEGER v5; // rcx

  v2 = a2;
  for ( result = (PIRP)IopAllocateIrpExReturn(a1, a2, 0LL); !result; result = (PIRP)IopAllocateIrpExReturn(a1, v2, 0LL) )
  {
    result = IopAllocateReserveIrp(v5, v2, 3);
    if ( result )
      break;
  }
  result->AllocationFlags |= 0x20u;
  return result;
}
