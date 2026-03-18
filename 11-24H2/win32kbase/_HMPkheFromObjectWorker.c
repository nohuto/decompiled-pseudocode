/*
 * XREFs of _HMPkheFromObjectWorker @ 0x1400E1208
 * Callers:
 *     HMFreeObject @ 0x1400632F0 (HMFreeObject.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1400E0E88 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 *     HMSDCheck @ 0x1400E10F0 (HMSDCheck.c)
 *     _HMPkheFromObject @ 0x1400E11F0 (_HMPkheFromObject.c)
 *     HMRemoveHandleForObject @ 0x14016AC70 (HMRemoveHandleForObject.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x14016AD70 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     ?Get@tagUNIQUE_WINDOW_HANDLE@@QEBAPEAUtagWND@@XZ @ 0x1401A7390 (-Get@tagUNIQUE_WINDOW_HANDLE@@QEBAPEAUtagWND@@XZ.c)
 *     ?Set@tagUNIQUE_WINDOW_HANDLE@@QEAAXPEBUtagWND@@@Z @ 0x1401A7450 (-Set@tagUNIQUE_WINDOW_HANDLE@@QEAAXPEBUtagWND@@@Z.c)
 *     HMChangeOwnerThreadWorker @ 0x1401B6138 (HMChangeOwnerThreadWorker.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1401B6588 (LockIntoSharedUserCritDeferredUnlockList.c)
 *     NtMITPostWindowEventMessage @ 0x1401B8950 (NtMITPostWindowEventMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMPkheFromObjectWorker(int *a1)
{
  int v1; // ebx

  v1 = *a1;
  return *(_QWORD *)(W32GetUserSessionState(a1) + 19888) + 40LL * (unsigned __int16)v1;
}
