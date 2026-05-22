/*
 * XREFs of ?SetInputContext@ContextualProcessorBuffer@@UEAAXPEAVInputContext@@@Z @ 0x180052780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ContextualProcessorBuffer::SetInputContext(ContextualProcessorBuffer *this, struct InputContext *a2)
{
  __int64 v4; // rcx

  if ( *((struct InputContext **)this + 17) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct InputContext *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
