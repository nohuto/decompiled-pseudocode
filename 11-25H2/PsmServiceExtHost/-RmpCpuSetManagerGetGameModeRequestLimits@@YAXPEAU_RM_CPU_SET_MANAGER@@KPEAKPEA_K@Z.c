/*
 * XREFs of ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z @ 0x18006D7C0
 * Callers:
 *     ?RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x1800878D4 (-RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESO.c)
 *     ?RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18008CA34 (-RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUE.c)
 * Callees:
 *     ?RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180071AF0 (-RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 */

void __fastcall RmpCpuSetManagerGetGameModeRequestLimits(
        struct _RM_CPU_SET_MANAGER *a1,
        char a2,
        unsigned int *a3,
        unsigned __int64 *a4)
{
  int v4; // eax
  __int64 v5; // r11
  struct _RM_CPU_SET_MANAGER *v9; // r10
  char v10; // bl
  unsigned int v11; // eax
  int v12; // edx
  unsigned int SystemReserveTarget; // eax
  unsigned int v14; // r8d
  unsigned __int64 v15; // r9

  v4 = *((_DWORD *)a1 + 348);
  v5 = 0LL;
  v9 = a1;
  v10 = 0;
  if ( v4 == -1 )
  {
    v12 = -1;
  }
  else
  {
    v11 = v4 - 256;
    v10 = v11;
    v5 = HIWORD(v11);
    *((_QWORD *)a1 + v5 + 11) |= 1LL << v11;
    ++*((_DWORD *)a1 + 349);
    v12 = *((_DWORD *)a1 + 348);
  }
  if ( (a2 & 1) != 0 )
  {
    v14 = *((_DWORD *)a1 + 349) - *((_DWORD *)a1 + 351);
  }
  else
  {
    SystemReserveTarget = RmpCpuSetManagerGetSystemReserveTarget(a1);
    v14 = *((_DWORD *)v9 + 349) - SystemReserveTarget;
  }
  v15 = *((_QWORD *)v9 + 11);
  if ( v14 >= 0x40 )
    v14 = 64;
  if ( v12 != -1 )
  {
    *((_QWORD *)v9 + v5 + 11) &= ~(1LL << v10);
    --*((_DWORD *)v9 + 349);
  }
  *a3 = v14;
  *a4 = v15;
}
