/*
 * XREFs of ?RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A9B8
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012F30 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostCompleteInitialization(struct _RM_ACTIVITY_HOST *a1)
{
  QueryUnbiasedInterruptTime((PULONGLONG)a1 + 181);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 2) <= 1 )
    __fastfail(0xEu);
  RmpActivityHostAddToTables(a1);
}
