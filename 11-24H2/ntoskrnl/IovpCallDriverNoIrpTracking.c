/*
 * XREFs of IovpCallDriverNoIrpTracking @ 0x140B82908
 * Callers:
 *     IovCallDriver @ 0x140BA7D40 (IovCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x1403741A0 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x14049F664 (IopPerfCallDriver.c)
 *     VfBeforeCallDriver @ 0x140B8DC68 (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverNoIrpTracking(PVOID Object, ULONG_PTR a2)
{
  VfBeforeCallDriver(Object, a2, 0LL);
  if ( (IopFunctionPointerMask & 2) != 0 )
    return IopPerfCallDriver(Object, a2);
  else
    return IopfCallDriver((__int64)Object, a2);
}
