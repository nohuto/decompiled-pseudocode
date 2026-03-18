/*
 * XREFs of ?DwsUnlinkAllProcesses@tagWND@@QEAAXW4DwsLinkSource@@@Z @ 0x1401A4C50
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x140141E88 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A4FD0 (-DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z.c)
 */

void __fastcall tagWND::DwsUnlinkAllProcesses(__int64 a1, int a2)
{
  _QWORD *v4; // r14
  _QWORD *v5; // rsi
  int v6; // r12d
  _QWORD *v7; // rbp
  _QWORD *v8; // r13
  bool v9; // zf
  char v10; // al
  _UNKNOWN **v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-68h]
  char v16; // [rsp+90h] [rbp+8h]
  char v17; // [rsp+98h] [rbp+10h]
  tagPROCESSINFO *v18; // [rsp+A0h] [rbp+18h]

  if ( (a2 == 3) != *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 20LL) >> 7 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 115);
  v4 = (_QWORD *)(a1 + 400);
  v5 = *(_QWORD **)(a1 + 400);
  if ( ((*(_DWORD *)(a1 + 380) >> 27) & 1) != (v5 != (_QWORD *)(a1 + 400)) )
    KeBugCheckEx(0x164u, 0x12uLL, 0LL, 0LL, 0LL);
  if ( v5 != v4 )
  {
    v6 = ~a2;
    do
    {
      v7 = v5 - 3;
      v8 = v5;
      v5 = (_QWORD *)*v5;
      v9 = (v6 & (_DWORD)v7[2]) == 0;
      *((_DWORD *)v7 + 4) &= v6;
      if ( v9 )
      {
        v18 = (tagPROCESSINFO *)v7[1];
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
          || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v10 = 0;
        }
        v11 = &WPP_RECORDER_INITIALIZED;
        v17 = v10;
        v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          UserSessionState = W32GetUserSessionState(v11);
          WPP_RECORDER_AND_TRACE_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v17,
            v16,
            *(_QWORD *)(UserSessionState + 69400),
            BugCheckParameter4,
            0xEu,
            0xDu,
            (__int64)&WPP_383e00c9a6733678f2e50c59db551300_Traceguids);
        }
        tagPROCESSINFO::DwsUnlinkWindow(v18, (struct ContribueToProcessDws *)v7);
        v13 = *v8;
        if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v14 = (_QWORD *)v8[1], (_QWORD *)*v14 != v8) )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        GreDeleteFastMutex((char *)v7);
      }
    }
    while ( v5 != v4 );
  }
  if ( (_QWORD *)*v4 == v4 )
    *(_DWORD *)(a1 + 380) &= ~0x8000000u;
}
