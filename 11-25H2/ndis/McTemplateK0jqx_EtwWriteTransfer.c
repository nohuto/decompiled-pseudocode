/*
 * XREFs of McTemplateK0jqx_EtwWriteTransfer @ 0x1400252F0
 * Callers:
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140016750 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140025790 (-ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14005B0C0 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14005B8E0 (-ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z.c)
 *     ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1400665A0 (-ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400242C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jqx_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+40h] [rbp-48h]
  __int64 v9; // [rsp+48h] [rbp-40h]
  __int64 *v10; // [rsp+50h] [rbp-38h]
  __int64 v11; // [rsp+58h] [rbp-30h]
  __int64 *v12; // [rsp+60h] [rbp-28h]
  __int64 v13; // [rsp+68h] [rbp-20h]

  v8 = a4;
  v10 = &a5;
  v9 = 16LL;
  v12 = &a6;
  v11 = 4LL;
  v13 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, a2, a3, 4u, &v7);
}
