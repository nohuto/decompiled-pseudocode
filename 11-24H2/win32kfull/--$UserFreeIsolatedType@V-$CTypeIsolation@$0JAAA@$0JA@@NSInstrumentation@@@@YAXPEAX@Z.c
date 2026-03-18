/*
 * XREFs of ??$UserFreeIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400B5484
 * Callers:
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1400B52DC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1400B6250 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B5DC4 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

__int64 __fastcall UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = W32GetUserSessionState(a1, a2);
  v4 = **(_QWORD **)(result + 19856);
  if ( v4 )
    return NSInstrumentation::CTypeIsolation<36864,144>::Free(v4, a1);
  return result;
}
