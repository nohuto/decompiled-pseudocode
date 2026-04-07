/*
 * XREFs of ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18003DD20
 * Callers:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003D11C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SetParent@CVisual@@UEAAJPEAVCContainerVisual@@@Z @ 0x18003DCF0 (-SetParent@CVisual@@UEAAJPEAVCContainerVisual@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::PropagateDirtyChildren(CVisual *this)
{
  __int64 i; // rbx

  for ( i = *((_QWORD *)this + 3); i; i = *(_QWORD *)(i + 24) )
  {
    if ( (*(_BYTE *)(i + 32) & 1) != 0 )
      break;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)i + 184LL))(i);
  }
}
