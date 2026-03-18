/*
 * XREFs of _HMPheFromObjectWorker @ 0x140062A10
 * Callers:
 *     ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x140041EC4 (-HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z.c)
 *     HMChangeOwnerProcessWorker @ 0x1400629E0 (HMChangeOwnerProcessWorker.c)
 *     HMDestroyObject @ 0x140063280 (HMDestroyObject.c)
 *     HMFreeObject @ 0x1400632F0 (HMFreeObject.c)
 *     DestroyKL @ 0x14006379C (DestroyKL.c)
 *     DestroyMonitor @ 0x1400638E0 (DestroyMonitor.c)
 *     DestroyKF @ 0x140064130 (DestroyKF.c)
 *     HMAssignmentLock @ 0x1400F47B0 (HMAssignmentLock.c)
 *     HMChangeOwnerThreadWorker @ 0x1401B6138 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMPheFromObjectWorker(int *a1)
{
  int v1; // ebx
  __int64 UserSessionState; // rdi
  __int64 v3; // rcx

  v1 = *a1;
  UserSessionState = W32GetUserSessionState(a1);
  return *(_DWORD *)(W32GetUserSessionState(v3) + 19952) * (unsigned int)(unsigned __int16)v1
       + *(_QWORD *)(UserSessionState + 19944);
}
