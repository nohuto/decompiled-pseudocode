/*
 * XREFs of ?RmpSystemSetGpuYieldPercentage@@YAJKPEAU_D3DKMT_SCHEDULING_YIELDPERCENTAGE_FLAGS@@@Z @ 0x18006744C
 * Callers:
 *     ?RmpGameModeUnapplyGraphicsPriority@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800673A0 (-RmpGameModeUnapplyGraphicsPriority@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 *     ?RmpGameModeTryApplyGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800674A0 (-RmpGameModeTryApplyGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemSetGpuYieldPercentage(int a1, struct _D3DKMT_SCHEDULING_YIELDPERCENTAGE_FLAGS *a2)
{
  int v2; // eax
  _DWORD v4[4]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_DWORD *)a2;
  v4[1] = 0;
  v4[3] = a1;
  v4[0] = 16;
  v4[2] = v2;
  return D3DKMTSetYieldPercentage(v4);
}
