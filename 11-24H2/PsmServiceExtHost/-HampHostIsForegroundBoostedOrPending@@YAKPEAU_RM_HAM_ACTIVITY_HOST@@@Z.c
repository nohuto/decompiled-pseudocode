/*
 * XREFs of ?HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C108
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000BBA0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009D50 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActGetExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002B120 (-HampActGetExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@PEAU_HAM_ACTIVITY@@@Z.c)
 */

__int64 __fastcall HampHostIsForegroundBoostedOrPending(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _HAM_ACTIVITY *FirstActivity; // r8
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rcx

  FirstActivity = HampHostGetFirstActivity(a1);
  while ( 1 )
  {
    if ( !FirstActivity )
      return 0LL;
    v2 = *((_BYTE *)FirstActivity + 562);
    if ( (v2 == 3 || v2 == 2 && *((_BYTE *)FirstActivity + 563)) && (int)HampActGetExecutionSpeed(FirstActivity) >= 2 )
      break;
    v3 = *((_QWORD *)FirstActivity + 12);
    v4 = *((_QWORD *)FirstActivity + 10);
    FirstActivity = 0LL;
    if ( v3 != v4 + 608 )
      FirstActivity = (struct _HAM_ACTIVITY *)(v3 - 96);
  }
  return 1LL;
}
