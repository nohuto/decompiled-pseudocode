/*
 * XREFs of ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x140067B00
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14018C2D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1401987DC (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x140043190 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x140043220 (NdisAcquireRWLockWrite.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x140067CC0 (ndisSwitchMiniportReceiveFunction.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1400C8E10 (ndisCreateReceiveWorkerThreadPool.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1400C9040 (ndisKillReceiveWorkerThreadPool.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1400C92BC (ndisTracePeriodicRcvOnOff.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
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
      if ( byte_140125501 == 1 )
      {
        NdisAcquireRWLockWrite(Lock, &LockState, 0);
        DueTime.QuadPart = 0LL;
        dword_140125504 = -1;
        if ( dword_14012550C )
          byte_140125501 = 0;
        ndisSwitchMiniportReceiveFunction(7LL);
        NdisReleaseRWLock(Lock, &LockState);
        if ( dword_14012550C )
          ndisKillReceiveWorkerThreadPool();
      }
    }
    else if ( byte_140125501 || !(unsigned int)ndisCreateReceiveWorkerThreadPool() )
    {
      if ( BYTE2(dword_140127110) )
      {
        LOBYTE(v2) = 1;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ndisTracePeriodicRcvOnOff)(
          0LL,
          v2,
          *((unsigned int *)a1 + 1),
          (LARGE_INTEGER)DueTime.QuadPart);
      }
      NdisAcquireRWLockWrite(Lock, &LockState, 0);
      v3 = dword_140125504;
      DueTime = *(LARGE_INTEGER *)((char *)a1 + 8);
      dword_140125504 = *((_DWORD *)a1 + 1);
      byte_140125501 = 1;
      if ( v3 == -1 )
        ndisSwitchMiniportReceiveFunction(6LL);
      goto LABEL_10;
    }
  }
  else
  {
    DueTime.QuadPart = 0LL;
    dword_140125504 = -1;
    if ( !dword_14012550C && !(unsigned int)ndisCreateReceiveWorkerThreadPool() )
    {
      NdisAcquireRWLockWrite(Lock, &LockState, 0);
      byte_140125501 = 1;
LABEL_10:
      NdisReleaseRWLock(Lock, &LockState);
    }
  }
  KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
