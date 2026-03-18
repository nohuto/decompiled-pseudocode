/*
 * XREFs of SetWakeBit @ 0x1400456D0
 * Callers:
 *     IncPaintCount @ 0x140045548 (IncPaintCount.c)
 *     ?xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1400455A0 (-xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140066508 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x14008F1D0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x14008FB9C (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x14009B5B4 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     _DelegateCapturePointers @ 0x1400A6408 (_DelegateCapturePointers.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x14010766C (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 *     ClearSendMessages @ 0x14011B918 (ClearSendMessages.c)
 *     ?WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z @ 0x14012E354 (-WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxReceiverDied @ 0x14016F37C (xxxReceiverDied.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x14017581C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     _PostThreadMessageEx @ 0x1401A04CC (_PostThreadMessageEx.c)
 *     _ReplyMessage @ 0x1401AB570 (_ReplyMessage.c)
 *     IPostQuitMessage @ 0x1401BC764 (IPostQuitMessage.c)
 *     ?GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z @ 0x1401C5C24 (-GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023256C (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 *     DoTimer @ 0x14023E9B0 (DoTimer.c)
 *     xxxSystemTimerProc @ 0x14023EF10 (xxxSystemTimerProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxCancelTrackingForThread @ 0x1402AAEF0 (xxxCancelTrackingForThread.c)
 * Callees:
 *     EditionUpdateRawMouseMode @ 0x14002BEB0 (EditionUpdateRawMouseMode.c)
 */

LONG __fastcall SetWakeBit(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rcx
  LONG result; // eax
  __int64 v6; // rdx
  __int64 UserSessionState; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v3 = a2;
  v4 = 0LL;
  result = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0);
  if ( (result & 1) == 0 )
  {
    if ( (a2 & 6) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 472) + 96LL) = a1;
      EditionUpdateRawMouseMode(*(_QWORD *)(a1 + 472));
    }
    if ( (v3 & 2) != 0 )
      CaptureLogicalCursorPosToQMouseMove(*(_QWORD *)(a1 + 472));
    if ( (v3 & 0x401) != 0 )
      *(_QWORD *)(*(_QWORD *)(a1 + 472) + 104LL) = a1;
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 488) + 8LL), v3);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 488) + 4LL), v3);
    UserSessionState = W32GetUserSessionState(v4, a2);
    if ( (v3 & 0x1C07) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 464);
      if ( (*(_DWORD *)(v8 + 12) & 0x400000) != 0 )
      {
        if ( (v3 & 2) == 0
          || (v10 = *(_QWORD *)(W32GetUserSessionState(v8, v6) + 19928),
              *(_DWORD *)(v10 + 4960) != *(_DWORD *)(UserSessionState + 36280))
          || *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19928) + 4964LL) != *(_DWORD *)(UserSessionState + 36284) )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 464) + 12LL) &= ~0x400000u;
          ForegroundBoost::SetForegroundPriority(a1, 1LL, 8LL);
        }
      }
    }
    result = *(_DWORD *)(*(_QWORD *)(a1 + 488) + 16LL);
    if ( (result & v3) != 0 )
      return KeSetEvent(*(PRKEVENT *)(a1 + 768), 2, 0);
  }
  return result;
}
