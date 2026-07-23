/*
 * XREFs of HalpApicSetPriority @ 0x140566D30
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x1405665C0 (HalpApicInitializeLocalUnit.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

struct _KPRCB *__fastcall HalpApicSetPriority(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  struct _KPRCB *result; // rax

  v2 = a2;
  guard_dispatch_icall_no_overrides(128LL, 16 * a2);
  guard_dispatch_icall_no_overrides(128LL, v3);
  result = KeGetCurrentPrcb();
  if ( result->CpuVendor == 1 )
    __writecr8(v2);
  return result;
}
