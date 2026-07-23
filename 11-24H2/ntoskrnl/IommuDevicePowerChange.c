/*
 * XREFs of IommuDevicePowerChange @ 0x1405613B0
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuDevicePowerChange(__int64 a1, struct _EX_RUNDOWN_REF *a2, char a3)
{
  char v4; // bp
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rsi
  struct _EX_RUNDOWN_REF *v7; // rbx

  if ( a3 )
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a2[4].Count + 16), a2[6].Count);
    v7 = a2 + 8;
    v6 = 0LL;
  }
  else
  {
    v4 = 0;
    CurrentIrql = 0;
    v6 = 1LL;
    if ( KeGetCurrentIrql() < 2u )
    {
      v4 = 1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    }
    v7 = a2 + 8;
    ExWaitForRundownProtectionRelease(v7);
    if ( v4 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
  _InterlockedExchange64((volatile __int64 *)v7, v6);
  return 0LL;
}
