/*
 * XREFs of RmGameModeRSrvRegisterProcess @ 0x1800897F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x18003D570 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     ?RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@K@Z @ 0x180088294 (-RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 */

__int64 __fastcall RmGameModeRSrvRegisterProcess(
        __int64 a1,
        unsigned int a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3,
        int a4)
{
  struct _RM_SERVICE_GLOBALS *v6; // rcx
  int v7; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-18h] BYREF

  Handle = 0LL;
  v7 = RmpSystemOpenProcess(&Handle, 0x1000u, a2);
  if ( v7 >= 0 )
    v7 = RmSrvGameModeRegisterProcess(v6, Handle, a3, a4);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v7;
}
