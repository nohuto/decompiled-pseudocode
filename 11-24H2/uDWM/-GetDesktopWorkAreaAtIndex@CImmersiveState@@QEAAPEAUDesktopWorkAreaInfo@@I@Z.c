/*
 * XREFs of ?GetDesktopWorkAreaAtIndex@CImmersiveState@@QEAAPEAUDesktopWorkAreaInfo@@I@Z @ 0x1800997A4
 * Callers:
 *     ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x180045B24 (-_GetDesktopWorkArea@CLivePreview@@AEAA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x18007F124 (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

struct DesktopWorkAreaInfo *__fastcall CImmersiveState::GetDesktopWorkAreaAtIndex(
        CImmersiveState *this,
        unsigned int a2)
{
  if ( a2 >= *((_DWORD *)this + 10) )
    return 0LL;
  else
    return (struct DesktopWorkAreaInfo *)(*((_QWORD *)this + 2) + 24LL * a2);
}
