/*
 * XREFs of ?InitializeUserTypeIsolation@@YA_NXZ @ 0x140119300
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BKAAA@$0BKA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x140119378 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTypeIsolati.c)
 */

bool InitializeUserTypeIsolation(void)
{
  __int64 Pool2; // rbx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax

  Pool2 = ExAllocatePool2(256LL, 48LL, 1869834581LL);
  *(_QWORD *)(W32GetUserSessionState(v1) + 19856) = Pool2;
  if ( !*(_QWORD *)(W32GetUserSessionState(v2) + 19856) )
    return 0;
  UserSessionState = W32GetUserSessionState(v3);
  return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<106496,416>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Create(*(_QWORD *)(UserSessionState + 19856));
}
