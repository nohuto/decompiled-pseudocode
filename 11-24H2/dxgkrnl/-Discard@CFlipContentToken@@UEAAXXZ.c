/*
 * XREFs of ?Discard@CFlipContentToken@@UEAAXXZ @ 0x14004D490
 * Callers:
 *     ??1CFlipContentToken@@UEAA@XZ @ 0x14001F008 (--1CFlipContentToken@@UEAA@XZ.c)
 * Callees:
 *     ?SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z @ 0x14004D4B4 (-SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z.c)
 */

void __fastcall CFlipContentToken::Discard(CFlipContentToken *this)
{
  CFlipContentToken::SetFlipManagerObjectPreReferenced(this, 0LL);
  *((_DWORD *)this + 6) = 6;
}
