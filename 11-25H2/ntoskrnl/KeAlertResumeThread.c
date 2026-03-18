/*
 * XREFs of KeAlertResumeThread @ 0x1405B3CB8
 * Callers:
 *     NtAlertResumeThread @ 0x14076A720 (NtAlertResumeThread.c)
 * Callees:
 *     KeResumeThread @ 0x14046230C (KeResumeThread.c)
 *     KeAlertThread @ 0x14047D210 (KeAlertThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeAlertResumeThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned int v3; // edi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  KeAlertThread(a1, 0);
  v3 = KeResumeThread(a1, 1u);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v3;
}
