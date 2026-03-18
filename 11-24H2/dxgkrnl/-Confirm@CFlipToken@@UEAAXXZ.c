/*
 * XREFs of ?Confirm@CFlipToken@@UEAAXXZ @ 0x140059C00
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x14001E4D0 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 */

void __fastcall CFlipToken::Confirm(CFlipToken *this)
{
  *((_DWORD *)this + 6) = 4;
  CFlipToken::TraceStateChanged(this);
}
