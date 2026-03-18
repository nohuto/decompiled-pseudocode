/*
 * XREFs of ?TraceTopology@CMonitorTopology@@QEBAXXZ @ 0x1402AB77C
 * Callers:
 *     ?LogComparisonToCurrent@CMonitorTopology@@QEBAXXZ @ 0x1401CBA98 (-LogComparisonToCurrent@CMonitorTopology@@QEBAXXZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDDDDDDDDDDDDDD @ 0x1402ABE34 (WPP_RECORDER_AND_TRACE_SF_DDDDDDDDDDDDDDDD.c)
 *     WPP_RECORDER_AND_TRACE_SF_DLD @ 0x1402AC0E4 (WPP_RECORDER_AND_TRACE_SF_DLD.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddddqss @ 0x1402AC1D0 (WPP_RECORDER_AND_TRACE_SF_dddddddddqss.c)
 */

void __fastcall CMonitorTopology::TraceTopology(CMonitorTopology *this)
{
  bool v1; // r14
  char v2; // bp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  unsigned int v8; // edi
  __int64 v9; // r8
  char v10; // si
  char v11; // bl
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  char v15; // r9
  char v16; // al
  unsigned int v17; // ebx
  __int64 v18; // rdi
  __int16 v19; // si
  int v20; // ebp
  int v21; // r14d
  int v22; // r15d
  int v23; // r12d
  int v24; // r13d
  __int64 v25; // rax
  int v26; // r8d
  const char *v27; // rdx
  const char *v28; // rcx
  __int64 v29; // r9
  const char *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r10
  __int64 v34; // r9
  char v35; // r8
  char v36; // al
  char v37; // bl
  char v38; // di
  char v39; // si
  char v40; // bp
  char v41; // r14
  char v42; // r15
  char v43; // r12
  char v44; // r13
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  int v48; // [rsp+20h] [rbp-118h]
  int v49; // [rsp+28h] [rbp-110h]
  int v50; // [rsp+30h] [rbp-108h]
  int v51; // [rsp+38h] [rbp-100h]
  int v52; // [rsp+C0h] [rbp-78h]
  int v53; // [rsp+C0h] [rbp-78h]
  int v54; // [rsp+C4h] [rbp-74h]
  char v55; // [rsp+C4h] [rbp-74h]
  int v56; // [rsp+C8h] [rbp-70h]
  char v57; // [rsp+C8h] [rbp-70h]
  char v58; // [rsp+CCh] [rbp-6Ch]
  char v59; // [rsp+D0h] [rbp-68h]
  char v60; // [rsp+D4h] [rbp-64h]
  char v61; // [rsp+D8h] [rbp-60h]
  char v62; // [rsp+DCh] [rbp-5Ch]
  char v63; // [rsp+E0h] [rbp-58h]
  __int64 v64; // [rsp+E8h] [rbp-50h]
  CMonitorTopology *v65; // [rsp+140h] [rbp+8h]
  char v66; // [rsp+148h] [rbp+10h]
  char v67; // [rsp+148h] [rbp+10h]
  char v68; // [rsp+150h] [rbp+18h]
  char v69; // [rsp+150h] [rbp+18h]
  unsigned int i; // [rsp+158h] [rbp+20h]

  v65 = this;
  if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
  {
    v1 = *(_QWORD *)&WPP_GLOBAL_Control != (_QWORD)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v2 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v2 = 0;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control || v2 )
    {
      W32GetCurrentWin32kSessionId();
      UserSessionState = W32GetUserSessionState(v4, v3);
      LOBYTE(v6) = v2;
      LOBYTE(v7) = v1;
      WPP_RECORDER_AND_TRACE_SF_DLD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v7,
        v6,
        *(_QWORD *)(UserSessionState + 69416));
      this = v65;
    }
    v8 = 0;
    for ( i = 0; v8 < *((_DWORD *)this + 1); i = v8 )
    {
      v9 = 9LL * v8;
      v64 = v9;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v10 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v11 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v11 = 0;
      }
      if ( v10 || v11 )
      {
        v12 = W32GetUserSessionState(this, *(_QWORD *)&WPP_GLOBAL_Control);
        LOBYTE(v13) = v11;
        LOBYTE(v14) = v10;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v14,
          v13,
          *(_QWORD *)(v12 + 69416),
          5,
          7,
          23,
          (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
          v8);
        this = v65;
        v9 = 9LL * v8;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v15 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v15 = 0;
      }
      v68 = v15;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v16 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v16 = 0;
      }
      v66 = v16;
      if ( v15 || v16 )
      {
        v17 = *((_DWORD *)this + 2 * v9 + 18);
        v18 = *((_QWORD *)this + v9 + 2);
        v19 = *((_WORD *)this + 4 * v9 + 28);
        v20 = *((_DWORD *)this + 2 * v9 + 13);
        v21 = *((_DWORD *)this + 2 * v9 + 12);
        v22 = *((_DWORD *)this + 2 * v9 + 11);
        v23 = *((_DWORD *)this + 2 * v9 + 10);
        v24 = *((_DWORD *)this + 2 * v9 + 9);
        v52 = *((_DWORD *)this + 2 * v9 + 8);
        v54 = *((_DWORD *)this + 2 * v9 + 7);
        v56 = *((_DWORD *)this + 2 * v9 + 6);
        v25 = W32GetUserSessionState(this, *(_QWORD *)&WPP_GLOBAL_Control);
        LOBYTE(v26) = v66;
        v27 = "FALSE";
        v28 = "TRUE";
        v29 = *(_QWORD *)(v25 + 69416);
        if ( !v17 )
          v28 = "FALSE";
        v30 = "TRUE";
        if ( v17 <= 1 )
          v30 = "FALSE";
        LOBYTE(v27) = v68;
        WPP_RECORDER_AND_TRACE_SF_dddddddddqss(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          (_DWORD)v27,
          v26,
          v29,
          v48,
          v49,
          v50,
          v51,
          v56,
          v54,
          v52,
          v24,
          v23,
          v22,
          v21,
          v20,
          v19,
          v18,
          (__int64)v30,
          (__int64)v28);
        this = v65;
        v8 = i;
      }
      v31 = v64;
      v32 = 0LL;
      v53 = 0;
      if ( *((_DWORD *)this + 2 * v64 + 18) )
      {
        do
        {
          v33 = *((_QWORD *)this + v31 + 8);
          v34 = 5 * v32;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
            || (v35 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v35 = 0;
          }
          v69 = v35;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v36 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
          {
            v36 = 0;
          }
          v67 = v36;
          if ( v35 || v36 )
          {
            v37 = *(_BYTE *)(v33 + 4 * v34 + 19);
            v38 = *(_BYTE *)(v33 + 4 * v34 + 18);
            v39 = *(_BYTE *)(v33 + 4 * v34 + 17);
            v40 = *(_BYTE *)(v33 + 4 * v34 + 16);
            v41 = *(_BYTE *)(v33 + 4 * v34 + 15);
            v42 = *(_BYTE *)(v33 + 4 * v34 + 14);
            v43 = *(_BYTE *)(v33 + 4 * v34 + 13);
            v44 = *(_BYTE *)(v33 + 4 * v34 + 12);
            v57 = *(_BYTE *)(v33 + 4 * v34 + 11);
            v55 = *(_BYTE *)(v33 + 4 * v34 + 10);
            v58 = *(_BYTE *)(v33 + 4 * v34 + 9);
            v59 = *(_BYTE *)(v33 + 4 * v34 + 8);
            v60 = *(_BYTE *)(v33 + 4 * v34 + 7);
            v61 = *(_BYTE *)(v33 + 4 * v34 + 6);
            v62 = *(_BYTE *)(v33 + 4 * v34 + 5);
            v63 = *(_BYTE *)(v33 + 4 * v34 + 4);
            v45 = W32GetUserSessionState(this, *(_QWORD *)&WPP_GLOBAL_Control);
            LOBYTE(v46) = v67;
            LOBYTE(v47) = v69;
            WPP_RECORDER_AND_TRACE_SF_DDDDDDDDDDDDDDDD(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v47,
              v46,
              *(_QWORD *)(v45 + 69416),
              v48,
              v49,
              v50,
              v51,
              v63,
              v62,
              v61,
              v60,
              v59,
              v58,
              v55,
              v57,
              v44,
              v43,
              v42,
              v41,
              v40,
              v39,
              v38,
              v37);
            this = v65;
          }
          v31 = v64;
          v32 = (unsigned int)(v53 + 1);
          v53 = v32;
        }
        while ( (unsigned int)v32 < *((_DWORD *)this + 2 * v64 + 18) );
        v8 = i;
      }
      ++v8;
    }
  }
}
