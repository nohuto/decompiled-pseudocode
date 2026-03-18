/*
 * XREFs of ?Set@CContentRects@@AEAA_NIPEBUtagRECT@@@Z @ 0x1C0130224
 * Callers:
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1C01302E4 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 */

bool __fastcall CContentRects::Set(CContentRects *this, unsigned int a2, const struct tagRECT *a3)
{
  __int64 v4; // rbx
  char v6; // dl
  bool result; // al

  v4 = a2;
  v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v6,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      2u,
      0xAu,
      (__int64)&WPP_731902009de53b1e50eb739d0e7aa533_Traceguids,
      v4);
  memmove((char *)this + 16, a3, 16 * v4);
  result = 1;
  *((_DWORD *)this + 20) = v4;
  return result;
}
