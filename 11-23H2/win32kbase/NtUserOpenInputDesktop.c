/*
 * XREFs of NtUserOpenInputDesktop @ 0x1C00C4530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserOpenInputDesktop(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx

  v3 = 0LL;
  if ( qword_1C0295290 && (int)qword_1C0295290() >= 0 && qword_1C0295298 )
    return qword_1C0295298(a1, a2, a3);
  return v3;
}
