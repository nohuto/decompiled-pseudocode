/*
 * XREFs of ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1C0010FB8
 * Callers:
 *     ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x1C0010CA0 (-OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z.c)
 *     ?OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0010F80 (-OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0010FFC (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00B6634 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CIT_USER_ACTIVITY_STAT::SetActive(CIT_USER_ACTIVITY_STAT *this, int a2)
{
  int v2; // r8d

  if ( *((_DWORD *)this + 1) >> 31 != a2 )
  {
    v2 = (a2 << 31) | *((_DWORD *)this + 1) & 0x7FFFFFFF;
    *((_DWORD *)this + 1) = v2;
    if ( a2 )
      *((_DWORD *)this + 1) = v2 ^ (v2 ^ (v2 + 1)) & 0x7FFFFFFF;
  }
}
