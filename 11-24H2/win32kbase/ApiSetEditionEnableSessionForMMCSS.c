/*
 * XREFs of ApiSetEditionEnableSessionForMMCSS @ 0x14006FD28
 * Callers:
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x14006FC08 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionEnableSessionForMMCSS(__int64 a1, __int64 a2))(void)
{
  unsigned int v2; // ebx
  __int64 (*result)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4200LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 4208LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(_QWORD))result)(v2);
    }
  }
  return result;
}
