/*
 * XREFs of ?OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18007260C
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180027170 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimationEngine::CTransitionVisualSet::OnTick(CAnimationEngine::CTransitionVisualSet *this)
{
  __int64 v2; // rcx
  double v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 4);
  v3 = 0.0;
  if ( (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v2 + 152LL))(v2, &v3) >= 0 )
    *((double *)this + 7) = v3 + *((double *)this + 7);
}
