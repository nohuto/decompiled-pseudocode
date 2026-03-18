/*
 * XREFs of MiLockHugeRangeColorHeadAtDpc @ 0x14066531C
 * Callers:
 *     MiHugeRangeFreeToZero @ 0x1404ED414 (MiHugeRangeFreeToZero.c)
 *     MiStopHugePageAccessor @ 0x1404F3624 (MiStopHugePageAccessor.c)
 *     MiCanBeginHugeIoPageAccessor @ 0x140663EF0 (MiCanBeginHugeIoPageAccessor.c)
 *     MiMarkHugePfnBad @ 0x140665444 (MiMarkHugePfnBad.c)
 * Callees:
 *     MiLockColorHeadHugeAtDpc @ 0x1404F8774 (MiLockColorHeadHugeAtDpc.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140663F58 (MiComputeHugeRangeColorHeadAtDpc.c)
 */

volatile signed __int32 *__fastcall MiLockHugeRangeColorHeadAtDpc(__int64 *a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = (volatile signed __int32 *)MiComputeHugeRangeColorHeadAtDpc(a1);
  MiLockColorHeadHugeAtDpc(v1);
  return v1;
}
