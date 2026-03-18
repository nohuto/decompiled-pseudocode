/*
 * XREFs of BapdpKsrCancelScenario @ 0x140652720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BapdpKsrCancelScenario(int a1, int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1 & 0x5000000;
  if ( !(_DWORD)v2 || (a2 & 0x5000000) != 0 || !(_QWORD)xmmword_140EFEA90 )
    return 3221225659LL;
  result = guard_dispatch_icall_no_overrides(v2, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
    ExSoftRebootFlags &= ~4u;
  return result;
}
