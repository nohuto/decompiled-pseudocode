/*
 * XREFs of RtlQueryInformationActiveActivationContext @ 0x1800F0240
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryInformationActivationContext @ 0x1800475D0 (RtlQueryInformationActivationContext.c)
 */

NTSTATUS __cdecl RtlQueryInformationActiveActivationContext(
        ACTIVATION_CONTEXT_INFO_CLASS ActivationContextInformationClass,
        PVOID ActivationContextInformation,
        SIZE_T ActivationContextInformationLength,
        PSIZE_T ReturnLength)
{
  return RtlQueryInformationActivationContext(
           1u,
           0LL,
           0LL,
           ActivationContextInformationClass,
           ActivationContextInformation,
           ActivationContextInformationLength,
           ReturnLength);
}
