/*
 * XREFs of ZwRegisterProtocolAddressInformation @ 0x1406AA310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRegisterProtocolAddressInformation(
        HANDLE ResourceManager,
        PCRM_PROTOCOL_ID ProtocolId,
        ULONG ProtocolInformationSize,
        PVOID ProtocolInformation,
        ULONG CreateOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManager);
}
