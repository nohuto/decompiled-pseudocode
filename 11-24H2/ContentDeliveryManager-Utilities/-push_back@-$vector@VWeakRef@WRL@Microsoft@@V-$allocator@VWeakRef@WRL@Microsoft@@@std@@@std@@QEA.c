/*
 * XREFs of ?push_back@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAVWeakRef@WRL@Microsoft@@@Z @ 0x180064CF8
 * Callers:
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180062C50 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 * Callees:
 *     ?_Reserve@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x180064710 (-_Reserve@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 */

char __fastcall std::vector<Microsoft::WRL::WeakRef>::push_back(__int64 *a1, __int64 *a2)
{
  __int64 **v2; // rsi
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rdi
  __int64 *v10; // r8
  __int64 *v11; // rdx
  __int64 *v12; // rdx

  v2 = (__int64 **)(a1 + 1);
  LOBYTE(v5) = (unsigned __int64)a2 < a1[1] && *a1 <= (unsigned __int64)a2;
  v6 = (__int64 *)a1[2];
  if ( (_BYTE)v5 )
  {
    v7 = (__int64)a2 - *a1;
    v8 = a1 + 1;
    v9 = v7 >> 3;
    if ( *v2 == v6 )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Reserve((__int64)a1);
      v8 = a1 + 1;
    }
    v10 = *v2;
    v5 = *a1;
    *v10 = 0LL;
    v11 = (__int64 *)(v5 + 8 * v9);
    if ( v10 != v11 )
    {
      v5 = *v11;
      *v10 = *v11;
      *v11 = 0LL;
    }
  }
  else
  {
    v8 = a1 + 1;
    if ( *v2 == v6 )
    {
      LOBYTE(v5) = std::vector<Microsoft::WRL::WeakRef>::_Reserve((__int64)a1);
      v8 = a1 + 1;
    }
    v12 = *v2;
    *v12 = 0LL;
    if ( v12 != a2 )
    {
      v5 = *a2;
      *v12 = *a2;
      *a2 = 0LL;
    }
  }
  *v8 += 8LL;
  return v5;
}
