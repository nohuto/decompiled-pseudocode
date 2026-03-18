/*
 * XREFs of _anonymous_namespace_::FitRectToWorkArea @ 0x1402D28B4
 * Callers:
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x14014AE04 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402D7FA8 (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dddds @ 0x1402D9888 (WPP_RECORDER_AND_TRACE_SF_dddds.c)
 */

__int64 __fastcall anonymous_namespace_::FitRectToWorkArea(int *a1, unsigned int *a2, char a3)
{
  char v3; // di
  char v6; // r15
  bool v7; // r12
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  signed int v11; // r8d
  signed int v12; // r10d
  signed int v13; // r9d
  signed int v14; // edx
  signed int v15; // ecx
  signed int v16; // r11d
  int v17; // ebx
  __int64 result; // rax
  signed int v19; // r9d
  signed int v20; // ecx

  v3 = a3;
  v6 = 1;
  v7 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v6 = 0;
  }
  if ( v7 || v6 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v9) = v6;
    LOBYTE(v10) = v7;
    WPP_RECORDER_AND_TRACE_SF_dddds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69416));
    v3 = a3;
  }
  v11 = a1[2];
  v12 = a2[2];
  v13 = a1[3];
  v14 = v13;
  v15 = a1[1];
  v16 = v15;
  if ( v11 > v12 )
  {
    a1[2] = v12;
    a1[3] = v13;
    *a1 += v12 - v11;
    v11 = v12;
    a1[1] = v15;
  }
  v17 = *a1;
  result = *a2;
  if ( *a1 < (int)result )
  {
    *a1 = result;
    v14 = v13;
    result = (unsigned int)(result - v17);
    a1[3] = v13;
    v11 += result;
    a1[1] = v15;
    a1[2] = v11;
    v16 = v15;
  }
  v19 = a2[3];
  if ( v14 > v19 )
  {
    a1[2] = v11;
    a1[3] = v19;
    v16 = v15 + v19 - v14;
    v14 = v19;
    a1[1] = v16;
  }
  v20 = a2[1];
  if ( v16 < v20 )
  {
    a1[2] = v11;
    result = (unsigned int)(v20 - v16);
    a1[1] = v20;
    v14 += result;
    a1[3] = v14;
  }
  if ( v3 )
  {
    if ( v11 > v12 )
      a1[2] = v12;
    if ( v14 > v19 )
      a1[3] = v19;
  }
  return result;
}
