/*
 * XREFs of ?Release@CGenericInk@@WJA@EAAKXZ @ 0x180282D40
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180108570 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetDirtyRegion@CMaskBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1801911E0 (-GetDirtyRegion@CMaskBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ??1?$com_ptr_t@VIDirtyRectSource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180191C50 (--1-$com_ptr_t@VIDirtyRectSource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericInk::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - 144));
}
