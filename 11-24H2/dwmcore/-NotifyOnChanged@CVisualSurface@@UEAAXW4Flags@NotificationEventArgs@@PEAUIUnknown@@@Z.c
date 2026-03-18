/*
 * XREFs of ?NotifyOnChanged@CVisualSurface@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BF010
 * Callers:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18003A664 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800BD9C0 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800BDF3C (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z @ 0x1800BE380 (-ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1801CB59C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualSurface::NotifyOnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 && a3 == *(_QWORD *)(a1 + 72) )
    a2 = 6LL;
  return CResource::NotifyOnChanged((_DWORD *)a1, a2, a3);
}
