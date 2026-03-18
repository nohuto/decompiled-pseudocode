/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@gdi@@SA_NPEAPEAE@Z @ 0x140199DE4
 * Callers:
 *     ?InitializeTypeIsolation@@YA_NXZ @ 0x140078DD0 (-InitializeTypeIsolation@@YA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140118EF4 (-Destroy@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ @ 0x140119298 (-Initialize@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ.c)
 *     ?Create@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x140119CE8 (-Create@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@gdi@@SA_NPEAPEAE@Z @ 0x14023E55C (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTy.c)
 *     ?Destroy@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14023E5F8 (-Destroy@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ @ 0x14023E908 (-Initialize@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ.c)
 *     memset @ 0x14023F500 (memset.c)
 */

char __fastcall gdi::TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<28672,112>>::Create(
        _QWORD *a1)
{
  __int64 Pool2; // rax
  char v3; // bl
  _QWORD *v4; // rdi
  void *v6; // rax
  __int64 v7; // rax
  void *v8; // rdi

  Pool2 = ExAllocatePool2(66LL, 144LL, 1869834581LL);
  v3 = 0;
  v4 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 0;
  memset((void *)(Pool2 + 37), 0, 0x6BuLL);
  v4[2] = 0LL;
  v4[3] = 0LL;
  *((_DWORD *)v4 + 8) = 0;
  *((_BYTE *)v4 + 36) = 0;
  v4[1] = v4;
  *v4 = v4;
  if ( !NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Initialize((__int64)v4) )
  {
    NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Destroy(v4);
    return 0;
  }
  *a1 = v4;
  v6 = NSInstrumentation::CTypeIsolation<40960,160>::Create();
  if ( v6 )
  {
    a1[2] = v6;
    v7 = ExAllocatePool2(258LL, 40LL, 1869834581LL);
    v8 = (void *)v7;
    if ( v7 )
    {
      *(_QWORD *)(v7 + 16) = 0LL;
      *(_QWORD *)(v7 + 24) = 0LL;
      *(_DWORD *)(v7 + 32) = 0;
      *(_BYTE *)(v7 + 36) = 0;
      *(_QWORD *)(v7 + 8) = v7;
      *(_QWORD *)v7 = v7;
      if ( (unsigned __int8)NSInstrumentation::CTypeIsolation<49152,192>::Initialize(v7) )
      {
        a1[3] = v8;
        return gdi::TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<28672,112>>::Create(a1);
      }
      else
      {
        NSInstrumentation::CTypeIsolation<24576,96>::Destroy(v8);
      }
    }
  }
  return v3;
}
