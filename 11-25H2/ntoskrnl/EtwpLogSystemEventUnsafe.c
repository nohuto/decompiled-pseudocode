/*
 * XREFs of EtwpLogSystemEventUnsafe @ 0x14030BF40
 * Callers:
 *     EtwpTraceThreadRundown @ 0x1403044A0 (EtwpTraceThreadRundown.c)
 *     NtTraceEvent @ 0x14030A680 (NtTraceEvent.c)
 *     EtwpSetMark @ 0x14079ABA4 (EtwpSetMark.c)
 *     EtwpTraceRegistry @ 0x140874AF0 (EtwpTraceRegistry.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     KeQueryCurrentStackInformationEx @ 0x1402571F0 (KeQueryCurrentStackInformationEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     EtwpStackTraceDispatcher @ 0x140309B20 (EtwpStackTraceDispatcher.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReserveTraceBuffer @ 0x14030C840 (EtwpReserveTraceBuffer.c)
 *     KeIsTraceCallbackAllowed @ 0x14030CD3C (KeIsTraceCallbackAllowed.c)
 *     EtwpUpdateEventsLostCount @ 0x1403F8AC8 (EtwpUpdateEventsLostCount.c)
 *     EtwpSendTraceEvent @ 0x1404AB404 (EtwpSendTraceEvent.c)
 *     EtwpTraceLostSystemEvent @ 0x1404BA54C (EtwpTraceLostSystemEvent.c)
 *     EtwpContextRegisterTracingDispatcher @ 0x1404CEB00 (EtwpContextRegisterTracingDispatcher.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x14069F0C0 (KeGetCurrentStackPointer.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 EtwpLogSystemEventUnsafe(
        __int64 a1,
        __int64 a2,
        _KTHREAD *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 a6,
        unsigned int a7,
        unsigned __int8 a8,
        ...)
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
  __int64 v29; // rcx
  _DWORD *v30; // r8
  int v31; // eax
  unsigned __int16 v32; // r14
  unsigned int v33; // r14d
  char *v34; // r15
  unsigned int i; // ebx
  __int64 v36; // rsi
  unsigned int v37; // edi
  unsigned int v38; // r12d
  _KTHREAD *v39; // rsi
  __int64 v40; // rdx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v41; // rcx
  unsigned int v42; // r11d
  signed __int64 *v43; // roff
  signed __int64 v44; // rax
  signed __int64 v45; // rtt
  unsigned __int16 v46; // r8
  unsigned int v47; // edi
  unsigned __int8 v48; // dl
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned int v51; // r10d
  __int16 v52; // r11
  ULONG v53; // r9d
  __int64 k; // rdx
  __int64 j; // rcx
  __int64 m; // rdx
  _QWORD *v57; // r8
  _KTHREAD *v58; // rcx
  _KTHREAD *v59; // r14
  unsigned __int64 CurrentStackPointer; // rax
  int v61; // ecx
  __int64 v62; // rdi
  char v63; // r15
  PSLIST_ENTRY v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  unsigned __int16 *v67; // rsi
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rax
  _KTHREAD *v71; // rcx
  int *v72; // rdi
  int v73; // r10d
  unsigned int v74; // eax
  int v75; // r8d
  unsigned int v76; // r11d
  unsigned int v77; // r11d
  void *v78; // rsp
  _KTHREAD *v79; // rdx
  unsigned __int16 v80; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v81; // [rsp+48h] [rbp+8h]
  int v82; // [rsp+50h] [rbp+10h] BYREF
  unsigned int v83; // [rsp+58h] [rbp+18h]
  unsigned int v84; // [rsp+60h] [rbp+20h] BYREF
  size_t Size; // [rsp+68h] [rbp+28h]
  ULONGLONG v86; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v87; // [rsp+78h] [rbp+38h]
  unsigned int v88; // [rsp+7Ch] [rbp+3Ch]
  unsigned int v89; // [rsp+80h] [rbp+40h]
  unsigned int v90; // [rsp+88h] [rbp+48h]
  unsigned int v91; // [rsp+90h] [rbp+50h]
  _KTHREAD *v92; // [rsp+98h] [rbp+58h]
  char *v93; // [rsp+A0h] [rbp+60h] BYREF
  __int128 v94; // [rsp+A8h] [rbp+68h] BYREF
  __int64 v95; // [rsp+B8h] [rbp+78h]
  char *v96; // [rsp+C0h] [rbp+80h]
  __int64 v97; // [rsp+C8h] [rbp+88h]
  __int64 v98; // [rsp+D0h] [rbp+90h]
  __int64 v99; // [rsp+D8h] [rbp+98h]
  __int64 v100; // [rsp+E0h] [rbp+A0h]
  LONG *p_LockNV; // [rsp+E8h] [rbp+A8h]
  void *v102; // [rsp+F0h] [rbp+B0h]
  unsigned __int64 v103; // [rsp+F8h] [rbp+B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+C0h] BYREF
  __int128 v105; // [rsp+110h] [rbp+D0h]
  __int128 v106; // [rsp+120h] [rbp+E0h]
  __int64 *v107; // [rsp+130h] [rbp+F0h]
  __int64 v108; // [rsp+138h] [rbp+F8h]
  _QWORD v109[3]; // [rsp+140h] [rbp+100h] BYREF
  int v110; // [rsp+158h] [rbp+118h]
  int v111; // [rsp+15Ch] [rbp+11Ch]

  v83 = a4;
  v92 = a3;
  v9 = a2;
  v97 = a2;
  v10 = a1;
  v98 = a1;
  v100 = a1;
  p_LockNV = &a3->Header.LockNV;
  v90 = a4;
  v80 = a6;
  v11 = a7;
  v81 = a7;
  v91 = a7;
  v94 = 0LL;
  v95 = 0LL;
  v86 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = 8LL * a4;
  v14 = (signed __int64 *)(**(_QWORD **)(v13 + *(_QWORD *)(a1 + 448))
                         + *(_DWORD *)(*(_QWORD *)(v13 + *(_QWORD *)(a1 + 448)) + 16LL)
                         * (KeGetPcr()->Prcb.Number % *(_DWORD *)(*(_QWORD *)(v13 + *(_QWORD *)(a1 + 448)) + 20LL)));
  _m_prefetchw(v14);
  v15 = *v14;
  while ( (v15 & 1) == 0 )
  {
    v16 = v15;
    v15 = _InterlockedCompareExchange64(v14, v15 + 2, v15);
    if ( v16 == v15 )
    {
      result = *(_QWORD *)(a1 + 456);
      v18 = *(_QWORD *)(v13 + result);
      if ( (v18 & 1) == 0 )
      {
        v99 = *(_QWORD *)(v13 + result);
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
          v11 = v81;
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
        v28 = EtwpReserveTraceBuffer(v18, v19 + 32, (unsigned int)&v94, (unsigned int)&v86, v11);
        v29 = v28;
        if ( v28 )
        {
          v30 = (_DWORD *)v28;
          v31 = -1073676288;
          if ( (v81 & 0xC0000000) != 0x80000000 )
            v31 = -1073610752;
          *v30 = (unsigned __int8)v81 | v31;
          *(_QWORD *)(v29 + 16) = v86;
          *(_WORD *)(v29 + 4) = v19 + 32;
          v32 = v80;
          *(_WORD *)(v29 + 6) = v80;
          *(_DWORD *)(v29 + 8) = a3[1].CurrentRunTime;
          *(_DWORD *)(v29 + 12) = a3[1].CycleTime;
          *(_DWORD *)(v29 + 24) = a3->SchedulerApc.SpareLong0;
          *(_DWORD *)(v29 + 28) = a3->UserTime;
          v102 = (void *)(v29 + 32);
          if ( v29 != -32 )
          {
            v33 = v19;
            v89 = v19;
            v87 = 0;
            v34 = (char *)(v29 + 32);
            v96 = (char *)(v29 + 32);
            for ( i = 0; ; ++i )
            {
              v87 = i;
              if ( i >= a5 )
              {
                v37 = 0;
                goto LABEL_24;
              }
              v36 = *(unsigned int *)(v9 + 16LL * i + 8);
              if ( (unsigned int)v36 > v33 )
                break;
              memmove(v34, *(const void **)(v9 + 16LL * i), (unsigned int)v36);
              v34 += v36;
              v96 = v34;
              v33 -= v36;
              v89 = v33;
              v9 = v97;
            }
            v37 = -1073741820;
LABEL_24:
            v88 = v37;
            v10 = v98;
            v38 = v83;
            v39 = v92;
            if ( v37 )
            {
              memset_0(v102, 0, (unsigned int)Size);
              EtwpUpdateEventsLostCount(v18);
              if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
                EtwpTraceLostSystemEvent(v80, v18 + 136, v81, v37);
            }
            if ( (*(_DWORD *)(v18 + 12) & 0x80000) != 0
              && (!KdPitchDebugger && !(_BYTE)KdDebuggerNotPresent || KdEventLoggingPresent) )
            {
              EtwpSendTraceEvent(v18, &v94);
            }
            if ( *(_QWORD *)(v18 + 1552) )
            {
              v40 = *(unsigned int *)v94;
              if ( (_DWORD)v40 )
              {
                if ( (unsigned int)v95 >= 0x48 && (unsigned int)v95 < (unsigned __int64)(v40 - 4) )
                {
                  v72 = (int *)((unsigned int)v95 + (_QWORD)v94);
                  v73 = *v72;
                  v74 = *v72 & 0xFF000000;
                  if ( v74 == -1879048192 )
                  {
                    v75 = 15;
                    v76 = (unsigned __int16)v73;
                    if ( (unsigned __int16)v73 >= 8u )
                    {
LABEL_115:
                      v77 = (v76 + 7) & 0xFFFFFFF8;
                      if ( v77 < (unsigned int)v40
                        && (unsigned int)v95 + v77 <= (unsigned int)v40
                        && v75
                        && (unsigned int)KeIsTraceCallbackAllowed(a8) )
                      {
                        guard_dispatch_icall_no_overrides(v72, v42);
                      }
                    }
                  }
                  else if ( v74 == -1073741824 )
                  {
                    v75 = BYTE2(v73);
                    switch ( BYTE2(v73) )
                    {
                      case 1:
                      case 2:
                        if ( (unsigned int)v95 < (unsigned __int64)(v40 - 8) )
                        {
                          v76 = *((unsigned __int16 *)v72 + 2);
                          if ( v76 >= 0x20 )
                            goto LABEL_115;
                        }
                        break;
                      case 3:
                      case 4:
                        if ( (unsigned int)v95 < (unsigned __int64)(v40 - 8) )
                        {
                          v76 = *((unsigned __int16 *)v72 + 2);
                          if ( v76 >= 0x18 )
                            goto LABEL_115;
                        }
                        break;
                      case 0xA:
                      case 0xB:
                      case 0x14:
                      case 0x15:
                        v76 = (unsigned __int16)v73;
                        if ( (unsigned __int16)v73 >= 0x30u )
                          goto LABEL_115;
                        break;
                      case 0xD:
                      case 0x12:
                      case 0x13:
                        v76 = (unsigned __int16)v73;
                        if ( (unsigned __int16)v73 >= 0x50u )
                          goto LABEL_115;
                        break;
                      case 0x10:
                      case 0x11:
                        if ( (unsigned int)v95 < (unsigned __int64)(v40 - 8) )
                        {
                          v76 = *((unsigned __int16 *)v72 + 2);
                          if ( v76 >= 0x10 )
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
            v43 = (signed __int64 *)*((_QWORD *)&v94 + 1);
            _m_prefetchw(*((const void **)&v94 + 1));
            v44 = *v43;
            while ( (v44 ^ (unsigned __int64)v94) < 0xF )
            {
              v45 = v44;
              v44 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v94 + 1), v44 + 1, v44);
              if ( v45 == v44 )
                goto LABEL_36;
            }
            _InterlockedDecrement((volatile signed __int32 *)(v94 + 12));
LABEL_36:
            v46 = v80;
            if ( (*(_DWORD *)(v18 + 816) & 0x80u) != 0
              && ((*(char *)(*(_QWORD *)(v18 + 1048) + ((unsigned __int64)(v80 & 0x1FFF) >> 3)) >> (v80 & 7)) & 1) != 0 )
            {
              EtwpStackTraceDispatcher(v18, (unsigned int *)&v86, v39, v81);
              v46 = v80;
            }
            if ( (*(_DWORD *)(v18 + 820) & 2) != 0 )
            {
              for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v18 + 1284); j = (unsigned int)(j + 1) )
              {
                if ( *(_WORD *)(v18 + 2 * j + 1288) == v46 )
                {
                  EtwpContextRegisterTracingDispatcher(v18, &v86, v39, v81);
                  v46 = v80;
                  break;
                }
              }
            }
            if ( (*(_DWORD *)(v18 + 816) & 0x8000) != 0 )
            {
              for ( k = 0LL; (unsigned int)k < *(_DWORD *)(*(_QWORD *)(v18 + 1072) + 8LL); k = (unsigned int)(k + 1) )
              {
                if ( *(_WORD *)(*(_QWORD *)(v18 + 1072) + 2 * k + 12) == v46 )
                {
                  v82 = 0;
                  v103 = 0LL;
                  UserData = 0LL;
                  v105 = 0LL;
                  v106 = 0LL;
                  v93 = 0LL;
                  v84 = 0;
                  v58 = KeGetCurrentThread();
                  if ( KeGetCurrentPrcb()->IdleThread == v58 || (v81 & 0x1800) == 0 )
                    break;
                  v59 = v39;
                  if ( !v39 )
                    v59 = v58;
                  CurrentStackPointer = KeGetCurrentStackPointer(v58, k);
                  if ( !KeQueryCurrentStackInformationEx(CurrentStackPointer, &v84, &v93, &v103) )
                    break;
                  if ( v84 <= 9 )
                  {
                    v61 = 929;
                    if ( _bittest(&v61, v84) )
                      break;
                  }
                  v62 = (unsigned int)(24 * EtwpLastBranchStackSize);
                  v63 = 0;
                  v64 = RtlpInterlockedPopEntrySList(&EtwpLastBranchLookAsideList);
                  if ( !v64 || (v67 = (unsigned __int16 *)&v64[1], v64 == (PSLIST_ENTRY)-16LL) )
                  {
                    v69 = KeGetCurrentStackPointer(v66, v65);
                    if ( v69 - (__int64)v93 <= (unsigned __int64)(v62 + 3632) )
                      break;
                    v70 = v62 + 15;
                    if ( v62 + 15 <= (unsigned __int64)(unsigned int)v62 )
                      v70 = 0xFFFFFFFFFFFFFF0LL;
                    v78 = alloca(v70 & 0xFFFFFFFFFFFFFFF0uLL);
                    v67 = &v80;
                    v63 = 1;
                  }
                  v68 = guard_dispatch_icall_no_overrides((unsigned int)v62, v67);
                  v47 = v81;
                  if ( v68 >= 0 && v82 )
                  {
                    UserData.Size = v59[1].CycleTime;
                    UserData.Reserved = v59[1].CurrentRunTime;
                    UserData.Ptr = v86;
                    LODWORD(v105) = *(_DWORD *)(*(_QWORD *)(v18 + 1072) + 4LL);
                    v109[0] = &UserData;
                    v109[1] = 24LL;
                    v109[2] = v67;
                    v110 = v82;
                    v111 = 0;
                    EtwpLogKernelEvent(
                      (struct _KTHREAD *)v109,
                      *(_QWORD *)(v18 + 1360),
                      *(_DWORD *)v18,
                      2u,
                      0xC20u,
                      v81 & 0xFFFFE600 | 2);
                  }
                  if ( !v63 )
                    RtlpInterlockedPushEntrySList(&EtwpLastBranchLookAsideList, (PSLIST_ENTRY)v67 - 1);
                  goto LABEL_40;
                }
              }
            }
            v47 = v81;
LABEL_40:
            if ( (*(_DWORD *)(v18 + 816) & 0x4000000) != 0 )
            {
              for ( m = 0LL; (unsigned int)m < *(_DWORD *)(*(_QWORD *)(v18 + 1080) + 24LL); m = (unsigned int)(m + 1) )
              {
                v57 = *(_QWORD **)(v18 + 1080);
                if ( *((_WORD *)v57 + m + 14) == v80 )
                {
                  v106 = 0LL;
                  HIDWORD(v107) = 0;
                  v71 = KeGetCurrentThread();
                  if ( KeGetCurrentPrcb()->IdleThread != v71 && (v47 & 0x1800) != 0 )
                  {
                    v79 = v92;
                    if ( !v92 )
                      v79 = v71;
                    UserData.Ptr = v18;
                    LODWORD(v107) = v47;
                    LODWORD(v105) = v79[1].CycleTime;
                    DWORD1(v105) = v79[1].CurrentRunTime;
                    *(_QWORD *)&UserData.Size = v86;
                    *((_QWORD *)&v105 + 1) = v57[1];
                    guard_dispatch_icall_no_overrides(*v57, &UserData);
                  }
                  break;
                }
              }
            }
LABEL_41:
            v41 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(v10 + 448) + 8LL * v38);
LABEL_42:
            ExReleaseRundownProtectionCacheAwareEx(v41, 1u);
            return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
        else
        {
          v32 = v80;
        }
        if ( EtwpEventTracingProvRegHandle
          && (EtwpLevelKeywordEnabled(*(_QWORD *)(EtwpEventTracingProvRegHandle + 32) + 96LL, 2u, 64LL)
           || *(_BYTE *)(v50 + 101) && EtwpLevelKeywordEnabled(*(_QWORD *)(v50 + 40) + 96LL, v48, v49)) )
        {
          v84 = v51;
          LOWORD(v82) = v32;
          UserData.Ptr = (ULONGLONG)&v82;
          *(_QWORD *)&UserData.Size = 2LL;
          *(_QWORD *)&v105 = &v84;
          *((_QWORD *)&v105 + 1) = 4LL;
          *(_QWORD *)&v106 = *(_QWORD *)(v18 + 144);
          *((_QWORD *)&v106 + 1) = *(unsigned __int16 *)(v18 + 136);
          v107 = &EtwpNull;
          v108 = 2LL;
          v53 = 1;
          if ( (v52 & 0x200) != 0 )
            v53 = 5;
          if ( (v52 & 0x600) != 0 )
            v53 |= 8u;
          EtwWriteEx(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT, 0LL, v53, 0LL, 0LL, 4u, &UserData);
        }
        v38 = v83;
        goto LABEL_41;
      }
      v41 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v13 + *(_QWORD *)(a1 + 448));
      goto LABEL_42;
    }
  }
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
