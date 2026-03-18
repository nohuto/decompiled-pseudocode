/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0OAAAA@$0OAA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00D3550
 * Callers:
 *     ?InitializeTypeIsolation@@YA_NXZ @ 0x1C007EE9C (-InitializeTypeIsolation@@YA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@QEAA_NXZ @ 0x1C008CA98 (-Initialize@-$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@QEAA_NXZ.c)
 *     ?Create@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008D85C (-Create@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00915E4 (-Destroy@-$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0OAAAA@$0OAA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00D370C (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V-$CLookAsideTy.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<221184,864>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<917504,3584>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(
        __int64 *a1)
{
  __int64 Pool2; // rax
  char v3; // di
  __int64 v4; // rbx
  void *v6; // rax

  Pool2 = ExAllocatePool2(66LL, 144LL, 1869834581LL);
  v3 = 0;
  v4 = Pool2;
  if ( !Pool2 )
    return 0;
  memset((void *)(Pool2 + 37), 0, 0x6BuLL);
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 24) = 0LL;
  *(_DWORD *)(v4 + 32) = 0;
  *(_BYTE *)(v4 + 36) = 0;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)v4 = v4;
  if ( !NSInstrumentation::CLookAsideTypeIsolation<221184,864>::Initialize(v4) )
  {
    NSInstrumentation::CLookAsideTypeIsolation<221184,864>::Destroy((char *)v4);
    return 0;
  }
  *a1 = v4;
  v6 = NSInstrumentation::CTypeIsolation<40960,160>::Create();
  if ( v6 )
  {
    a1[2] = (__int64)v6;
    return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<917504,3584>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(a1);
  }
  return v3;
}
