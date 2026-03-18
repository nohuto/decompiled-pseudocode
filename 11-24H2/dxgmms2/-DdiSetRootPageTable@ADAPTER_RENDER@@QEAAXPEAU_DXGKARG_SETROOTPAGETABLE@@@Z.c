/*
 * XREFs of ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x140041E68
 * Callers:
 *     VidSchiSetPagingHwContextPageDirectory @ 0x140090948 (VidSchiSetPagingHwContextPageDirectory.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400B6C90 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x1400EAF40 (VidSchiEnsureRootPageTableUpdated.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1400F7EB4 (VidSchSetPagingNodePageDirectory.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall ADAPTER_RENDER::DdiSetRootPageTable(ADAPTER_RENDER *this, struct _DXGKARG_SETROOTPAGETABLE *a2)
{
  ((void (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_SETROOTPAGETABLE *))DxgCoreInterface[53])(this, a2);
}
