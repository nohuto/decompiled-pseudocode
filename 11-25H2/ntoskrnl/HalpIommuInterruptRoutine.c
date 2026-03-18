/*
 * XREFs of HalpIommuInterruptRoutine @ 0x14054FB50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpIommuInterruptRoutine()
{
  ULONG_PTR *v0; // rbx
  unsigned int v1; // edi
  char v2; // si
  ULONG_PTR *v3; // rcx

  v0 = (ULONG_PTR *)HalpIommuList;
  v1 = 0;
  v2 = 0;
  while ( v0 != &HalpIommuList )
  {
    v3 = v0;
    v0 = (ULONG_PTR *)*v0;
    if ( (v3[59] & 0x120) != 0 && (unsigned __int8)guard_dispatch_icall_no_overrides(v3[2]) )
    {
      v2 = 1;
      guard_dispatch_icall_no_overrides(v1);
    }
    ++v1;
  }
  return v2;
}
