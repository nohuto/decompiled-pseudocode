/*
 * XREFs of PinClose @ 0x14003FEF0
 * Callers:
 *     <none>
 * Callees:
 *     PinRemovePinFromList @ 0x140008BD4 (PinRemovePinFromList.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140008C50 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PinClose(_QWORD *a1)
{
  __int64 v1; // rbx
  char v3; // r8
  bool v4; // dl
  unsigned int v5; // ebx

  v1 = a1[2];
  v3 = 1;
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v3 = 0;
  if ( v4 || v3 )
    WPP_RECORDER_AND_TRACE_SF_q(WPP_GLOBAL_Control->AttachedDevice, v4, v3, WPP_GLOBAL_Control->DeviceExtension);
  --*(_DWORD *)(*(_QWORD *)(v1 + 32) + 140LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)(*(_QWORD *)(v1 + 144) + 128LL) + 8LL))(a1);
  PinRemovePinFromList(a1);
  return v5;
}
