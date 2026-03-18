/*
 * XREFs of ?UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D4AB0
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x1400688D0 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14014E948 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sddddd @ 0x1402D9A3C (WPP_RECORDER_AND_TRACE_SF_sddddd.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402DB288 (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 */

void __fastcall AdvancedWindowPos::UpdateActionForFullScreenWindow(
        AdvancedWindowPos *this,
        struct tagWND *a2,
        struct AdvancedWindowPos::WindowAction *a3)
{
  char v3; // si
  char v5; // bl
  char v6; // bp
  char v7; // bl
  struct CHECKPOINT *IfValid; // rax
  int v9; // ecx
  int v10; // r14d
  bool v11; // bl
  bool v12; // bp
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  bool v16; // bl
  bool v17; // bp
  __int64 UserSessionState; // rax
  int v19; // edx
  int v20; // r8d
  LONG v21; // eax
  CMonitorTopology *v22; // rcx
  __int64 v23; // rdx
  const struct CMonitorTopology::MonitorData *v24; // rbp
  __m128i v25; // xmm6
  bool v26; // r13
  __int64 v27; // rcx
  int v28; // r15d
  int v29; // eax
  int v30; // r12d
  __int16 v31; // bx
  const char *StateString; // rax
  int v33; // edx
  int v34; // r8d
  int v35; // r9d
  bool v36; // bl
  __int64 v37; // rax
  int v38; // edx
  int v39; // r8d
  int v40; // [rsp+20h] [rbp-B8h]
  int v41; // [rsp+28h] [rbp-B0h]
  int v42; // [rsp+30h] [rbp-A8h]
  __int16 v43; // [rsp+30h] [rbp-A8h]
  __int16 v44; // [rsp+30h] [rbp-A8h]
  int v45; // [rsp+38h] [rbp-A0h]
  struct tagRECT v46; // [rsp+70h] [rbp-68h] BYREF
  bool v47; // [rsp+E0h] [rbp+8h]
  int v48; // [rsp+E8h] [rbp+10h]
  int v49; // [rsp+F0h] [rbp+18h]
  struct CHECKPOINT *v50; // [rsp+F8h] [rbp+20h]

  v3 = 1;
  v5 = *(_BYTE *)(*((_QWORD *)this + 5) + 31LL);
  v6 = v5 & 1;
  v7 = v5 & 0x20;
  IfValid = CHECKPOINT::GetIfValid(this);
  v9 = *(_DWORD *)a2;
  v50 = IfValid;
  if ( (*(_DWORD *)a2 & 0x100) == 0 || (v9 & 6) != 0 )
    return;
  if ( (v9 & 0x20) == 0 )
  {
    if ( v6 )
    {
      *((_DWORD *)a2 + 10) = 1;
      *(_DWORD *)a2 = v9 | 0x20;
      v10 = 1;
      v16 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v16 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_53;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      v43 = 140;
    }
    else if ( v7 )
    {
      v10 = 2;
      v16 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v16 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_53;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      v43 = 141;
    }
    else
    {
      v10 = 0;
      v16 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v16 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_53;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      v43 = 142;
    }
    goto LABEL_52;
  }
  v10 = *((_DWORD *)a2 + 10);
  if ( !v10 )
  {
    if ( (v9 & 0x40) != 0 )
      return;
    if ( v7 && IfValid )
    {
      if ( (*((_DWORD *)IfValid + 4) & 2) != 0 )
      {
        v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v14) = v12;
          LOBYTE(v15) = v11;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v15,
            v14,
            *(_QWORD *)(v13 + 69416),
            4,
            4,
            143,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
        }
        *((_DWORD *)a2 + 10) = 1;
        v10 = 1;
        goto LABEL_53;
      }
      v10 = 0;
      v16 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v16 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_53;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      v43 = 144;
LABEL_52:
      LOBYTE(v20) = v17;
      LOBYTE(v19) = v16;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v19,
        v20,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        4,
        v43,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
  }
LABEL_53:
  v21 = *((_DWORD *)a2 + 25);
  v22 = (CMonitorTopology *)*((_QWORD *)a2 + 21);
  v46.top = *((_DWORD *)a2 + 26);
  v46.bottom = v46.top;
  v46.left = v21;
  v46.right = v21;
  v24 = CMonitorTopology::MonitorDataFromRect(v22, &v46, 2, 0x12u);
  v25 = *(__m128i *)((char *)v24 + 8);
  v26 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v27 = (unsigned int)_mm_cvtsi128_si32(v25);
  v28 = _mm_cvtsi128_si32(_mm_srli_si128(v25, 12));
  LOBYTE(v23) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  v29 = _mm_cvtsi128_si32(_mm_srli_si128(v25, 4));
  v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  v48 = v29;
  v30 = _mm_cvtsi128_si32(_mm_srli_si128(v25, 8));
  v49 = v27;
  if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v31 = *((_WORD *)v24 + 20);
    W32GetUserSessionState(v27, v23);
    StateString = AdvancedWindowPos::GetStateString(v10);
    LOBYTE(v33) = v26;
    LOBYTE(v34) = v47;
    WPP_RECORDER_AND_TRACE_SF_sddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v33,
      v34,
      v35,
      v40,
      v41,
      v42,
      v45,
      (__int64)StateString,
      v49,
      v48,
      v30,
      v28,
      v31);
    v29 = v48;
    LODWORD(v27) = v49;
  }
  if ( v10 == 2 )
  {
    if ( v50 && (*((_DWORD *)v50 + 4) & 2) != 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v3 = 0;
      }
      v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v37 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
        v44 = 146;
LABEL_87:
        LOBYTE(v39) = v36;
        LOBYTE(v38) = v3;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v38,
          v39,
          *(_QWORD *)(v37 + 69416),
          4,
          4,
          v44,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
    }
    else
    {
      *(_DWORD *)a2 |= 0x60u;
      *((_DWORD *)a2 + 10) = 2;
      *(__m128i *)((char *)a2 + 44) = v25;
      *((_DWORD *)a2 + 1) |= 0xC190u;
      *((_DWORD *)a2 + 24) = *((unsigned __int16 *)v24 + 20);
      *(_OWORD *)((char *)a2 + 60) = *(_OWORD *)((char *)v24 + 24);
      *(_OWORD *)((char *)a2 + 76) = *(_OWORD *)((char *)v24 + 8);
      *((_DWORD *)a2 + 23) = *((_DWORD *)v24 + 16);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v3 = 0;
      }
      v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v37 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
        v44 = 147;
        goto LABEL_87;
      }
    }
  }
  else
  {
    *(_DWORD *)a2 |= 6u;
    *((_DWORD *)a2 + 3) = v27;
    *((_DWORD *)a2 + 4) = v29;
    *((_DWORD *)a2 + 5) = v30 - v27;
    *((_DWORD *)a2 + 6) = v28 - v29;
    if ( !v10 )
    {
      *((_DWORD *)a2 + 1) |= 0xC180u;
      *((_DWORD *)a2 + 24) = *((unsigned __int16 *)v24 + 20);
      *(_OWORD *)((char *)a2 + 60) = *(_OWORD *)((char *)v24 + 24);
      *(_OWORD *)((char *)a2 + 76) = *(_OWORD *)((char *)v24 + 8);
      *((_DWORD *)a2 + 23) = *((_DWORD *)v24 + 16);
      return;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v3 = 0;
    }
    v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v37 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
      v44 = 148;
      goto LABEL_87;
    }
  }
}
