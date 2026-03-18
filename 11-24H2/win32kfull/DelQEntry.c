/*
 * XREFs of DelQEntry @ 0x14008E870
 * Callers:
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x14008B318 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x14008D9B8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14008E06C (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     FindQMsg @ 0x14008E400 (FindQMsg.c)
 *     DelegateCoalescePointerMessage @ 0x14008EFBC (DelegateCoalescePointerMessage.c)
 *     FreeMessageList @ 0x14008FFF0 (FreeMessageList.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1400A6748 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x140167040 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x140185D10 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?CleanOutOldInputMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x14018D594 (-CleanOutOldInputMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14018DF04 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     DestroyThreadsMessages @ 0x1401A1840 (DestroyThreadsMessages.c)
 *     SuspendThreadQueue @ 0x1401A4D60 (SuspendThreadQueue.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1401B9B24 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1401C89C0 (_anonymous_namespace_--RemoveEventMessage.c)
 *     EditionDelQEntry @ 0x1401F2510 (EditionDelQEntry.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x14021D768 (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x14023D790 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x14008EA90 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     IsPointerInputClientMessage @ 0x140148320 (IsPointerInputClientMessage.c)
 *     FreePointerMessageParams @ 0x14016581C (FreePointerMessageParams.c)
 */

__int64 __fastcall DelQEntry(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  bool v9; // bp
  bool v10; // r12
  __int64 UserSessionState; // rax
  __int64 v12; // rax
  __int64 v13; // rcx

  v6 = (__int64 *)a2[1];
  if ( v6 )
    *v6 = *a2;
  v7 = *a2;
  if ( *a2 )
    *(_QWORD *)(v7 + 8) = a2[1];
  if ( *(__int64 **)a1 == a2 )
    *(_QWORD *)a1 = *a2;
  if ( *(__int64 **)(a1 + 8) == a2 )
    *(_QWORD *)(a1 + 8) = a2[1];
  result = *((unsigned int *)a2 + 25);
  if ( (result & 0x2000) == 0 && (result & 0x4000) == 0 && (result & 0x10000) == 0 )
  {
    --*(_DWORD *)(a1 + 16);
    v7 = *(_QWORD *)&WPP_GLOBAL_Control;
    v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      result = WPP_RECORDER_AND_TRACE_SF_qiqdd(
                 *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                 v9,
                 v10,
                 *(_QWORD *)(UserSessionState + 69416));
    }
  }
  if ( a2 == *(__int64 **)(a1 + 32) )
    *(_QWORD *)(a1 + 32) = 0LL;
  if ( a3 )
  {
    if ( (*((_DWORD *)a2 + 25) & 8) != 0 && !*((_DWORD *)a2 + 24) )
    {
      v13 = *((unsigned int *)a2 + 6);
      if ( (unsigned int)(v13 - 577) <= 3 || (unsigned int)IsPointerInputClientMessage(v13) )
        FreePointerMessageParams(a2);
    }
    v12 = W32GetUserSessionState(v7, a2);
    return Win32FreeToPagedLookasideList(*(_QWORD *)(v12 + 16872), a2);
  }
  return result;
}
