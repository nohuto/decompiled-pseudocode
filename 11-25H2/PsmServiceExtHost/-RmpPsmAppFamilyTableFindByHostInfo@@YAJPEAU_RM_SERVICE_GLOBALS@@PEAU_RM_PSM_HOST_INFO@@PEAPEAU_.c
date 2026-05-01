/*
 * XREFs of ?RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18000CF8C
 * Callers:
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C710 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000CE78 (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18002B8E4 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180069F54 (-RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x18000D218 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     ?RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000D27C (-RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000D360 (-RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

int __fastcall RmpPsmAppFamilyTableFindByHostInfo(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_PSM_APP_FAMILY **a3)
{
  int result; // eax
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r10
  int v10; // r9d
  _BYTE v11[544]; // [rsp+30h] [rbp-248h] BYREF

  memset_0(v11, 0, 0x218uLL);
  result = RmpPsmAppFamilyIdFromPsmAppInstanceId(a2, (struct _RM_PSM_APP_FAMILY_ID *)v11);
  if ( result >= 0 )
  {
    v7 = RmpPsmAppFamilyIdHash((struct _RM_PSM_APP_FAMILY_ID *)v11);
    v8 = 0LL;
LABEL_3:
    v9 = v7 & (-1LL << (*((_BYTE *)a1 + 3364) & 0x1F));
    if ( v8 )
      goto LABEL_6;
    v10 = *((_DWORD *)a1 + 841) >> 5;
    if ( v10 )
    {
      v8 = *((_QWORD *)a1 + 421)
         + 8LL
         * ((37
           * (BYTE6(v9)
            + 37
            * (BYTE5(v9)
             + 37
             * (BYTE4(v9)
              + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
           + HIBYTE(v9)) & (unsigned int)(v10 - 1));
LABEL_6:
      while ( 1 )
      {
        v8 = *(_QWORD *)v8;
        if ( (v8 & 1) != 0 )
          break;
        if ( v9 == ((-1LL << (*((_BYTE *)a1 + 3364) & 0x1F)) & *(_QWORD *)(v8 + 8)) )
        {
          if ( !v8 )
            return -1073741275;
          if ( RmpPsmAppFamilyCompareForHashTable((struct _RTL_HASH_ENTRY *)v8, v11) )
          {
            *a3 = (struct _RM_PSM_APP_FAMILY *)v8;
            return 0;
          }
          goto LABEL_3;
        }
      }
    }
    return -1073741275;
  }
  return result;
}
