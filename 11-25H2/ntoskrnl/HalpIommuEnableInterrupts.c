/*
 * XREFs of HalpIommuEnableInterrupts @ 0x14054A9DC
 * Callers:
 *     HalpIommuInitSystem @ 0x140B3D550 (HalpIommuInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpIommuEnableInterrupts()
{
  ULONG_PTR *i; // rbx
  __int64 result; // rax

  if ( !HalpHvIommu )
  {
    for ( i = (ULONG_PTR *)HalpIommuList; i != &HalpIommuList; i = (ULONG_PTR *)*i )
    {
      if ( i[38] )
      {
        result = i[36];
        if ( result )
          result = guard_dispatch_icall_no_overrides(i[2]);
      }
    }
  }
  return result;
}
