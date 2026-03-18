/*
 * XREFs of PrmInvokeHandler @ 0x140657950
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PrmInvokeHandler(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rbp
  unsigned __int8 CurrentIrql; // bl
  unsigned int v9; // edi

  v6 = a2;
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
    v9 = guard_dispatch_icall_no_overrides(a1, v6, a3, a4);
  else
    v9 = -1058143731;
  _InterlockedDecrement(&dword_140EFA584);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v9;
}
