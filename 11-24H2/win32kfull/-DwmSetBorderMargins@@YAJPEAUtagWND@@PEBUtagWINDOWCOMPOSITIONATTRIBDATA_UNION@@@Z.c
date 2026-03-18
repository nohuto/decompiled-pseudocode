/*
 * XREFs of ?DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402AE054
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x140246D90 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140049338 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x140269664 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?ClearOverrideMargins@CWindowMarginProp@WindowMargins@@SAXPEAUtagWND@@@Z @ 0x1402BF3A8 (-ClearOverrideMargins@CWindowMarginProp@WindowMargins@@SAXPEAUtagWND@@@Z.c)
 *     ?SetOverrideMargins@CWindowMarginProp@WindowMargins@@SAJPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1402BF6B0 (-SetOverrideMargins@CWindowMarginProp@WindowMargins@@SAJPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 */

__int64 __fastcall DwmSetBorderMargins(struct tagWND *a1, const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  unsigned __int64 v4; // rdx
  char v5; // si
  bool v6; // bl
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  unsigned __int64 v11; // rbx
  unsigned int v12; // edi
  char v13; // si
  char v14; // bp
  __int64 v15; // r9
  char v16; // si
  char v17; // bp
  __int64 v18; // r9
  unsigned __int64 v19; // [rsp+70h] [rbp+8h] BYREF

  if ( *((struct tagTHREADINFO **)a1 + 2) == PtiCurrent((__int64)a1, (__int64)a2) )
  {
    v11 = *(_QWORD *)a2;
    v12 = 0;
    v19 = v11;
    if ( (v11 & 0x8000u) != 0LL
      || (v11 & 0x800000000000LL) != 0
      || (v11 & 0x80000000) != 0
      || (v4 = HIWORD(v11), (v11 & 0x8000000000000000uLL) != 0LL) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
        || (v16 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
      {
        v16 = 0;
      }
      v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4) + 69416);
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v16,
          v17,
          v18,
          3u,
          0x15u,
          0xBu,
          (__int64)&WPP_8a3faf74a2313f35df68134ab4bc02da_Traceguids,
          (__int16)v11,
          SWORD2(v19),
          SWORD1(v19),
          SHIWORD(v19));
      }
    }
    else
    {
      if ( (_WORD)v11 )
      {
        if ( WORD2(v11) && WORD1(v11) && HIWORD(v11) )
        {
          v12 = WindowMargins::CWindowMarginProp::SetOverrideMargins(a1, (const struct FRAME_MARGIN *)&v19);
          goto LABEL_24;
        }
      }
      else if ( !WORD2(v11) && !WORD1(v11) && !HIWORD(v11) )
      {
        WindowMargins::CWindowMarginProp::ClearOverrideMargins(a1);
LABEL_24:
        WindowMargins::CheckForChanges(a1, 6LL);
        return v12;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
        || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
      {
        v13 = 0;
      }
      v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v15 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4) + 69416);
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v13,
          v14,
          v15,
          3u,
          0x15u,
          0xCu,
          (__int64)&WPP_8a3faf74a2313f35df68134ab4bc02da_Traceguids,
          (__int16)v11,
          SWORD2(v19),
          SWORD1(v19),
          SHIWORD(v19));
      }
    }
    return 3221225485LL;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
    || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
  {
    v5 = 0;
  }
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69416),
      3,
      21,
      10,
      (__int64)&WPP_8a3faf74a2313f35df68134ab4bc02da_Traceguids);
  }
  return 3221225506LL;
}
