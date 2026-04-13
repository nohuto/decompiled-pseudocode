/*
 * XREFs of ?push_back@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x180064DA8
 * Callers:
 *     ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180063340 (-RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagem.c)
 * Callees:
 *     ?_Reserve@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x180064710 (-_Reserve@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<Microsoft::WRL::WeakRef>::push_back(__int64 *a1, __int64 *a2)
{
  _QWORD *v4; // r14
  bool v5; // al
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx

  v4 = a1 + 1;
  v5 = (unsigned __int64)a2 < a1[1] && *a1 <= (unsigned __int64)a2;
  v6 = a1[2];
  v7 = v4;
  if ( v5 )
  {
    v8 = ((__int64)a2 - *a1) >> 3;
    if ( *v4 == v6 )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Reserve((__int64)a1);
      v7 = a1 + 1;
    }
    result = *a1;
    v10 = *(_QWORD *)(*a1 + 8 * v8);
    *(_QWORD *)*v4 = v10;
    if ( v10 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  else
  {
    if ( *v4 == v6 )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Reserve((__int64)a1);
      v7 = a1 + 1;
    }
    result = *v4;
    v11 = *a2;
    *(_QWORD *)*v4 = *a2;
    if ( v11 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  }
  *v7 += 8LL;
  return result;
}
