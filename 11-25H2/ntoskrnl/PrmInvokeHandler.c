/*
 * XREFs of PrmInvokeHandler @ 0x14064B9F0
 * Callers:
 *     <none>
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PrmInvokeHandler(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned int v3; // edi

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  }
  _InterlockedIncrement(&dword_140EFA244);
  if ( ExPrmContext == 2 )
    v3 = guard_dispatch_icall_no_overrides(a1);
  else
    v3 = -1058143731;
  _InterlockedDecrement(&dword_140EFA244);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v3;
}
