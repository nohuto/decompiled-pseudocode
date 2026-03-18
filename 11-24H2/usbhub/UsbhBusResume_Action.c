/*
 * XREFs of UsbhBusResume_Action @ 0x140020514
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x14001FC5C (UsbhDispatch_BusEvent.c)
 *     Usbh_BS_BusPause @ 0x140020324 (Usbh_BS_BusPause.c)
 *     UsbhReleaseBusStateLock @ 0x140033BCC (UsbhReleaseBusStateLock.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000F560 (UsbhDecHubBusy.c)
 *     UsbhPostInterrupt @ 0x140020930 (UsbhPostInterrupt.c)
 *     UsbhPCE_Enable @ 0x140020BC8 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x140020DB0 (UsbhPCE_Resume.c)
 *     UsbhUnlatchPdo @ 0x140020FA0 (UsbhUnlatchPdo.c)
 */

LONG __fastcall UsbhBusResume_Action(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  struct _KEVENT *v4; // rbx
  void *DeviceExtension; // rdx
  __int64 v6; // rcx
  unsigned __int16 i; // bp
  void *v8; // rdx
  _QWORD *v9; // r8
  __int64 v10; // rcx
  __int64 v12; // r14
  void *v13; // rdx
  __int64 v14; // rcx
  KIRQL v15; // di
  void *v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  void *v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // rbx
  __int64 Pool2; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  _DWORD *v27; // rbx

  v4 = (struct _KEVENT *)FdoExt((__int64)DeviceObject);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v6 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v6 = 1047750002;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = 0LL;
        *(_QWORD *)(v6 + 24) = 0LL;
      }
    }
  }
  LODWORD(v4[110].Header.WaitListHead.Blink) = 0;
  KeResetEvent(v4 + 112);
  v4[113].Header.LockNV = 0;
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++i )
  {
    UsbhPCE_Resume(DeviceObject, a2, i);
    UsbhPCE_Enable(DeviceObject, a2, i);
    v12 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( DeviceObject )
      {
        v13 = DeviceObject->DeviceExtension;
        if ( v13 )
        {
          v14 = *((_QWORD *)v13 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v13 + 220) & *((_DWORD *)v13 + 221));
          *(_DWORD *)v14 = 1329877100;
          *(_QWORD *)(v14 + 16) = i;
          *(_QWORD *)(v14 + 8) = 0LL;
          *(_QWORD *)(v14 + 24) = 1382380368LL;
        }
      }
    }
    v15 = KeAcquireSpinLockRaiseToDpc(&HubG);
    qword_14006F5E0 = (__int64)&dword_14006F5E8;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( DeviceObject )
      {
        v16 = DeviceObject->DeviceExtension;
        if ( v16 )
        {
          v17 = *((_QWORD *)v16 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v16 + 220) & *((_DWORD *)v16 + 221));
          *(_DWORD *)v17 = 1413771367;
          *(_QWORD *)(v17 + 16) = i;
          *(_QWORD *)(v17 + 8) = 0LL;
          *(_QWORD *)(v17 + 24) = 0LL;
        }
      }
    }
    if ( i )
    {
      v18 = FdoExt((__int64)DeviceObject);
      if ( i <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) )
      {
        v19 = *((_QWORD *)v18 + 382);
        if ( v19 )
        {
          v20 = v19 + 2928LL * i - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            if ( DeviceObject )
            {
              v21 = DeviceObject->DeviceExtension;
              if ( v21 )
              {
                v22 = *((_QWORD *)v21 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v21 + 220) & *((_DWORD *)v21 + 221));
                *(_DWORD *)v22 = 1044672615;
                *(_QWORD *)(v22 + 8) = 0LL;
                *(_QWORD *)(v22 + 16) = i;
                *(_QWORD *)(v22 + 24) = v20;
              }
            }
          }
          if ( v20 )
          {
            v12 = *(_QWORD *)(v20 + 392);
            if ( v12 )
            {
              v23 = PdoExt(*(_QWORD *)(v20 + 392));
              Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
              if ( Pool2 )
              {
                *(_DWORD *)Pool2 = 1668571500;
                *(_QWORD *)(Pool2 + 32) = v12;
                *(_DWORD *)(Pool2 + 24) = 1382380368;
                *(_QWORD *)(Pool2 + 40) = 0LL;
                v25 = (_QWORD *)(Pool2 + 8);
                v26 = (_QWORD *)*((_QWORD *)v23 + 160);
                if ( (_DWORD *)*v26 != v23 + 318 )
                  __fastfail(3u);
                *v25 = v23 + 318;
                v25[1] = v26;
                *v26 = v25;
                *((_QWORD *)v23 + 160) = v25;
              }
              else
              {
                ++v23[322];
              }
            }
          }
        }
      }
    }
    qword_14006F5E0 = 0LL;
    KeReleaseSpinLock(&HubG, v15);
    if ( v12 )
    {
      v27 = PdoExt(v12);
      KeWaitForSingleObject(v27 + 724, Executive, 0, 0, 0LL);
      v27[355] &= ~0x10000000u;
      KeSetEvent((PRKEVENT)(v27 + 724), 0, 0);
      UsbhUnlatchPdo(DeviceObject, v12, 0LL, 1382380368LL);
    }
  }
  UsbhPostInterrupt(DeviceObject);
  v9 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)FdoExt((__int64)DeviceObject) + 411, 0LL);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( DeviceObject )
    {
      v8 = DeviceObject->DeviceExtension;
      if ( v8 )
      {
        v10 = *((_QWORD *)v8 + 111)
            + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v8 + 220) & *((_DWORD *)v8 + 221));
        *(_DWORD *)v10 = 762934082;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_QWORD *)(v10 + 24) = v9;
      }
    }
  }
  return UsbhDecHubBusy((__int64)DeviceObject, (__int64)v8, v9);
}
