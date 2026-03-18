/*
 * XREFs of PrmQueryHandler @ 0x140657AD0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PrmQueryHandler(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // bl
  unsigned int v7; // edi

  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
  }
  _InterlockedIncrement(&dword_140EFA584);
  if ( ExPrmContext == 2 )
    v7 = guard_dispatch_icall_no_overrides(a1, v4, a3, a4);
  else
    v7 = -1058143731;
  _InterlockedDecrement(&dword_140EFA584);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v7;
}
