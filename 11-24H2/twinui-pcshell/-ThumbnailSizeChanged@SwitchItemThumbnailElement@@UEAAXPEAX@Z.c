/*
 * XREFs of ?ThumbnailSizeChanged@SwitchItemThumbnailElement@@UEAAXPEAX@Z @ 0x1804D5840
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateThumbnailVisual@SwitchItemThumbnailElement@@IEAAXXZ @ 0x1804D5188 (-InvalidateThumbnailVisual@SwitchItemThumbnailElement@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SwitchItemThumbnailElement::ThumbnailSizeChanged(SwitchItemThumbnailElement *this, void *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 74);
  if ( v3 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 208LL))(v3, a2) )
      SwitchItemThumbnailElement::InvalidateThumbnailVisual(this);
  }
}
