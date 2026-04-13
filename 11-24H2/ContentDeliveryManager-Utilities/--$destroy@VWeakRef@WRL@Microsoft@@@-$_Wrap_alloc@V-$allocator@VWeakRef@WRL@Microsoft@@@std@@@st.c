/*
 * XREFs of ??$destroy@VWeakRef@WRL@Microsoft@@@?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXPEAVWeakRef@WRL@Microsoft@@@Z @ 0x18005F9C0
 * Callers:
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180064100 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 *     _std::_Uninit_move_Microsoft::WRL::WeakRef___Microsoft::WRL::WeakRef___std::allocator_Microsoft::WRL::WeakRef__Microsoft::WRL::WeakRef__::_1_::catch$1 @ 0x1800B909A (_std--_Uninit_move_Microsoft--WRL--WeakRef___Microsoft--WRL--WeakRef___std--allocator_Microsoft-.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Wrap_alloc<std::allocator<Microsoft::WRL::WeakRef>>::destroy<Microsoft::WRL::WeakRef>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
