/*
 * XREFs of NtRegisterProtocolAddressInformation @ 0x1404FA030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRegisterProtocolAddressInformation(
        HANDLE ResourceManager,
        PCRM_PROTOCOL_ID ProtocolId,
        ULONG ProtocolInformationSize,
        PVOID ProtocolInformation,
        ULONG CreateOptions)
{
  return __imp_NtRegisterProtocolAddressInformation(
           ResourceManager,
           ProtocolId,
           ProtocolInformationSize,
           ProtocolInformation,
           CreateOptions);
}
