/*
 * XREFs of PopSendFanNoiseChangeWnf @ 0x14075CF60
 * Callers:
 *     PopFanUpdateSpeed @ 0x140A9414C (PopFanUpdateSpeed.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopSendFanNoiseChangeWnf(int a1)
{
  int v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1;
  return ZwUpdateWnfStateData((__int64)&WNF_PO_FAN_NOISE_CHANGE, (__int64)&v2);
}
