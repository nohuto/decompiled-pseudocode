/*
 * XREFs of ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18001DF6C
 * Callers:
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18001E160 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x1800887AC (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpResourceSetTableFindEmSetById(
        struct _RM_OBJECT_TABLE *a1,
        __int64 a2,
        struct ExecutionModel::ResourceSet **a3)
{
  _QWORD *v4; // rsi
  __int64 v7; // r10
  __int64 v8; // rbx
  __int64 v9; // r11
  int v10; // r9d
  int v11; // ebx
  int v12; // edi
  struct ExecutionModel::ResourceSet *v13; // rcx

  v4 = 0LL;
  RtlAcquireSRWLockShared((char *)a1 + 16);
  v7 = 0LL;
  v8 = -1LL << (*((_BYTE *)a1 + 4) & 0x1F);
  v9 = v8 & (HIBYTE(a2)
           + 37
           * (BYTE6(a2)
            + 37
            * (BYTE5(a2)
             + 37
             * (BYTE4(a2)
              + 37 * (BYTE3(a2) + 37 * (BYTE2(a2) + 37 * (BYTE1(a2) + 37 * ((unsigned __int8)a2 + 11623883LL))))))));
LABEL_2:
  if ( v7 )
    goto LABEL_5;
  v10 = *((_DWORD *)a1 + 1) >> 5;
  if ( v10 )
  {
    v7 = *((_QWORD *)a1 + 1)
       + 8LL
       * ((37
         * (BYTE6(v9)
          + 37
          * (BYTE5(v9)
           + 37
           * (BYTE4(v9) + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
         + HIBYTE(v9)) & (unsigned int)(v10 - 1));
LABEL_5:
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v9 == (v8 & *(_QWORD *)(v7 + 8)) )
      {
        if ( !v7 )
          break;
        if ( a2 == *(_QWORD *)(v7 + 32) )
        {
          v11 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 16)) <= 1 )
            __fastfail(0xEu);
          v4 = (_QWORD *)v7;
          goto LABEL_11;
        }
        goto LABEL_2;
      }
    }
  }
  v11 = -1073741275;
LABEL_11:
  RtlReleaseSRWLockShared((char *)a1 + 16);
  v12 = 0;
  if ( v11 < 0 )
  {
    v12 = v11;
    v4 = 0LL;
  }
  if ( v12 >= 0 )
  {
    v13 = (struct ExecutionModel::ResourceSet *)v4[6];
    *a3 = v13;
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v13 + 8LL))(v13);
    v12 = 0;
  }
  if ( v4 )
    RmpObjectRelease(v4);
  return (unsigned int)v12;
}
