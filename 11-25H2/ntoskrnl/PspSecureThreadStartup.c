/*
 * XREFs of PspSecureThreadStartup @ 0x140A8FEA0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     PspTerminateThreadByPointer @ 0x1408F48F0 (PspTerminateThreadByPointer.c)
 *     PspDisablePrimaryTokenExchange @ 0x14090B050 (PspDisablePrimaryTokenExchange.c)
 *     PspNotifyThreadCreation @ 0x14090B188 (PspNotifyThreadCreation.c)
 *     VslStartSecureThread @ 0x140A8FF14 (VslStartSecureThread.c)
 */

__int64 __fastcall PspSecureThreadStartup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int started; // eax

  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  PspDisablePrimaryTokenExchange((__int64)CurrentThread, a2, a3, a4);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
    PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, 0xC000004B, 1);
  PspNotifyThreadCreation((__int64)CurrentThread);
  started = VslStartSecureThread();
  return PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, started, 1);
}
