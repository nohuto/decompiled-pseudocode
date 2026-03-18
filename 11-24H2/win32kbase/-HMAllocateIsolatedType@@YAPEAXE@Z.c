/*
 * XREFs of ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x140042EF8
 * Callers:
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x140041A40 (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 *     HMAllocObjectEx @ 0x140041FF0 (HMAllocObjectEx.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140041428 (-Allocate@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?HMTagToIsolatedType@@YA?AW4UserTypeIsolationCountedType@@E@Z @ 0x140041684 (-HMTagToIsolatedType@@YA-AW4UserTypeIsolationCountedType@@E@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1400861E0 (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140110F64 (-Allocate@-$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

PVOID __fastcall HMAllocateIsolatedType(unsigned __int8 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  PVOID result; // rax
  __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v1 = HMTagToIsolatedType(a1) - 1;
  if ( v1 )
  {
    v3 = v1 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v4 = *(_QWORD *)(W32GetUserSessionState(v2) + 19856);
        result = 0LL;
        v6 = *(__int64 **)(v4 + 24);
        if ( v6 )
          return NSInstrumentation::CTypeIsolation<81920,160>::Allocate(v6);
      }
      else
      {
        return 0LL;
      }
    }
    else
    {
      v7 = *(_QWORD *)(W32GetUserSessionState(v2) + 19856);
      result = 0LL;
      if ( *(_QWORD *)(v7 + 16) )
        return (PVOID)NSInstrumentation::CTypeIsolation<106496,416>::Allocate();
    }
  }
  else
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v2) + 19856);
    result = 0LL;
    if ( *(_QWORD *)(v8 + 8) )
      return (PVOID)NSInstrumentation::CTypeIsolation<40960,160>::Allocate();
  }
  return result;
}
