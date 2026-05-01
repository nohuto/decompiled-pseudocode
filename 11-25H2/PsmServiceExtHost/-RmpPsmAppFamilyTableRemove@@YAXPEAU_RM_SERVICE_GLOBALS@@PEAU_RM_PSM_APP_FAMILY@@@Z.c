/*
 * XREFs of ?RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180062764
 * Callers:
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000CE78 (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012FB0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpPsmAppFamilyTableRemove(struct _RM_SERVICE_GLOBALS *a1, struct _RM_PSM_APP_FAMILY *a2)
{
  struct _RM_PSM_APP_FAMILY *i; // rdx
  __int64 v4; // [rsp+8h] [rbp+8h]

  v4 = *((_QWORD *)a2 + 1) & (-1LL << (*((_DWORD *)a1 + 841) & 0x1F));
  for ( i = (struct _RM_PSM_APP_FAMILY *)(*((_QWORD *)a1 + 421)
                                        + 8LL
                                        * ((37
                                          * (BYTE6(v4)
                                           + 37
                                           * (BYTE5(v4)
                                            + 37
                                            * (BYTE4(v4)
                                             + 37
                                             * (BYTE3(v4)
                                              + 37
                                              * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * ((unsigned __int8)v4 + 11623883)))))))
                                          + HIBYTE(v4)) & (unsigned int)((*((_DWORD *)a1 + 841) >> 5) - 1)));
        (*(_QWORD *)i & 1) == 0;
        i = *(struct _RM_PSM_APP_FAMILY **)i )
  {
    if ( *(struct _RM_PSM_APP_FAMILY **)i == a2 )
    {
      *(_QWORD *)i = *(_QWORD *)a2;
      --*((_DWORD *)a1 + 840);
      *(_QWORD *)a2 |= 0x8000000000000002uLL;
      break;
    }
  }
  HampFreeHeap(a2);
}
