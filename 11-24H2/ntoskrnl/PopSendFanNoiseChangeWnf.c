/*
 * XREFs of PopSendFanNoiseChangeWnf @ 0x14075BF00
 * Callers:
 *     PopFanUpdateSpeed @ 0x140A908FC (PopFanUpdateSpeed.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PopSendFanNoiseChangeWnf(int a1)
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  Buffer = a1;
  return ZwUpdateWnfStateData(&WNF_PO_FAN_NOISE_CHANGE, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
