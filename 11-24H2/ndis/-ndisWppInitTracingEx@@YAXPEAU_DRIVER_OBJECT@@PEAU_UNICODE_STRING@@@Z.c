/*
 * XREFs of ?ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1400C547C
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     ndisWppExtendedCallback @ 0x1400C5414 (ndisWppExtendedCallback.c)
 *     WppInitKm @ 0x1401419A0 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x140141A7C (WppLoadTracingSupport.c)
 */

void __fastcall ndisWppInitTracingEx(struct _DRIVER_OBJECT *a1, struct _UNICODE_STRING *a2)
{
  ndisWppExtendedCallback(0, 0, 0);
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_NDISTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(a1, a2);
}
