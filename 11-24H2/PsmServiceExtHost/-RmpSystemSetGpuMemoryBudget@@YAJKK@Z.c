/*
 * XREFs of ?RmpSystemSetGpuMemoryBudget@@YAJKK@Z @ 0x18006757C
 * Callers:
 *     ?RmpGameModeUnapplyGraphicsPriority@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180067320 (-RmpGameModeUnapplyGraphicsPriority@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 *     ?RmpGameModeTryApplyGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180067420 (-RmpGameModeTryApplyGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemSetGpuMemoryBudget(int a1, int a2)
{
  _DWORD v3[4]; // [rsp+20h] [rbp-28h] BYREF

  v3[1] = 0;
  v3[2] = a1;
  v3[0] = 16;
  v3[3] = a2;
  return D3DKMTSetMemoryBudgetTarget(v3);
}
