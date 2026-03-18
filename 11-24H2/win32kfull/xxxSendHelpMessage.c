/*
 * XREFs of xxxSendHelpMessage @ 0x14021E310
 * Callers:
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     xxxMNKeyDown @ 0x1402BE09C (xxxMNKeyDown.c)
 *     xxxHelpLoop @ 0x1402E98E4 (xxxHelpLoop.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     _GetMessagePos @ 0x14004A3B8 (_GetMessagePos.c)
 */

unsigned __int64 __fastcall xxxSendHelpMessage(
        struct tagTHREADINFO **a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  int MessagePos; // eax
  _DWORD v8[4]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v9; // [rsp+60h] [rbp-28h]
  __int64 v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+70h] [rbp-18h]
  int v12; // [rsp+74h] [rbp-14h]

  v8[3] = 0;
  v8[0] = 40;
  v8[1] = a2;
  v8[2] = a3;
  v9 = a4;
  v10 = a5;
  MessagePos = GetMessagePos((__int64)a1, a2);
  v12 = SHIWORD(MessagePos);
  v11 = (__int16)MessagePos;
  return xxxSendTransformableMessageTimeout(a1, 83LL, 0LL, (struct tagDRAWITEMSTRUCT *)v8, 0, 0, 0LL, 1, 1);
}
