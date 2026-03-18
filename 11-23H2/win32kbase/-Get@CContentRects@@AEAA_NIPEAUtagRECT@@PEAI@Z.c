/*
 * XREFs of ?Get@CContentRects@@AEAA_NIPEAUtagRECT@@PEAI@Z @ 0x1C012FF70
 * Callers:
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1C01300D0 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 */

char __fastcall CContentRects::Get(CContentRects *this, unsigned int a2, struct tagRECT *a3, unsigned int *a4)
{
  char v6; // bl
  char v8; // dl

  *a4 = *((_DWORD *)this + 20);
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        2u,
        0xCu,
        (__int64)&WPP_731902009de53b1e50eb739d0e7aa533_Traceguids,
        *((_DWORD *)this + 20));
    memmove(a3, (char *)this + 16, 16LL * *((unsigned int *)this + 20));
    return 1;
  }
  else
  {
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        2u,
        2u,
        0xBu,
        (__int64)&WPP_731902009de53b1e50eb739d0e7aa533_Traceguids,
        a2,
        *((_DWORD *)this + 20));
    return 0;
  }
}
