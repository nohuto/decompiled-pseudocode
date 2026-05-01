/*
 * XREFs of GamingOverlayExperienceManager::GameBarFseWarmLaunch$_InitCoro$2 @ 0x18034D450
 * Callers:
 *     ?GameBarFseWarmLaunch@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@W4GameBarFseWarmLaunchKind@@@Z @ 0x18034D73C (-GameBarFseWarmLaunch@GamingOverlayExperienceManager@@AEAA-AUfire_and_forget@winrt@@W4GameBarFse.c)
 * Callees:
 *     GamingOverlayExperienceManager::GameBarFseWarmLaunch$_ResumeCoro$1 @ 0x18034D4B0 (GamingOverlayExperienceManager--GameBarFseWarmLaunch$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::GameBarFseWarmLaunch__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        int *a4,
        __int64 a5)
{
  int v5; // r9d

  v5 = *a4;
  *(_QWORD *)(a2 + 97) = a5;
  *(_DWORD *)(a2 + 105) = v5;
  *(_QWORD *)a2 = GamingOverlayExperienceManager::GameBarFseWarmLaunch__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[96] = 0;
  return GamingOverlayExperienceManager::GameBarFseWarmLaunch__ResumeCoro_1(a2);
}
