/*
 * XREFs of ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A794
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012FB0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003A4CC (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18003A5F0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027700 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

__int64 __fastcall RmpActivityHostFindByHostId(__int64 a1, __int64 a2, char a3, char **a4)
{
  char *v8; // rdi
  __int64 v9; // r10
  int v10; // ebx
  __int64 v11; // r14
  __int64 v12; // r11
  int v13; // r9d
  __int64 v14; // rdx

  v8 = 0LL;
  RtlAcquireSRWLockShared(a1 + 32);
  v9 = 0LL;
  v10 = -1073741275;
  v11 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
  v12 = v11 & (HIBYTE(a2)
             + 37
             * (BYTE6(a2)
              + 37
              * (BYTE5(a2)
               + 37
               * (BYTE4(a2)
                + 37 * (BYTE3(a2) + 37 * (BYTE2(a2) + 37 * (BYTE1(a2) + 37 * ((unsigned __int8)a2 + 11623883LL))))))));
LABEL_2:
  if ( v9 )
    goto LABEL_5;
  v13 = *(_DWORD *)(a1 + 20) >> 5;
  if ( v13 )
  {
    v9 = *(_QWORD *)(a1 + 24)
       + 8LL
       * ((37
         * (BYTE6(v12)
          + 37
          * (BYTE5(v12)
           + 37
           * (BYTE4(v12)
            + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))
         + HIBYTE(v12)) & (unsigned int)(v13 - 1));
LABEL_5:
    while ( 1 )
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( v12 == (v11 & *(_QWORD *)(v9 + 8)) )
      {
        if ( !v9 )
          break;
        if ( a2 == *(_QWORD *)(v9 + 32) )
        {
          v10 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v9 + 16)) <= 1 )
            __fastfail(0xEu);
          v8 = (char *)v9;
          break;
        }
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockShared(a1 + 32);
  if ( v10 >= 0 )
  {
    if ( v8[656] == a3 || a3 == 2 )
    {
      *a4 = v8;
      return 0;
    }
    else
    {
      v10 = -1073741776;
      if ( v8 )
        RmpObjectRelease(v8, v14);
    }
  }
  return (unsigned int)v10;
}
