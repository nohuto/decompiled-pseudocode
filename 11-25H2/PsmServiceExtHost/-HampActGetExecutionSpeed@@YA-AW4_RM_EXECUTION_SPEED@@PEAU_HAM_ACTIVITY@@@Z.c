/*
 * XREFs of ?HampActGetExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002B1A0
 * Callers:
 *     ?HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C188 (-HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002A900 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180034998 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampActGetExecutionSpeed(__int64 a1)
{
  __int16 v1; // dx
  __int64 result; // rax

  v1 = *(_WORD *)(a1 + 424);
  if ( (v1 & 0xC0) == 0xC0 )
  {
    result = *(_DWORD *)(a1 + 480) & 3;
    if ( (*(_DWORD *)(a1 + 480) & 3) != 3 )
      return 2LL;
  }
  else if ( (v1 & 0xEu) < 8 || (v1 & 0x30u) < 0x20 )
  {
    result = *(_DWORD *)(a1 + 480) & 3;
    if ( !(_DWORD)result )
      return 0LL;
  }
  else
  {
    result = *(_DWORD *)(a1 + 480) & 3;
    if ( (unsigned int)result <= 1 )
      return 1LL;
  }
  return result;
}
