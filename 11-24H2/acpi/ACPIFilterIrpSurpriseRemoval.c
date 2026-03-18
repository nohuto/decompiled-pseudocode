/*
 * XREFs of ACPIFilterIrpSurpriseRemoval @ 0x1400BDC20
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIWakeDisconnectWakeInterrupts @ 0x14003DE58 (ACPIWakeDisconnectWakeInterrupts.c)
 *     ACPIDebugGetIrpText @ 0x140040AF4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_sDqss @ 0x140042118 (WPP_RECORDER_SF_sDqss.c)
 *     ACPIInternalIsReportedMissing @ 0x1400529F4 (ACPIInternalIsReportedMissing.c)
 *     ACPIFilterIrpStopDevice @ 0x14009E910 (ACPIFilterIrpStopDevice.c)
 */

__int64 __fastcall ACPIFilterIrpSurpriseRemoval(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx
  __int64 v7; // rcx
  unsigned int v8; // edi
  char *IrpText; // rax
  __int64 v10; // rdx
  const char *v11; // r8
  const char *v12; // r9
  int v13; // [rsp+20h] [rbp-38h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension;
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x33u)
    || ACPIInternalIsReportedMissing(DeviceExtension) )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    v8 = IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 776), a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      IrpText = ACPIDebugGetIrpText(v7, 0x17u);
      WPP_RECORDER_SF_sDqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v10,
        (__int64)v11,
        (__int64)v12,
        v13,
        IrpText,
        v8,
        v5,
        v11,
        v12);
    }
    ACPIWakeDisconnectWakeInterrupts((struct _EX_RUNDOWN_REF *)v5);
    return v8;
  }
  else
  {
    *(_DWORD *)(v5 + 368) = 1;
    return ACPIFilterIrpStopDevice(a1, a2);
  }
}
