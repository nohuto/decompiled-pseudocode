/*
 * XREFs of HalpIommuInterruptRoutine @ 0x140552450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpIommuInterruptRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR *v4; // rbx
  unsigned int v5; // edi
  char v6; // si
  ULONG_PTR *v7; // rcx

  v4 = (ULONG_PTR *)HalpIommuList;
  v5 = 0;
  v6 = 0;
  while ( v4 != &HalpIommuList )
  {
    v7 = v4;
    v4 = (ULONG_PTR *)*v4;
    if ( (v7[59] & 0x120) != 0 && (unsigned __int8)guard_dispatch_icall_no_overrides(v7[2], a2, a3, a4) )
    {
      v6 = 1;
      guard_dispatch_icall_no_overrides(v5, a2, a3, a4);
    }
    ++v5;
  }
  return v6;
}
