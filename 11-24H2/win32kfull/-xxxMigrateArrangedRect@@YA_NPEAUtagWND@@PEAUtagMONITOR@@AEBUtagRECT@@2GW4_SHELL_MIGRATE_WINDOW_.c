/*
 * XREFs of ?xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAW4State@AdvancedWindowPos@@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x1402D0DE8
 * Callers:
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x1402CF954 (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 *     ?xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x1402D15D4 (-xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRA.c)
 * Callees:
 *     ScaleDPIRect @ 0x140098C18 (ScaleDPIRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14014A0D8 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014C21C (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x140189B00 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z @ 0x1402CAEB0 (-SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z.c)
 *     ?NormalizeArrangeRect@AdvancedWindowPos@@YA?AUtagRECT@@AEBU2@00@Z @ 0x1402D352C (-NormalizeArrangeRect@AdvancedWindowPos@@YA-AUtagRECT@@AEBU2@00@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

bool __fastcall xxxMigrateArrangedRect(
        struct tagRECT *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        unsigned __int16 a5,
        int a6,
        struct tagRECT *a7,
        int *a8,
        int *a9,
        _DWORD *a10)
{
  bool v11; // bl
  bool v12; // di
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  struct tagRECT v16; // xmm1
  int *v17; // rdi
  __int64 *v18; // rbx
  __int64 v19; // rdx
  int v20; // eax
  char v21; // r12
  LONG v22; // edi
  LONG v23; // r14d
  LONG v24; // ebx
  LONG v25; // esi
  __int64 v26; // rax
  bool v27; // di
  bool v28; // si
  const char *v29; // rbx
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  bool result; // al
  struct tagRECT *v34; // rdi
  struct tagRECT v35; // xmm0
  __int64 v36; // rax
  unsigned __int16 v37; // r9
  __int64 v38; // rdx
  char v39; // r12
  LONG bottom; // edi
  LONG top; // r14d
  LONG right; // ebx
  LONG left; // esi
  __int64 v44; // rax
  LONG v45; // edx
  LONG v46; // r8d
  LONG v47; // ecx
  int v48; // ecx
  struct tagRECT *v49; // [rsp+20h] [rbp-B1h]
  __int64 v50; // [rsp+40h] [rbp-91h]
  __int64 v51; // [rsp+48h] [rbp-89h]
  char v52; // [rsp+70h] [rbp-61h]
  char v53; // [rsp+70h] [rbp-61h]
  int v54; // [rsp+74h] [rbp-5Dh] BYREF
  int v55; // [rsp+78h] [rbp-59h] BYREF
  int *v56; // [rsp+80h] [rbp-51h]
  struct tagRECT *v57; // [rsp+88h] [rbp-49h]
  __int64 v58; // [rsp+90h] [rbp-41h]
  __int64 *v59; // [rsp+98h] [rbp-39h]
  struct tagRECT v60; // [rsp+A0h] [rbp-31h] BYREF
  __m128i v61; // [rsp+B0h] [rbp-21h] BYREF

  v56 = a8;
  v59 = a3;
  v58 = a2;
  v57 = a1;
  v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v14) = v12;
    LOBYTE(v15) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      4,
      64,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids);
  }
  v16 = *a7;
  v17 = v56;
  v18 = v59;
  v54 = *v56;
  v55 = *a9;
  v61 = 0LL;
  v60 = v16;
  if ( !CallShell::xxxMigrateWindowHandler(v57, a6, v59, a4, a5, (struct tagWND *)&v60, v58, &v61, &v54, &v55) )
  {
    v34 = v57;
    v35 = *WindowMargins::ReduceRect((WindowMargins *)&v60, v57, (const struct tagWND *)a7, (const struct tagRECT *)a5);
    v36 = *(_QWORD *)&v34[2].right;
    *a7 = v35;
    v37 = (*(_DWORD *)(v36 + 288) >> 8) & 0x1FF;
    if ( v37 )
      ScaleDPIRect(a7, (__m128i *)a7, a5, v37, *a4, *v18);
    *a7 = *AdvancedWindowPos::NormalizeArrangeRect(
             (AdvancedWindowPos *)&v60,
             a7,
             (const struct tagRECT *)a4,
             (const struct tagRECT *)(*(_QWORD *)(v58 + 40) + 44LL),
             v49);
    v39 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v53 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v39 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      bottom = a7->bottom;
      top = a7->top;
      right = a7->right;
      left = a7->left;
      v44 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v38);
      LODWORD(v51) = top;
      LODWORD(v50) = left;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v39,
        v53,
        *(_QWORD *)(v44 + 69416),
        4u,
        4u,
        0x43u,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
        v50,
        v51,
        right,
        bottom,
        right - left,
        bottom - top);
    }
    goto LABEL_43;
  }
  *a9 = v55;
  v20 = v54;
  *v17 = v54;
  if ( v20 != 3 )
  {
    v27 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v29 = "maximized";
      if ( v54 != 1 )
        v29 = "restored";
      v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
      LOBYTE(v31) = v28;
      LOBYTE(v32) = v27;
      WPP_RECORDER_AND_TRACE_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v32,
        v31,
        *(_QWORD *)(v30 + 69416),
        4,
        4,
        66,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
        (__int64)v29);
    }
    goto LABEL_29;
  }
  *a7 = (struct tagRECT)v61;
  v21 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v52 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v22 = a7->bottom;
    v23 = a7->top;
    v24 = a7->right;
    v25 = a7->left;
    v26 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
    LODWORD(v51) = v23;
    LODWORD(v50) = v25;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v21,
      v52,
      *(_QWORD *)(v26 + 69416),
      4u,
      4u,
      0x41u,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      v50,
      v51,
      v24,
      v22,
      v24 - v25,
      v22 - v23);
LABEL_29:
    v17 = v56;
  }
  if ( a6 != 2 )
  {
    result = SaveShellRequestedOperationData((struct tagWND *)v57, (__int128 *)&a7->left, *v17, v55);
    if ( !result )
      return result;
    *a10 |= 0x400u;
  }
LABEL_43:
  if ( v54 == 3 )
  {
    v45 = a7->left;
    v46 = a7->top;
    v47 = a7->right;
    *a10 |= 6u;
    a10[5] = v47 - v45;
    v48 = a7->bottom - v46;
    a10[3] = v45;
    a10[1] |= 1u;
    a10[6] = v48;
    a10[4] = v46;
  }
  return 1;
}
