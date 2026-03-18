/*
 * XREFs of ?Remarshal@CFlipResourceState@@UEAAXXZ @ 0x140064910
 * Callers:
 *     ?Remarshal@CContentResourceState@@UEAAXXZ @ 0x14005A220 (-Remarshal@CContentResourceState@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipResourceState::Remarshal(CFlipResourceState *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 32);
  if ( (v1 & 2) != 0 )
    (*(void (__fastcall **)(CFlipResourceState *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  else
    *((_BYTE *)this + 32) = v1 | 1;
}
