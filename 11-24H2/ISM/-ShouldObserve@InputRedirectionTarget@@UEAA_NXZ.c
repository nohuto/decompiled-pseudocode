/*
 * XREFs of ?ShouldObserve@InputRedirectionTarget@@UEAA_NXZ @ 0x1801B0430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall InputRedirectionTarget::ShouldObserve(InputRedirectionTarget *this)
{
  return *((_BYTE *)this + 52);
}
