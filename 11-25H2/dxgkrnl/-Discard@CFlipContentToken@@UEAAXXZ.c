/*
 * XREFs of ?Discard@CFlipContentToken@@UEAAXXZ @ 0x14004DAF0
 * Callers:
 *     ??1CFlipContentToken@@UEAA@XZ @ 0x14000FB78 (--1CFlipContentToken@@UEAA@XZ.c)
 * Callees:
 *     ?SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z @ 0x14004DB14 (-SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z.c)
 */

void __fastcall CFlipContentToken::Discard(CFlipContentToken *this)
{
  CFlipContentToken::SetFlipManagerObjectPreReferenced(this, 0LL);
  *((_DWORD *)this + 6) = 6;
}
