/*
 * XREFs of PspGetBaseTrapFrame @ 0x140439370
 * Callers:
 *     KiRollbackSlistPops @ 0x1404C3540 (KiRollbackSlistPops.c)
 *     PspInitializeThunkContext @ 0x14090A9A0 (PspInitializeThunkContext.c)
 *     PspFreeUserFiberShadowStack @ 0x140A537E8 (PspFreeUserFiberShadowStack.c)
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
