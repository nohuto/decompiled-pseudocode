/*
 * XREFs of ?RmpGameModeReadDefaultGpuSettings@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18008CBF0
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800856B0 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall RmpGameModeReadDefaultGpuSettings(struct _RM_GAME_MODE_CONTEXT *a1)
{
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  LODWORD(v2) = 16;
  if ( (int)D3DKMTGetYieldPercentage(&v2) < 0
    || (*((_DWORD *)a1 + 12) = HIDWORD(v2),
        *((_DWORD *)a1 + 15) = DWORD2(v2),
        v2 = 0LL,
        LODWORD(v2) = 16,
        (int)D3DKMTGetMemoryBudgetTarget(&v2) < 0) )
  {
    *((_BYTE *)a1 + 149) |= 1u;
  }
  else
  {
    *(_QWORD *)((char *)a1 + 52) = *((_QWORD *)&v2 + 1);
  }
}
