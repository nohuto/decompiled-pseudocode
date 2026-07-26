/*
 * XREFs of ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x14005B860
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14017F9C0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x14018D7A4 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x14003FCA0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x14003FD30 (NdisAcquireRWLockWrite.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x14005BA20 (ndisSwitchMiniportReceiveFunction.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1400C1BE0 (ndisCreateReceiveWorkerThreadPool.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1400C1E10 (ndisKillReceiveWorkerThreadPool.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1400C208C (ndisTracePeriodicRcvOnOff.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisConfigurePeriodicReceives(struct _NDIS_SET_RECEIVE_RATE *a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  ndisWaitForKernelObject(&ndisPeriodicReceivesMutex);
  if ( a1 )
  {
    if ( *((_DWORD *)a1 + 1) == -1 )
    {
      if ( byte_14011B4C1 == 1 )
      {
        NdisAcquireRWLockWrite(Lock, &LockState, 0);
        DueTime.QuadPart = 0LL;
        dword_14011B4C4 = -1;
        if ( dword_14011B4CC )
          byte_14011B4C1 = 0;
        ndisSwitchMiniportReceiveFunction(7LL);
        NdisReleaseRWLock(Lock, &LockState);
        if ( dword_14011B4CC )
          ndisKillReceiveWorkerThreadPool();
      }
    }
    else if ( byte_14011B4C1 || !(unsigned int)ndisCreateReceiveWorkerThreadPool() )
    {
      if ( BYTE2(dword_14011D060) )
      {
        LOBYTE(v2) = 1;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ndisTracePeriodicRcvOnOff)(
          0LL,
          v2,
          *((unsigned int *)a1 + 1),
          (LARGE_INTEGER)DueTime.QuadPart);
      }
      NdisAcquireRWLockWrite(Lock, &LockState, 0);
      v3 = dword_14011B4C4;
      DueTime = *(LARGE_INTEGER *)((char *)a1 + 8);
      dword_14011B4C4 = *((_DWORD *)a1 + 1);
      byte_14011B4C1 = 1;
      if ( v3 == -1 )
        ndisSwitchMiniportReceiveFunction(6LL);
      goto LABEL_10;
    }
  }
  else
  {
    DueTime.QuadPart = 0LL;
    dword_14011B4C4 = -1;
    if ( !dword_14011B4CC && !(unsigned int)ndisCreateReceiveWorkerThreadPool() )
    {
      NdisAcquireRWLockWrite(Lock, &LockState, 0);
      byte_14011B4C1 = 1;
LABEL_10:
      NdisReleaseRWLock(Lock, &LockState);
    }
  }
  KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
