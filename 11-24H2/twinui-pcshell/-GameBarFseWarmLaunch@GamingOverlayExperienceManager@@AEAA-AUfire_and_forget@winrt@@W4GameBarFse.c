/*
 * XREFs of ?GameBarFseWarmLaunch@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@W4GameBarFseWarmLaunchKind@@@Z @ 0x18034D73C
 * Callers:
 *     wistd::__function::__func__lambda_98227cc44fc411baa733b74fce958f12__void___cdecl(void)_::operator() @ 0x18034AEC0 (wistd--__function--__func__lambda_98227cc44fc411baa733b74fce958f12__void___cdecl(void)_--operato.c)
 *     ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18035AAC4 (-ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     GamingOverlayExperienceManager::GameBarFseWarmLaunch$_InitCoro$2 @ 0x18034D450 (GamingOverlayExperienceManager--GameBarFseWarmLaunch$_InitCoro$2.c)
 */

_BYTE *__fastcall GamingOverlayExperienceManager::GameBarFseWarmLaunch(__int64 a1, _BYTE *a2, int a3)
{
  char *v5; // rax
  int v7; // [rsp+C8h] [rbp+10h] BYREF
  int v8; // [rsp+D0h] [rbp+18h] BYREF

  v8 = a3;
  v5 = (char *)operator new(0x80uLL);
  v7 = 0;
  GamingOverlayExperienceManager::GameBarFseWarmLaunch__InitCoro_2(&v7, v5, a2, &v8, a1);
  return a2;
}
