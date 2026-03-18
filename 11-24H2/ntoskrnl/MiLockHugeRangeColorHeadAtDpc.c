/*
 * XREFs of MiLockHugeRangeColorHeadAtDpc @ 0x140670DC4
 * Callers:
 *     MiHugeRangeFreeToZero @ 0x1404F0BF0 (MiHugeRangeFreeToZero.c)
 *     MiCanBeginHugeIoPageAccessor @ 0x14066FA10 (MiCanBeginHugeIoPageAccessor.c)
 *     MiMarkHugePfnBad @ 0x140670EEC (MiMarkHugePfnBad.c)
 * Callees:
 *     MiLockColorHeadHugeAtDpc @ 0x1404FAC14 (MiLockColorHeadHugeAtDpc.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x14066FA78 (MiComputeHugeRangeColorHeadAtDpc.c)
 */

volatile signed __int32 *__fastcall MiLockHugeRangeColorHeadAtDpc(__int64 *a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = (volatile signed __int32 *)MiComputeHugeRangeColorHeadAtDpc(a1);
  MiLockColorHeadHugeAtDpc(v1);
  return v1;
}
