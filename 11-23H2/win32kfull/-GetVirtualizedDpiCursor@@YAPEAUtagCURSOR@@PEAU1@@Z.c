/*
 * XREFs of ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00456D0
 * Callers:
 *     NtUserDrawIconEx @ 0x1C0044DD0 (NtUserDrawIconEx.c)
 *     NtUserGetIconSize @ 0x1C0044F40 (NtUserGetIconSize.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0084D60 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C0048B68 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C0088DB4 (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C00DEF48 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     GetDpiForSystem @ 0x1C00EB100 (GetDpiForSystem.c)
 */

struct tagCURSOR *__fastcall GetVirtualizedDpiCursor(struct tagCURSOR *a1)
{
  struct tagCURSOR *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int DpiForSystem; // eax
  CCursorSizes *v6; // rcx
  unsigned int SizeForDpi; // eax
  struct tagCURSOR *DPICursor; // rax

  v1 = a1;
  if ( ShouldVirtualizeIconCursorSize(a1) )
  {
    DpiForSystem = GetDpiForSystem(v3, v2);
    SizeForDpi = CCursorSizes::GetSizeForDpi(v6, DpiForSystem);
    DPICursor = FindDPICursor(v1, SizeForDpi);
    if ( DPICursor )
      return DPICursor;
  }
  return v1;
}
