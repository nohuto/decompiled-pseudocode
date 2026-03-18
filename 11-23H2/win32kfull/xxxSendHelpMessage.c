/*
 * XREFs of xxxSendHelpMessage @ 0x1C02390E0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     xxxMNKeyDown @ 0x1C0217788 (xxxMNKeyDown.c)
 *     xxxHelpLoop @ 0x1C0238C64 (xxxHelpLoop.c)
 * Callees:
 *     _GetMessagePos @ 0x1C008CF14 (_GetMessagePos.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendHelpMessage(
        unsigned __int64 *BugCheckParameter2,
        int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  int MessagePos; // eax
  __int128 v8; // [rsp+50h] [rbp-38h] BYREF
  __int64 v9; // [rsp+60h] [rbp-28h]
  __int64 v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+70h] [rbp-18h]
  int v12; // [rsp+74h] [rbp-14h]

  LODWORD(v8) = 40;
  DWORD1(v8) = a2;
  *((_QWORD *)&v8 + 1) = a3;
  v9 = a4;
  v10 = a5;
  MessagePos = GetMessagePos();
  v12 = SHIWORD(MessagePos);
  v11 = (__int16)MessagePos;
  _InterlockedAdd(&glSendMessage, 1u);
  return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x53u, 0LL, &v8, 0, 0, 0LL, 1, 1);
}
