/*
 * XREFs of ?GetDisplayName@AppUsageTracker@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180571410
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800561C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z @ 0x1805715A0 (-IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppUsageTracker::GetDisplayName(
        __int64 a1,
        __int64 a2,
        Windows::Internal::FamilySafety::AppLimits *a3)
{
  __int64 v6; // rax
  void *v8[4]; // [rsp+30h] [rbp-48h] BYREF

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  if ( !Windows::Internal::FamilySafety::AppLimits::IsPackagedApp(a3, (const unsigned __int16 *)a2) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, void **, Windows::Internal::FamilySafety::AppLimits *))(**(_QWORD **)(a1 + 88)
                                                                                                  + 80LL))(
           *(_QWORD *)(a1 + 88),
           v8,
           a3);
    std::wstring::operator=(a2, v6);
    std::wstring::_Tidy_deallocate(v8);
  }
  return a2;
}
