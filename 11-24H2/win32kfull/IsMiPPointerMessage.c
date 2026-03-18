/*
 * XREFs of IsMiPPointerMessage @ 0x1400A7680
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140066508 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?PointerMsgIdFromHookCall@@YA_KPEAUtagTHREADINFO@@I_J@Z @ 0x1400A75E0 (-PointerMsgIdFromHookCall@@YA_KPEAUtagTHREADINFO@@I_J@Z.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     IsPointerInputClientMessage @ 0x140148320 (IsPointerInputClientMessage.c)
 */

_BOOL8 __fastcall IsMiPPointerMessage(__int64 a1, unsigned __int64 a2)
{
  int v2; // ecx

  if ( (unsigned int)(a1 - 577) > 3 && !(unsigned int)IsPointerInputClientMessage(a1) )
  {
    if ( v2 != 528 || (_WORD)a2 != 582 )
      return 0LL;
    a2 >>= 16;
  }
  return (_WORD)a2 == 1;
}
