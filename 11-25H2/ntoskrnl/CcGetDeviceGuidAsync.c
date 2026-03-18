/*
 * XREFs of CcGetDeviceGuidAsync @ 0x14057A2A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1403A53D0 (CcDecrementVolumeUseCountWithDelete.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CcGetDeviceGuid @ 0x140A936FC (CcGetDeviceGuid.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CcGetDeviceGuidAsync(__int64 *P)
{
  __int64 v2; // rcx
  int DeviceGuid; // eax
  __int64 v4; // rbx
  void *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h]

  v2 = P[1];
  v9 = 0LL;
  DeviceGuid = CcGetDeviceGuid(v2);
  v4 = *P;
  v5 = (void *)P[1];
  if ( DeviceGuid >= 0 )
  {
    v6 = *(_QWORD *)(v4 + 232) - *(_QWORD *)&CPER_EMPTY_GUID.Data1;
    if ( !v6 )
      v6 = *(_QWORD *)(v4 + 240) - *(_QWORD *)CPER_EMPTY_GUID.Data4;
    if ( !v6 )
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
      v7 = *(_QWORD *)(v4 + 232) - *(_QWORD *)&CPER_EMPTY_GUID.Data1;
      if ( !v7 )
        v7 = *(_QWORD *)(v4 + 240) - *(_QWORD *)CPER_EMPTY_GUID.Data4;
      if ( !v7 )
        *(_OWORD *)(v4 + 232) = v9;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  CcDecrementVolumeUseCountWithDelete(v4);
  ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  ExFreePoolWithTag(P, 0x65546343u);
}
