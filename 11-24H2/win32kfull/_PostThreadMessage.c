/*
 * XREFs of _PostThreadMessage @ 0x1401A0460
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140066508 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     EditionPostInertiaMessage @ 0x1401A0430 (EditionPostInertiaMessage.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x14023AE10 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 *     NtUserPostThreadMessage @ 0x140244040 (NtUserPostThreadMessage.c)
 * Callees:
 *     _PostThreadMessageEx @ 0x1401A04CC (_PostThreadMessageEx.c)
 */

__int64 __fastcall PostThreadMessage(struct tagTHREADINFO *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  SetUnavailableInputSource(v9);
  return PostThreadMessageEx(a1, a2, a3, a4, (struct tagINPUT_MESSAGE_SOURCE *)v9);
}
