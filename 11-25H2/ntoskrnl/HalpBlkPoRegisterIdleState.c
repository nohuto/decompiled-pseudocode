/*
 * XREFs of HalpBlkPoRegisterIdleState @ 0x140569E70
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalpInterruptSendIpiToPhysicalTarget @ 0x140541FC4 (HalpInterruptSendIpiToPhysicalTarget.c)
 *     HalpBlkPoBusyWait @ 0x140569AA8 (HalpBlkPoBusyWait.c)
 */

__int64 __fastcall HalpBlkPoRegisterIdleState(unsigned int a1, __int64 a2)
{
  __int64 v5; // rdi
  KIRQL v6; // r15
  int v7; // ebx

  v5 = *(_QWORD *)(HalpBlkPcr + 8LL * a1);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 2216));
  HalpBlkPoBusyWait(5uLL, a1, v5 + 2216);
  *(_QWORD *)(v5 + 2232) = 0LL;
  *(_QWORD *)(v5 + 2248) = 0LL;
  *(_DWORD *)(v5 + 2228) = 3;
  *(_QWORD *)(v5 + 2240) = a2;
  _InterlockedExchange((volatile __int32 *)(v5 + 2224), 1);
  v7 = HalpInterruptSendIpiToPhysicalTarget();
  if ( v7 < 0 )
    KeBugCheckEx(0x1DAu, 4uLL, 5uLL, a1, v5 + 2216);
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 2216), v6);
  return (unsigned int)v7;
}
