/*
 * XREFs of ?SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@@Z @ 0x14006C398
 * Callers:
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1402A9F8C (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     PtInRect @ 0x14006E460 (PtInRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddsdddddd @ 0x1401E7B68 (WPP_RECORDER_AND_TRACE_SF_ddsdddddd.c)
 */

char __fastcall MOVESIZEDATA::SHData_NeedsArrangementCallout(__int64 a1, _BOOL8 a2)
{
  int v2; // r10d
  __int64 v3; // r9
  int v4; // r11d
  bool v6; // r12
  bool v7; // r13
  __int64 UserSessionState; // rax
  const char *v9; // rdx
  int v10; // r8d
  bool v11; // bl
  bool v12; // di
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx

  v2 = a2;
  v3 = a1;
  if ( *(_BYTE *)(a1 + 372) && (a2 = (unsigned int)PtInRect(a1 + 356) != 0, v4 != a2) )
  {
    v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v9 = "entered";
      LOBYTE(v10) = v7;
      LOBYTE(v9) = v6;
      WPP_RECORDER_AND_TRACE_SF_ddsdddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        (_DWORD)v9,
        v10,
        *(_QWORD *)(UserSessionState + 69416));
    }
  }
  else
  {
    if ( v2 != 4 || !*(_BYTE *)(v3 + 393) )
      return 0;
    v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v15,
        v14,
        *(_QWORD *)(v13 + 69416),
        4,
        1,
        14,
        (__int64)&WPP_3a3e36d3d12b304605d2c81e14d21b4c_Traceguids);
    }
  }
  return 1;
}
