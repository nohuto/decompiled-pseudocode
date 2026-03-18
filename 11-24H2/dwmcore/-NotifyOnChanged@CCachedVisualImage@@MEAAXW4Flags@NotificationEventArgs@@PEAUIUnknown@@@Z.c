/*
 * XREFs of ?NotifyOnChanged@CCachedVisualImage@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BEFF0
 * Callers:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18003A664 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800BD9C0 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800BDF3C (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z @ 0x1800BE380 (-ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1801CB59C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::NotifyOnChanged(_DWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdx

  v4 = 6LL;
  if ( a2 != 1 )
    v4 = a2;
  return CResource::NotifyOnChanged(a1, v4, a3);
}
