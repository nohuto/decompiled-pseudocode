/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@QEAA@XZ @ 0x1801056A0
 * Callers:
 *     ??0?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180105580 (--0-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@AEBV01.c)
 * Callees:
 *     ?_Tidy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180023F84 (-_Tidy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tidy_guard<std::vector<Microsoft::WRL::WeakRef>>::~_Tidy_guard<std::vector<Microsoft::WRL::WeakRef>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<Microsoft::WRL::WeakRef>::_Tidy(v1);
}
