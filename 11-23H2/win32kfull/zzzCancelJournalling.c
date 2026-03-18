/*
 * XREFs of zzzCancelJournalling @ 0x1C003C590
 * Callers:
 *     xxxSwitchDesktop @ 0x1C002C52C (xxxSwitchDesktop.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0035DAC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     SendMsgCleanup @ 0x1C0027580 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C00275E0 (xxxReceiverDied.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1C003AABC (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 *     PhkFirstGlobalValid @ 0x1C003C7B4 (PhkFirstGlobalValid.c)
 *     PhkNextValid @ 0x1C003CEB4 (PhkNextValid.c)
 *     zzzUnhookWindowsHookEx @ 0x1C003D1C4 (zzzUnhookWindowsHookEx.c)
 *     _PostThreadMessage @ 0x1C00A3554 (_PostThreadMessage.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00B7028 (zzzEndDeferWinEventNotify.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 zzzCancelJournalling()
{
  __int64 v0; // rcx
  __int64 GlobalValid; // rdi
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 Valid; // rbx
  __int64 v8; // rbx

  ForceResetMouseButtonsDownState();
  ++gdwDeferWinEvent;
  GlobalValid = PhkFirstGlobalValid(gptiRit, 1LL);
  if ( GlobalValid )
  {
    do
    {
      if ( *(_QWORD *)(GlobalValid + 16) )
      {
        PostThreadMessage(*(_QWORD *)(GlobalValid + 16), 75LL, 0LL);
        SendMsgCleanup();
      }
      Valid = PhkNextValid(GlobalValid);
      zzzUnhookWindowsHookEx((struct tagHOOK *)GlobalValid);
      GlobalValid = Valid;
    }
    while ( Valid );
  }
  zzzEndDeferWinEventNotify(v0);
  ++gdwDeferWinEvent;
  v3 = PhkFirstGlobalValid(gptiRit, 0LL);
  if ( v3 )
  {
    do
    {
      if ( *(_QWORD *)(v3 + 16) )
      {
        PostThreadMessage(*(_QWORD *)(v3 + 16), 75LL, 0LL);
        SendMsgCleanup();
      }
      v8 = PhkNextValid(v3);
      zzzUnhookWindowsHookEx((struct tagHOOK *)v3);
      v3 = v8;
    }
    while ( v8 );
  }
  zzzEndDeferWinEventNotify(v2);
  gppiLockSFW = 0LL;
  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    v5 = *(_QWORD *)(grpdeskRitInput + 8LL);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 24);
      if ( v6 )
      {
        result = *(_QWORD *)(v6 + 40);
        if ( (*(_BYTE *)(result + 31) & 8) != 0 )
          return SetOrClrWF(0LL, v6, 3848LL, 1LL);
      }
    }
  }
  return result;
}
