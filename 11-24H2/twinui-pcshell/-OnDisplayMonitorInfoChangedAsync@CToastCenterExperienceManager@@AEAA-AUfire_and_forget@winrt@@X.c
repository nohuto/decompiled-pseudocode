/*
 * XREFs of ?OnDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180208444
 * Callers:
 *     ?OnDisplayMonitorInfoChanged@CToastCenterExperienceManager@@AEAAXUDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@UDisplayMonitorInfoChangedEventArgs@3456@@Z @ 0x180384C20 (-OnDisplayMonitorInfoChanged@CToastCenterExperienceManager@@AEAAXUDisplayMonitorInfoCollection@S.c)
 * Callees:
 *     CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_InitCoro$2 @ 0x180241768 (CToastCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync(__int64 a1, __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+78h] [rbp+10h] BYREF

  v4 = operator new(0x40uLL);
  v6 = 0;
  CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync__InitCoro_2(&v6, v4, a2, a1);
  return a2;
}
