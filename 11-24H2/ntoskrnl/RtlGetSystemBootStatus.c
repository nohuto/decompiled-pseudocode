/*
 * XREFs of RtlGetSystemBootStatus @ 0x140782CE0
 * Callers:
 *     PopCheckAndClearBootError @ 0x140C2F74C (PopCheckAndClearBootError.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x140A6F8A4 (RtlpSystemBootStatusRequest.c)
 */

NTSTATUS __cdecl RtlGetSystemBootStatus(
        RTL_BSD_ITEM_TYPE BootStatusInformationClass,
        PVOID DataBuffer,
        ULONG DataLength,
        PULONG ReturnLength)
{
  _DWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  PVOID v6; // [rsp+28h] [rbp-20h]
  ULONG v7; // [rsp+30h] [rbp-18h]

  v5[0] = BootStatusInformationClass;
  v5[1] = 0;
  v6 = DataBuffer;
  v7 = DataLength;
  return RtlpSystemBootStatusRequest(31LL, v5, 1LL);
}
