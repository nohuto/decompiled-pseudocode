/*
 * XREFs of ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x18005B998
 * Callers:
 *     ?RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x180087A90 (-RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z.c)
 *     ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x18008AAE8 (-RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpObjectTableFindObjectByHandle(
        struct _RM_OBJECT_TABLE *a1,
        unsigned __int64 *a2,
        struct _RM_OBJECT_HEADER **a3)
{
  __int64 v6; // rbp
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // r11
  __int64 v10; // r10
  int v11; // r9d

  RtlAcquireSRWLockShared((char *)a1 + 16);
  v6 = *a2;
  v7 = 0LL;
  v8 = -1073741275;
  v9 = -1LL << (*((_BYTE *)a1 + 4) & 0x1F);
  v10 = v9 & (HIBYTE(v6)
            + 37
            * (BYTE6(v6)
             + 37
             * (BYTE5(v6)
              + 37
              * (BYTE4(v6)
               + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883LL))))))));
LABEL_2:
  if ( v7 )
    goto LABEL_5;
  v11 = *((_DWORD *)a1 + 1) >> 5;
  if ( v11 )
  {
    v7 = *((_QWORD *)a1 + 1)
       + 8LL
       * ((37
         * (BYTE6(v10)
          + 37
          * (BYTE5(v10)
           + 37
           * (BYTE4(v10)
            + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
         + HIBYTE(v10)) & (unsigned int)(v11 - 1));
LABEL_5:
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v10 == (v9 & *(_QWORD *)(v7 + 8)) )
      {
        if ( !v7 )
          break;
        if ( v6 == *(_QWORD *)(v7 + 32) )
        {
          v8 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 16)) <= 1 )
            __fastfail(0xEu);
          *a3 = (struct _RM_OBJECT_HEADER *)v7;
          break;
        }
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockShared((char *)a1 + 16);
  return v8;
}
