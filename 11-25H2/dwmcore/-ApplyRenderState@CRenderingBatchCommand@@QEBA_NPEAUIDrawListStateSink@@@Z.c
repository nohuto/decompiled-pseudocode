/*
 * XREFs of ?ApplyRenderState@CRenderingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180144720
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180144C20 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x18018D6A0 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CRenderingBatchCommand::ApplyRenderState(CRenderingBatchCommand *this, struct IDrawListStateSink *a2)
{
  __int64 v3; // rdi
  void (__fastcall *v4)(struct IDrawListStateSink *, __int64); // rax
  __int64 v5; // rdx

  v3 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  v4 = *(void (__fastcall **)(struct IDrawListStateSink *, __int64))(*(_QWORD *)a2 + 8LL);
  if ( *((_BYTE *)this + 92) )
  {
    v4(a2, 24LL);
    LOBYTE(v5) = 2;
  }
  else
  {
    v4(a2, *((unsigned int *)this + 21));
    v5 = *(unsigned __int8 *)(v3 + 80);
  }
  (*(void (__fastcall **)(struct IDrawListStateSink *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v5);
  return 1;
}
