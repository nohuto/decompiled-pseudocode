/*
 * XREFs of ??1APIDCOBJ@@QEAA@XZ @ 0x14001E1AC
 * Callers:
 *     NtGdiCreateMetafileDC @ 0x14000CE10 (NtGdiCreateMetafileDC.c)
 *     GreSetLayout @ 0x14000DFB0 (GreSetLayout.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14000E350 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x140010910 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x140013DF0 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     GreSelectBitmap @ 0x14001C680 (GreSelectBitmap.c)
 *     GreGetDeviceCaps @ 0x14001D350 (GreGetDeviceCaps.c)
 *     GreIntersectClipRect @ 0x14001DA50 (GreIntersectClipRect.c)
 *     NtGdiGetDeviceCaps @ 0x14001E030 (NtGdiGetDeviceCaps.c)
 *     GreGetClipBox @ 0x140039310 (GreGetClipBox.c)
 *     GreGetNearestColor @ 0x140039A60 (GreGetNearestColor.c)
 *     GreSelectPalette @ 0x1400D7C80 (GreSelectPalette.c)
 *     NtGdiGetDeviceCapsAll @ 0x1400E71E0 (NtGdiGetDeviceCapsAll.c)
 *     GreCleanDC @ 0x1401073F0 (GreCleanDC.c)
 *     GreRestoreDC @ 0x140121140 (GreRestoreDC.c)
 *     GreSelectBrush @ 0x140132CF0 (GreSelectBrush.c)
 *     GreSetMagicColors @ 0x14014964C (GreSetMagicColors.c)
 *     GreSelectPen @ 0x140151CE0 (GreSelectPen.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1401C5BB0 (GreCleanDCAndSetOwnerEx.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1401C845C (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1400260C0 (PopThreadGuardedObject.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x140034798 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140035194 (--1DCOBJ@@QEAA@XZ.c)
 */

void __fastcall APIDCOBJ::~APIDCOBJ(APIDCOBJ *this)
{
  if ( *((_BYTE *)this + 104) && *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
  *(_QWORD *)this = 0LL;
  PopThreadGuardedObject((char *)this + 72);
  DCOBJ::~DCOBJ(this);
}
