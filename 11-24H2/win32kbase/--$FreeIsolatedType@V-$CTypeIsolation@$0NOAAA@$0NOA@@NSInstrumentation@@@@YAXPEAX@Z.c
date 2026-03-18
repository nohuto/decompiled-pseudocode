/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x14003DC0C
 * Callers:
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x14003D9D0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x140088B80 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14003DDAC (-Free@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

__int64 __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<909312,3552>>(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4272LL);
  v3 = *(_QWORD *)(result + 48);
  if ( v3 )
    return NSInstrumentation::CTypeIsolation<909312,3552>::Free(v3, a1);
  return result;
}
