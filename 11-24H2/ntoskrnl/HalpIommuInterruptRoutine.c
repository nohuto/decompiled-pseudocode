/*
 * XREFs of HalpIommuInterruptRoutine @ 0x14054FD90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpIommuInterruptRoutine(__int64 a1, __int64 a2)
{
  ULONG_PTR *v2; // rbx
  unsigned int v3; // edi
  char v4; // si
  ULONG_PTR *v5; // rcx

  v2 = (ULONG_PTR *)HalpIommuList;
  v3 = 0;
  v4 = 0;
  while ( v2 != &HalpIommuList )
  {
    v5 = v2;
    v2 = (ULONG_PTR *)*v2;
    if ( (v5[59] & 0x120) != 0 && (unsigned __int8)guard_dispatch_icall_no_overrides(v5[2], a2) )
    {
      v4 = 1;
      guard_dispatch_icall_no_overrides(v3, a2);
    }
    ++v3;
  }
  return v4;
}
