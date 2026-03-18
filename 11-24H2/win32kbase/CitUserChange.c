/*
 * XREFs of CitUserChange @ 0x14014E080
 * Callers:
 *     <none>
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x1400B3CFC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140151EE0 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v1 = a1;
  if ( CitIsEnabled(a1) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v2) + 18968) + 32LL);
    if ( *(_QWORD *)(v3 + 96) )
    {
      if ( *(_QWORD *)(v3 + 104) != __PAIR64__(v4, v1) )
        CitpLogoff((struct _CIT_IMPACT_CONTEXT *)v3);
    }
  }
}
