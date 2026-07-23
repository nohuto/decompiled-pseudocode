/*
 * XREFs of PspSecureThreadStartup @ 0x140A90820
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     PspTerminateThreadByPointer @ 0x1408FDF10 (PspTerminateThreadByPointer.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409213E0 (PspDisablePrimaryTokenExchange.c)
 *     PspNotifyThreadCreation @ 0x140921518 (PspNotifyThreadCreation.c)
 *     VslStartSecureThread @ 0x140A90894 (VslStartSecureThread.c)
 */

__int64 PspSecureThreadStartup()
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int started; // eax

  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  PspDisablePrimaryTokenExchange((__int64)CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
    PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, 0xC000004B, 1);
  PspNotifyThreadCreation((__int64)CurrentThread);
  started = VslStartSecureThread();
  return PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, started, 1);
}
