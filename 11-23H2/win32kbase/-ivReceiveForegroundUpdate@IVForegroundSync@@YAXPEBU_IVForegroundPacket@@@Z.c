/*
 * XREFs of ?ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z @ 0x1C01EF3E0
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x1C01EE440 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005754 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C020684C (ApiSetEditionInternalSetCursorPos.c)
 */

void __fastcall IVForegroundSync::ivReceiveForegroundUpdate(
        IVForegroundSync *this,
        const struct _IVForegroundPacket *a2,
        __int64 a3)
{
  __int64 v4; // rbx
  char v5; // dl
  __int64 v6; // rcx
  __int64 v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-20h]

  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      (char)a2,
      a3,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      0xDu,
      0x11u,
      (__int64)&WPP_62b01945c15a3d817f5c67c3f84f0e84_Traceguids,
      *(_QWORD *)this,
      *((_DWORD *)this + 2));
  v4 = *(_QWORD *)((char *)this + 12);
  if ( v4 != 0xFFFF8300FFFF8300uLL )
  {
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = HIDWORD(*(_QWORD *)((char *)this + 12));
      LODWORD(v7) = *(_QWORD *)((char *)this + 12);
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        0xDu,
        0x12u,
        (__int64)&WPP_62b01945c15a3d817f5c67c3f84f0e84_Traceguids,
        v7,
        v8);
    }
    ApiSetEditionInternalSetCursorPos((unsigned int)v4, HIDWORD(v4), 2LL);
  }
  v6 = 0LL;
  if ( *((_DWORD *)this + 2) != 1 )
    v6 = *(_QWORD *)this;
  if ( qword_1C0296558 )
    qword_1C0296558(v6, a2, a3);
}
