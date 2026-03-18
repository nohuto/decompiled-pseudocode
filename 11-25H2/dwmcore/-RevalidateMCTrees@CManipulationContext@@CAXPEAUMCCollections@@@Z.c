/*
 * XREFs of ?RevalidateMCTrees@CManipulationContext@@CAXPEAUMCCollections@@@Z @ 0x180223430
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x180134D80 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801CAFB8 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationContext::RevalidateMCTrees(struct MCCollections *a1)
{
  int v1; // ebp
  __int64 v3; // rsi
  CManipulationContext *v4; // rbx

  v1 = 0;
  if ( *((int *)a1 + 8) > 0 )
  {
    v3 = 0LL;
    do
    {
      v4 = *(CManipulationContext **)(v3 + *((_QWORD *)a1 + 3));
      if ( v4 )
        (**(void (__fastcall ***)(_QWORD))v4)(*(_QWORD *)(v3 + *((_QWORD *)a1 + 3)));
      if ( (*((_BYTE *)v4 + 28) & 4) != 0 )
        CManipulationContext::RevalidateMCTree(v4, a1);
      (*(void (__fastcall **)(CManipulationContext *))(*(_QWORD *)v4 + 8LL))(v4);
      ++v1;
      v3 += 8LL;
    }
    while ( v1 < *((_DWORD *)a1 + 8) );
  }
}
