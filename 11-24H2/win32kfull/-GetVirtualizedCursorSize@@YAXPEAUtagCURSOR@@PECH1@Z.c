/*
 * XREFs of ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z @ 0x140271274
 * Callers:
 *     NtUserDrawIconEx @ 0x140076F70 (NtUserDrawIconEx.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x140077F7C (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     _DrawIconEx @ 0x140078A10 (_DrawIconEx.c)
 *     NtUserGetIconSize @ 0x1400798F0 (NtUserGetIconSize.c)
 * Callees:
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x140077F34 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     GetCursorSizesIndexFromDpi @ 0x140078FDC (GetCursorSizesIndexFromDpi.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     GetCursorSizeFromIndex @ 0x1400799DC (GetCursorSizeFromIndex.c)
 */

void __fastcall GetVirtualizedCursorSize(struct tagCURSOR *a1, volatile int *a2, volatile int *a3)
{
  __int64 v6; // rcx
  unsigned int DpiForSystem; // eax
  int CursorSizesIndexFromDpi; // eax
  INT CursorSizeFromIndex; // ebx

  *a2 = *((_DWORD *)a1 + 35);
  *a3 = *((_DWORD *)a1 + 36);
  if ( ShouldVirtualizeIconCursorSize(a1, (__int64)a2) )
  {
    DpiForSystem = GetDpiForSystem(v6);
    CursorSizesIndexFromDpi = GetCursorSizesIndexFromDpi(DpiForSystem);
    CursorSizeFromIndex = GetCursorSizeFromIndex(CursorSizesIndexFromDpi);
    *a2 = EngMulDiv(*a2, CursorSizeFromIndex, *((_DWORD *)a1 + 19));
    *a3 = EngMulDiv(*a3, CursorSizeFromIndex, *((_DWORD *)a1 + 19));
  }
}
