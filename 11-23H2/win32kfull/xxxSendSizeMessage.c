/*
 * XREFs of xxxSendSizeMessage @ 0x1C00D85D4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00AABCC (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 * Callees:
 *     _GetClientRect @ 0x1C00D8AE8 (_GetClientRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendSizeMessage(ULONG_PTR BugCheckParameter2)
{
  __int128 v3; // [rsp+50h] [rbp-18h] BYREF

  v3 = 0LL;
  GetClientRect(BugCheckParameter2, &v3);
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0, 0, 0LL, 1, 0);
}
