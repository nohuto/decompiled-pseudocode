/*
 * XREFs of HalpBlkPoWritePerfMsr @ 0x14056A7C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpInterruptSendIpiToPhysicalTarget @ 0x140542140 (HalpInterruptSendIpiToPhysicalTarget.c)
 *     HalpBlkPoBusyWait @ 0x14056A238 (HalpBlkPoBusyWait.c)
 */

__int64 __fastcall HalpBlkPoWritePerfMsr(unsigned int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v9; // rsi
  KIRQL v10; // r13
  int v11; // ebx

  v9 = *(_QWORD *)(HalpBlkPcr + 8LL * a1);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 2216));
  HalpBlkPoBusyWait(2uLL, a1, v9 + 2216);
  *(_DWORD *)(v9 + 2228) = 2;
  *(_DWORD *)(v9 + 2232) = 1;
  *(_DWORD *)(v9 + 2236) = a2;
  *(_QWORD *)(v9 + 2240) = a3;
  *(_QWORD *)(v9 + 2248) = a4;
  _InterlockedExchange((volatile __int32 *)(v9 + 2224), 1);
  v11 = HalpInterruptSendIpiToPhysicalTarget();
  if ( v11 < 0 )
    KeBugCheckEx(0x1DAu, 4uLL, 2uLL, a1, v9 + 2216);
  KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 2216), v10);
  return (unsigned int)v11;
}
