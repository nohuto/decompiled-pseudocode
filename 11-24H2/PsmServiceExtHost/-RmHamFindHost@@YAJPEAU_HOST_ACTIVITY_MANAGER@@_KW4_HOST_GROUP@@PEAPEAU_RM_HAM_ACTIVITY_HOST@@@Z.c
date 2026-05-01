/*
 * XREFs of ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E800
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x1800175A0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z @ 0x180067698 (-HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18006853C (-HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     BiHamExtHostQueryResourceUsage @ 0x1800693C0 (BiHamExtHostQueryResourceUsage.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18006AC38 (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007E4C4 (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HamSrvQueryHostStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_HOST_STATE_SUMMARY@@@Z @ 0x180080028 (-HamSrvQueryHostStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_HOST_STATE_SUMMARY@@@Z.c)
 *     ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180080B30 (-HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 *     ?HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z @ 0x180083018 (-HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z.c)
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x180088600 (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 * Callees:
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E464 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

__int64 __fastcall RmHamFindHost(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v4; // rbp
  __int64 v9; // rdi
  unsigned int v10; // r13d
  __int64 v11; // r10
  int v12; // ebx
  __int64 v13; // r14
  __int64 v14; // r11
  __int64 v15; // rcx

  v4 = a1 - 2216;
  v9 = 0LL;
  RtlAcquireSRWLockShared(a1 - 2216);
  v10 = *(_DWORD *)(a1 - 2228);
  v11 = 0LL;
  v12 = -1073741275;
  v13 = -1LL << (v10 & 0x1F);
  v14 = v13 & (HIBYTE(a2)
             + 37
             * (BYTE6(a2)
              + 37
              * (BYTE5(a2)
               + 37
               * (BYTE4(a2)
                + 37 * (BYTE3(a2) + 37 * (BYTE2(a2) + 37 * (BYTE1(a2) + 37 * ((unsigned __int8)a2 + 11623883LL))))))));
LABEL_2:
  if ( v11 )
    goto LABEL_5;
  if ( v10 >> 5 )
  {
    v11 = *(_QWORD *)(a1 - 2224)
        + 8LL
        * ((37
          * (BYTE6(v14)
           + 37
           * (BYTE5(v14)
            + 37
            * (BYTE4(v14)
             + 37 * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 11623883)))))))
          + HIBYTE(v14)) & ((v10 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v11 = *(_QWORD *)v11;
      if ( (v11 & 1) != 0 )
        break;
      if ( v14 == (v13 & *(_QWORD *)(v11 + 8)) )
      {
        if ( !v11 )
          break;
        if ( a2 == *(_QWORD *)(v11 + 32) )
        {
          v12 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 16)) <= 1 )
            __fastfail(0xEu);
          v9 = v11;
          break;
        }
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockShared(v4);
  if ( v12 >= 0 )
  {
    if ( *(_BYTE *)(v9 + 656) == a3 || a3 == 2 )
    {
      RmpAcquireGlobalLock();
      if ( (unsigned int)RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v9 + 64)) )
      {
        *a4 = v15;
        v12 = 0;
      }
      else
      {
        v12 = -1073741275;
      }
      RmpReleaseGlobalLock();
    }
    else
    {
      v12 = -1073741776;
    }
    if ( v9 )
      RmpObjectRelease((PVOID)v9);
  }
  return (unsigned int)v12;
}
