/*
 * XREFs of MiLockHugeRangeColorHeadAtDpc @ 0x140671F94
 * Callers:
 *     MiHugeRangeFreeToZero @ 0x1404EE690 (MiHugeRangeFreeToZero.c)
 *     MiCanBeginHugeIoPageAccessor @ 0x140670BE0 (MiCanBeginHugeIoPageAccessor.c)
 *     MiMarkHugePfnBad @ 0x1406720BC (MiMarkHugePfnBad.c)
 * Callees:
 *     MiLockColorHeadHugeAtDpc @ 0x1404F84F4 (MiLockColorHeadHugeAtDpc.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140670C48 (MiComputeHugeRangeColorHeadAtDpc.c)
 */

volatile signed __int32 *__fastcall MiLockHugeRangeColorHeadAtDpc(__int64 *a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = (volatile signed __int32 *)MiComputeHugeRangeColorHeadAtDpc(a1);
  MiLockColorHeadHugeAtDpc(v1);
  return v1;
}
