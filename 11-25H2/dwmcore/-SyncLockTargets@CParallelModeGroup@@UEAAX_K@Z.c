/*
 * XREFs of ?SyncLockTargets@CParallelModeGroup@@UEAAX_K@Z @ 0x18013E520
 * Callers:
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x18013EEDC (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CParallelModeGroup::SyncLockTargets(CParallelModeGroup *this, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rdi

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v4 = (_QWORD *)*((_QWORD *)this + 3);
  while ( v2 != v4 )
  {
    v5 = *v2;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v2 + 104LL))(*v2, a2, 1LL) )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 112LL))(v5, 1LL);
    ++v2;
  }
}
