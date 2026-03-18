/*
 * XREFs of PnpCallAddDevice @ 0x1409C71F8
 * Callers:
 *     PipCallDriverAddDevice @ 0x1409C6228 (PipCallDriverAddDevice.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     PnpSetDeviceAffinityThread @ 0x1403751EC (PnpSetDeviceAffinityThread.c)
 *     PpvUtilCallAddDevice @ 0x1404A9D40 (PpvUtilCallAddDevice.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140595C08 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qhzr1z_EtwWriteTransfer @ 0x1405A5C9C (McTemplateK0qhzr1z_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PnpEnableWatchdog @ 0x1409C74F8 (PnpEnableWatchdog.c)
 *     PnpDisableWatchdog @ 0x1409EFFB0 (PnpDisableWatchdog.c)
 */

__int64 __fastcall PnpCallAddDevice(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v8; // eax
  int v9; // r14d
  __int64 v10; // r8
  __int64 v11; // rbp
  unsigned int v12; // ebx
  __int64 v13; // r8
  _QWORD v15[4]; // [rsp+40h] [rbp-78h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-58h] BYREF

  v15[0] = 0LL;
  PreviousAffinity = 0LL;
  if ( (byte_140EEFD23 & 0x10) != 0 )
    McTemplateK0qhzr1z_EtwWriteTransfer(
      *(_WORD *)(a2 + 56) >> 1,
      a2,
      a3,
      a4,
      *(_WORD *)(a2 + 56) >> 1,
      *(_QWORD *)(a2 + 64),
      *(const wchar_t **)(a1 + 48));
  v8 = PnpSetDeviceAffinityThread(*(_QWORD *)(a1 + 32), &PreviousAffinity);
  v15[1] = a1;
  v15[2] = a2;
  v9 = v8;
  v10 = *(_QWORD *)(a2 + 48);
  v15[3] = KeGetCurrentThread();
  v11 = PnpEnableWatchdog(4LL, v15, v10 + 24);
  v12 = PpvUtilCallAddDevice(*(PDEVICE_OBJECT *)(a1 + 32), (struct _DRIVER_OBJECT *)a2, a3, (unsigned int)(a4 + 1));
  if ( v11 )
    PnpDisableWatchdog(v11);
  if ( v9 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (byte_140EEFD23 & 0x10) != 0 )
    McTemplateK0q_EtwWriteTransfer(
      MS_KernelPnP_Provider_Context,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceAdd_Stop,
      v13,
      v12);
  return v12;
}
