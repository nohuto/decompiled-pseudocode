/*
 * XREFs of McTemplateK0qPR0PR0XR0TR0_EtwWriteTransfer @ 0x14001A2F8
 * Callers:
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14001A3B0 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14001B090 (VidSchSignalSyncObjectsFromGpu.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400190D0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qPR0PR0XR0TR0_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-39h] BYREF
  int *v10; // [rsp+40h] [rbp-29h]
  __int64 v11; // [rsp+48h] [rbp-21h]
  __int64 v12; // [rsp+50h] [rbp-19h]
  int v13; // [rsp+58h] [rbp-11h]
  int v14; // [rsp+5Ch] [rbp-Dh]
  __int64 v15; // [rsp+60h] [rbp-9h]
  int v16; // [rsp+68h] [rbp-1h]
  int v17; // [rsp+6Ch] [rbp+3h]
  __int64 v18; // [rsp+70h] [rbp+7h]
  int v19; // [rsp+78h] [rbp+Fh]
  int v20; // [rsp+7Ch] [rbp+13h]
  __int64 v21; // [rsp+80h] [rbp+17h]
  int v22; // [rsp+88h] [rbp+1Fh]
  int v23; // [rsp+8Ch] [rbp+23h]
  int v24; // [rsp+C8h] [rbp+5Fh] BYREF

  v24 = a4;
  v11 = 4LL;
  v14 = 0;
  v13 = 8 * a4;
  v10 = &v24;
  v12 = a5;
  v15 = a6;
  v18 = a7;
  v21 = a8;
  v22 = 4 * a4;
  v16 = 8 * a4;
  v19 = 8 * a4;
  v17 = 0;
  v20 = 0;
  v23 = 0;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, a2, 0LL, 6u, &v9);
}
