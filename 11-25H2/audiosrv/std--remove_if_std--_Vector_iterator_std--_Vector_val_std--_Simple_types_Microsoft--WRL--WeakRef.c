/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_92c40f897d3a9c7e927f302002ea2ff3___ @ 0x1800231EC
 * Callers:
 *     ?PruneStaleEntries@@YAXAEAV?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800233A8 (-PruneStaleEntries@@YAXAEAV-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@.c)
 * Callees:
 *     _lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator() @ 0x180022FA0 (_lambda_92c40f897d3a9c7e927f302002ea2ff3_--operator().c)
 *     std::find_if_Microsoft::WRL::WeakRef____lambda_92c40f897d3a9c7e927f302002ea2ff3___ @ 0x180022FF8 (std--find_if_Microsoft--WRL--WeakRef____lambda_92c40f897d3a9c7e927f302002ea2ff3___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_92c40f897d3a9c7e927f302002ea2ff3___(
        __int64 **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 *v6; // rdi
  __int64 *v7; // rsi
  __int64 v8; // rax
  char v10; // [rsp+20h] [rbp-18h] BYREF

  v6 = (__int64 *)std::find_if_Microsoft::WRL::WeakRef____lambda_92c40f897d3a9c7e927f302002ea2ff3___(a2, a3);
  v7 = v6;
  if ( v6 != (__int64 *)a3 )
  {
    while ( ++v6 != (__int64 *)a3 )
    {
      if ( !lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(v5, (__int64)v6) )
      {
        v8 = 0LL;
        if ( &v10 != (char *)v6 )
        {
          v8 = *v6;
          *v6 = 0LL;
        }
        v5 = *v7;
        *v7 = v8;
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        ++v7;
      }
    }
  }
  *a1 = v7;
  return a1;
}
