/*
 * XREFs of RtlGetSystemBootStatus @ 0x18010F1C0
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x180160C20 (NtPowerInformation.c)
 */

NTSTATUS __cdecl RtlGetSystemBootStatus(
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
  InputBuffer[0] = 31LL;
  InputBuffer[1] = 1LL;
  InputBuffer[2] = v5;
  return NtPowerInformation(PowerInformationInternal, InputBuffer, 0x18u, ReturnLength, ReturnLength != 0LL ? 4 : 0);
}
