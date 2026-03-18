/*
 * XREFs of UserDispatchMITCompletion @ 0x1C00579A4
 * Callers:
 *     NtMITDispatchCompletion @ 0x1C0057A90 (NtMITDispatchCompletion.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C00557A0 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 */

void __fastcall UserDispatchMITCompletion(int a1, unsigned int a2)
{
  unsigned int v2; // edi
  char v4; // bl
  bool v5; // r8
  int v6; // edx

  v2 = a2;
  v4 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      v5,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      16,
      (__int64)&WPP_fb9796299f7e36879c4ad881ea88b0c0_Traceguids);
  IOCPDispatcher::Dispatch((IOCPDispatcher *)WPP_MAIN_CB.Queue.Wcb.DeviceObject, a1, v2);
  LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( (_BYTE)v6 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v4,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      17,
      (__int64)&WPP_fb9796299f7e36879c4ad881ea88b0c0_Traceguids);
}
