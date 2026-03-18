/*
 * XREFs of ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x140033AB4
 * Callers:
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x14003DF8C (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x14004A484 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x14005DD8C (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x14005E2E4 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x14006237C (-QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGAUTOSPINLOCK::Acquire(DXGAUTOSPINLOCK *this)
{
  KSPIN_LOCK *v1; // rbx

  v1 = (KSPIN_LOCK *)*((_QWORD *)this + 1);
  KeAcquireInStackQueuedSpinLock(v1, (PKLOCK_QUEUE_HANDLE)((char *)this + 16));
  v1[1] = (KSPIN_LOCK)KeGetCurrentThread();
  *((_BYTE *)this + 40) = 1;
}
