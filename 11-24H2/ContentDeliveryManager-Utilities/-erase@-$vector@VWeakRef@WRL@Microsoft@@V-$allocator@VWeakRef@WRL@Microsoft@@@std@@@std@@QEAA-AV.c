/*
 * XREFs of ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180064B88
 * Callers:
 *     ?UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@@Z @ 0x180063E20 (-UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAA.c)
 * Callees:
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180064100 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::vector<Microsoft::WRL::WeakRef>::erase(__int64 **a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  __int64 *v4; // rsi
  __int64 **v7; // r15
  __int64 **v8; // rdi
  __int64 *v9; // r12
  __int64 *v10; // r14
  __int64 v11; // rax
  char v13; // [rsp+20h] [rbp-28h] BYREF

  v4 = a4;
  v7 = a1;
  v8 = a1 + 1;
  if ( a3 == *a1 && a4 == *v8 )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Destroy((__int64)a1, *a1, *v8);
    *v8 = *v7;
  }
  else if ( a3 != a4 )
  {
    v9 = *v8;
    v10 = a3;
    if ( a4 != *v8 )
    {
      do
      {
        v11 = 0LL;
        if ( &v13 != (char *)v4 )
        {
          v11 = *v4;
          *v4 = 0LL;
        }
        a1 = (__int64 **)*v10;
        *v10 = v11;
        if ( a1 )
          ((void (__fastcall *)(__int64 **))(*a1)[2])(a1);
        ++v10;
        ++v4;
      }
      while ( v4 != v9 );
      v8 = v7 + 1;
    }
    std::vector<Microsoft::WRL::WeakRef>::_Destroy((__int64)a1, v10, *v8);
    *v8 = v10;
  }
  *a2 = a3;
  return a2;
}
