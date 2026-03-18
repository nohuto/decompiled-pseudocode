/*
 * XREFs of ?TraceLegacyState@UIPrivilegeIsolation@@YAXXZ @ 0x1401A5C0C
 * Callers:
 *     Win32UserInitialize @ 0x1402E5DE4 (Win32UserInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     FastGetProfileDwordEx @ 0x14009FAE0 (FastGetProfileDwordEx.c)
 */

void __fastcall UIPrivilegeIsolation::TraceLegacyState(UIPrivilegeIsolation *this)
{
  char v1; // bl
  bool v2; // di
  bool v3; // si
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  bool v7; // di
  bool v8; // si
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  bool v12; // di
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  int v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v16 = 0;
  RtlQueryElevationFlags(&v16);
  v1 = 1;
  if ( (v16 & 1) == 0 )
  {
    v2 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v5) = v3;
      LOBYTE(v6) = v2;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v6,
        v5,
        *(_QWORD *)(UserSessionState + 69400),
        4,
        8,
        10,
        (__int64)&WPP_2ec7d34612b832e9d6306defe6b10f69_Traceguids);
    }
  }
  LODWORD(v17) = 0;
  FastGetProfileDwordEx(0LL, 49LL, L"EnableUIPI", 1, 0, &v17, 0LL);
  if ( (_DWORD)v17 )
  {
    if ( (v16 & 1) != 0 )
      return;
  }
  else
  {
    v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(v9 + 69400),
        4,
        8,
        11,
        (__int64)&WPP_2ec7d34612b832e9d6306defe6b10f69_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
  {
    v1 = 0;
  }
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v14) = v12;
    LOBYTE(v15) = v1;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(v13 + 69400),
      3,
      8,
      12,
      (__int64)&WPP_2ec7d34612b832e9d6306defe6b10f69_Traceguids);
  }
}
