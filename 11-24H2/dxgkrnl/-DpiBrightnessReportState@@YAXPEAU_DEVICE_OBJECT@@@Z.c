/*
 * XREFs of ?DpiBrightnessReportState@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1403A4530
 * Callers:
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1403A3D80 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140013524 (McTemplateK0pqtq_EtwWriteTransfer.c)
 */

void __fastcall DpiBrightnessReportState(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  _DWORD *DeviceExtension; // rcx
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // [rsp+20h] [rbp-28h]
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  DeviceExtension = a1->DeviceExtension;
  v5 = DeviceExtension[1131];
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v9 = *((unsigned __int8 *)DeviceExtension + 4528);
    McTemplateK0pqtq_EtwWriteTransfer((__int64)DeviceExtension, &EventBrightness, a3, a1, v9, v9, 0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v11) = 0;
      LODWORD(v10) = v5;
      LODWORD(v8) = v5;
      McTemplateK0pqtq_EtwWriteTransfer(v6, &EventBacklightOptimizationLevel, v7, a1, v8, v10, v11);
    }
  }
}
