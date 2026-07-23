/*
 * XREFs of EtwpLogSystemEventUnsafe @ 0x1402D0080
 * Callers:
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 *     EtwpTraceThreadRundown @ 0x1404ECB50 (EtwpTraceThreadRundown.c)
 *     EtwpSetMark @ 0x1407AA0B4 (EtwpSetMark.c)
 *     EtwpTraceRegistry @ 0x140875270 (EtwpTraceRegistry.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     KeQueryCurrentStackInformationEx @ 0x14028A1E0 (KeQueryCurrentStackInformationEx.c)
 *     EtwpReserveTraceBuffer @ 0x1402D0980 (EtwpReserveTraceBuffer.c)
 *     KeIsTraceCallbackAllowed @ 0x1402D0E7C (KeIsTraceCallbackAllowed.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     EtwpStackTraceDispatcher @ 0x1403DD620 (EtwpStackTraceDispatcher.c)
 *     EtwpUpdateEventsLostCount @ 0x1403FB298 (EtwpUpdateEventsLostCount.c)
 *     EtwpSendTraceEvent @ 0x1404A70B8 (EtwpSendTraceEvent.c)
 *     EtwpTraceLostSystemEvent @ 0x1404B434C (EtwpTraceLostSystemEvent.c)
 *     EtwpContextRegisterTracingDispatcher @ 0x1404C7B30 (EtwpContextRegisterTracingDispatcher.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall EtwpLogSystemEventUnsafe(
        __int64 a1,
        __int64 a2,
        _KTHREAD *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 a6,
        unsigned int a7,
        unsigned __int8 a8)
{
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // r11d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r9
  signed __int64 *v14; // r8
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 result; // rax
  ULONGLONG v18; // r13
  int v19; // esi
  unsigned int v20; // r10d
  __m128i v21; // xmm5
  __m128i v22; // xmm4
  unsigned int v23; // r11d
  __m128i v24; // xmm4
  __m128i v25; // xmm4
  _DWORD *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _DWORD *v31; // r8
  int v32; // eax
  unsigned __int16 v33; // r14
  unsigned int v34; // r14d
  char *v35; // r15
  unsigned int i; // ebx
  __int64 v37; // rsi
  unsigned int v38; // edi
  unsigned int v39; // r12d
  _KTHREAD *v40; // rsi
  __int64 v41; // rdx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v42; // rcx
  __int64 v43; // r9
  unsigned int v44; // r11d
  signed __int64 *v45; // roff
  signed __int64 v46; // rax
  signed __int64 v47; // rtt
  unsigned __int16 v48; // r8
  unsigned int v49; // edi
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int v53; // r10d
  __int16 v54; // r11
  ULONG v55; // r9d
  __int64 k; // rdx
  __int64 j; // rcx
  __int64 m; // rdx
  _QWORD *v59; // r8
  _KTHREAD *v60; // rcx
  _KTHREAD *v61; // rcx
  _KTHREAD *v62; // r14
  unsigned __int64 CurrentStackPointer; // rax
  int v64; // ecx
  __int64 v65; // rdi
  char v66; // r15
  PSLIST_ENTRY v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned __int16 *v70; // rsi
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rax
  int *v74; // rdi
  int v75; // r10d
  unsigned int v76; // eax
  int v77; // r8d
  unsigned int v78; // r11d
  unsigned int v79; // r11d
  void *v80; // rsp
  _KTHREAD *v81; // rdx
  LPCGUID ActivityId; // [rsp+20h] [rbp-20h]
  unsigned __int16 v83; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v84; // [rsp+48h] [rbp+8h]
  int v85; // [rsp+50h] [rbp+10h] BYREF
  unsigned int v86; // [rsp+58h] [rbp+18h]
  unsigned int v87; // [rsp+60h] [rbp+20h] BYREF
  size_t Size; // [rsp+68h] [rbp+28h]
  ULONGLONG v89; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v90; // [rsp+78h] [rbp+38h]
  unsigned int v91; // [rsp+7Ch] [rbp+3Ch]
  unsigned int v92; // [rsp+80h] [rbp+40h]
  unsigned int v93; // [rsp+88h] [rbp+48h]
  unsigned int v94; // [rsp+90h] [rbp+50h]
  _KTHREAD *v95; // [rsp+98h] [rbp+58h]
  char *v96; // [rsp+A0h] [rbp+60h] BYREF
  __int128 v97; // [rsp+A8h] [rbp+68h] BYREF
  __int64 v98; // [rsp+B8h] [rbp+78h]
  char *v99; // [rsp+C0h] [rbp+80h]
  __int64 v100; // [rsp+C8h] [rbp+88h]
  __int64 v101; // [rsp+D0h] [rbp+90h]
  __int64 v102; // [rsp+D8h] [rbp+98h]
  __int64 v103; // [rsp+E0h] [rbp+A0h]
  LONG *p_LockNV; // [rsp+E8h] [rbp+A8h]
  void *v105; // [rsp+F0h] [rbp+B0h]
  unsigned __int64 v106; // [rsp+F8h] [rbp+B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+C0h] BYREF
  __int128 v108; // [rsp+110h] [rbp+D0h]
  __int128 v109; // [rsp+120h] [rbp+E0h]
  int *v110; // [rsp+130h] [rbp+F0h]
  __int64 v111; // [rsp+138h] [rbp+F8h]
  _QWORD v112[3]; // [rsp+140h] [rbp+100h] BYREF
  int v113; // [rsp+158h] [rbp+118h]
  int v114; // [rsp+15Ch] [rbp+11Ch]

  v86 = a4;
  v95 = a3;
  v9 = a2;
  v100 = a2;
  v10 = a1;
  v101 = a1;
  v103 = a1;
  p_LockNV = &a3->Header.LockNV;
  v93 = a4;
  v83 = a6;
  v11 = a7;
  v84 = a7;
  v94 = a7;
  v97 = 0LL;
  v98 = 0LL;
  v89 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = 8LL * a4;
  v14 = (signed __int64 *)(**(_QWORD **)(v13 + *(_QWORD *)(a1 + 704))
                         + *(_DWORD *)(*(_QWORD *)(v13 + *(_QWORD *)(a1 + 704)) + 16LL)
                         * (KeGetPcr()->Prcb.Number % *(_DWORD *)(*(_QWORD *)(v13 + *(_QWORD *)(a1 + 704)) + 20LL)));
  _m_prefetchw(v14);
  v15 = *v14;
  while ( (v15 & 1) == 0 )
  {
    v16 = v15;
    v15 = _InterlockedCompareExchange64(v14, v15 + 2, v15);
    if ( v16 == v15 )
    {
      result = *(_QWORD *)(a1 + 712);
      v18 = *(_QWORD *)(v13 + result);
      if ( (v18 & 1) == 0 )
      {
        v102 = *(_QWORD *)(v13 + result);
        if ( !v18 )
          return result;
        v19 = 0;
        LODWORD(Size) = 0;
        v20 = 0;
        if ( a5 >= 8 )
        {
          v21 = 0LL;
          v22 = 0LL;
          v23 = 2;
          do
          {
            v21 = _mm_add_epi32(
                    v21,
                    _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(*(_DWORD *)(a2 + 16LL * v20 + 8)),
                        _mm_cvtsi32_si128(*(_DWORD *)(a2 + 16LL * (v23 - 1) + 8))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(*(_DWORD *)(a2 + 16LL * v23 + 8)),
                        _mm_cvtsi32_si128(*(_DWORD *)(a2 + 16LL * (v23 + 1) + 8)))));
            v22 = _mm_add_epi32(
                    v22,
                    _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(*(_DWORD *)(a2 + 16LL * (v23 + 2) + 8)),
                        _mm_cvtsi32_si128(*(_DWORD *)(a2 + 16LL * (v23 + 3) + 8))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(*(_DWORD *)(a2 + 16LL * (v23 + 4) + 8)),
                        _mm_cvtsi32_si128(*(_DWORD *)(a2 + 16LL * (v23 + 5) + 8)))));
            v20 += 8;
            v23 += 8;
          }
          while ( v20 < (a5 & 0xFFFFFFF8) );
          v24 = _mm_add_epi32(v22, v21);
          v25 = _mm_add_epi32(v24, _mm_srli_si128(v24, 8));
          v19 = _mm_cvtsi128_si32(_mm_add_epi32(v25, _mm_srli_si128(v25, 4)));
          LODWORD(Size) = v19;
          v11 = v84;
        }
        if ( v20 < a5 )
        {
          v26 = (_DWORD *)(a2 + 16LL * v20 + 8);
          v27 = a5 - v20;
          do
          {
            v19 += *v26;
            v26 += 4;
            --v27;
          }
          while ( v27 );
          LODWORD(Size) = v19;
        }
        v28 = EtwpReserveTraceBuffer(v18, v19 + 32, (unsigned int)&v97, (unsigned int)&v89, v11);
        v30 = v28;
        if ( v28 )
        {
          v29 = v84 & 0xC0000000;
          v31 = (_DWORD *)v28;
          v32 = -1073676288;
          if ( (_DWORD)v29 != 0x80000000 )
            v32 = -1073610752;
          *v31 = (unsigned __int8)v84 | v32;
          *(_QWORD *)(v30 + 16) = v89;
          *(_WORD *)(v30 + 4) = v19 + 32;
          v33 = v83;
          *(_WORD *)(v30 + 6) = v83;
          *(_DWORD *)(v30 + 8) = a3[1].CurrentRunTime;
          *(_DWORD *)(v30 + 12) = a3[1].CycleTime;
          *(_DWORD *)(v30 + 24) = a3->SchedulerApc.SpareLong0;
          *(_DWORD *)(v30 + 28) = a3->UserTime;
          v105 = (void *)(v30 + 32);
          if ( v30 != -32 )
          {
            v34 = v19;
            v92 = v19;
            v90 = 0;
            v35 = (char *)(v30 + 32);
            v99 = (char *)(v30 + 32);
            for ( i = 0; ; ++i )
            {
              v90 = i;
              if ( i >= a5 )
              {
                v38 = 0;
                goto LABEL_24;
              }
              v37 = *(unsigned int *)(v9 + 16LL * i + 8);
              if ( (unsigned int)v37 > v34 )
                break;
              memmove(v35, *(const void **)(v9 + 16LL * i), (unsigned int)v37);
              v35 += v37;
              v99 = v35;
              v34 -= v37;
              v92 = v34;
              v9 = v100;
            }
            v38 = -1073741820;
LABEL_24:
            v91 = v38;
            v10 = v101;
            v39 = v86;
            v40 = v95;
            if ( v38 )
            {
              memset_0(v105, 0, (unsigned int)Size);
              EtwpUpdateEventsLostCount(v18);
              if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
                EtwpTraceLostSystemEvent(v83, v18 + 136, v84, v38);
            }
            if ( (*(_DWORD *)(v18 + 12) & 0x80000) != 0
              && (!KdPitchDebugger && !(_BYTE)KdDebuggerNotPresent || KdEventLoggingPresent) )
            {
              EtwpSendTraceEvent(v18, &v97);
            }
            if ( *(_QWORD *)(v18 + 1552) )
            {
              v41 = *(unsigned int *)v97;
              if ( (_DWORD)v41 )
              {
                if ( (unsigned int)v98 >= 0x48 && (unsigned int)v98 < (unsigned __int64)(v41 - 4) )
                {
                  v74 = (int *)((unsigned int)v98 + (_QWORD)v97);
                  v75 = *v74;
                  v76 = *v74 & 0xFF000000;
                  if ( v76 == -1879048192 )
                  {
                    v77 = 15;
                    v78 = (unsigned __int16)v75;
                    if ( (unsigned __int16)v75 >= 8u )
                    {
LABEL_115:
                      v79 = (v78 + 7) & 0xFFFFFFF8;
                      if ( v79 < (unsigned int)v41
                        && (unsigned int)v98 + v79 <= (unsigned int)v41
                        && v77
                        && (unsigned int)KeIsTraceCallbackAllowed(a8) )
                      {
                        ActivityId = *(LPCGUID *)(v43 + 8);
                        guard_dispatch_icall_no_overrides(v74, v44);
                      }
                    }
                  }
                  else if ( v76 == -1073741824 )
                  {
                    v77 = BYTE2(v75);
                    switch ( BYTE2(v75) )
                    {
                      case 1:
                      case 2:
                        if ( (unsigned int)v98 < (unsigned __int64)(v41 - 8) )
                        {
                          v78 = *((unsigned __int16 *)v74 + 2);
                          if ( v78 >= 0x20 )
                            goto LABEL_115;
                        }
                        break;
                      case 3:
                      case 4:
                        if ( (unsigned int)v98 < (unsigned __int64)(v41 - 8) )
                        {
                          v78 = *((unsigned __int16 *)v74 + 2);
                          if ( v78 >= 0x18 )
                            goto LABEL_115;
                        }
                        break;
                      case 0xA:
                      case 0xB:
                      case 0x14:
                      case 0x15:
                        v78 = (unsigned __int16)v75;
                        if ( (unsigned __int16)v75 >= 0x30u )
                          goto LABEL_115;
                        break;
                      case 0xD:
                      case 0x12:
                      case 0x13:
                        v78 = (unsigned __int16)v75;
                        if ( (unsigned __int16)v75 >= 0x50u )
                          goto LABEL_115;
                        break;
                      case 0x10:
                      case 0x11:
                        if ( (unsigned int)v98 < (unsigned __int64)(v41 - 8) )
                        {
                          v78 = *((unsigned __int16 *)v74 + 2);
                          if ( v78 >= 0x10 )
                            goto LABEL_115;
                        }
                        break;
                      default:
                        break;
                    }
                  }
                }
              }
            }
            v45 = (signed __int64 *)*((_QWORD *)&v97 + 1);
            _m_prefetchw(*((const void **)&v97 + 1));
            v46 = *v45;
            while ( (v46 ^ (unsigned __int64)v97) < 0xF )
            {
              v47 = v46;
              v46 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v97 + 1), v46 + 1, v46);
              if ( v47 == v46 )
                goto LABEL_36;
            }
            _InterlockedDecrement((volatile signed __int32 *)(v97 + 12));
LABEL_36:
            v48 = v83;
            if ( (*(_DWORD *)(v18 + 816) & 0x80u) != 0
              && ((*(char *)(*(_QWORD *)(v18 + 1048) + ((unsigned __int64)(v83 & 0x1FFF) >> 3)) >> (v83 & 7)) & 1) != 0 )
            {
              EtwpStackTraceDispatcher(v18, &v89, v40, v84, ActivityId);
              v48 = v83;
            }
            if ( (*(_DWORD *)(v18 + 820) & 2) != 0 )
            {
              for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v18 + 1284); j = (unsigned int)(j + 1) )
              {
                if ( *(_WORD *)(v18 + 2 * j + 1288) == v48 )
                {
                  EtwpContextRegisterTracingDispatcher(v18, &v89, v40, v84);
                  v48 = v83;
                  break;
                }
              }
            }
            if ( (*(_DWORD *)(v18 + 816) & 0x8000) != 0 )
            {
              for ( k = 0LL; (unsigned int)k < *(_DWORD *)(*(_QWORD *)(v18 + 1072) + 8LL); k = (unsigned int)(k + 1) )
              {
                if ( *(_WORD *)(*(_QWORD *)(v18 + 1072) + 2 * k + 12) == v48 )
                {
                  v85 = 0;
                  v106 = 0LL;
                  UserData = 0LL;
                  v108 = 0LL;
                  v109 = 0LL;
                  v96 = 0LL;
                  v87 = 0;
                  v61 = KeGetCurrentThread();
                  if ( KeGetCurrentPrcb()->IdleThread == v61 || (v84 & 0x1800) == 0 )
                    break;
                  v62 = v40;
                  if ( !v40 )
                    v62 = v61;
                  CurrentStackPointer = KeGetCurrentStackPointer(v61, k);
                  if ( !KeQueryCurrentStackInformationEx(CurrentStackPointer, &v87, &v96, &v106) )
                    break;
                  if ( v87 <= 9 )
                  {
                    v64 = 929;
                    if ( _bittest(&v64, v87) )
                      break;
                  }
                  v65 = (unsigned int)(24 * EtwpLastBranchStackSize);
                  v66 = 0;
                  v67 = RtlpInterlockedPopEntrySList(&EtwpLastBranchLookAsideList);
                  if ( !v67 || (v70 = (unsigned __int16 *)&v67[1], v67 == (PSLIST_ENTRY)-16LL) )
                  {
                    v72 = KeGetCurrentStackPointer(v69, v68);
                    if ( v72 - (__int64)v96 <= (unsigned __int64)(v65 + 3632) )
                      break;
                    v73 = v65 + 15;
                    if ( v65 + 15 <= (unsigned __int64)(unsigned int)v65 )
                      v73 = 0xFFFFFFFFFFFFFF0LL;
                    v80 = alloca(v73 & 0xFFFFFFFFFFFFFFF0uLL);
                    v70 = &v83;
                    v66 = 1;
                  }
                  v71 = guard_dispatch_icall_no_overrides((unsigned int)v65, v70);
                  v49 = v84;
                  if ( v71 >= 0 && v85 )
                  {
                    UserData.Size = v62[1].CycleTime;
                    UserData.Reserved = v62[1].CurrentRunTime;
                    UserData.Ptr = v89;
                    LODWORD(v108) = *(_DWORD *)(*(_QWORD *)(v18 + 1072) + 4LL);
                    v112[0] = &UserData;
                    v112[1] = 24LL;
                    v112[2] = v70;
                    v113 = v85;
                    v114 = 0;
                    EtwpLogKernelEvent(
                      (__int64)v112,
                      *(_QWORD *)(v18 + 1360),
                      *(_DWORD *)v18,
                      2u,
                      3104,
                      v84 & 0xFFFFE600 | 2);
                  }
                  if ( !v66 )
                    RtlpInterlockedPushEntrySList(&EtwpLastBranchLookAsideList, (PSLIST_ENTRY)v70 - 1);
                  goto LABEL_40;
                }
              }
            }
            v49 = v84;
LABEL_40:
            if ( (*(_DWORD *)(v18 + 816) & 0x4000000) != 0 )
            {
              for ( m = 0LL; (unsigned int)m < *(_DWORD *)(*(_QWORD *)(v18 + 1080) + 24LL); m = (unsigned int)(m + 1) )
              {
                v59 = *(_QWORD **)(v18 + 1080);
                if ( *((_WORD *)v59 + m + 14) == v83 )
                {
                  v109 = 0LL;
                  HIDWORD(v110) = 0;
                  v60 = KeGetCurrentThread();
                  if ( KeGetCurrentPrcb()->IdleThread != v60 && (v49 & 0x1800) != 0 )
                  {
                    v81 = v95;
                    if ( !v95 )
                      v81 = v60;
                    UserData.Ptr = v18;
                    LODWORD(v110) = v49;
                    LODWORD(v108) = v81[1].CycleTime;
                    DWORD1(v108) = v81[1].CurrentRunTime;
                    *(_QWORD *)&UserData.Size = v89;
                    *((_QWORD *)&v108 + 1) = v59[1];
                    guard_dispatch_icall_no_overrides(*v59, &UserData);
                  }
                  break;
                }
              }
            }
LABEL_41:
            v42 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(v10 + 704) + 8LL * v39);
LABEL_42:
            ExReleaseRundownProtectionCacheAwareEx(v42, 1u);
            return KeLeaveCriticalRegionThread();
          }
        }
        else
        {
          v33 = v83;
        }
        if ( EtwpEventTracingProvRegHandle )
        {
          LOBYTE(v29) = 2;
          if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                                  *(_QWORD *)(EtwpEventTracingProvRegHandle + 32) + 96LL,
                                  v29,
                                  64LL,
                                  EtwpEventTracingProvRegHandle)
            || *(_WORD *)(v52 + 102)
            && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v52 + 40) + 96LL, v50, v51, v52) )
          {
            v87 = v53;
            LOWORD(v85) = v33;
            UserData.Ptr = (ULONGLONG)&v85;
            *(_QWORD *)&UserData.Size = 2LL;
            *(_QWORD *)&v108 = &v87;
            *((_QWORD *)&v108 + 1) = 4LL;
            *(_QWORD *)&v109 = *(_QWORD *)(v18 + 144);
            *((_QWORD *)&v109 + 1) = *(unsigned __int16 *)(v18 + 136);
            v110 = &EtwpNull;
            v111 = 2LL;
            v55 = 1;
            if ( (v54 & 0x200) != 0 )
              v55 = 5;
            if ( (v54 & 0x600) != 0 )
              v55 |= 8u;
            EtwWriteEx(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT, 0LL, v55, 0LL, 0LL, 4u, &UserData);
          }
        }
        v39 = v86;
        goto LABEL_41;
      }
      v42 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v13 + *(_QWORD *)(a1 + 704));
      goto LABEL_42;
    }
  }
  return KeLeaveCriticalRegionThread();
}
