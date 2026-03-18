/*
 * XREFs of EditionIVSyncForeground @ 0x1C01ADCC0
 * Callers:
 *     <none>
 * Callees:
 *     WakeRIT @ 0x1C001CAC8 (WakeRIT.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall EditionIVSyncForeground(HWND a1)
{
  char v2; // dl
  __int64 v3; // rdx
  __int64 v4; // r8
  char v5; // [rsp+60h] [rbp+8h] BYREF

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      109LL,
      4u,
      2u,
      0x6Du,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      a1);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v5);
  IVContainerForegroundSync::windowToForeground = a1;
  WakeRIT(0x100u);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v5, v3, v4);
}
