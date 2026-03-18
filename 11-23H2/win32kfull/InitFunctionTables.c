/*
 * XREFs of InitFunctionTables @ 0x1C03B49D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 (__fastcall *InitFunctionTables())(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, __int64 a4, ULONG64 a5)
{
  __int64 v0; // rbx
  char v1; // dl
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 (__fastcall *result)(struct tagWND *, unsigned int, unsigned __int64, __int64, ULONG64); // rax

  v0 = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || (v1 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v1 = 0;
  }
  if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      11,
      4,
      3,
      11,
      (__int64)&WPP_1c171ce113663c9ff9c000b7a1ac03c0_Traceguids);
  v2 = 304LL;
  *(_QWORD *)(gpsi + 272LL) = 4LL;
  *(_QWORD *)(gpsi + 280LL) = 0LL;
  *(_QWORD *)(gpsi + 288LL) = 3LL;
  *(_QWORD *)(gpsi + 296LL) = 1LL;
  do
  {
    *(_QWORD *)(v2 + gpsi) = 0LL;
    v2 += 8LL;
  }
  while ( v2 < 320 );
  *(_WORD *)(gpsi + 334LL) = 328;
  *(_WORD *)(gpsi + 340LL) = 344;
  *(_WORD *)(gpsi + 328LL) = 408;
  *(_WORD *)(gpsi + 332LL) = 352;
  *(_WORD *)(gpsi + 384LL) = 384;
  v3 = 32LL;
  *(_WORD *)(gpsi + 330LL) = 328;
  do
  {
    v4 = v0++ & 0x1F;
    *((_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink + v4) = IsMulDestroyBrushInternalSupported;
    --v3;
  }
  while ( v3 );
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)xxxWrapSBWndProc;
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)xxxWrapRealDefWindowProc;
  *(_QWORD *)&WPP_MAIN_CB.SectorSize = xxxWrapMenuWindowProc;
  WPP_MAIN_CB.DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)xxxWrapDesktopWndProc;
  qword_1C035DEC8 = (__int64)xxxWrapSendMessage;
  qword_1C035DE98 = (__int64)fnHkINLPCWPEXSTRUCT;
  qword_1C035DEA0 = (__int64)fnHkINLPCWPRETEXSTRUCT;
  qword_1C035DED0 = (__int64)xxxSendMessageFF;
  qword_1C035DED8 = (__int64)xxxSendMessageEx;
  qword_1C035DEE0 = (__int64)xxxWrapCallWindowProc;
  qword_1C035DEE8 = (__int64)xxxWrapSendMessageBSM;
  qword_1C035DE40 = (__int64)xxxWrapSwitchWndProc;
  qword_1C035DEF8 = (__int64)xxxWrapSendNotifyMessage;
  result = xxxWrapSendMessageCallback;
  qword_1C035DF00 = (__int64)xxxWrapSendMessageCallback;
  WPP_MAIN_CB.Reserved = xxxWrapRealDefWindowProc;
  *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = xxxWrapRealDefWindowProc;
  return result;
}
