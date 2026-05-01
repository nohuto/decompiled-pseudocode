/*
 * XREFs of ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18003A900
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012F30 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 * Callees:
 *     ?RmpPsmAppFamilyInitialize@@YAXPEAU_RM_PSM_APP_FAMILY_ID@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18000C43C (-RmpPsmAppFamilyInitialize@@YAXPEAU_RM_PSM_APP_FAMILY_ID@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000D07C (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 *     ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000D2E0 (-RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18003AB00 (-RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPsmAppFamilyTableFindOrCreate(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_PSM_APP_FAMILY **a3)
{
  __int64 result; // rax
  struct _RM_PSM_APP_FAMILY *v7; // rax
  struct _RM_PSM_APP_FAMILY *Heap; // rax
  struct _RM_PSM_APP_FAMILY *v9; // rbx
  _BYTE v10[544]; // [rsp+20h] [rbp-248h] BYREF

  memset_0(v10, 0, 0x218uLL);
  result = RmpPsmAppFamilyIdFromPsmAppInstanceId(a2, (struct _RM_PSM_APP_FAMILY_ID *)v10);
  if ( (int)result >= 0 )
  {
    v7 = RmpPsmAppFamilyTableFind(a1, (struct _RM_PSM_APP_FAMILY_ID *)v10);
    if ( v7 )
    {
      *a3 = v7;
    }
    else
    {
      Heap = (struct _RM_PSM_APP_FAMILY *)HampAllocateHeap(0x248uLL);
      v9 = Heap;
      if ( !Heap )
        return 3221225495LL;
      RmpPsmAppFamilyInitialize((struct _RM_PSM_APP_FAMILY_ID *)v10, Heap);
      RmpPsmAppFamilyTableAdd(a1, v9);
      *a3 = v9;
    }
    return 0LL;
  }
  return result;
}
