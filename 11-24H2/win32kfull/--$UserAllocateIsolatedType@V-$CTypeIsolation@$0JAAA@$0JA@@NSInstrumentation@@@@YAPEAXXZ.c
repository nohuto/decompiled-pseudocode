/*
 * XREFs of ??$UserAllocateIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1401BB428
 * Callers:
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1400B6250 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401BB45C (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall UserAllocateIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(__int64 a1, __int64 a2)
{
  if ( **(_QWORD **)(W32GetUserSessionState(a1, a2) + 19856) )
    return NSInstrumentation::CTypeIsolation<36864,144>::Allocate();
  else
    return 0LL;
}
