/*
 * XREFs of SmSwapStore @ 0x140A4A9C4
 * Callers:
 *     SmStoreCompressionStop @ 0x140A4A624 (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x140A4A778 (SmStoreCompressionStart.c)
 *     MiInSwapStoreWorker @ 0x140A4A910 (MiInSwapStoreWorker.c)
 * Callees:
 *     SmKmStoreGet @ 0x140324324 (SmKmStoreGet.c)
 *     SmpKeyedStoreEntryGet @ 0x1403243B0 (SmpKeyedStoreEntryGet.c)
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140434DB0 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 */

__int64 __fastcall SmSwapStore(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // r8d
  _KPROCESS *Process; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = SmpKeyedStoreEntryGet(v3 + 2232, &Process, 0, 0);
  if ( !v4 )
    return 3221226021LL;
  v5 = (_DWORD *)SmKmStoreGet(v3, *(_WORD *)(v4 + 16));
  v7 = 2;
  if ( a2 != 2 )
    v7 = a2 != 0;
  return SMKM_STORE_MGR<SM_TRAITS>::SmSwapStore(v6, v5, v7);
}
