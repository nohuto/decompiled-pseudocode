/*
 * XREFs of ?RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18008CA34
 * Callers:
 *     ?RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1K@Z @ 0x180087BB0 (-RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_.c)
 *     ?RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@K@Z @ 0x180087E34 (-RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z @ 0x18006D7C0 (-RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z.c)
 */

bool __fastcall RmpGameModeIsResourceRequestValid(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // esi
  int v9; // ebx
  __int64 v10; // rbp
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  if ( *(_DWORD *)a2 != 6 )
    return 0;
  v6 = *((_DWORD *)a2 + 8) & 5;
  if ( v6 == 4
    || v6 == 1
    && (*((_DWORD *)a2 + 1)
     || *((_QWORD *)a2 + 1)
     || *((_DWORD *)a2 + 4) != 10
     || *((_DWORD *)a2 + 5) != 50
     || *((_DWORD *)a2 + 6) != 30
     || (*((_BYTE *)a2 + 32) & 8) != 0) )
  {
    return 0;
  }
  v7 = RtlNumberOfSetBitsUlongPtr(*((_QWORD *)a2 + 1), a2, a3, a4);
  v8 = *((_DWORD *)a2 + 1);
  if ( v8 < v7 )
    return 0;
  if ( v8 > 0x40 )
    return 0;
  v9 = *((_DWORD *)a2 + 7);
  v10 = *((_QWORD *)a2 + 1);
  v12 = 0;
  v13 = 0LL;
  RmpAcquireGlobalLock();
  RmpCpuSetManagerGetGameModeRequestLimits(
    (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 680),
    (v9 & 0x40) != 0,
    &v12,
    &v13);
  RmpReleaseGlobalLock();
  if ( v8 > v12
    || (~v13 & v10) != 0
    || *((_BYTE *)a2 + 36) && *((_BYTE *)a2 + 36) != 2 && *((_BYTE *)a2 + 36) != 3 && *((_BYTE *)a2 + 36) != 6 )
  {
    return 0;
  }
  return (unsigned int)(*((_DWORD *)a2 + 4) - 2) <= 8
      && (unsigned int)(*((_DWORD *)a2 + 5) + *((_DWORD *)a2 + 6)) <= 0x64
      && (*((_BYTE *)a2 + 28) & 0x18) != 0x18;
}
