/*
 * XREFs of ?QueryInterface@InputRedirectionTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B0410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputRedirectionTarget::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        InputRedirectionTarget **a3)
{
  return InputRedirectionTarget::QueryInterface((InputRedirectionTarget *)(a1 - 16), a2, a3);
}
