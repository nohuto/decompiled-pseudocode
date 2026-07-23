/*
 * XREFs of LdrGetProcedureAddressEx @ 0x1800319C0
 * Callers:
 *     AVrfInitializeVerifier @ 0x180113994 (AVrfInitializeVerifier.c)
 *     AVrfpVerifierStopInitialize @ 0x18011BE54 (AVrfpVerifierStopInitialize.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 */

NTSTATUS __cdecl LdrGetProcedureAddressEx(
        PVOID DllHandle,
        PANSI_STRING ProcedureName,
        ULONG ProcedureNumber,
        PVOID *ProcedureAddress,
        ULONG Flags)
{
  PVOID *Callback; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(DllHandle, ProcedureName, ProcedureNumber, ProcedureAddress, Flags, Callback);
}
