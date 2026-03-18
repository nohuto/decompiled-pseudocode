/*
 * XREFs of ?NotifyOnChanged@CCachedVisualImage@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800E5530
 * Callers:
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800E3DC0 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800E433C (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z @ 0x1800E4780 (-ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18010A1B4 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1801D983C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::NotifyOnChanged(_DWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edx

  v4 = 6;
  if ( a2 != 1 )
    v4 = a2;
  return CResource::NotifyOnChanged(a1, v4, a3);
}
