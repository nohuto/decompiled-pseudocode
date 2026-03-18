/*
 * XREFs of ApiSetEditionInitGlobalCursorSizes @ 0x1401920BC
 * Callers:
 *     InitUserScreen @ 0x140162CD0 (InitUserScreen.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionInitGlobalCursorSizes(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int (*v6)(void); // rax

  v2 = 1;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2736LL);
  if ( v3 && v3() >= 0 )
  {
    v6 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 2744LL);
    if ( v6 )
      return v6();
    else
      return 0;
  }
  return v2;
}
