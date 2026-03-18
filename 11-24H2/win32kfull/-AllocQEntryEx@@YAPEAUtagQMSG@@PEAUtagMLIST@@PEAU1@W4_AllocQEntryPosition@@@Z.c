/*
 * XREFs of ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x14010F3F0
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140066508 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 *     _PostThreadMessageEx @ 0x1401A04CC (_PostThreadMessageEx.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     DoTimer @ 0x14023E9B0 (DoTimer.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqdd @ 0x14010F600 (WPP_RECORDER_AND_TRACE_SF_qqdd.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

_DWORD *__fastcall AllocQEntryEx(__int64 a1, _DWORD *a2, int a3)
{
  _DWORD *v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  _DWORD *v9; // rax
  int v10; // eax
  _QWORD *v11; // rax
  bool v12; // bp
  bool v13; // r15
  __int64 v14; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax

  v4 = a2;
  v6 = *(unsigned int *)(W32GetUserSessionState(a1, a2) + 69328);
  if ( *(_DWORD *)(a1 + 16) >= (unsigned int)v6 )
  {
    UserSetLastError(1816);
    return 0LL;
  }
  if ( !v4 )
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    v9 = (_DWORD *)Win32AllocateFromPagedLookasideList(*(_QWORD *)(UserSessionState + 16872));
    v4 = v9;
    if ( !v9 )
    {
      UserSetLastError(8);
      return 0LL;
    }
    memset_0(v9, 0, 0xA8uLL);
  }
  v10 = 8;
  if ( *(_DWORD *)(a1 + 20) != 2 )
    v10 = 4;
  v4[25] |= v10;
  v11 = *(_QWORD **)(a1 + 8);
  if ( !v11 )
  {
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 8) = v4;
LABEL_9:
    *(_QWORD *)(a1 + 32) = 0LL;
    goto LABEL_10;
  }
  if ( a3 == 2 )
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      *((_QWORD *)v4 + 1) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)v4 = **(_QWORD **)(a1 + 32);
      v16 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)v16 )
        *(_QWORD *)(*(_QWORD *)v16 + 8LL) = v4;
      v17 = *(_QWORD **)(a1 + 32);
      if ( v17 == *(_QWORD **)(a1 + 8) )
        *(_QWORD *)(a1 + 8) = v4;
      *v17 = v4;
      goto LABEL_9;
    }
  }
  else if ( a3 )
  {
    *v11 = v4;
    *((_QWORD *)v4 + 1) = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v4;
    goto LABEL_10;
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = v4;
  *(_QWORD *)v4 = *(_QWORD *)a1;
  *(_QWORD *)a1 = v4;
LABEL_10:
  ++*(_DWORD *)(a1 + 16);
  v12 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v14 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
    WPP_RECORDER_AND_TRACE_SF_qqdd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v13,
      *(_QWORD *)(v14 + 69416));
  }
  return v4;
}
