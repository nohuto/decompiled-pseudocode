/*
 * XREFs of PspGetBaseTrapFrame @ 0x140427E50
 * Callers:
 *     KiRollbackSlistPops @ 0x1404BD530 (KiRollbackSlistPops.c)
 *     PspFreeUserFiberShadowStack @ 0x1408D959C (PspFreeUserFiberShadowStack.c)
 *     PspInitializeThunkContext @ 0x140920BE8 (PspInitializeThunkContext.c)
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
