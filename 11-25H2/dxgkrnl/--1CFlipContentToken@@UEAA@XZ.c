/*
 * XREFs of ??1CFlipContentToken@@UEAA@XZ @ 0x14000FB78
 * Callers:
 *     ??_GCFlipContentToken@@UEAAPEAXI@Z @ 0x14000FB40 (--_GCFlipContentToken@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CToken@@UEAA@XZ @ 0x14000FBB0 (--1CToken@@UEAA@XZ.c)
 *     ?Discard@CFlipContentToken@@UEAAXXZ @ 0x14004DAF0 (-Discard@CFlipContentToken@@UEAAXXZ.c)
 */

void __fastcall CFlipContentToken::~CFlipContentToken(CFlipContentToken *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 6) == 6;
  *(_QWORD *)this = &CFlipContentToken::`vftable';
  if ( !v1 )
    CFlipContentToken::Discard(this);
  CToken::~CToken(this);
}
