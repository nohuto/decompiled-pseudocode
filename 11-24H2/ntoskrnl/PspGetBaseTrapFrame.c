/*
 * XREFs of PspGetBaseTrapFrame @ 0x140434EF0
 * Callers:
 *     KiRollbackSlistPops @ 0x1404C1F40 (KiRollbackSlistPops.c)
 *     PspFreeUserFiberShadowStack @ 0x1408DB370 (PspFreeUserFiberShadowStack.c)
 *     PspInitializeThunkContext @ 0x1408FE308 (PspInitializeThunkContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetBaseTrapFrame(__int64 a1, _DWORD *a2)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 40); (*(_BYTE *)(i + 8) & 1) != 0; i = *(_QWORD *)(i + 40) )
    ;
  if ( a2 )
    *a2 = *(_QWORD *)(i + 32) != 0LL;
  return i - 400;
}
