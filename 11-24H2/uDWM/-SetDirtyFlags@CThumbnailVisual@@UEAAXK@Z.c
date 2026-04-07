/*
 * XREFs of ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180067B90
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001EAC8 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001F970 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18003B9BC (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180061124 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x180061C5C (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ?OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180067B20 (-OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18007A170 (-OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180083B90 (-OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnDestinationClientRectChanged@CThumbnailVisual@@QEAAXXZ @ 0x180086BD4 (-OnDestinationClientRectChanged@CThumbnailVisual@@QEAAXXZ.c)
 *     ?OnSourceWindowClientMarginsChanged@CThumbnailVisual@@QEAAXXZ @ 0x180087CE4 (-OnSourceWindowClientMarginsChanged@CThumbnailVisual@@QEAAXXZ.c)
 *     ?OnSourceWindowVisualCreated@CThumbnailVisual@@QEAAXXZ @ 0x18009B2F8 (-OnSourceWindowVisualCreated@CThumbnailVisual@@QEAAXXZ.c)
 *     ?EndTransition@CThumbnailVisual@@UEAAXXZ @ 0x1800DA640 (-EndTransition@CThumbnailVisual@@UEAAXXZ.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x1800DA880 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 * Callees:
 *     ?NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ @ 0x180067BE8 (-NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CThumbnailVisual::SetDirtyFlags(CThumbnailVisual *this, int a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  CTopLevelWindow *v6; // rcx

  v2 = *((_QWORD *)this + 41);
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 34) )
    {
      v5 = *(_QWORD *)(v2 + 16);
      if ( v5 )
      {
        v6 = *(CTopLevelWindow **)(v5 + 440);
        if ( v6 )
          CTopLevelWindow::NotifyOfDirtyDCompThumbnail(v6);
      }
    }
  }
  CVisual::SetDirtyFlags(this, a2);
}
