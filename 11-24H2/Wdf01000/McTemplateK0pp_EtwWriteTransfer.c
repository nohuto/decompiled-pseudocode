/*
 * XREFs of McTemplateK0pp_EtwWriteTransfer @ 0x14008FC34
 * Callers:
 *     ?PerfEvtDeviceD0EntryStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x14008F834 (-PerfEvtDeviceD0EntryStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x14008F8D4 (-PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtDevicePrepareHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x14008F974 (-PerfEvtDevicePrepareHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtDeviceReleaseHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x14008FA14 (-PerfEvtDeviceReleaseHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x14008FAB4 (-PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x14008FB94 (-PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     VfEvtDeviceD0Entry @ 0x1400E2390 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0Exit @ 0x1400E2560 (VfEvtDeviceD0Exit.c)
 *     VfEvtDevicePrepareHardware @ 0x1400E2730 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceReleaseHardware @ 0x1400E2A20 (VfEvtDeviceReleaseHardware.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14008F750 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0pp_EtwWriteTransfer(
        _MCGEN_TRACE_CONTEXT *Descriptor,
        const _EVENT_DESCRIPTOR *Activity,
        const _GUID *_Arg0,
        const void *_Arg1,
        const void *Context)
{
  _EVENT_DATA_DESCRIPTOR EventData[3]; // [rsp+30h] [rbp-48h] BYREF
  const void *v7; // [rsp+98h] [rbp+20h] BYREF

  v7 = _Arg1;
  EventData[1].Ptr = (unsigned __int64)&v7;
  EventData[1].Reserved = 0;
  EventData[1].Size = 8;
  EventData[2].Ptr = (unsigned __int64)&Context;
  EventData[2].Reserved = 0;
  EventData[2].Size = 8;
  return McGenEventWrite_EtwWriteTransfer((_MCGEN_TRACE_CONTEXT *)8, Activity, _Arg0, 3u, EventData);
}
