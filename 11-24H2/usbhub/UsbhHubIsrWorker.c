/*
 * XREFs of UsbhHubIsrWorker @ 0x1400334E0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhHubProcessIsr @ 0x14000D190 (UsbhHubProcessIsr.c)
 *     UsbhDecrementHubIsrWorkerReference @ 0x14003365C (UsbhDecrementHubIsrWorkerReference.c)
 */

__int64 __fastcall UsbhHubIsrWorker(struct _DEVICE_OBJECT *a1, unsigned int a2, __int64 a3)
{
  KIRQL v6; // r10
  void *DeviceExtension; // rdx
  __int64 v8; // rcx
  void *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rdx

  FdoExt((__int64)a1);
  v6 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v8 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v8 = 2001883977;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = a1;
        *(_QWORD *)(v8 + 24) = a3;
      }
    }
  }
  if ( *(_DWORD *)(a3 + 152) == 1 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( a1 )
      {
        v9 = a1->DeviceExtension;
        if ( v9 )
        {
          v10 = *((_QWORD *)v9 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v9 + 220) & *((_DWORD *)v9 + 221));
          *(_DWORD *)v10 = 1902400329;
          *(_QWORD *)(v10 + 8) = 0LL;
          *(_QWORD *)(v10 + 16) = a1;
          *(_QWORD *)(v10 + 24) = a3;
        }
      }
    }
    v11 = *(_QWORD *)(a3 + 160);
    if ( *(_QWORD *)(v11 + 8) != a3 + 160 || (v12 = *(_QWORD **)(a3 + 168), *v12 != a3 + 160) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    *(_DWORD *)(a3 + 152) = 0;
    KeReleaseSpinLock(&SpinLock, v6);
    UsbhHubProcessIsr(a1, a2, a3);
  }
  else
  {
    KeReleaseSpinLock(&SpinLock, v6);
  }
  return UsbhDecrementHubIsrWorkerReference(a1);
}
