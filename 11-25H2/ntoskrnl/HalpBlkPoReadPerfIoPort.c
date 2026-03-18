/*
 * XREFs of HalpBlkPoReadPerfIoPort @ 0x140569C60
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalpInterruptSendIpiToPhysicalTarget @ 0x140541FC4 (HalpInterruptSendIpiToPhysicalTarget.c)
 *     HalpBlkPoBusyWait @ 0x140569AA8 (HalpBlkPoBusyWait.c)
 */

__int64 __fastcall HalpBlkPoReadPerfIoPort(unsigned int a1, __int16 a2, __int16 a3, _DWORD *a4)
{
  __int64 v8; // rbp
  KIRQL v9; // r13
  int v10; // ebx

  v8 = *(_QWORD *)(HalpBlkPcr + 8LL * a1);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 2216));
  HalpBlkPoBusyWait(3uLL, a1, v8 + 2216);
  *(_QWORD *)(v8 + 2240) = 0LL;
  *(_QWORD *)(v8 + 2248) = 0LL;
  *(_DWORD *)(v8 + 2228) = 1;
  *(_DWORD *)(v8 + 2232) = 2;
  *(_WORD *)(v8 + 2236) = a2;
  *(_WORD *)(v8 + 2238) = a3;
  _InterlockedExchange((volatile __int32 *)(v8 + 2224), 1);
  v10 = HalpInterruptSendIpiToPhysicalTarget();
  if ( v10 < 0 )
    KeBugCheckEx(0x1DAu, 4uLL, 3uLL, a1, v8 + 2216);
  HalpBlkPoBusyWait(3uLL, a1, v8 + 2216);
  *a4 = *(_DWORD *)(v8 + 2240);
  KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 2216), v9);
  return (unsigned int)v10;
}
