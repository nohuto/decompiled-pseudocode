/*
 * XREFs of ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x14014D534
 * Callers:
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14014DB80 (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 * Callees:
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     ?GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ @ 0x140068874 (-GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400688A4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     ??1CCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140069164 (--1CCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401162C8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?Compare@MonitorData@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x14014C074 (-Compare@MonitorData@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014C21C (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?MonitorDataFromId@CMonitorTopology@@QEBAPEBUMonitorData@1@AEBUMonitorId@1@@Z @ 0x14014D144 (-MonitorDataFromId@CMonitorTopology@@QEBAPEBUMonitorData@1@AEBUMonitorId@1@@Z.c)
 *     CalculateLogicalMonitorRect @ 0x14014DA2C (CalculateLogicalMonitorRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdq @ 0x1402C78F4 (WPP_RECORDER_AND_TRACE_SF_qdq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqd @ 0x1402C7B6C (WPP_RECORDER_AND_TRACE_SF_qqqd.c)
 */

char __fastcall CRecalcState::NeedsMigration(CRecalcState *this, const struct tagWND *a2)
{
  char v2; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r13
  __int64 v8; // rdi
  CMonitorTopology *v9; // rbx
  struct tagRECT *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // edi
  char v13; // bp
  __int64 v14; // r15
  int v15; // r9d
  __m128i *v16; // rax
  int left; // ecx
  __m128i v18; // xmm0
  int right; // eax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // xmm0_8
  LONG top; // edx
  LONG bottom; // eax
  unsigned __int64 v24; // r8
  const struct CMonitorTopology::MonitorData *v26; // rax
  char v27; // bp
  char v28; // si
  unsigned __int8 v29; // al
  __int64 v30; // rdi
  char v31; // bl
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  char v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 UserSessionState; // rax
  int v41; // r8d
  int v42; // edx
  char v43; // r12
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  char v49; // si
  unsigned __int8 ThreadId; // al
  __int64 v51; // rdi
  char v52; // bl
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  struct tagRECT i; // [rsp+60h] [rbp-48h] BYREF
  char v59; // [rsp+70h] [rbp-38h] BYREF
  CMonitorTopology *Current; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 9) )
  {
    if ( MonitorFromRect((INT *)(*((_QWORD *)a2 + 5) + 88LL), 0, *(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL)) )
      v7 = *(_QWORD *)MonitorFromRect((INT *)(*((_QWORD *)a2 + 5) + 88LL), 0, *(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL));
    else
      v7 = 0LL;
    if ( *(_QWORD *)(*((_QWORD *)a2 + 5) + 256LL) != v7 )
    {
      v13 = 1;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v37 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v37 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v2 = 1;
      }
      if ( v37 || v2 )
      {
        PsGetThreadId(**((PETHREAD **)a2 + 2));
        UserSessionState = W32GetUserSessionState(v39, v38);
        LOBYTE(v41) = v2;
        LOBYTE(v42) = v37;
        WPP_RECORDER_AND_TRACE_SF_qqqd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v42,
          v41,
          *(_QWORD *)(UserSessionState + 69416));
      }
      return v13;
    }
    v8 = *((_QWORD *)this + 9);
    Current = CTopologyManager::GetCurrent(v6, v5);
    v9 = Current;
    if ( CMonitorTopology::MonitorDataFromId(Current, (const struct CMonitorTopology::MonitorId *)(v8 + 48)) )
    {
      v10 = WindowMargins::ReduceRect(
              (WindowMargins *)&i,
              (struct tagRECT *)a2,
              (CRecalcState *)((char *)this + 28),
              (const struct tagRECT *)((*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) >> 8) & 0x1FF));
      v11 = *((_QWORD *)this + 2);
      v12 = 0;
      v13 = 1;
      for ( i = *v10; v12 < *(_DWORD *)(v11 + 4); ++v12 )
      {
        v14 = v11 + 72LL * v12;
        v15 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) >> 8;
        LOWORD(v15) = v15 & 0x1FF;
        v16 = (__m128i *)CalculateLogicalMonitorRect(
                           (unsigned int)&v59,
                           (int)v14 + 24,
                           *(unsigned __int16 *)(v14 + 56),
                           v15,
                           *(_WORD *)(v14 + 80));
        left = i.left;
        v18 = *v16;
        right = i.right;
        v20 = v18.m128i_i64[0];
        v21 = _mm_srli_si128(v18, 8).m128i_u64[0];
        if ( (int)v20 > i.left )
          left = v20;
        if ( (int)v21 < i.right )
          right = v21;
        if ( left < right )
        {
          top = i.top;
          bottom = i.bottom;
          v24 = HIDWORD(v20);
          if ( (int)v24 > i.top )
            top = v24;
          if ( SHIDWORD(v21) < i.bottom )
            bottom = HIDWORD(v21);
          if ( top < bottom )
          {
            v26 = CMonitorTopology::MonitorDataFromId(v9, (const struct CMonitorTopology::MonitorId *)(v14 + 64));
            if ( !v26
              || !CMonitorTopology::MonitorData::Compare((const struct CMonitorTopology::MonitorData *)(v14 + 16), v26) )
            {
              break;
            }
          }
        }
        v11 = *((_QWORD *)this + 2);
      }
      if ( v12 != *(_DWORD *)(*((_QWORD *)this + 2) + 4LL) )
      {
        if ( v9 )
          CMonitorTopology::Release(v9);
        return v13;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v49 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v49 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v13 = 0;
      }
      if ( v49 || v13 )
      {
        ThreadId = (unsigned __int8)PsGetThreadId(**((PETHREAD **)a2 + 2));
        v51 = *(_QWORD *)a2;
        v52 = ThreadId;
        v55 = W32GetUserSessionState(v54, v53);
        LOBYTE(v56) = v13;
        LOBYTE(v57) = v49;
        WPP_RECORDER_AND_TRACE_SF_qd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v57,
          v56,
          *(_QWORD *)(v55 + 69416),
          5,
          7,
          20,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v51,
          v52);
      }
      v13 = 0;
    }
    else
    {
      v13 = 1;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v43 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v43 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v2 = 1;
      }
      if ( v43 || v2 )
      {
        PsGetThreadId(**((PETHREAD **)a2 + 2));
        v46 = W32GetUserSessionState(v45, v44);
        LOBYTE(v47) = v2;
        LOBYTE(v48) = v43;
        WPP_RECORDER_AND_TRACE_SF_qdq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v48,
          v47,
          *(_QWORD *)(v46 + 69416));
      }
    }
    CCurrentMonitorTopologyPtr::~CCurrentMonitorTopologyPtr(&Current);
    return v13;
  }
  v27 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || (v28 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v28 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v27 = 0;
  }
  if ( v28 || v27 )
  {
    v29 = (unsigned __int8)PsGetThreadId(**((PETHREAD **)a2 + 2));
    v30 = *(_QWORD *)a2;
    v31 = v29;
    v34 = W32GetUserSessionState(v33, v32);
    LOBYTE(v35) = v27;
    LOBYTE(v36) = v28;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v36,
      v35,
      *(_QWORD *)(v34 + 69416),
      5,
      7,
      17,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v30,
      v31);
  }
  return 0;
}
