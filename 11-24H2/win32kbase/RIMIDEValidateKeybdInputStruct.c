/*
 * XREFs of RIMIDEValidateKeybdInputStruct @ 0x14019B144
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x14017D678 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x1400F0D84 (WPP_RECORDER_AND_TRACE_SF_i.c)
 */

__int64 __fastcall RIMIDEValidateKeybdInputStruct(__int16 *a1)
{
  int v1; // ebx
  char v2; // di
  char v3; // bp
  __int64 UserSessionState; // rax
  __int16 v5; // bp
  char v6; // bl
  bool v7; // di
  __int64 v8; // rax
  int v9; // r8d
  int v10; // edx
  char v11; // bp
  char v12; // r14
  int v13; // ebx
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  char v16; // si
  char v17; // bl
  __int64 v18; // rax
  int v20; // [rsp+28h] [rbp-30h]

  v1 = *((_DWORD *)a1 + 1);
  if ( (v1 & 4) != 0 && (*a1 || (v1 & 0xFFFF7FC9) != 0) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v2 = 0;
    }
    v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v2,
        v3,
        *(_QWORD *)(UserSessionState + 19392),
        2u,
        1u,
        0x1Du,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
        v1);
    }
    return 0LL;
  }
  if ( (v1 & 8) == 0 )
  {
    v5 = *a1;
    if ( (unsigned __int16)*a1 > 0xFEu )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v6 = 0;
      }
      v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v9) = v7;
        LOBYTE(v10) = v6;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v10,
          v9,
          *(_QWORD *)(v8 + 19392),
          2,
          1,
          30,
          (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
          v5);
      }
      return 0LL;
    }
  }
  if ( *((_DWORD *)a1 + 2)
    && *((_DWORD *)a1 + 2) > (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v11 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *((_DWORD *)a1 + 2);
      v14 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v12,
        *(_QWORD *)(v15 + 19392),
        2u,
        1u,
        0x1Fu,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
        v13,
        v14);
    }
    return 0LL;
  }
  if ( *((_QWORD *)a1 + 2) && (*((_DWORD *)a1 + 1) & 0x8000) == 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v16 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v16 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_i(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v17,
        *(_QWORD *)(v18 + 19392),
        2u,
        v20,
        0x20u,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
    }
    return 0LL;
  }
  return 1LL;
}
