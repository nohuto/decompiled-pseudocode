/*
 * XREFs of ?RmHamHostIsPple@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180069F2C
 * Callers:
 *     ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000DCC8 (-HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@.c)
 * Callees:
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C8E4 (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

_BOOL8 __fastcall RmHamHostIsPple(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  return RmpActivityHostIsPple((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)a1 - 64) & -(__int64)(a1 != 0LL)));
}
