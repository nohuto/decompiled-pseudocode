/*
 * XREFs of HalpApicSetPriority @ 0x140566670
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x140565F00 (HalpApicInitializeLocalUnit.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

struct _KPRCB *__fastcall HalpApicSetPriority(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  struct _KPRCB *result; // rax

  v2 = a2;
  guard_dispatch_icall_no_overrides(128LL);
  guard_dispatch_icall_no_overrides(128LL);
  result = KeGetCurrentPrcb();
  if ( result->CpuVendor == 1 )
    __writecr8(v2);
  return result;
}
