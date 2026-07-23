/*
 * XREFs of PnpCallAddDevice @ 0x140832FB8
 * Callers:
 *     PipCallDriverAddDevice @ 0x1409ACAC0 (PipCallDriverAddDevice.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     PnpSetDeviceAffinityThread @ 0x14035E9C0 (PnpSetDeviceAffinityThread.c)
 *     PpvUtilCallAddDevice @ 0x1404A8D58 (PpvUtilCallAddDevice.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1405924B0 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qhzr1z_EtwWriteTransfer @ 0x1405A23BC (McTemplateK0qhzr1z_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PnpEnableWatchdog @ 0x140833C84 (PnpEnableWatchdog.c)
 *     PnpDisableWatchdog @ 0x14096E4C0 (PnpDisableWatchdog.c)
 */

__int64 __fastcall PnpCallAddDevice(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v6; // eax
  int v7; // r14d
  __int64 v8; // r8
  __int64 v9; // rbp
  unsigned int v10; // ebx
  __int64 v11; // r8
  _QWORD v13[4]; // [rsp+40h] [rbp-78h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-58h] BYREF

  v13[0] = 0LL;
  PreviousAffinity = 0LL;
  if ( (byte_140EEFA6B & 0x10) != 0 )
    McTemplateK0qhzr1z_EtwWriteTransfer(
      *(_WORD *)(a2 + 56) >> 1,
      a2,
      a3,
      a4,
      *(_WORD *)(a2 + 56) >> 1,
      *(_QWORD *)(a2 + 64),
      *(const wchar_t **)(a1 + 48));
  v6 = PnpSetDeviceAffinityThread(*(_QWORD *)(a1 + 32), &PreviousAffinity);
  v13[1] = a1;
  v13[2] = a2;
  v7 = v6;
  v8 = *(_QWORD *)(a2 + 48);
  v13[3] = KeGetCurrentThread();
  v9 = PnpEnableWatchdog(4LL, v13, v8 + 24);
  v10 = PpvUtilCallAddDevice(*(PDEVICE_OBJECT *)(a1 + 32), (struct _DRIVER_OBJECT *)a2);
  if ( v9 )
    PnpDisableWatchdog(v9);
  if ( v7 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (byte_140EEFA6B & 0x10) != 0 )
    McTemplateK0q_EtwWriteTransfer(
      MS_KernelPnP_Provider_Context,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceAdd_Stop,
      v11,
      v10);
  return v10;
}
