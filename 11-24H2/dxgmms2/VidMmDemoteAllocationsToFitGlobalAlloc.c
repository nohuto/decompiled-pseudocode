/*
 * XREFs of VidMmDemoteAllocationsToFitGlobalAlloc @ 0x1400E9CB0
 * Callers:
 *     VidMmHandleRecoverablePageInFailure @ 0x1400E9904 (VidMmHandleRecoverablePageInFailure.c)
 * Callees:
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEBV1@GGW4VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA_KPEA_N@Z @ 0x1400D6D94 (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEBV1@GGW4VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA.c)
 *     ?CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEBV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1400EA4D0 (-CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEBV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_P.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAUVIDMM_PROCESS_COMMITMENT_INFO@@IGG@Z @ 0x1400EA868 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAUVIDMM_PROCESS_COMMITMENT_INFO@@IGG@Z.c)
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1400EA8A4 (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 *     ??1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ @ 0x1400F6C1C (--1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ.c)
 */

char VidMmDemoteAllocationsToFitGlobalAlloc(__int64 *a1, _QWORD *a2, __int64 a3, ...)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  _DWORD *v6; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  int v8; // r8d
  int v9; // r10d
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // dx
  __int64 v13; // r9
  unsigned int v14; // eax
  int v15; // edx
  __int64 v16; // r15
  char v17; // al
  _QWORD *v18; // r12
  struct VIDMM_PROCESS **v19; // rbx
  _QWORD *v20; // r15
  char CanSuspendThisDevice; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 **v28; // rcx
  __int64 *v29; // r14
  __int64 *v30; // rdi
  __int64 *v31; // rbx
  char IsSystemProcess; // al
  __int64 v33; // rdx
  unsigned int v34; // r10d
  _DWORD *v35; // r11
  bool v36; // cf
  unsigned __int64 v37; // rax
  unsigned int v38; // r13d
  char v39; // al
  unsigned int v40; // edi
  struct VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  _QWORD *v42; // r15
  _QWORD *v43; // r14
  struct VIDMM_PROCESS **v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 LargestGap; // rax
  unsigned __int64 v50; // rbx
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 **v54; // rcx
  __int64 v55; // rcx
  __int64 **v56; // rax
  __int64 v57; // rax
  BOOLEAN refreshed; // al
  unsigned __int16 v59; // [rsp+58h] [rbp-71h]
  unsigned __int16 i; // [rsp+5Ah] [rbp-6Fh]
  int v61; // [rsp+5Ch] [rbp-6Dh]
  unsigned int v62; // [rsp+60h] [rbp-69h]
  bool v63; // [rsp+64h] [rbp-65h]
  __int64 v64; // [rsp+68h] [rbp-61h]
  unsigned __int16 v65; // [rsp+70h] [rbp-59h]
  unsigned int v66; // [rsp+74h] [rbp-55h] BYREF
  unsigned int v67; // [rsp+78h] [rbp-51h]
  unsigned __int64 v68; // [rsp+80h] [rbp-49h] BYREF
  __int64 v69; // [rsp+88h] [rbp-41h]
  LARGE_INTEGER v70; // [rsp+90h] [rbp-39h] BYREF
  _QWORD *v71; // [rsp+98h] [rbp-31h]
  char v72; // [rsp+A0h] [rbp-29h]
  unsigned int v73; // [rsp+A8h] [rbp-21h]
  __int64 v74; // [rsp+B0h] [rbp-19h]
  __int64 v75; // [rsp+B8h] [rbp-11h]
  _DWORD v76[2]; // [rsp+C0h] [rbp-9h] BYREF
  _DWORD *v77; // [rsp+C8h] [rbp-1h]
  char v78; // [rsp+128h] [rbp+5Fh] BYREF
  _DWORD *v79; // [rsp+130h] [rbp+67h]
  __int64 v80; // [rsp+138h] [rbp+6Fh]
  __int64 v81; // [rsp+140h] [rbp+77h] BYREF
  va_list va; // [rsp+140h] [rbp+77h]
  __int64 v83; // [rsp+148h] [rbp+7Fh]
  va_list va1; // [rsp+150h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v81 = va_arg(va1, _QWORD);
  v83 = va_arg(va1, _QWORD);
  v80 = a3;
  v79 = a2;
  v3 = *a1;
  v64 = *a1;
  v75 = *a2;
  v4 = v75;
  v71 = a1 + 41;
  v6 = a2;
  v72 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  ++*((_DWORD *)a1 + 93);
  v8 = 0;
  v9 = *(_DWORD *)(v4 + 40);
  v10 = 0;
  v70 = PerformanceCounter;
  v59 = 0;
  v11 = *(_DWORD *)(v4 + 44) != 0 ? 0 : 6;
  for ( i = v11; ; v11 = i )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_2:
        if ( !v9 )
        {
          if ( v72 )
            *v71 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v70.QuadPart;
          return 0;
        }
        if ( v11 <= 5u )
          break;
        v13 = v10;
        v14 = v10++;
        v65 = v13;
        v59 = v10;
        if ( _bittest(&v9, v14) )
        {
          v63 = 1;
          goto LABEL_9;
        }
      }
      v17 = v11++;
      i = v11;
      v13 = (unsigned int)(*(_DWORD *)(v4 + 44) >> (6 * v17));
      v10 = v59;
      LOWORD(v13) = v13 & 0x1F;
      if ( (_WORD)v13 )
        break;
      v8 = 0;
    }
    LOWORD(v13) = v13 - 1;
    v65 = v13;
    v63 = ((*(_DWORD *)(v4 + 44) >> (6 * v11)) & 0x20) == 0;
    v8 = 0;
