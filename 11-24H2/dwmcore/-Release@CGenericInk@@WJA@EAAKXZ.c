/*
 * XREFs of ?Release@CGenericInk@@WJA@EAAKXZ @ 0x1802781B0
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AFF0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetDirtyRegion@CMaskBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x18004BAB0 (-GetDirtyRegion@CMaskBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FDF0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1?$com_ptr_t@VIDirtyRectSource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180173890 (--1-$com_ptr_t@VIDirtyRectSource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericInk::Release(__int64 a1, __int64 a2, __int64 a3)
{
  return CAtlasedRectsMesh::Release((CCachedVisualImage *)(a1 - 144), a2, a3);
}
