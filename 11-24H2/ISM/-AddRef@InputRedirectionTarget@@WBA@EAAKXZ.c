/*
 * XREFs of ?AddRef@InputRedirectionTarget@@WBA@EAAKXZ @ 0x1800EFD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputRedirectionTarget::AddRef(__int64 a1)
{
  return Win32kInterop::AddRef((Win32kInterop *)(a1 - 16));
}
