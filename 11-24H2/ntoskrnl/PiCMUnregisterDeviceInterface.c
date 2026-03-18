/*
 * XREFs of PiCMUnregisterDeviceInterface @ 0x140AC00A8
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C3A00 (PiCMHandleIoctl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     PiAuDoesClientHaveAccess @ 0x1408BC6A8 (PiAuDoesClientHaveAccess.c)
 *     PiCMCaptureObjectInputData @ 0x1408BEB90 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1408BF0D4 (PiCMReturnBasicResultData.c)
 *     _PnpGetObjectProperty @ 0x1408CDFD0 (_PnpGetObjectProperty.c)
 *     _CmDeleteDeviceInterface @ 0x1409B3840 (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall PiCMUnregisterDeviceInterface(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r15
  int v9; // ebx
  BOOLEAN HaveAccess; // al
  __int64 v11; // rdi
  int ObjectProperty; // ebx
  char v13; // al
  struct _KTHREAD *CurrentThread; // rax
  int v16; // [rsp+68h] [rbp+7h] BYREF
  int v17; // [rsp+6Ch] [rbp+Bh] BYREF
  __int128 v18; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v19; // [rsp+80h] [rbp+1Fh]
  __int64 v20; // [rsp+90h] [rbp+2Fh]

  v6 = a6;
  v16 = 0;
  v17 = 0;
  v20 = 0LL;
  *a6 = 0;
  v18 = 0LL;
  LOBYTE(a6) = 0;
  v19 = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v18);
  if ( v9 < 0 )
  {
    v11 = v19;
  }
  else
  {
    HaveAccess = PiAuDoesClientHaveAccess(2u);
    v11 = v19;
    if ( HaveAccess )
    {
      if ( (_QWORD)v19 && *(_QWORD *)((char *)&v18 + 4) == 0x400000000LL && !HIDWORD(v19) && a3 && a4 >= 8 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(_QWORD **)&PiPnpRtlCtx,
                           (WCHAR *)v19,
                           3u,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_DeviceInterface_Enabled,
                           &v16,
                           (const wchar_t *)&a6,
                           1u,
                           (__int64)&v17,
                           0);
        if ( ObjectProperty >= 0 )
        {
          if ( v16 == 17 && v17 == 1 )
          {
            v13 = (char)a6;
          }
          else
          {
            v13 = 0;
            LOBYTE(a6) = 0;
          }
          if ( v13 == -1 )
          {
            ObjectProperty = -1073740024;
          }
          else
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            v11 = v19;
            ObjectProperty = CmDeleteDeviceInterface(*(__int64 *)&PiPnpRtlCtx, v19, 0);
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegion();
          }
        }
      }
      else
      {
        ObjectProperty = -1073741811;
      }
    }
    else
    {
      ObjectProperty = -1073741790;
    }
    v9 = PiCMReturnBasicResultData(ObjectProperty, v20, a3, a4, v6);
  }
  if ( v11 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)v19);
  return (unsigned int)v9;
}
