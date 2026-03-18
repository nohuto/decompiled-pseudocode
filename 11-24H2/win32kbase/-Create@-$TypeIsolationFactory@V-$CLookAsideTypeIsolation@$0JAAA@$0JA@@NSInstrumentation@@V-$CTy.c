/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@gdi@@SA_NPEAPEAE@Z @ 0x14023E55C
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@gdi@@SA_NPEAPEAE@Z @ 0x140199DE4 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$C.c)
 * Callees:
 *     ?Initialize@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ @ 0x140118C04 (-Initialize@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@V?$CTypeIsolation@$0HAAA@$0HA@@2@@gdi@@SA_NPEAPEAE@Z @ 0x140118CE0 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@V-$CTypeIsola.c)
 *     ?Destroy@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140118EF4 (-Destroy@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV?$CTypeIsolation@$0JAAA@$0JA@@2@XZ @ 0x14023E498 (-Create@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV-$CTypeIsolation@$0JAAA@.c)
 */

char __fastcall gdi::TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<28672,112>>::Create(
        __int64 a1)
{
  char *v2; // rax
  char v3; // di
  __int64 Pool2; // rax
  void *v5; // rbx

  v2 = NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Create();
  v3 = 0;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 8) = v2;
    Pool2 = ExAllocatePool2(258LL, 40LL, 1869834581LL);
    v5 = (void *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 16) = 0LL;
      *(_QWORD *)(Pool2 + 24) = 0LL;
      *(_DWORD *)(Pool2 + 32) = 0;
      *(_BYTE *)(Pool2 + 36) = 0;
      *(_QWORD *)(Pool2 + 8) = Pool2;
      *(_QWORD *)Pool2 = Pool2;
      if ( NSInstrumentation::CTypeIsolation<81920,320>::Initialize(Pool2) )
      {
        *(_QWORD *)(a1 + 32) = v5;
        v3 = gdi::TypeIsolationFactory<NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<28672,112>>::Create(a1);
      }
      else
      {
        NSInstrumentation::CTypeIsolation<24576,96>::Destroy(v5);
      }
    }
    LOBYTE(v2) = v3;
  }
  return (char)v2;
}
