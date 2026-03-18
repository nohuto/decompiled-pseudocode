/*
 * XREFs of ?Remarshal@CContentResourceState@@UEAAXXZ @ 0x14005A220
 * Callers:
 *     <none>
 * Callees:
 *     ?Remarshal@CFlipResourceState@@UEAAXXZ @ 0x140064910 (-Remarshal@CFlipResourceState@@UEAAXXZ.c)
 */

void __fastcall CContentResourceState::Remarshal(CContentResourceState *this)
{
  *((_BYTE *)this + 64) |= 1u;
  CFlipResourceState::Remarshal(this);
}
