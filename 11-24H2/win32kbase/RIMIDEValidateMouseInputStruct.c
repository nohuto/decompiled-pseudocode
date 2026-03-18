/*
 * XREFs of RIMIDEValidateMouseInputStruct @ 0x14012D5B0
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x14017D9B0 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x1400F0D84 (WPP_RECORDER_AND_TRACE_SF_i.c)
 */

__int64 __fastcall RIMIDEValidateMouseInputStruct(__int64 a1)
{
  int v1; // edi
  char v2; // si
  unsigned int v3; // edx
  int v5; // edi
  int v6; // edi
  unsigned int v7; // r14d
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  char v12; // bl
  char v13; // r14
  __int64 UserSessionState; // rax
  char v15; // bl
  char v16; // r14
  __int64 v17; // rax
  char v18; // bl
  char v19; // r14
  __int64 v20; // rax
  char v21; // bl
  char v22; // di
  __int64 v23; // rax
  char v24; // r14
  char v25; // r15
  int v26; // ebx
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  char v29; // bl
  __int64 v30; // rax
  int v31; // [rsp+28h] [rbp-40h]
  __int64 v32; // [rsp+40h] [rbp-28h]

  v1 = *(_DWORD *)(a1 + 12);
  v2 = 1;
  v3 = 1;
  if ( (v1 & 2) != 0 && (v1 & 4) != 0 )
  {
    v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v13,
        *(_QWORD *)(UserSessionState + 19392),
        2u,
        1u,
        0x17u,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
        v1);
    }
    v3 = 0;
  }
  v5 = *(_DWORD *)(a1 + 12);
  if ( (v5 & 8) != 0 && (v5 & 0x10) != 0 )
  {
    v15 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LODWORD(v32) = v5;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v16,
        *(_QWORD *)(v17 + 19392),
        2u,
        1u,
        0x18u,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
        v32);
    }
    v3 = 0;
  }
  v6 = *(_DWORD *)(a1 + 12);
  if ( (v6 & 0x20) != 0 && (v6 & 0x40) != 0 )
  {
    v18 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LODWORD(v32) = v6;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v19,
        *(_QWORD *)(v20 + 19392),
        2u,
        1u,
        0x19u,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
        v32);
    }
    v3 = 0;
  }
  v7 = *(_DWORD *)(a1 + 12);
  v8 = ((v7 >> 7) & 1) + 1;
  if ( (v7 & 0x100) == 0 )
    v8 = (*(_DWORD *)(a1 + 12) >> 7) & 1;
  v9 = v8 + 1;
  if ( (v7 & 0x800) == 0 )
    v9 = v8;
  v10 = v9 + 1;
  if ( (v7 & 0x1000) == 0 )
    v10 = v9;
  if ( v10 > 1 )
  {
    v21 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LODWORD(v32) = v7;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v22,
        *(_QWORD *)(v23 + 19392),
        2u,
        1u,
        0x1Au,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
        v32);
    }
    v3 = 0;
  }
  if ( *(_DWORD *)(a1 + 16)
    && *(_DWORD *)(a1 + 16) > (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) )
  {
    v24 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = *(_DWORD *)(a1 + 16);
      v27 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v28 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LODWORD(v32) = v26;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v25,
        *(_QWORD *)(v28 + 19392),
        2u,
        1u,
        0x1Bu,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
        v32,
        v27);
    }
    v3 = 0;
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v2 = 0;
    }
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_i(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v2,
        v29,
        *(_QWORD *)(v30 + 19392),
        2u,
        v31,
        0x1Cu,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
    }
    return 0;
  }
  return v3;
}
