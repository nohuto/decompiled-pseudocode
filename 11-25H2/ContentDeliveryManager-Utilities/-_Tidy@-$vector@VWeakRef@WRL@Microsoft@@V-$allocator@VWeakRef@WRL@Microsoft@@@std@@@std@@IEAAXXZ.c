/*
 * XREFs of ?_Tidy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXXZ @ 0x180064310
 * Callers:
 *     ??1?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800600CC (--1-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ.c)
 *     ??1SubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA@XZ @ 0x180060184 (--1SubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA.c)
 *     ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180062EA0 (-RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagem.c)
 * Callees:
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180063C60 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 */

void __fastcall std::vector<Microsoft::WRL::WeakRef>::_Tidy(__int64 a1)
{
  if ( *(_QWORD *)a1 )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Destroy(a1, *(__int64 **)a1, *(__int64 **)(a1 + 8));
    operator delete(*(void **)a1);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
