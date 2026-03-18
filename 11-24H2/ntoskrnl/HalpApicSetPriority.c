/*
 * XREFs of HalpApicSetPriority @ 0x140569240
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x140568AD0 (HalpApicInitializeLocalUnit.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

struct _KPRCB *__fastcall HalpApicSetPriority(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KPRCB *result; // rax

  v4 = a2;
  guard_dispatch_icall_no_overrides(128LL, 16 * a2, a3, a4);
  guard_dispatch_icall_no_overrides(128LL, v5, v6, v7);
  result = KeGetCurrentPrcb();
  if ( result->CpuVendor == 1 )
    __writecr8(v4);
  return result;
}
