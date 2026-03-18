/*
 * XREFs of ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800D7200
 * Callers:
 *     ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800D6F60 (-AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800D7540 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CMILRefCountImpl **__fastcall wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(
        CMILRefCountImpl **a1,
        CMILRefCountImpl **a2)
{
  CMILRefCountImpl *v2; // rbx
  CMILRefCountImpl *v4; // rcx
  void (*v5)(void); // rax

  v2 = *a1;
  v4 = *a2;
  *a1 = *a2;
  if ( v4 )
  {
    v5 = **(void (***)(void))v4;
    if ( (char *)v5 == (char *)CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v4);
    else
      v5();
  }
  if ( v2 )
    (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v2 + 8LL))(v2);
  return a1;
}
