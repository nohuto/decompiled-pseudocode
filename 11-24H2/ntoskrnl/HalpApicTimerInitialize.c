/*
 * XREFs of HalpApicTimerInitialize @ 0x140560F50
 * Callers:
 *     HalpApicTimerStop @ 0x1405610D0 (HalpApicTimerStop.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicTimerInitialize(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9

  v4 = a1;
  guard_dispatch_icall_no_overrides(992LL, *((unsigned int *)a1 + 1), a3, a4);
  LODWORD(v4) = *v4 | 0x30000;
  guard_dispatch_icall_no_overrides(896LL, 0xFFFFFFFFLL, v5, v6);
  guard_dispatch_icall_no_overrides(800LL, (unsigned int)v4, v7, v8);
  return 0LL;
}
