/*
 * XREFs of PinProcess @ 0x14003ADB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140008C50 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PinProcess(__int64 a1)
{
  __int64 v1; // rdi
  bool v3; // dl
  bool v4; // r8

  v1 = *(_QWORD *)(a1 + 16);
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  v4 = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( v3 || v4 )
    WPP_RECORDER_AND_TRACE_SF_q(WPP_GLOBAL_Control->AttachedDevice, v3, v4, WPP_GLOBAL_Control->DeviceExtension);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v1 + 144) + 128LL) + 16LL))(a1);
}
