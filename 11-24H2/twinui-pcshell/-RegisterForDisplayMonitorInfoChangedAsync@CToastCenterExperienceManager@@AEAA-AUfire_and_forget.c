/*
 * XREFs of ?RegisterForDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801C0478
 * Callers:
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801BFE5C (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync$_InitCoro$2 @ 0x180241908 (CToastCenterExperienceManager--RegisterForDisplayMonitorInfoChangedAsync$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync(__int64 a1, __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+C8h] [rbp+10h] BYREF

  v4 = operator new(0x90uLL);
  v6 = 0;
  CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync__InitCoro_2(&v6, v4, a2, a1);
  return a2;
}
