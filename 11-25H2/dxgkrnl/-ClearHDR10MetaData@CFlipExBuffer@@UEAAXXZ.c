/*
 * XREFs of ?ClearHDR10MetaData@CFlipExBuffer@@UEAAXXZ @ 0x14009B490
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ @ 0x1400101B4 (-ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ.c)
 */

void __fastcall CFlipExBuffer::ClearHDR10MetaData(CFlipExBuffer *this)
{
  CFlipExBuffer::ReleaseHDR10MetaData(this);
}
