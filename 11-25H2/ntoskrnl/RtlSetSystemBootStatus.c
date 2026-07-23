/*
 * XREFs of RtlSetSystemBootStatus @ 0x140A69F60
 * Callers:
 *     PopWriteBsdPoInfo @ 0x140431A88 (PopWriteBsdPoInfo.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x14073D6BC (PopRecordLongPowerButtonPressDetected.c)
 *     PopCheckAndClearBootError @ 0x140C1C52C (PopCheckAndClearBootError.c)
 * Callees:
 *     ZwPowerInformation @ 0x14069BD20 (ZwPowerInformation.c)
 */

NTSTATUS __cdecl RtlSetSystemBootStatus(
        RTL_BSD_ITEM_TYPE BootStatusInformationClass,
        PVOID DataBuffer,
        ULONG DataLength,
        PULONG ReturnLength)
{
  _DWORD v5[2]; // [rsp+30h] [rbp-30h] BYREF
  PVOID v6; // [rsp+38h] [rbp-28h]
  ULONG v7; // [rsp+40h] [rbp-20h]
  _QWORD InputBuffer[3]; // [rsp+48h] [rbp-18h] BYREF

  v5[0] = BootStatusInformationClass;
  v6 = DataBuffer;
  v7 = DataLength;
  v5[1] = 0;
  InputBuffer[0] = 32LL;
  InputBuffer[1] = 1LL;
  InputBuffer[2] = v5;
  return ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x18u, ReturnLength, ReturnLength != 0LL ? 4 : 0);
}
