/*
 * XREFs of ?PerfEvtDevicePrepareHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x14008F974
 * Callers:
 *     VfEvtDevicePrepareHardware @ 0x1400E2730 (VfEvtDevicePrepareHardware.c)
 * Callees:
 *     McTemplateK0pp_EtwWriteTransfer @ 0x14008FC34 (McTemplateK0pp_EtwWriteTransfer.c)
 */

char __fastcall PerfEvtDevicePrepareHardwareStart(unsigned __int64 Handle, _GUID *pActivityId)
{
  char v2; // bl
  unsigned __int16 *v4; // r8
  __int64 v6; // rcx
  const void *v7; // rbp
  _MCGEN_TRACE_CONTEXT *v8; // rcx

  v2 = 1;
  v4 = (unsigned __int16 *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
    v4 = (unsigned __int16 *)((char *)v4 - *v4);
  v6 = *((_QWORD *)v4 + 2);
  if ( (*(_DWORD *)(v6 + 412) & 0xF00000) == 0 )
    return 0;
  v7 = *(const void **)(*(_QWORD *)(v6 + 80) + 176LL);
  EtwActivityIdControl(3u, pActivityId);
  if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0pp_EtwWriteTransfer(v8, &FX_POWER_HW_PREPARE_START, pActivityId, v7, (const void *)Handle);
  return v2;
}
