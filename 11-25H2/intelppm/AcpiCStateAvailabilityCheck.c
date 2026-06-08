/*
 * XREFs of AcpiCStateAvailabilityCheck @ 0x140009A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcpiCStateAvailabilityCheck(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int (__fastcall *v4)(__int64); // rax

  v2 = 0;
  v3 = 88LL * a2;
  v4 = *(int (__fastcall **)(__int64))(v3 + a1 + 64);
  if ( v4 && v4(v3 + a1 + 80) < 0 )
    return (unsigned int)-2147483639;
  return v2;
}
