/*
 * XREFs of HalpIommuEnableInterrupts @ 0x14054AB8C
 * Callers:
 *     HalpIommuInitSystem @ 0x140B4F5A0 (HalpIommuInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuEnableInterrupts(__int64 a1, __int64 a2)
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
          result = guard_dispatch_icall_no_overrides(i[2], a2);
      }
    }
  }
  return result;
}
