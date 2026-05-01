/*
 * XREFs of ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000CE78
 * Callers:
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C9A4 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012FB0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 * Callees:
 *     ?RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18000CF8C (-RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180062764 (-RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 */

int __fastcall RmpPsmAppFamilyTableTryRemoveActivityHost(struct _RM_ACTIVITY_HOST *a1)
{
  int result; // eax
  struct _RM_PSM_APP_FAMILY *v3; // rbx
  _QWORD *v4; // r8
  _QWORD *i; // rcx
  _OWORD *v6; // rdx
  __int64 v7; // rax
  struct _RM_PSM_APP_FAMILY *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  result = RmpPsmAppFamilyTableFindByHostInfo(
             *((struct _RM_SERVICE_GLOBALS **)a1 + 6),
             (struct _RM_ACTIVITY_HOST *)((char *)a1 + 88),
             &v8);
  if ( result < 0 )
    return result;
  v3 = v8;
  v4 = 0LL;
  for ( i = (_QWORD *)((char *)v8 + 560); ; i = (_QWORD *)*i )
  {
    if ( !i )
      return -1073741275;
    v6 = i - 1;
    if ( (struct _RM_ACTIVITY_HOST *)*(i - 1) == a1 )
      break;
    v4 = i;
  }
  if ( a1 == *((struct _RM_ACTIVITY_HOST **)v8 + 71) )
    *((_QWORD *)v8 + 71) = 0LL;
  if ( v4 )
    goto LABEL_18;
  v7 = *i;
  if ( *i )
  {
    v4 = i;
    *v6 = *(_OWORD *)(v7 - 8);
    v6 = (_OWORD *)(v7 - 8);
LABEL_18:
    *v4 = *i;
    HampFreeHeap(v6);
    goto LABEL_10;
  }
  *v6 = 0LL;
LABEL_10:
  if ( *((struct _RM_ACTIVITY_HOST **)v3 + 72) == (struct _RM_ACTIVITY_HOST *)((char *)a1 + 64) )
    *((_QWORD *)v3 + 72) = 0LL;
  if ( !*((_QWORD *)v3 + 69) )
    RmpPsmAppFamilyTableRemove(*((struct _RM_SERVICE_GLOBALS **)a1 + 6), v3);
  return 0;
}
