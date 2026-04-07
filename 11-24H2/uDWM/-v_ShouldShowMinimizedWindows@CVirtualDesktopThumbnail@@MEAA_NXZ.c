/*
 * XREFs of ?v_ShouldShowMinimizedWindows@CVirtualDesktopThumbnail@@MEAA_NXZ @ 0x180088E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVirtualDesktopThumbnail::v_ShouldShowMinimizedWindows(CVirtualDesktopThumbnail *this)
{
  return *(_BYTE *)(*((_QWORD *)this + 30) + 201LL);
}
