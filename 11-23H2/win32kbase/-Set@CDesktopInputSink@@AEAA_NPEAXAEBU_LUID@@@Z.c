/*
 * XREFs of ?Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z @ 0x1C01E4F38
 * Callers:
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C00B7224 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0099700 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

char __fastcall CDesktopInputSink::Set(CDesktopInputSink *this, void *a2, const struct _LUID *a3)
{
  char v3; // bp
  char v4; // bl
  const struct _LUID *v5; // rsi
  int v7; // edx
  int v8; // r8d
  int v10; // edx

  v3 = (char)a2;
  v4 = 1;
  v5 = a3;
  LOBYTE(a3) = 1;
  if ( (int)CompositionInputObject::ResolveHandle(a2, 1LL, (__int64)a3, (struct CompositionInputObject **)this + 2) < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v4 = 0;
    }
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 16;
      LOBYTE(v10) = v4;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        16,
        (__int64)&WPP_779100f86780316255215c0b67a1bdf1_Traceguids,
        v3);
    }
    return 0;
  }
  else
  {
    *((struct _LUID *)this + 3) = *v5;
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        2,
        15,
        (__int64)&WPP_779100f86780316255215c0b67a1bdf1_Traceguids,
        v3);
    }
    return 1;
  }
}
