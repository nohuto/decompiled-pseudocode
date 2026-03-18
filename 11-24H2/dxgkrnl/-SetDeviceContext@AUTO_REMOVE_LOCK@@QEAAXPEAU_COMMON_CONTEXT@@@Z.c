/*
 * XREFs of ?SetDeviceContext@AUTO_REMOVE_LOCK@@QEAAXPEAU_COMMON_CONTEXT@@@Z @ 0x14008C0A4
 * Callers:
 *     ?FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z @ 0x14008BF84 (-FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z.c)
 * Callees:
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x14004D960 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 */

void __fastcall AUTO_REMOVE_LOCK::SetDeviceContext(PVOID *this, struct _COMMON_CONTEXT *a2)
{
  if ( *this )
    AUTO_REMOVE_LOCK::Release(this);
  *this = a2;
}
