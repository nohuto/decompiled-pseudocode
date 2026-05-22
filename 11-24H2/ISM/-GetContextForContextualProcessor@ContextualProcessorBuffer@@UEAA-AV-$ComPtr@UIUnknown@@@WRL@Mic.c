/*
 * XREFs of ?GetContextForContextualProcessor@ContextualProcessorBuffer@@UEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@PEAUIContextualProcessor@@@Z @ 0x180048420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ContextualProcessorBuffer::GetContextForContextualProcessor(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *i; // rax
  __int64 v5; // rcx

  for ( i = *(_QWORD **)(a1 + 24); ; i += 28 )
  {
    if ( i == *(_QWORD **)(a1 + 32) )
    {
      *a2 = 0LL;
      return a2;
    }
    if ( *i == a3 )
      break;
  }
  v5 = i[26];
  *a2 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return a2;
}
