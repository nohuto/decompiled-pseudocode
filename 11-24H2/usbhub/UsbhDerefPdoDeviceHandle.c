/*
 * XREFs of UsbhDerefPdoDeviceHandle @ 0x14001E9F0
 * Callers:
 *     UsbhPdoPnp_QueryInterface @ 0x140005410 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x140012028 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhPdoSetDeviceData @ 0x14001D614 (UsbhPdoSetDeviceData.c)
 *     UsbhPdoRemoveCleanup @ 0x14001DB50 (UsbhPdoRemoveCleanup.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x14001E4FC (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhSetPdoIdleReady @ 0x14001E578 (UsbhSetPdoIdleReady.c)
 *     UsbhClearPdoIdleReady @ 0x14001E640 (UsbhClearPdoIdleReady.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x14003F97C (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 *     UsbhGetHubNodeInfo @ 0x140054A44 (UsbhGetHubNodeInfo.c)
 *     UsbhPdoQueryWmiDataBlock @ 0x140054CC0 (UsbhPdoQueryWmiDataBlock.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhDerefPdoDeviceHandle(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r14
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // bp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // rax

  v4 = a4;
  v8 = (KSPIN_LOCK *)(FdoExt(a1) + 930);
  v9 = KeAcquireSpinLockRaiseToDpc(v8);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 825054788;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = a2;
        *(_QWORD *)(v11 + 24) = a3;
      }
    }
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v12 = *(_QWORD *)(a1 + 64);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
          *(_DWORD *)v13 = 841832004;
          *(_QWORD *)(v13 + 8) = 0LL;
          *(_QWORD *)(v13 + 16) = a2;
          *(_QWORD *)(v13 + 24) = v4;
        }
      }
    }
  }
  v14 = FdoExt(a1);
  if ( *((_QWORD *)v14 + 559) )
    (*((void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))v14 + 559))(
      *((_QWORD *)v14 + 529),
      a2,
      a3,
      (unsigned int)v4);
  KeReleaseSpinLock(v8, v9);
}
