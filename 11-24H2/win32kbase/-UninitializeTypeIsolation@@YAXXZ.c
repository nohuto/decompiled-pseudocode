/*
 * XREFs of ?UninitializeTypeIsolation@@YAXXZ @ 0x14019E714
 * Callers:
 *     MultiUserNtGreCleanup @ 0x140089C68 (MultiUserNtGreCleanup.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@gdi@@SAXPEAPEAE@Z @ 0x14023E6C4 (-Destroy@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall UninitializeTypeIsolation(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  int (*v4)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  void (*v7)(void); // rax

  v3 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( *(_QWORD *)(v3 + 4272) )
  {
    v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v2, v1) + 24) + 2168LL);
    if ( v4 && v4() >= 0 )
    {
      v7 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 24) + 2176LL);
      if ( v7 )
        v7();
    }
    gdi::TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy(*(_QWORD *)(v3 + 4272));
    GreDeleteFastMutex(*(char **)(v3 + 4272));
    *(_QWORD *)(v3 + 4272) = 0LL;
  }
}
