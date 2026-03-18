/*
 * XREFs of KeAlertResumeThread @ 0x1405B7BA8
 * Callers:
 *     NtAlertResumeThread @ 0x14077A3D0 (NtAlertResumeThread.c)
 * Callees:
 *     KeResumeThread @ 0x140460900 (KeResumeThread.c)
 *     KeAlertThread @ 0x140479900 (KeAlertThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeAlertResumeThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned int v3; // edi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  KeAlertThread(a1, 0LL);
  v3 = KeResumeThread(a1, 1u);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v3;
}
