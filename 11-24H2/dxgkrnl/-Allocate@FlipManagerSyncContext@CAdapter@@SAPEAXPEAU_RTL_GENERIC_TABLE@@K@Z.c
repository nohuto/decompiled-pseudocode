/*
 * XREFs of ?Allocate@FlipManagerSyncContext@CAdapter@@SAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x14009B320
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CAdapter::FlipManagerSyncContext::Allocate(struct _RTL_GENERIC_TABLE *Table, CLONG ByteSize)
{
  return operator new[](ByteSize, 0x63734D54u, 256LL);
}
