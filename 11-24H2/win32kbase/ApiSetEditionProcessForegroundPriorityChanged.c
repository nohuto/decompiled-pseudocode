/*
 * XREFs of ApiSetEditionProcessForegroundPriorityChanged @ 0x14011C0BC
 * Callers:
 *     ?DeboostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401AC0F4 (-DeboostAllProcesses@ForegroundBoost@@YAXXZ.c)
 *     ?SyncBoostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401ACC64 (-SyncBoostAllProcesses@ForegroundBoost@@YAXXZ.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority @ 0x1401ACF94 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority_Old @ 0x1401AD1B0 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority_Old.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionProcessForegroundPriorityChanged(__int64 a1, __int64 a2))(void)
{
  unsigned int v2; // ebx
  __int64 (*result)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = a2;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5280LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48) + 5288LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(__int64, _QWORD))result)(a1, v2);
    }
  }
  return result;
}
