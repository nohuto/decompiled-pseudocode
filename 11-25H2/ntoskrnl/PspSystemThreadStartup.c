/*
 * XREFs of PspSystemThreadStartup @ 0x140487BD0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PspTerminateThreadByPointer @ 0x1408F48F0 (PspTerminateThreadByPointer.c)
 *     PspDisablePrimaryTokenExchange @ 0x14090B050 (PspDisablePrimaryTokenExchange.c)
 */

__int64 __fastcall PspSystemThreadStartup(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8

  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (((unsigned __int8)*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) ^ 1) & 3) == 3 )
    guard_dispatch_icall_no_overrides(a2, v4);
  LOBYTE(v5) = 1;
  return PspTerminateThreadByPointer(CurrentThread, 0LL, v5);
}
