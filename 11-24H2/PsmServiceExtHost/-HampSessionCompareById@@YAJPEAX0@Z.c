/*
 * XREFs of ?HampSessionCompareById@@YAJPEAX0@Z @ 0x180014A30
 * Callers:
 *     ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180013C1C (-HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180013DE4 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HamSrvPackageGetDebugMode@@YAEPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXK@Z @ 0x180014160 (-HamSrvPackageGetDebugMode@@YAEPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXK@Z.c)
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x180014BA8 (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampSessionCompareById(void *a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( (_DWORD)a1 == a2[22] )
    return 0LL;
  result = 0xFFFFFFFFLL;
  if ( (unsigned int)a1 > a2[22] )
    return 1LL;
  return result;
}
