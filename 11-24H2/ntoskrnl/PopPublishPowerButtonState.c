/*
 * XREFs of PopPublishPowerButtonState @ 0x14075BC84
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D58C0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PopPublishPowerButtonState(_DWORD *Buffer)
{
  DbgPrintEx(
    0x92u,
    3u,
    "Power button hold update (down: %d, time: %d ms, sequence: %d, InstanceGuid: %08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X)\n",
    *Buffer & 1,
    *Buffer >> 1,
    Buffer[1],
    Buffer[2],
    *((unsigned __int16 *)Buffer + 6),
    *((unsigned __int16 *)Buffer + 7),
    *((unsigned __int8 *)Buffer + 16),
    *((unsigned __int8 *)Buffer + 17),
    *((unsigned __int8 *)Buffer + 18),
    *((unsigned __int8 *)Buffer + 19),
    *((unsigned __int8 *)Buffer + 20),
    *((unsigned __int8 *)Buffer + 21),
    *((unsigned __int8 *)Buffer + 22),
    *((unsigned __int8 *)Buffer + 23));
  return ZwUpdateWnfStateData(&WNF_PO_POWER_BUTTON_STATE, Buffer, 0x18u, 0LL, 0LL, 0, 0);
}
