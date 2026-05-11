/*
 * XREFs of PinSetDeviceState @ 0x14003DE30
 * Callers:
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140006E0C (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140018DF0 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WmiLogStreamStateChange @ 0x140006CF0 (WmiLogStreamStateChange.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x140007E80 (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 *     IncrementActivePinCount @ 0x14003DF60 (IncrementActivePinCount.c)
 *     DecrementActivePinCount @ 0x14003E0BC (DecrementActivePinCount.c)
 */

__int64 __fastcall PinSetDeviceState(struct _KSPIN *a1, unsigned int a2, unsigned int a3)
{
  _QWORD *Context; // r14
  int active; // ebx
  char v8; // dl
  int v10; // [rsp+20h] [rbp-48h]
  int v11; // [rsp+28h] [rbp-40h]
  int v12; // [rsp+30h] [rbp-38h]
  int v13; // [rsp+38h] [rbp-30h]

  Context = a1->Context;
  if ( a2 != 3 || a3 == 3 || (active = IncrementActivePinCount(a1), active >= 0) )
  {
    active = (*(__int64 (__fastcall **)(struct _KSPIN *, _QWORD, _QWORD))(*(_QWORD *)(Context[18] + 128LL) + 48LL))(
               a1,
               a3,
               a2);
    if ( active >= 0 )
    {
      if ( a2 == 3 || a3 != 3 )
        goto LABEL_4;
    }
    else if ( a2 != 3 || a3 == 3 )
    {
      goto LABEL_4;
    }
    active = DecrementActivePinCount(a1);
  }
LABEL_4:
  WmiLogStreamStateChange(a3, a2, active);
  v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      v11,
      v12,
      v13);
  return (unsigned int)active;
}
