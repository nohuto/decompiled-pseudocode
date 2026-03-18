/*
 * XREFs of IommuDevicePowerChange @ 0x140563780
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuDevicePowerChange(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  char v5; // bp
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rsi
  struct _EX_RUNDOWN_REF *v8; // rbx

  if ( a3 )
  {
    guard_dispatch_icall_no_overrides(
      *(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL),
      *(_QWORD *)(a2 + 48),
      *(unsigned int *)(a2 + 60),
      a4);
    v8 = (struct _EX_RUNDOWN_REF *)(a2 + 64);
    v7 = 0LL;
  }
  else
  {
    v5 = 0;
    CurrentIrql = 0;
    v7 = 1LL;
    if ( KeGetCurrentIrql() < 2u )
    {
      v5 = 1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    }
    v8 = (struct _EX_RUNDOWN_REF *)(a2 + 64);
    ExWaitForRundownProtectionRelease(v8);
    if ( v5 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
  _InterlockedExchange64((volatile __int64 *)v8, v7);
  return 0LL;
}
