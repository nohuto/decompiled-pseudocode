/*
 * XREFs of Usbh_BS_BusRun @ 0x14001ED80
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x14001FC5C (UsbhDispatch_BusEvent.c)
 * Callees:
 *     UsbhBusPause_Action @ 0x140005D1C (UsbhBusPause_Action.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhBusPnpStop_Action @ 0x14001EB48 (UsbhBusPnpStop_Action.c)
 *     UsbhReleaseBusStateLock @ 0x140033BCC (UsbhReleaseBusStateLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     UsbhSshBusBusy @ 0x140040A2C (UsbhSshBusBusy.c)
 */

__int64 __fastcall Usbh_BS_BusRun(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebp
  void *DeviceExtension; // rdx
  __int64 v10; // rcx
  int v11; // eax
  struct _DEVICE_OBJECT *v12; // rcx
  _DWORD *v13; // rax
  unsigned int v14; // ebx
  int v15; // esi
  __int64 v16; // rcx
  int v18; // esi
  __int64 v19; // r8

  v3 = a3;
  FdoExt((__int64)a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  v8 = *(_DWORD *)(a2 + 80);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v10 = *((_QWORD *)DeviceExtension + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v10 = 1314026338;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a2;
        *(_QWORD *)(v10 + 24) = v3;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_c14d5bcd548e31c8cc373c847eff1ef0_Traceguids,
      v3);
  if ( (_DWORD)v3 != 7 )
  {
    *(_DWORD *)(a2 + 128) = 1;
    v15 = v3 - 3;
    if ( !v15 )
    {
      UsbhBusPause_Action(a1, a2, v6, v7);
      UsbhBusPnpStop_Action((__int64)a1, a2);
      v13 = FdoExt((__int64)a1);
      v14 = 2;
      goto LABEL_11;
    }
    v18 = v15 - 3;
    if ( v18 )
    {
      if ( v18 == 1 )
        goto LABEL_7;
      v19 = v8;
    }
    else
    {
      UsbhBusPause_Action(a1, a2, v6, v7);
      UsbhSshBusBusy(a1, a2);
      v19 = 5LL;
    }
    v12 = a1;
    return (unsigned int)UsbhReleaseBusStateLock(v12, a2, v19);
  }
LABEL_7:
  v11 = UsbhBusPause_Action(a1, a2, v6, v7);
  v12 = a1;
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    v19 = 3LL;
    return (unsigned int)UsbhReleaseBusStateLock(v12, a2, v19);
  }
  v13 = FdoExt((__int64)a1);
  v14 = 4;
LABEL_11:
  if ( v13[610] != v14 )
  {
    v13[610] = v14;
    *(_DWORD *)(a2 + 80) = v14;
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v16 = 8LL * (unsigned int)v13[208];
  *((_QWORD *)v13 + 167) = 0LL;
  v13[v16 + 137] = v14;
  KeReleaseSemaphore((PRKSEMAPHORE)(v13 + 612), 16, 1, 0);
  return v14;
}
