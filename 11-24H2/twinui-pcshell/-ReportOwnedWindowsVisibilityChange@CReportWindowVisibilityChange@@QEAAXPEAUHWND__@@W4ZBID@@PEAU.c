/*
 * XREFs of ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18006966C
 * Callers:
 *     ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x1800ADE60 (-s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z.c)
 *     ?SendVisibilityChanged@CTaskWindow@@UEAAX_J@Z @ 0x1803075C0 (-SendVisibilityChanged@CTaskWindow@@UEAAX_J@Z.c)
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180069714 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?_ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@AEAAXPEAUHWND__@@W4ZBID@@_J@Z @ 0x1800C9C88 (-_ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@AEAAXPEAUHWND__@@W4ZBID@@_J@.c)
 *     WPP_SF_qll @ 0x1802EF7CC (WPP_SF_qll.c)
 */

unsigned __int8 __fastcall CReportWindowVisibilityChange::ReportOwnedWindowsVisibilityChange(
        CReportWindowVisibilityChange *a1,
        __int64 a2,
        unsigned int a3,
        struct IImmersiveMonitor *a4,
        struct IImmersiveApplicationInternal *a5,
        __int64 a6)
{
  unsigned __int8 result; // al
  __int64 v10; // r8
  int v11; // ebx
  int v12; // esi

  result = CReportWindowVisibilityChange::IsReportingEnabled(a1, a4, a5);
  v11 = 0;
  v12 = result;
  if ( a3 == 13 || result )
    result = CReportWindowVisibilityChange::_ReportOwnedWindowsVisibilityChange(a1, a2, a3, a6);
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    LOBYTE(v11) = a3 == 13;
    return WPP_SF_qll(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 11LL, v10, a2, v11, v12);
  }
  return result;
}
