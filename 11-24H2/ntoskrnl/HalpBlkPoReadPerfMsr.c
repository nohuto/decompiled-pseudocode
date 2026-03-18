/*
 * XREFs of HalpBlkPoReadPerfMsr @ 0x14056D070
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpInterruptSendIpiToPhysicalTarget @ 0x1405447F0 (HalpInterruptSendIpiToPhysicalTarget.c)
 *     HalpBlkPoBusyWait @ 0x14056CDA8 (HalpBlkPoBusyWait.c)
 */

__int64 __fastcall HalpBlkPoReadPerfMsr(unsigned int a1, int a2, _QWORD *a3)
{
  __int64 v6; // rsi
  KIRQL v7; // r12
  int v8; // ebx

  v6 = *(_QWORD *)(HalpBlkPcr + 8LL * a1);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 2216));
  HalpBlkPoBusyWait(1uLL, a1, v6 + 2216);
  *(_QWORD *)(v6 + 2240) = 0LL;
  *(_QWORD *)(v6 + 2248) = 0LL;
  *(_DWORD *)(v6 + 2228) = 1;
  *(_DWORD *)(v6 + 2232) = 1;
  *(_DWORD *)(v6 + 2236) = a2;
  _InterlockedExchange((volatile __int32 *)(v6 + 2224), 1);
  v8 = HalpInterruptSendIpiToPhysicalTarget(*(_DWORD *)(v6 + 20));
  if ( v8 < 0 )
    KeBugCheckEx(0x1DAu, 4uLL, 1uLL, a1, v6 + 2216);
  HalpBlkPoBusyWait(1uLL, a1, v6 + 2216);
  *a3 = *(_QWORD *)(v6 + 2240);
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2216), v7);
  return (unsigned int)v8;
}
