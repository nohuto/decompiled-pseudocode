/*
 * XREFs of ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x1400688D0
 * Callers:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x140068654 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?PhysicalToLogicalDPIRect@CMonitorTopology@@QEBA?AUtagRECT@@PEAU2@KPEBUMonitorData@1@@Z @ 0x1402AB5C4 (-PhysicalToLogicalDPIRect@CMonitorTopology@@QEBA-AUtagRECT@@PEAU2@KPEBUMonitorData@1@@Z.c)
 *     ?xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402D1294 (-xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D4568 (-TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D4AB0 (-UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@PEAUtagRECT@@3PEAPEBUMonitorData@CMonitorTopology@@@Z @ 0x1402D5304 (-xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@P.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D70FC (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 * Callees:
 *     CalculateLogicalMonitorRect @ 0x14014DA2C (CalculateLogicalMonitorRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 */

const struct CMonitorTopology::MonitorData *__fastcall CMonitorTopology::MonitorDataFromRect(
        CMonitorTopology *this,
        struct tagRECT *a2,
        int a3,
        unsigned int a4)
{
  LONG right; // edi
  unsigned int v6; // r15d
  LONG bottom; // ecx
  unsigned int *v9; // rbp
  _DWORD *v10; // r13
  char v11; // r12
  unsigned int v12; // r15d
  unsigned __int16 v13; // si
  __m128i *v14; // rax
  __m128i v15; // xmm0
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // xmm0_8
  LONG v18; // edx
  LONG v19; // r11d
  LONG v20; // edx
  int v21; // r8d
  unsigned __int64 v22; // rax
  unsigned __int64 v24; // rsi
  unsigned int v25; // edi
  LONG v26; // ebp
  unsigned __int16 v27; // r15
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  int v31; // ecx
  int v32; // ecx
  unsigned __int64 v33; // rax
  int v34; // eax
  unsigned __int64 v35; // rdx
  int v36; // eax
  int v37; // eax
  char v38; // al
  int v39; // r14d
  int v40; // esi
  int v41; // r15d
  int v42; // ebp
  __int64 UserSessionState; // rax
  int v44; // r8d
  int v45; // edx
  LONG left; // [rsp+70h] [rbp-68h]
  LONG top; // [rsp+74h] [rbp-64h]
  LONG v48; // [rsp+74h] [rbp-64h]
  _DWORD *v49; // [rsp+78h] [rbp-60h]
  _BYTE v50[88]; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v51; // [rsp+E0h] [rbp+8h]
  LONG v52; // [rsp+E0h] [rbp+8h]
  char v53; // [rsp+E0h] [rbp+8h]
  LONG v54; // [rsp+E8h] [rbp+10h]
  LONG v55; // [rsp+E8h] [rbp+10h]

  right = a2->right;
  v6 = a4;
  left = a2->left;
  if ( right == a2->left )
    a2->right = ++right;
  bottom = a2->bottom;
  top = a2->top;
  if ( bottom == top )
    a2->bottom = bottom + 1;
  v9 = (unsigned int *)((char *)this + 4);
  v10 = 0LL;
  v51 = 0;
  v49 = (_DWORD *)((char *)this + 4);
  v11 = 1;
  if ( *((_DWORD *)this + 1) )
  {
    v12 = 0;
    v13 = (a4 >> 8) & 0x1FF;
    do
    {
      v14 = (__m128i *)CalculateLogicalMonitorRect(
                         (unsigned int)v50,
                         (_DWORD)this + 24 + 72 * v12,
                         *((unsigned __int16 *)this + 36 * v12 + 28),
                         v13,
                         *((_WORD *)this + 36 * v12 + 40));
      v15 = *v14;
      v16 = v14->m128i_i64[0];
      v17 = _mm_srli_si128(v15, 8).m128i_u64[0];
      v18 = v16;
      v19 = v17;
      if ( left > (int)v16 )
        v18 = left;
      v54 = v18;
      if ( right < (int)v17 )
        v19 = right;
      if ( v18 < v19 )
      {
        v20 = a2->bottom;
        v21 = v20;
        v22 = HIDWORD(v16);
        if ( top > (int)v22 )
          LODWORD(v22) = top;
        if ( v20 >= SHIDWORD(v17) )
          v21 = HIDWORD(v17);
        if ( (int)v22 < v21 )
        {
          if ( (v19 - v54) * (v21 - (int)v22) > v51 )
          {
            v10 = (_DWORD *)((char *)this + 72 * v12 + 16);
            v51 = (v19 - v54) * (v21 - v22);
          }
          if ( v19 == right - left && v21 == v20 - top )
            break;
        }
      }
      ++v12;
    }
    while ( v12 < *v9 );
    v6 = a4;
    if ( v10 )
      return (const struct CMonitorTopology::MonitorData *)v10;
    v49 = (_DWORD *)((char *)this + 4);
  }
  if ( a3 )
  {
    v24 = -1LL;
    v25 = 0;
    if ( !*v9 )
    {
LABEL_45:
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v38 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v38 = 0;
      }
      v53 = v38;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v11 = 0;
      }
      if ( v38 || v11 )
      {
        v39 = v10[5];
        v40 = v10[4];
        v41 = v10[3];
        v42 = v10[2];
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v44) = v11;
        LOBYTE(v45) = v53;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v45,
          v44,
          *(_QWORD *)(UserSessionState + 69416),
          5,
          7,
          21,
          (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
          v42,
          v41,
          v40,
          v39,
          v40 - v42,
          v39 - v41);
      }
      return (const struct CMonitorTopology::MonitorData *)v10;
    }
    v26 = a2->left;
    v52 = a2->right;
    v55 = a2->bottom;
    v48 = a2->top;
    v27 = (v6 >> 8) & 0x1FF;
    while ( 1 )
    {
      v28 = (unsigned __int64 *)CalculateLogicalMonitorRect(
                                  (unsigned int)v50,
                                  (_DWORD)this + 24 + 72 * v25,
                                  *((unsigned __int16 *)this + 36 * v25 + 28),
                                  v27,
                                  *((_WORD *)this + 36 * v25 + 40));
      v29 = v28[1];
      v30 = *v28;
      if ( v52 > (int)v30 )
      {
        if ( v26 < (int)v29 )
        {
          v32 = 0;
          goto LABEL_36;
        }
        v31 = v26 - v29;
      }
      else
      {
        v31 = v30 - v52;
      }
      v32 = v31 + 1;
LABEL_36:
      v33 = HIDWORD(v30);
      if ( v55 <= (int)v33 )
      {
        v34 = v33 - v55;
LABEL_41:
        v36 = v34 + 1;
        goto LABEL_42;
      }
      v35 = HIDWORD(v29);
      if ( v48 >= (int)v35 )
      {
        v34 = v48 - v35;
        goto LABEL_41;
      }
      v36 = 0;
LABEL_42:
      v37 = v32 * v32 + v36 * v36;
      if ( v37 < v24 )
      {
        v10 = (_DWORD *)((char *)this + 72 * v25 + 16);
        v24 = v37;
      }
      if ( ++v25 >= *v49 )
        goto LABEL_45;
    }
  }
  return 0LL;
}
