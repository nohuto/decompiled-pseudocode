/*
 * XREFs of IovpCallDriverNoIrpTracking @ 0x140B84908
 * Callers:
 *     IovCallDriver @ 0x140BA9D40 (IovCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x14025CA60 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x14049A4AC (IopPerfCallDriver.c)
 *     VfBeforeCallDriver @ 0x140B8FC68 (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverNoIrpTracking(PVOID Object, ULONG_PTR a2)
{
  VfBeforeCallDriver(Object, a2, 0LL);
  if ( (IopFunctionPointerMask & 2) != 0 )
    return IopPerfCallDriver(Object, a2);
  else
    return IopfCallDriver((__int64)Object, a2);
}
