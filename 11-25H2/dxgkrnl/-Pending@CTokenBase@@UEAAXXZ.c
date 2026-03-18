/*
 * XREFs of ?Pending@CTokenBase@@UEAAXXZ @ 0x14004C0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTokenBase::Pending(CTokenBase *this)
{
  *((_DWORD *)this + 6) = 1;
}
