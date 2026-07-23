/*
 * XREFs of PopSendFanNoiseChangeWnf @ 0x140750630
 * Callers:
 *     PopFanUpdateSpeed @ 0x140A90000 (PopFanUpdateSpeed.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PopSendFanNoiseChangeWnf(int a1)
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  Buffer = a1;
  return ZwUpdateWnfStateData(&WNF_PO_FAN_NOISE_CHANGE, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
