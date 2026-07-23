/*
 * XREFs of KiLeaveGuardedRegionUnsafe @ 0x140362BE0
 * Callers:
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall KiLeaveGuardedRegionUnsafe(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}
