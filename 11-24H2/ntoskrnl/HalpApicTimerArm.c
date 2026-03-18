/*
 * XREFs of HalpApicTimerArm @ 0x140459A50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicTimerArm(unsigned __int8 *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9

  v3 = a2;
  v5 = *a1;
  LODWORD(v5) = v5 | 0x20000;
  v6 = a3;
  if ( (_DWORD)v3 != 2 )
    v5 = *a1;
  guard_dispatch_icall_no_overrides(800LL, v5, a3, v3);
  guard_dispatch_icall_no_overrides(992LL, *((unsigned int *)a1 + 1), v7, v8);
  guard_dispatch_icall_no_overrides(896LL, v6, v9, v10);
  return 0LL;
}
