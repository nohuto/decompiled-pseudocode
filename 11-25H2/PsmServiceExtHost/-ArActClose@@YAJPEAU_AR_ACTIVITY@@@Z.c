/*
 * XREFs of ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18000682C
 * Callers:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180005B20 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x1800063D0 (-ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 *     ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x18007829C (-ArSrvCloseActivity@@YAJ_K0@Z.c)
 *     ?ArHostRundownActivities@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x1800783D8 (-ArHostRundownActivities@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArActClose(struct _AR_ACTIVITY *a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *((_QWORD *)a1 + 2);
  if ( *(struct _AR_ACTIVITY **)(v1 + 600) == a1 )
    *(_QWORD *)(v1 + 600) = 0LL;
  result = HamCloseActivity(
             *(_QWORD *)((*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 80),
             *((_QWORD *)a1 + 1));
  if ( (int)result >= 0 )
  {
    *((_BYTE *)a1 + 32) = 3;
    return 0LL;
  }
  return result;
}
