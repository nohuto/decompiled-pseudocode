/*
 * XREFs of ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000D07C
 * Callers:
 *     ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18003A900 (-RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x18000D198 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     ?RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000D1FC (-RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 */

struct _RM_PSM_APP_FAMILY *__fastcall RmpPsmAppFamilyTableFind(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_APP_FAMILY_ID *a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r10
  int v7; // r9d

  v4 = RmpPsmAppFamilyIdHash(a2);
  v5 = 0LL;
LABEL_2:
  v6 = v4 & (-1LL << (*((_BYTE *)a1 + 3364) & 0x1F));
  if ( v5 )
    goto LABEL_5;
  v7 = *((_DWORD *)a1 + 841) >> 5;
  if ( v7 )
  {
    v5 = *((_QWORD *)a1 + 421)
       + 8LL
       * ((37
         * (BYTE6(v6)
          + 37
          * (BYTE5(v6)
           + 37
           * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
         + HIBYTE(v6)) & (unsigned int)(v7 - 1));
LABEL_5:
    while ( 1 )
    {
      v5 = *(_QWORD *)v5;
      if ( (v5 & 1) != 0 )
        break;
      if ( v6 == ((-1LL << (*((_BYTE *)a1 + 3364) & 0x1F)) & *(_QWORD *)(v5 + 8)) )
      {
        if ( v5 && !RmpPsmAppFamilyCompareForHashTable((struct _RTL_HASH_ENTRY *)v5, a2) )
          goto LABEL_2;
        return (struct _RM_PSM_APP_FAMILY *)v5;
      }
    }
  }
  return 0LL;
}
