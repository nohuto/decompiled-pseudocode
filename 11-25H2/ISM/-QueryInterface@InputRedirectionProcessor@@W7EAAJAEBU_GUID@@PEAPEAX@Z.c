/*
 * XREFs of ?QueryInterface@InputRedirectionProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A86F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputRedirectionProcessor::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        InputRedirectionProcessor **a3)
{
  return InputRedirectionProcessor::QueryInterface((InputRedirectionProcessor *)(a1 - 8), a2, a3);
}
