/*
 * XREFs of ?HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1403D7650
 * Callers:
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x14001688C (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140014AA8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall HandleAdapterMultiPlaneDisableEvent(PVOID IoObject, _DWORD *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+34h] [rbp-24h]
  int v9; // [rsp+3Ch] [rbp-1Ch]
  __int64 v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+48h] [rbp-10h]

  WdLogSingleEntry3(4LL, *(_QWORD *)Context, (unsigned int)Context[2], (unsigned int)Context[3]);
  WdLogGlobalForLineNumber = 2350;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      v5,
      (__int64)&MultiPlaneOverlayDisable,
      v6,
      *(_QWORD *)Context,
      Context[2],
      Context[3]);
  v8 = 0LL;
  v9 = 0;
  v11 = 0LL;
  v7 = 14;
  v10 = 1LL;
  SMgrGdiCallout(&v7, 0x200000000LL, 0LL, 0LL, 0LL, 0LL);
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
