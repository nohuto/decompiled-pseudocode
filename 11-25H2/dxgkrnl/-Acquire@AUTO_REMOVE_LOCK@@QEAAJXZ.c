/*
 * XREFs of ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x14004DD1C
 * Callers:
 *     ?FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z @ 0x14008B020 (-FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1403D135C (DpiMiracastQueryMiracastSupportForFDO.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1404025DC (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DxgkHandleIndirectEscape @ 0x140428970 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall AUTO_REMOVE_LOCK::Acquire(struct _IO_REMOVE_LOCK **this)
{
  NTSTATUS result; // eax

  if ( !*this )
    return -1073741637;
  if ( *((_BYTE *)this + 8) )
    return 0;
  result = IoAcquireRemoveLockEx(*this + 2, *this, File, 1u, 0x20u);
  if ( result >= 0 )
    *((_BYTE *)this + 8) = 1;
  return result;
}
