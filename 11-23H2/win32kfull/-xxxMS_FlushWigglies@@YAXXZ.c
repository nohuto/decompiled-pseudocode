/*
 * XREFs of ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01EE0D0
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EBD4C (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ECFA8 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C002B4E0 (xxxInternalGetMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void xxxMS_FlushWigglies(void)
{
  bool v0; // dl
  _OWORD v1[3]; // [rsp+40h] [rbp-38h] BYREF

  memset(v1, 0, sizeof(v1));
  v0 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      10,
      4,
      1,
      10,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
  while ( (unsigned int)xxxInternalGetMessage(v1, 0LL, 512, 512, 3, 0) )
    ;
}
