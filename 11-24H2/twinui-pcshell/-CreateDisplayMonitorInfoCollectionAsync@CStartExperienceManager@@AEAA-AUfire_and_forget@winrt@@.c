/*
 * XREFs of ?CreateDisplayMonitorInfoCollectionAsync@CStartExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1802B9CD8
 * Callers:
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B41A0 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_InitCoro$2 @ 0x18038F670 (CStartExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_InitCoro$2.c)
 */

__int64 __fastcall CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync(__int64 a1, __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+128h] [rbp+10h] BYREF

  v4 = operator new(0xF0uLL);
  v6 = 0;
  CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync__InitCoro_2(&v6, v4, a2, a1);
  return a2;
}
