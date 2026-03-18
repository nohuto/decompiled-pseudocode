/*
 * XREFs of IopAllocateIrpMustSucceed @ 0x140253750
 * Callers:
 *     IoCancelFileOpen @ 0x1406EE040 (IoCancelFileOpen.c)
 *     IopDeleteFile @ 0x140844B30 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     IopFreeBandwidthContract @ 0x140ABF604 (IopFreeBandwidthContract.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     IopAllocateReserveIrp @ 0x14035D8C8 (IopAllocateReserveIrp.c)
 */

__int64 __fastcall IopAllocateIrpMustSucceed(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = a2;
  for ( result = IopAllocateIrpExReturn(a1, a2, 0LL); !result; result = IopAllocateIrpExReturn(a1, v2, 0LL) )
  {
    result = IopAllocateReserveIrp(v5, v2, 3LL);
    if ( result )
      break;
  }
  *(_BYTE *)(result + 71) |= 0x20u;
  return result;
}
