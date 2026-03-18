/*
 * XREFs of _PostThreadMessage @ 0x1C00A3554
 * Callers:
 *     zzzCancelJournalling @ 0x1C003C590 (zzzCancelJournalling.c)
 *     xxxSysCommand @ 0x1C00857C4 (xxxSysCommand.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C0099EFC (-EndShutdown@@YAXJ@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C00A1AF0 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011EE90 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessEventMessage @ 0x1C0125980 (xxxProcessEventMessage.c)
 *     EditionPostInertiaMessage @ 0x1C01F6E80 (EditionPostInertiaMessage.c)
 * Callees:
 *     _PostThreadMessageEx @ 0x1C01162B8 (_PostThreadMessageEx.c)
 */

__int64 __fastcall PostThreadMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  SetUnavailableInputSource(v9);
  return PostThreadMessageEx(a1, a2, a3, a4, v9);
}
