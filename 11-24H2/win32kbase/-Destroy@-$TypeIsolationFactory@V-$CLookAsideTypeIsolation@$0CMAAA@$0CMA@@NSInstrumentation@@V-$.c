/*
 * XREFs of ?Destroy@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@gdi@@SAXPEAPEAE@Z @ 0x14023E6C4
 * Callers:
 *     ?UninitializeTypeIsolation@@YAXXZ @ 0x14019E714 (-UninitializeTypeIsolation@@YAXXZ.c)
 * Callees:
 *     ?Destroy@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140118EF4 (-Destroy@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140156AD0 (-Destroy@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14023E5F8 (-Destroy@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall gdi::TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy(
        __int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  v2 = *(void **)a1;
  if ( v2 )
    NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Destroy(v2);
  v3 = *(void **)(a1 + 16);
  if ( v3 )
    NSInstrumentation::CTypeIsolation<24576,96>::Destroy(v3);
  v4 = *(void **)(a1 + 24);
  if ( v4 )
    NSInstrumentation::CTypeIsolation<24576,96>::Destroy(v4);
  v5 = *(void **)(a1 + 8);
  if ( v5 )
    NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Destroy(v5);
  v6 = *(void **)(a1 + 32);
  if ( v6 )
    NSInstrumentation::CTypeIsolation<24576,96>::Destroy(v6);
  v7 = *(void **)(a1 + 48);
  if ( v7 )
    NSInstrumentation::CTypeIsolation<24576,96>::Destroy(v7);
  v8 = *(void **)(a1 + 56);
  if ( v8 )
    NSInstrumentation::CTypeIsolation<24576,96>::Destroy(v8);
}
