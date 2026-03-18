/*
 * XREFs of ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x14004AE30
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiLogInterrupt @ 0x140006960 (VidSchiLogInterrupt.c)
 *     VidSchDdiNotifyInterruptWorker @ 0x140006B60 (VidSchDdiNotifyInterruptWorker.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall VidSchiCallNotifyInterruptAtISR(__int64 *a1)
{
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h]
  char v5; // [rsp+30h] [rbp-18h]

  v3 = -1;
  v4 = 0LL;
  if ( (qword_140081010 & 2) != 0 )
  {
    v5 = 1;
    v3 = 4016;
    if ( (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
  }
  else
  {
    v5 = 0;
  }
  ((void (__fastcall *)(int *, __int64))DxgCoreInterface[82])(&v3, 4016LL);
  VidSchiLogInterrupt(*(_QWORD *)(*a1 + 744), a1[1], 0);
  VidSchDdiNotifyInterruptWorker(*a1, a1[1], 0);
  ((void (__fastcall *)(int *))DxgCoreInterface[83])(&v3);
  if ( v5 && (byte_140081242 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer();
  return 1;
}