LABEL_9:
    v15 = v6[6];
    v9 &= ~(1 << v13);
    v61 = v9;
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 40232) + 8LL * (v15 & 0x3F)) + 1648LL)
                    + 8LL * (unsigned __int16)v13);
    v10 = v59;
    v74 = v16;
    if ( (*(_DWORD *)(v16 + 104) & 0x1001) == 0 )
      break;
  }
  v36 = (v15 & 0x100) != 0;
  v62 = 0;
  v33 = v80;
  if ( v36 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v80 + 8) + 96LL) & 2) == 0 )
      v8 = 7;
    v62 = v8;
  }
  v28 = (__int64 **)(v16 + 192);
  v8 = 0;
  v69 = v16 + 192;
LABEL_32:
  while ( 2 )
  {
    v37 = *(_QWORD *)(v4 + 16);
    v38 = 2013265919;
    v76[0] = 0;
    v25 = v37 + (v37 >> 2);
    v76[1] = 2;
    v68 = v25;
    while ( 1 )
    {
      v39 = *(_BYTE *)(v33 + 58) & 0x10;
      v66 = 0;
      v34 = v39 != 0;
      v35 = (_DWORD *)((char *)v76 + (-v34 & 4));
LABEL_34:
      v77 = v35;
      v67 = v34;
      if ( v34 < 2 )
        break;
      if ( v66 - 1 > 0xC7FFFFFE )
        goto LABEL_66;
      if ( v38 == 2013265919 )
      {
        v38 = -939524097;
        if ( v66 <= 0x9FFFFFFF )
          v38 = -1610612737;
      }
      else
      {
        if ( v38 != -1610612737 )
        {
LABEL_66:
          if ( v25 != *(_QWORD *)(v4 + 16) + (*(_QWORD *)(v4 + 16) >> 2) )
          {
            LOBYTE(v13) = v63;
            LargestGap = VIDMM_SEGMENT::GetLargestGap(v16, v6, 0LL, v13);
            v8 = 0;
            v50 = LargestGap;
            if ( g_IsInternalReleaseOrDbg )
            {
              v51 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
              v8 = 0;
              v51[3] = v16;
              v51[4] = v50;
              v51[5] = *(_QWORD *)(v4 + 16);
              WdLogGlobalForLineNumber = 1891;
            }
            if ( v50 >= *(_QWORD *)(v4 + 16) )
            {
              VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)&v70);
              return 1;
            }
          }
          v11 = i;
          v10 = v59;
          v9 = v61;
          if ( (VIDMM_GLOBAL::_Config & 0x40) == 0
            || (_BYTE)v83 == 2
            || *(_DWORD *)(v4 + 48) < 0xA0000000 && (v6[6] & 0x40) != 0 )
          {
            goto LABEL_71;
          }
          v11 = i;
          v10 = v59;
          v9 = v61;
          if ( !dword_140081638
            || g_DemotedHighPriAllocDebugMode
            || (refreshed = KdRefreshDebuggerNotPresent(), v11 = i, v8 = 0, v10 = v59, v9 = v61, refreshed) )
          {
LABEL_71:
            v3 = v64;
            goto LABEL_2;
          }
          DbgPrintEx(0x65u, 0, "\nCouldn't find preferred memory for a high priority allocation 0x%p.\n", v6);
          DbgPrintEx(
            0x65u,
            0,
            "\n"
            "We broke into the debugger to allow a chance for debugging this issue.\n"
            "\n"
            "To disable debug breaks on high priority allocation page-in failures, run \"?? dxgmms2!g_DemotedHighPriAlloc"
            "DebugMode=1\"\n"
            "or \"ed 0x%p 1\"\n"
            "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_DemotedHighPriAllocDebugMode=2\""
            "\n"
            "or \"ed 0x%p 2\"\n"
            "\n",
            (const void *)&g_DemotedHighPriAllocDebugMode,
            (const void *)&g_DemotedHighPriAllocDebugMode);
          __debugbreak();
          v28 = (__int64 **)(v16 + 192);
          v33 = v80;
          v8 = 0;
          if ( g_DemotedHighPriAllocDebugMode != 2 )
          {
            v11 = i;
            v10 = v59;
            v9 = v61;
            goto LABEL_71;
          }
          goto LABEL_32;
        }
        v38 = -939524097;
      }
      v28 = (__int64 **)(v16 + 192);
    }
    v40 = v38;
    v73 = *v35;
    if ( v73 == 2 )
    {
      if ( (v6[6] & 0x40) != 0 && v38 >= *(_DWORD *)(v4 + 48) - 1 )
        v40 = *(_DWORD *)(v4 + 48) - 1;
      CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                                *(VIDMM_PROCESS **)(v80 + 8),
                                *(_DWORD *)(*(_QWORD *)(v64 + 24) + 240LL),
                                *(_WORD *)(v16 + 420),
                                *(_WORD *)(v16 + 40));
      v8 = 0;
      v42 = (_QWORD *)((char *)CommitmentInformation + 40);
      v43 = (_QWORD *)*((_QWORD *)CommitmentInformation + 5);
      do
      {
        v33 = v80;
        do
        {
          if ( v43 == v42 )
          {
            v28 = (__int64 **)v69;
            goto LABEL_29;
          }
          v44 = (struct VIDMM_PROCESS **)v43[4];
          v43 = (_QWORD *)*v43;
        }
        while ( v44 == (struct VIDMM_PROCESS **)v80
             && ((VIDMM_GLOBAL::_Config & 0x40) == 0 || *(_DWORD *)(v4 + 48) < 0xA0000000 && (v79[6] & 0x40) != 0)
             || (*(_BYTE *)(v80 + 58) & 0x10) != 0 && v44 != (struct VIDMM_PROCESS **)v80 );
        if ( g_IsInternalReleaseOrDbg )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v79) + 24) = v44;
          WdLogGlobalForLineNumber = 1696;
        }
        LOBYTE(v81) = 0;
        VIDMM_DEVICE::FaultAllDemotableAllocations(v44, v33, v79[6] & 0x3F, v65, v62, v40, &v66, &v68, (__int64 *)va);
        v8 = 0;
        if ( (_BYTE)v81 && g_IsInternalReleaseOrDbg )
        {
          v48 = WdLogNewEntry5_WdTrace(v45);
          v8 = 0;
          *(_QWORD *)(v48 + 24) = v44;
          *(_QWORD *)(v48 + 32) = v40;
          WdLogGlobalForLineNumber = 1715;
        }
        v25 = v68;
      }
      while ( v68 );
      v6 = v79;
      v16 = v74;
      LOBYTE(v13) = v63;
      v46 = VIDMM_SEGMENT::GetLargestGap(v74, v79, v62, v13);
      v8 = 0;
      v27 = v46;
      if ( g_IsInternalReleaseOrDbg )
      {
        v47 = WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
        *(_QWORD *)(v47 + 24) = v27;
        *(_QWORD *)(v47 + 32) = *(_QWORD *)(v4 + 16);
        WdLogGlobalForLineNumber = 1733;
        goto LABEL_51;
      }
    }
    else
    {
      v29 = *v28;
      do
      {
LABEL_24:
        v30 = v29;
        if ( v29 == (__int64 *)v28 )
        {
          v4 = v75;
          v33 = v80;
LABEL_29:
          v34 = v67 + 1;
          v6 = v79;
          v35 = v77 + 1;
          v16 = v74;
          goto LABEL_34;
        }
        v31 = v29 - 3;
        v29 = (__int64 *)*v29;
        IsSystemProcess = PsIsSystemProcess(*(_QWORD *)*v31);
        v28 = (__int64 **)v69;
        v8 = 0;
      }
      while ( IsSystemProcess );
      v18 = v31 + 5;
      v20 = (_QWORD *)v31[5];
      while ( 1 )
      {
        if ( v20 == v18 )
        {
          v28 = (__int64 **)v69;
          goto LABEL_24;
        }
        v19 = (struct VIDMM_PROCESS **)v20[4];
        LOBYTE(v13) = v83;
        v20 = (_QWORD *)*v20;
        CanSuspendThisDevice = VIDMM_DEVICE::CanSuspendThisDevice(v19, v80, v73, v13);
        v8 = 0;
        if ( CanSuspendThisDevice )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v23) + 24) = v19;
            WdLogGlobalForLineNumber = 1775;
          }
          v78 = 0;
          VIDMM_DEVICE::FaultAllDemotableAllocations(v19, v22, v79[6] & 0x3F, v65, v62, v38, &v66, &v68, &v78);
          v8 = 0;
          if ( v78 )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              v52 = WdLogNewEntry5_WdTrace(v24);
              v8 = 0;
              *(_QWORD *)(v52 + 24) = v19;
              *(_QWORD *)(v52 + 32) = v38;
              WdLogGlobalForLineNumber = 1794;
            }
            v53 = *v30;
            if ( *v30 )
            {
              if ( *(__int64 **)(v53 + 8) != v30
                || (v54 = (__int64 **)v30[1], *v54 != v30)
                || (*v54 = (__int64 *)v53,
                    *(_QWORD *)(v53 + 8) = v54,
                    v55 = v69,
                    v56 = *(__int64 ***)(v69 + 8),
                    *v56 != (__int64 *)v69) )
              {
                __fastfail(3u);
              }
              *v30 = v69;
              v30[1] = (__int64)v56;
              *v56 = v30;
              *(_QWORD *)(v55 + 8) = v30;
            }
          }
          v25 = v68;
          if ( !v68 )
            break;
        }
      }
      v6 = v79;
      v16 = v74;
      LOBYTE(v13) = v63;
      v26 = VIDMM_SEGMENT::GetLargestGap(v74, v79, v62, v13);
      v8 = 0;
      v27 = v26;
      if ( !g_IsInternalReleaseOrDbg )
      {
        v4 = v75;
        goto LABEL_52;
      }
      v57 = WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      v4 = v75;
      *(_QWORD *)(v57 + 24) = v27;
      *(_QWORD *)(v57 + 32) = *(_QWORD *)(v4 + 16);
      WdLogGlobalForLineNumber = 1821;
LABEL_51:
      v8 = 0;
    }
LABEL_52:
    if ( v27 < *(_QWORD *)(v4 + 16) )
    {
      v33 = v80;
      v28 = (__int64 **)(v16 + 192);
      continue;
    }
    break;
  }
  if ( v72 )
    *v71 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v70.QuadPart;
  return 1;
}
