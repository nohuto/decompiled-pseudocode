/*
 * XREFs of ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C006B2DC
 * Callers:
 *     xxxKeyEventEx @ 0x1C006A7C8 (xxxKeyEventEx.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C006B3FC (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     NtUserPostKeyboardInputMessage @ 0x1C0149CD0 (NtUserPostKeyboardInputMessage.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01ED9D0 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall CKeyboardProcessor::HandleLeftRightVKs(unsigned __int8 a1)
{
  if ( (unsigned __int8)(a1 + 96) <= 5u )
    return (a1 - 160) / 2 + 16;
  else
    return a1;
}
