/*
 * XREFs of ?UninitializeUserTypeIsolation@@YAXXZ @ 0x140118D78
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0BKAAA@$0BKA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SAXPEAPEAE@Z @ 0x140118E00 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V-$CTypeIsolat.c)
 *     ?Destroy@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140118EF4 (-Destroy@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall UninitializeUserTypeIsolation(__int64 a1)
{
  __int64 v1; // rcx
  PVOID *v2; // rbx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 19856) )
  {
    v2 = *(PVOID **)(W32GetUserSessionState(v1) + 19856);
    if ( *v2 )
      NSInstrumentation::CTypeIsolation<24576,96>::Destroy(*v2);
    TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<106496,416>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy(v2);
    UserSessionState = W32GetUserSessionState(v3);
    ExFreePoolWithTag(*(PVOID *)(UserSessionState + 19856), 0);
    *(_QWORD *)(W32GetUserSessionState(v5) + 19856) = 0LL;
  }
}
