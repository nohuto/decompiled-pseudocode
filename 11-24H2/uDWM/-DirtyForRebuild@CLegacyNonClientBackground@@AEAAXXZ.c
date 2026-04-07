/*
 * XREFs of ?DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ @ 0x18006399C
 * Callers:
 *     ?ClearBorder@CLegacyNonClientBackground@@QEAAXXZ @ 0x18002E76C (-ClearBorder@CLegacyNonClientBackground@@QEAAXXZ.c)
 *     ?SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18002E99C (-SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x18002F370 (-SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z.c)
 *     ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z @ 0x180063068 (-SetBorderRegion@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180063754 (-SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?ClearAll@CLegacyNonClientBackground@@QEAAXXZ @ 0x1800773BC (-ClearAll@CLegacyNonClientBackground@@QEAAXXZ.c)
 *     ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x1800C7990 (-SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800250EC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 */

void __fastcall CLegacyNonClientBackground::DirtyForRebuild(CLegacyNonClientBackground *this)
{
  CRenderDataVisual::ClearInstructions(this);
  (*(void (__fastcall **)(CLegacyNonClientBackground *, __int64))(*(_QWORD *)this + 24LL))(this, 4LL);
}
