/*
 * XREFs of ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800E3A60
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800E0080 (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ??1ConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAA@XZ @ 0x1800E327C (--1ConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAA@XZ.c)
 *     ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800E3454 (-CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAP.c)
 *     ?Initialize@ConsumerControlManager@@AEAAJXZ @ 0x1800E3588 (-Initialize@ConsumerControlManager@@AEAAJXZ.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800E3940 (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 *     ?WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z @ 0x1800E3BF0 (-WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180039250 (-Release@InputContext@@UEAAKXZ.c)
 *     ?Shutdown@ConsumerControlManager@@AEAAXXZ @ 0x1800E3A98 (-Shutdown@ConsumerControlManager@@AEAAXXZ.c)
 */

__int64 __fastcall ConsumerControlManager::Release(InputContext *dwData)
{
  unsigned int v2; // ebx

  v2 = InputContext::Release(dwData);
  if ( v2 == 1 )
    ConsumerControlManager::Shutdown((ULONG_PTR)dwData);
  return v2;
}
