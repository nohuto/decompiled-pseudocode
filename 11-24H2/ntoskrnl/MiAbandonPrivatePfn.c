/*
 * XREFs of MiAbandonPrivatePfn @ 0x140269D68
 * Callers:
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 * Callees:
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140269980 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiCapturePfnPageFileInfoInline @ 0x140269E70 (MiCapturePfnPageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402EDDFC (MI_IS_PTE_IN_WS_SWAP_SET.c)
 */

__int64 __fastcall MiAbandonPrivatePfn(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 *v5; // rsi
  char v6; // bp
  __int64 v7; // rcx
  char v8; // r15

  v2 = 0LL;
  if ( (*(_BYTE *)(a1 + 34) & 0x10) == 0 && !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(*(_QWORD *)(a1 + 16)) )
    MiSetPfnModified(a1, 1);
  v5 = (__int64 *)(a1 + 16);
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 0;
  if ( (v7 & 2) != 0 )
  {
    if ( a2
      || (unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(
                         *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)),
                         a1 + 16) )
    {
      v6 = 1;
    }
    else
    {
      v2 = *v5;
    }
    v8 = 1;
    if ( !v6 )
      goto LABEL_12;
  }
  else if ( !a2 || (v7 & 4) == 0 )
  {
    return v2;
  }
  v2 = MiCapturePfnPageFileInfoInline(a1, 1LL, 1LL);
  MiSetPfnModified(a1, 1);
  if ( v8 )
LABEL_12:
    *(_QWORD *)(a1 + 16) = *v5 & 0xFFFFFFFFFFFFFFFDuLL;
  return v2;
}
