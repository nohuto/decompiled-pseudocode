/*
 * XREFs of EtwpWriteUserEvent @ 0x1409245D0
 * Callers:
 *     NtTraceEvent @ 0x14030A680 (NtTraceEvent.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 *     RtlpGetStackLimits @ 0x140258FB0 (RtlpGetStackLimits.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReserveTraceBuffer @ 0x14030C840 (EtwpReserveTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpDereferenceStackEntry @ 0x1403F6280 (EtwpDereferenceStackEntry.c)
 *     DecodeProviderTraits @ 0x1403F7000 (DecodeProviderTraits.c)
 *     EtwpFailLogging @ 0x1403F83E0 (EtwpFailLogging.c)
 *     EtwpTraceLostEvent @ 0x1403F86D8 (EtwpTraceLostEvent.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405F50 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x140420600 (EtwpReleaseStackLookasideListEntry.c)
 *     PsGetCurrentProcessSessionId @ 0x140425EC0 (PsGetCurrentProcessSessionId.c)
 *     EtwpCreateEventKey @ 0x140438280 (EtwpCreateEventKey.c)
 *     EtwpGetStackLookasideListEntry @ 0x1404402F0 (EtwpGetStackLookasideListEntry.c)
 *     PsGetProcessStartKey @ 0x140454D00 (PsGetProcessStartKey.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14045839C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpApplyLevelKwFilter @ 0x140461AB8 (EtwpApplyLevelKwFilter.c)
 *     EtwpSendTraceEvent @ 0x1404AB404 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404AB500 (EtwpInvokeEventCallback.c)
 *     EtwpGetCrimsonStackKey @ 0x1404CCBE8 (EtwpGetCrimsonStackKey.c)
 *     EtwpApplyEventNameFilter @ 0x1404EC710 (EtwpApplyEventNameFilter.c)
 *     EtwpIsEventNameFilterEnabled @ 0x1404ECAD0 (EtwpIsEventNameFilterEnabled.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x140925DA0 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140925E00 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x1409260C4 (EtwpApplyStackWalkFilterOnUserEvent.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409260EC (EtwpGetPsmKeyExtendedHeaderItem.c)
 */

__int64 __fastcall EtwpWriteUserEvent(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int16 a3,
        char a4,
        int a5,
        __int64 a6,
        _OWORD *a7,
        unsigned __int8 a8,
        __int64 a9,
        unsigned int a10,
        unsigned __int64 a11,
        __int64 a12,
        __int64 a13,
        __int16 a14,
        void *a15,
        unsigned __int64 *a16)
{
  __int64 v18; // rdi
  __int64 v19; // r15
  unsigned int v20; // esi
  ULONG_PTR v21; // r13
  __int64 v22; // r9
  __int64 CurrentThread; // r8
  unsigned __int64 v24; // r10
  bool v25; // zf
  unsigned __int64 v26; // rdx
  __int64 v27; // r14
  int v28; // ecx
  unsigned __int8 v29; // r11
  _KPROCESS *Process; // rcx
  __int64 v31; // rcx
  bool v32; // al
  __int64 v33; // r14
  __int64 v34; // rbx
  ULONG_PTR v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rcx
  _SLIST_HEADER *v38; // rcx
  unsigned int v40; // ebx
  __int64 v41; // rax
  __int64 v42; // rbx
  char v43; // al
  __int64 v44; // r11
  int v45; // edi
  unsigned int v46; // r15d
  int v47; // ecx
  _OWORD *v48; // rbx
  unsigned int v49; // ecx
  unsigned int v50; // r10d
  unsigned int v51; // r8d
  char v52; // al
  __int64 v53; // r14
  __int64 v54; // r11
  _OWORD *v55; // rax
  __int128 v56; // xmm0
  unsigned __int16 *v57; // rcx
  struct _LIST_ENTRY *v58; // rdx
  unsigned __int16 v59; // r14
  unsigned __int16 v60; // r14
  _WORD *v61; // rbx
  __int64 v62; // r8
  unsigned __int64 ProcessStartKey; // rax
  __int64 v64; // r9
  int v65; // r11d
  unsigned __int16 *v66; // r10
  unsigned __int64 v67; // rax
  unsigned __int16 *v68; // rbx
  unsigned __int16 *v69; // rdi
  unsigned int v70; // edx
  unsigned __int16 *v71; // rcx
  unsigned __int16 v72; // r14
  unsigned __int16 v73; // r14
  _WORD *v74; // rdi
  __int64 v75; // rbx
  unsigned __int16 *v76; // rbx
  __int64 v77; // rcx
  unsigned __int16 v78; // dx
  unsigned int v79; // ebx
  size_t v80; // rdi
  unsigned __int8 v81; // cl
  int v82; // ecx
  int v83; // ebx
  unsigned __int16 *v84; // rdx
  unsigned __int16 *v85; // rbx
  __int64 v86; // rbx
  __int64 v87; // rcx
  int CurrentProcessSessionId; // eax
  struct _KTHREAD *v89; // rcx
  __int64 v90; // rbx
  unsigned int **v91; // r9
  unsigned int *v92; // r8
  signed __int64 *v93; // rdx
  signed __int64 v94; // rax
  signed __int64 v95; // rtt
  unsigned int v96; // edi
  void **v97; // r14
  int v98; // ebx
  int v99; // ecx
  __int64 v100; // rbx
  __int64 v101; // r8
  unsigned int v102; // edx
  int v103; // r8d
  char v104; // al
  int v105; // ecx
  char v106; // bl
  PSLIST_ENTRY StackLookasideListEntry; // rax
  char v108; // bl
  unsigned __int16 *v109; // rbx
  bool StackLimits; // al
  char *v111; // rcx
  void *v112; // rsp
  char v113; // [rsp+0h] [rbp-1E0h] BYREF
  char v114; // [rsp+1E0h] [rbp+0h]
  unsigned __int8 v115; // [rsp+1E8h] [rbp+8h]
  int v116; // [rsp+1F0h] [rbp+10h]
  int v117; // [rsp+1F4h] [rbp+14h]
  int v118; // [rsp+1F8h] [rbp+18h]
  unsigned int i; // [rsp+1FCh] [rbp+1Ch]
  unsigned __int16 *v120; // [rsp+200h] [rbp+20h]
  unsigned __int16 v121; // [rsp+208h] [rbp+28h]
  int v122; // [rsp+20Ch] [rbp+2Ch]
  char v123; // [rsp+210h] [rbp+30h]
  __int16 v124; // [rsp+212h] [rbp+32h]
  unsigned __int16 v125; // [rsp+214h] [rbp+34h] BYREF
  __int64 v126; // [rsp+218h] [rbp+38h]
  unsigned __int16 v127; // [rsp+220h] [rbp+40h]
  unsigned __int64 v128; // [rsp+228h] [rbp+48h]
  __int64 v129; // [rsp+230h] [rbp+50h]
  unsigned __int16 *v130; // [rsp+238h] [rbp+58h]
  __int64 v131; // [rsp+240h] [rbp+60h]
  unsigned int v132; // [rsp+248h] [rbp+68h]
  char PreviousMode; // [rsp+24Ch] [rbp+6Ch]
  char v134; // [rsp+24Dh] [rbp+6Dh]
  PSLIST_ENTRY ListEntry; // [rsp+250h] [rbp+70h] BYREF
  signed __int64 v136; // [rsp+258h] [rbp+78h] BYREF
  __int64 v137; // [rsp+260h] [rbp+80h]
  unsigned int v138; // [rsp+268h] [rbp+88h]
  unsigned int v139; // [rsp+26Ch] [rbp+8Ch]
  unsigned __int16 *v140; // [rsp+270h] [rbp+90h]
  void *v141; // [rsp+278h] [rbp+98h]
  void *v142; // [rsp+280h] [rbp+A0h]
  void *v143; // [rsp+288h] [rbp+A8h]
  __int64 v144; // [rsp+290h] [rbp+B0h]
  unsigned __int64 v145; // [rsp+298h] [rbp+B8h] BYREF
  unsigned int v146; // [rsp+2A0h] [rbp+C0h]
  char *v147; // [rsp+2A8h] [rbp+C8h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+2B0h] [rbp+D0h]
  __int64 v149; // [rsp+2B8h] [rbp+D8h]
  PSLIST_ENTRY v150; // [rsp+2C0h] [rbp+E0h]
  struct _KTHREAD *v151; // [rsp+2C8h] [rbp+E8h]
  unsigned __int64 v152; // [rsp+2D0h] [rbp+F0h] BYREF
  __int128 *v153; // [rsp+2D8h] [rbp+F8h] BYREF
  unsigned __int64 *v154; // [rsp+2E0h] [rbp+100h]
  void *Src; // [rsp+2E8h] [rbp+108h]
  __int64 v156; // [rsp+2F0h] [rbp+110h]
  __int64 v157; // [rsp+2F8h] [rbp+118h]
  __int64 v158; // [rsp+300h] [rbp+120h]
  __int64 v159; // [rsp+308h] [rbp+128h]
  __int64 v160; // [rsp+310h] [rbp+130h]
  char *v161; // [rsp+318h] [rbp+138h]
  __int128 v162; // [rsp+320h] [rbp+140h] BYREF
  __int64 v163; // [rsp+330h] [rbp+150h]
  struct _KTHREAD *v164; // [rsp+338h] [rbp+158h]
  struct _KTHREAD *v165; // [rsp+340h] [rbp+160h]
  struct _KTHREAD *v166; // [rsp+348h] [rbp+168h]
  _OWORD v167[24]; // [rsp+350h] [rbp+170h] BYREF
  unsigned int v168; // [rsp+4D0h] [rbp+2F0h]
  _OWORD v169[5]; // [rsp+4E0h] [rbp+300h] BYREF

  v127 = a3;
  v137 = a1;
  v18 = a13;
  v158 = a1;
  v115 = a2;
  v129 = a6;
  v159 = a6;
  v19 = a11;
  v128 = a11;
  v160 = a11;
  v156 = a12;
  Src = a15;
  v154 = a16;
  v20 = 0;
  v118 = 0;
  memset_0(v167, 0, 0x188uLL);
  i = 0;
  memset(v169, 0, sizeof(v169));
  v141 = 0LL;
  v21 = 0LL;
  v150 = 0LL;
  v143 = 0LL;
  v125 = 0;
  v153 = 0LL;
  v145 = 0LL;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  v124 = a14 & 0x100;
  if ( a11 )
  {
    if ( !a10 )
      return 3221225485LL;
  }
  else if ( a10 )
  {
    return 3221225485LL;
  }
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a13 )
    v18 = a1;
  v114 = 0;
  v131 = *(_QWORD *)(a1 + 392);
  v157 = v131;
  if ( v154 && *v154 )
  {
    v145 = *v154;
    v114 = 16;
  }
  DecodeProviderTraits((unsigned __int16 *)Src, (a14 & 0x200) != 0, &v125, &v153);
  CurrentThread = (__int64)KeGetCurrentThread();
  v151 = (struct _KTHREAD *)CurrentThread;
  --*(_WORD *)(CurrentThread + 484);
  v115 &= ~a4;
  v144 = v18;
  do
  {
LABEL_10:
    v24 = 0x140000000uLL;
    while ( 1 )
    {
      while ( 1 )
      {
        v25 = !_BitScanForward((unsigned int *)&v26, v115);
        i = v26;
        if ( v25 )
        {
          v33 = v131;
          goto LABEL_21;
        }
        v126 = 1LL;
        v162 = 0LL;
        v163 = 0LL;
        ListEntry = 0LL;
        v136 = 0LL;
        v116 = 80;
        v123 = 0;
        v121 = 0;
        v122 = 0;
        v142 = 0LL;
        v161 = 0LL;
        v115 &= v115 - 1;
        v22 = (unsigned int)v26;
        v27 = v18 + 32 * (v26 + 4);
        CurrentThread = v156;
        if ( v156 )
        {
          v28 = *(_DWORD *)(v156 + 4LL * (*(unsigned __int16 *)(v27 + 6) >> 5));
          if ( _bittest(&v28, *(_BYTE *)(v27 + 6) & 0x1F) )
            continue;
        }
        if ( EtwpLevelKeywordEnabled(v27, a8, a9) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( (a5 & 2) == 0 && SLODWORD(Process[1].DirectoryTableBase) >= 0 )
            break;
          if ( (*(_DWORD *)(v27 + 8) & 0x200) == 0 )
            break;
        }
      }
      v31 = *(_QWORD *)(v18 + 384);
      v32 = v31
         && ((*(_DWORD *)(104 * v22 + v31) & 0x80000200) == 0x80000200
          || (*(_DWORD *)(104 * v22 + v31) & 0x80000100) == 0x80000100);
      v40 = i;
      if ( v32 )
      {
        if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilterOnUserEvent(v18, i, v127, v129, a10, v19) )
          goto LABEL_10;
        CurrentThread = a9;
        v29 = a8;
      }
      if ( v124
        && EtwpIsEventNameFilterEnabled(v18, v40, 0, v29, CurrentThread, 0)
        && !EtwpApplyEventNameFilter(v18, v40, a10, v19, 1, 0, a8, a9, 0) )
      {
        goto LABEL_10;
      }
      v41 = *(unsigned __int16 *)(v27 + 6);
      v132 = *(unsigned __int16 *)(v27 + 6);
      v42 = 8 * v41;
      v120 = (unsigned __int16 *)(8 * v41);
      if ( ExAcquireRundownProtectionCacheAwareEx(
             *(PEX_RUNDOWN_REF_CACHE_AWARE *)(8 * v41 + *(_QWORD *)(v131 + 448)),
             1u) )
      {
        if ( v132 >= *(_DWORD *)(v131 + 16) )
        {
          v126 = 1LL;
        }
        else
        {
          _mm_lfence();
          v126 = *(_QWORD *)(v42 + *(_QWORD *)(v131 + 456));
        }
        v43 = 1;
      }
      else
      {
        v43 = v123;
      }
      v44 = v126;
      if ( (v126 & 1) != 0 )
        break;
      v45 = 0;
      if ( a7 )
      {
        v46 = 104;
        v116 = 104;
        v45 = 16;
      }
      else
      {
        v46 = v116;
      }
      v47 = *(_DWORD *)(v27 + 8);
      if ( (v47 & 0xFFFFFF9F) != 0 )
      {
        if ( (v47 & 0x800) != 0 && Flink && Flink != (struct _LIST_ENTRY *)EtwpHostSiloState )
        {
          v45 |= 0x100u;
          v46 += (LOWORD(Flink[264].Flink) + 15) & 0xFFFFFFF8;
          v116 = v46;
        }
        if ( (v47 & 1) != 0 )
        {
          if ( (v114 & 2) == 0 )
          {
            EtwpGetSidExtendedHeaderItem(v169);
            v114 |= 2u;
            v47 = *(_DWORD *)(v27 + 8);
          }
          v45 |= 2u;
          v46 += LOWORD(v169[0]);
          v116 = v46;
        }
        if ( (v47 & 2) != 0 )
        {
          v45 |= 1u;
          v46 += 16;
          v116 = v46;
        }
        if ( (v47 & 0x80u) != 0 )
        {
          v45 |= 0x40u;
          v46 += 16;
          v116 = v46;
        }
        if ( (v47 & 0x100) != 0 )
        {
          v45 |= 0x80u;
          v46 += 16;
          v116 = v46;
        }
        if ( (v47 & 4) == 0 )
          goto LABEL_59;
        v100 = v144;
        v101 = *(_QWORD *)(v144 + 384);
        if ( v101 )
        {
          v102 = i;
          v103 = *(_DWORD *)(104LL * i + v101);
          if ( (v103 & 0x80001000) == 0x80001000
            || (v103 & 0x80002000) == 0x80002000
            || (v103 & 0x80004000) == 0x80004000 )
          {
            v104 = 1;
LABEL_220:
            if ( !v104
              || EtwpApplyLevelKwFilter(v144, v102, a8, a9, 1)
              && (unsigned __int8)EtwpApplyStackWalkFilterOnUserEvent(v129, v100, i)
              && EtwpApplyEventNameFilter(v100, i, a10, v128, 1, 0, a8, a9, 1) )
            {
              v106 = v114;
              if ( (v114 & 1) == 0 )
              {
                StackLookasideListEntry = EtwpGetStackLookasideListEntry();
                v21 = (ULONG_PTR)StackLookasideListEntry;
                v150 = StackLookasideListEntry;
                if ( StackLookasideListEntry )
                {
                  v108 = v106 | 8;
                  v114 = v108;
                  v141 = &StackLookasideListEntry[2];
                  if ( !EtwpGetStackExtendedHeaderItem(v126, v151, 0, (unsigned __int64)StackLookasideListEntry, 0, 0LL) )
                  {
                    EtwpReleaseStackLookasideListEntry(v21);
                    v114 = v108 & 0xF7;
                    v141 = 0LL;
                  }
                }
                v114 |= 1u;
              }
              v109 = (unsigned __int16 *)v141;
              if ( v141 )
              {
                if ( (*(_DWORD *)(v126 + 820) & 1) != 0 && EtwpGetCrimsonStackKey(v126, (__int64)v141, &ListEntry) )
                {
                  v45 |= 8u;
                  v46 += 24;
                  v116 = v46;
                }
                else
                {
                  v45 |= 4u;
                  v46 += *v109;
                  v116 = v46;
                }
              }
            }
LABEL_59:
            if ( (*(_DWORD *)(v27 + 8) & 8) != 0 )
            {
              if ( (v114 & 4) == 0 )
              {
                v152 = 0LL;
                v147 = 0LL;
                StackLimits = RtlpGetStackLimits(&v147, &v152);
                v111 = v147;
                if ( !StackLimits )
                  v111 = 0LL;
                v147 = v111;
                if ( (unsigned __int64)((char *)&v152 - v111) > 0x1E0 )
                {
                  v112 = alloca(480LL);
                  v143 = &v113;
                  EtwpGetPsmKeyExtendedHeaderItem();
                }
                v114 |= 4u;
              }
              v44 = v126;
              if ( v143 )
              {
                v45 |= 0x20u;
                v46 += *(unsigned __int16 *)v143;
                v116 = v46;
              }
            }
            else
            {
              v44 = v126;
            }
            goto LABEL_61;
          }
        }
        else
        {
          v102 = i;
        }
        v104 = 0;
        goto LABEL_220;
      }
LABEL_61:
      v48 = &v167[3 * v168];
      if ( a10 )
      {
        v138 = 0;
        v164 = KeGetCurrentThread();
        PreviousMode = v164->PreviousMode;
        if ( PreviousMode && 16LL * a10 && (v128 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v49 = 0;
        v46 = v116;
        while ( 1 )
        {
          v138 = v49;
          if ( v49 >= a10 )
            break;
          v50 = v46;
          v19 = v128;
          v51 = *(_DWORD *)(v128 + 16LL * v49 + 8);
          v146 = v51;
          if ( v51 > 0xFFFF )
          {
            v118 = -2147483643;
            v115 |= 1 << i;
            if ( ListEntry )
              EtwpDereferenceStackEntry(ListEntry, *(_SLIST_HEADER **)(v44 + 1056));
            v33 = v131;
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)((char *)v120 + *(_QWORD *)(v131 + 448)),
              1u);
            v34 = v129;
            v24 = 0x140000000uLL;
            goto LABEL_22;
          }
          if ( v124 )
          {
            v52 = *(_BYTE *)(v128 + 16LL * v49 + 12);
            v51 = v146;
          }
          else
          {
            v52 = 0;
          }
          if ( v52 )
          {
            if ( v52 == 1 )
            {
              v121 += v51;
              ++v122;
            }
            v46 = v116;
          }
          else
          {
            v46 = v51 + v116;
            v116 += v51;
          }
          if ( v46 < v50 )
          {
            v118 = -2147483643;
            v115 |= 1 << i;
            if ( ListEntry )
              EtwpDereferenceStackEntry(ListEntry, *(_SLIST_HEADER **)(v44 + 1056));
            v33 = v131;
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)((char *)v120 + *(_QWORD *)(v131 + 448)),
              1u);
            v19 = v128;
            v34 = v129;
            v24 = 0x140000000uLL;
            goto LABEL_22;
          }
          ++v49;
        }
      }
      if ( v122 )
      {
        v46 += (v121 + 15) & 0xFFFFFFF8;
        v116 = v46;
      }
      if ( v125 )
      {
        v46 += (v125 + 15) & 0xFFFFFFF8;
        v116 = v46;
      }
      *((_DWORD *)v48 + 10) = v46;
      v53 = EtwpReserveTraceBuffer((unsigned int *)v44, v46, (unsigned __int64 *)&v162, &v136, 0);
      v149 = v53;
      if ( ListEntry )
        EtwpDereferenceStackEntry(ListEntry, *(_SLIST_HEADER **)(v126 + 1056));
      if ( v53 )
      {
        *(_QWORD *)v48 = v126;
        *((_QWORD *)v48 + 1) = v53;
        v48[1] = v162;
        *((_QWORD *)v48 + 4) = v163;
        ++v168;
        v139 = 0;
        v54 = 80LL;
        v117 = 80;
        v22 = 0LL;
        v120 = 0LL;
        v130 = 0LL;
        v55 = (_OWORD *)v129;
        *(_OWORD *)v53 = *(_OWORD *)v129;
        *(_OWORD *)(v53 + 16) = v55[1];
        *(_OWORD *)(v53 + 32) = v55[2];
        *(_OWORD *)(v53 + 48) = v55[3];
        *(_OWORD *)(v53 + 64) = v55[4];
        if ( v153 )
        {
          v56 = *v153;
          *(_WORD *)(v53 + 4) |= 0x80u;
        }
        else
        {
          v56 = *(_OWORD *)(v137 + 40);
        }
        *(_OWORD *)(v53 + 24) = v56;
        *(_DWORD *)v53 = dword_140037638[v127] | v46;
        if ( v45 )
        {
          if ( (v45 & 0x100) != 0 )
          {
            v57 = (unsigned __int16 *)(v53 + 80);
            v120 = v57;
            v58 = Flink;
            v59 = (LOWORD(Flink[264].Flink) + 15) & 0xFFF8;
            *v57 = v59;
            v57[1] = 16;
            v57[3] = (unsigned __int16)v58[264].Flink;
            v57[2] &= ~1u;
            v57[2] = 0;
            v60 = v59 - LOWORD(v58[264].Flink) - 8;
            v61 = v57 + 4;
            memmove(v57 + 4, v58[263].Blink, LOWORD(v58[264].Flink));
            memset_0((char *)v61 + LOWORD(Flink[264].Flink), 0, v60);
            v53 = v149;
            *(_WORD *)(v149 + 4) |= 1u;
            v22 = v53 + 80;
            v54 = (unsigned int)*(unsigned __int16 *)(v53 + 80) + 80;
            v117 = *(unsigned __int16 *)(v53 + 80) + 80;
            v130 = (unsigned __int16 *)(v53 + 80);
          }
          if ( (v45 & 0x10) != 0 )
          {
            v84 = (unsigned __int16 *)(v54 + v53);
            *(_DWORD *)v84 = 65560;
            v84[3] = 16;
            CurrentThread = 65534LL;
            v84[2] = *(_WORD *)(v54 + v53 + 4) & 0xFFFE;
            v84[2] = 0;
            *(_OWORD *)(v84 + 4) = *a7;
            *(_WORD *)(v53 + 4) |= 1u;
            v54 = (unsigned int)(v54 + 24);
            v117 = v54;
            if ( v22 )
              *(_WORD *)(v22 + 4) |= 1u;
            v22 = (__int64)v84;
            v120 = v84;
            v130 = v84;
          }
          if ( (v45 & 2) != 0 )
          {
            v140 = (unsigned __int16 *)(v53 + (unsigned int)v54);
            v83 = LOWORD(v169[0]);
            memmove(v140, v169, LOWORD(v169[0]));
            *(_WORD *)(v53 + 4) |= 1u;
            v54 = (unsigned int)(v83 + v117);
            v117 += v83;
            if ( v120 )
              v120[2] |= 1u;
            v22 = (__int64)v140;
            v120 = v140;
            v130 = v140;
          }
          if ( (v45 & 1) != 0 )
          {
            v86 = (unsigned int)v54;
            v87 = v54 + v53;
            *(_DWORD *)v87 = 196624;
            *(_WORD *)(v87 + 6) = 4;
            *(_WORD *)(v87 + 4) = *(_WORD *)(v54 + v53 + 4) & 0xFFFE;
            *(_WORD *)(v87 + 4) = 0;
            CurrentProcessSessionId = PsGetCurrentProcessSessionId();
            v22 = v86 + v53;
            *(_DWORD *)(v86 + v53 + 8) = CurrentProcessSessionId;
            *(_WORD *)(v53 + 4) |= 1u;
            v54 = (unsigned int)(v86 + 16);
            v117 = v86 + 16;
            if ( v120 )
              v120[2] |= 1u;
            v120 = (unsigned __int16 *)(v86 + v53);
            v130 = (unsigned __int16 *)(v86 + v53);
          }
          if ( (v45 & 0x40) != 0 )
          {
            v62 = v54 + v53;
            *(_DWORD *)v62 = 851984;
            *(_WORD *)(v62 + 6) = 8;
            *(_WORD *)(v62 + 4) = *(_WORD *)(v54 + v53 + 4) & 0xFFFE;
            *(_WORD *)(v62 + 4) = 0;
            v165 = KeGetCurrentThread();
            ProcessStartKey = PsGetProcessStartKey((__int64)v165->ApcState.Process);
            *(_QWORD *)(CurrentThread + 8) = ProcessStartKey;
            *(_WORD *)(v53 + 4) |= 1u;
            v54 = (unsigned int)(v65 + 16);
            v117 = v54;
            if ( v64 )
              *(_WORD *)(v64 + 4) |= 1u;
            v22 = CurrentThread;
            v120 = (unsigned __int16 *)CurrentThread;
            v130 = (unsigned __int16 *)CurrentThread;
            v46 = v116;
          }
          if ( (v45 & 0x80u) != 0 )
          {
            v66 = (unsigned __int16 *)(v54 + v53);
            *(_DWORD *)v66 = 655376;
            v66[3] = 8;
            v66[2] = *(_WORD *)(v54 + v53 + 4) & 0xFFFE;
            v66[2] = 0;
            if ( (v114 & 0x10) != 0 || (EtwpCreateEventKey(&v145), v114 |= 0x10u, !v154) )
            {
              v67 = v145;
            }
            else
            {
              v67 = v145;
              *v154 = v145;
            }
            *((_QWORD *)v66 + 1) = v67;
            *(_WORD *)(v53 + 4) |= 1u;
            LODWORD(v54) = v54 + 16;
            v117 = v54;
            if ( v22 )
              *(_WORD *)(v22 + 4) |= 1u;
            v22 = (__int64)v66;
            v120 = v66;
            v130 = v66;
          }
          if ( (v45 & 4) != 0 )
          {
            v140 = (unsigned __int16 *)(v53 + (unsigned int)v54);
            v85 = (unsigned __int16 *)v141;
            memmove(v140, v141, *(unsigned __int16 *)v141);
            *(_WORD *)(v53 + 4) |= 1u;
            LODWORD(v54) = *v85 + v117;
            v117 = v54;
            if ( v120 )
              v120[2] |= 1u;
            v22 = (__int64)v140;
            v120 = v140;
            v130 = v140;
          }
          if ( (v45 & 8) != 0 )
          {
            v68 = (unsigned __int16 *)(v53 + (unsigned int)v54);
            *(_DWORD *)v68 = 1179672;
            v68[3] = 16;
            v68[2] &= ~1u;
            v68[2] = 0;
            *((_QWORD *)v68 + 2) = ListEntry;
            *((_QWORD *)v68 + 1) = *((_QWORD *)v141 + 1);
            *(_WORD *)(v53 + 4) |= 1u;
            LODWORD(v54) = v54 + 24;
            v117 = v54;
            if ( v22 )
              *(_WORD *)(v22 + 4) |= 1u;
            v120 = v68;
            v130 = v68;
          }
          else
          {
            v68 = v120;
          }
          if ( (v45 & 0x20) != 0 )
          {
            v69 = (unsigned __int16 *)(v53 + (unsigned int)v54);
            memmove(v69, v143, *(unsigned __int16 *)v143);
            *(_WORD *)(v53 + 4) |= 1u;
            LODWORD(v54) = *(unsigned __int16 *)v143 + v117;
            v117 = v54;
            if ( v68 )
              v68[2] |= 1u;
            v120 = v69;
            v130 = v69;
          }
          else
          {
            v69 = v120;
          }
        }
        else
        {
          v69 = 0LL;
        }
        v70 = v125;
        if ( v125 )
        {
          v71 = (unsigned __int16 *)(v53 + (unsigned int)v54);
          v140 = v71;
          v72 = (v125 + 15) & 0xFFF8;
          *v71 = v72;
          v71[1] = 12;
          v71[3] = v70;
          v71[2] &= ~1u;
          v71[2] = 0;
          v73 = v72 - v70 - 8;
          v74 = v71 + 4;
          v75 = v70;
          memmove(v71 + 4, Src, v70);
          memset_0((char *)v74 + v75, 0, v73);
          v53 = v149;
          *(_WORD *)(v149 + 4) |= 1u;
          v69 = v140;
          LODWORD(v54) = *v140 + v117;
          v117 = v54;
          if ( v120 )
            v120[2] |= 1u;
          v130 = v69;
        }
        if ( v122 )
        {
          v76 = (unsigned __int16 *)(v53 + (unsigned int)v54);
          v77 = v121;
          v78 = (v121 + 15) & 0xFFF8;
          *v76 = v78;
          v76[1] = 11;
          v76[3] = v77;
          v76[2] &= ~1u;
          v76[2] = 0;
          v142 = v76 + 4;
          v161 = (char *)v76 + v77 + 8;
          memset_0(v161, 0, (unsigned __int16)(v78 - v77 - 8));
          *(_WORD *)(v53 + 4) |= 1u;
          LODWORD(v54) = *v76 + v117;
          v117 = v54;
          if ( v69 )
            v69[2] |= 1u;
        }
        v79 = 0;
        while ( 1 )
        {
          v139 = v79;
          if ( v79 >= a10 )
            break;
          v80 = *(unsigned int *)(v128 + 16LL * v79 + 8);
          v26 = *(_QWORD *)(v128 + 16LL * v79);
          if ( v124 )
          {
            v81 = *(_BYTE *)(v128 + 16LL * v79 + 12);
            v46 = v116;
          }
          else
          {
            v81 = 0;
          }
          if ( v81 )
          {
            v82 = v81 - 1;
            if ( v82 )
            {
              if ( v82 == 2 )
              {
                if ( (_DWORD)v80 == 8 )
                {
                  if ( v26 + 8 < v26 || v26 + 8 > 0x7FFFFFFF0000LL )
                    v46 = v116;
                  v136 = *(_QWORD *)v26;
                }
                ++v79;
                LODWORD(v54) = v117;
              }
              else
              {
                ++v79;
                LODWORD(v54) = v117;
              }
            }
            else
            {
              v22 = (__int64)v142;
              if ( !v142 || (char *)v142 + v80 < v142 || (char *)v142 + v80 > v161 || !v122 )
                goto LABEL_135;
              if ( (_DWORD)v80 && (v80 + v26 < v26 || v80 + v26 > 0x7FFFFFFF0000LL) )
              {
                v46 = v116;
                v22 = (__int64)v142;
              }
              memmove((void *)v22, (const void *)v26, *(unsigned int *)(v128 + 16LL * v79 + 8));
              v142 = (char *)v142 + v80;
              --v122;
              ++v79;
              LODWORD(v54) = v117;
            }
          }
          else
          {
            v22 = v53 + (unsigned int)v54;
            if ( (int)v80 + (int)v54 < (unsigned int)v54 )
            {
              v117 = -1;
LABEL_135:
              v118 = -1073741820;
              *(_DWORD *)v53 = v46 | 0xC00D0000;
              *(_QWORD *)(v53 + 16) = v136;
              v19 = v128;
              v33 = v131;
              v34 = v129;
              v24 = 0x140000000uLL;
              goto LABEL_22;
            }
            v117 = v80 + v54;
            if ( (int)v80 + (int)v54 > v46 )
              goto LABEL_135;
            v166 = KeGetCurrentThread();
            v134 = v166->PreviousMode;
            memmove((void *)(v53 + (unsigned int)v54), (const void *)v26, v80);
            v46 = v116;
            ++v79;
            LODWORD(v54) = v117;
          }
        }
        if ( v156 )
          *(_DWORD *)(v156 + 4LL * (v132 >> 5)) |= 1 << (v132 & 0x1F);
        *(_QWORD *)(v53 + 16) = v136;
        v89 = v151;
        *(_DWORD *)(v53 + 56) = v151->SchedulerApc.SpareLong0;
        *(_DWORD *)(v53 + 60) = v89->UserTime;
        *(_DWORD *)(v53 + 8) = v89[1].CurrentRunTime;
        *(_DWORD *)(v53 + 12) = v89[1].CycleTime;
        v90 = v126;
        if ( (*(_DWORD *)(v126 + 12) & 0x80000) != 0
          && (!KdPitchDebugger && !(_BYTE)KdDebuggerNotPresent || KdEventLoggingPresent) )
        {
          EtwpSendTraceEvent(v126, (__int64)&v162);
        }
        v18 = v144;
        v19 = v128;
        v24 = 0x140000000uLL;
        if ( *(_QWORD *)(v90 + 1552) )
        {
          EtwpInvokeEventCallback(v90, (__int64 *)&v162);
          goto LABEL_10;
        }
      }
      else
      {
        v96 = 0;
        v97 = 0LL;
        if ( v46 > 0xFFF8 )
        {
          v98 = -1073741675;
        }
        else
        {
          v98 = -1073741801;
          if ( v46 > *(_DWORD *)(v126 + 8) )
            v98 = -2147483643;
        }
        v19 = v128;
        if ( v122 )
        {
          v96 = a10;
          v97 = (void **)v128;
        }
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(
            (_QWORD *)(v137 + 40),
            (__int16 *)(v129 + 40),
            (unsigned __int16 *)(v126 + 136),
            a5,
            v98,
            v96,
            v97,
            1,
            1);
        v99 = v118;
        if ( v118 >= 0 )
        {
          if ( (*(_DWORD *)(v126 + 12) & 0x8000000) == 0 )
            v99 = v98;
          v118 = v99;
        }
        v33 = v131;
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)((char *)v120 + *(_QWORD *)(v131 + 448)),
          1u);
        v18 = v144;
        v24 = 0x140000000uLL;
        if ( v98 == -1073741675 )
        {
          v118 = -1073741675;
          v24 = 0x140000000uLL;
          goto LABEL_21;
        }
      }
    }
    v33 = v131;
    if ( v43 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v42 + *(_QWORD *)(v131 + 448)), 1u);
  }
  while ( v132 != 3 );
  v105 = -1073741816;
  v26 = 3221226238LL;
  if ( *(_DWORD *)(v33 + 4068) )
    v105 = -1073741058;
  v118 = v105;
  v24 = 0x140000000uLL;
LABEL_21:
  v34 = v129;
LABEL_22:
  if ( (v114 & 8) != 0 )
  {
    v35 = *(_QWORD *)(v21 + 24);
    if ( v35 && (*(_BYTE *)(v35 + 7) & 2) != 0 )
      KeBugCheckEx(0x11Du, 0xAuLL, v35, v21, 0LL);
    v36 = *(unsigned int *)(v21 + 16);
    if ( (_DWORD)v36 == -1 )
    {
      _InterlockedDecrement(&dword_140E28C5C);
      v38 = &EtwpStackLookAsideList;
    }
    else
    {
      if ( (unsigned int)v36 >= (unsigned int)KeNumberProcessors_0 )
      {
        v37 = 0LL;
      }
      else
      {
        _mm_lfence();
        v37 = *(_QWORD *)(v24 + 8 * v36 + 16546880);
      }
      v38 = (_SLIST_HEADER *)(*(_QWORD *)(v37 + 35752) + 384LL);
    }
    RtlpInterlockedPushEntrySList(v38, (PSLIST_ENTRY)v21);
  }
  if ( v118 < 0 )
  {
    EtwpFailLogging(a8, a9, v137, (__int64)v167, v115, 0, v118, v34 + 40, 1, a10, v19, 1);
  }
  else
  {
    for ( i = 0; i < v168; v20 = i )
    {
      v91 = (unsigned int **)&v167[3 * v20];
      v92 = v91[2];
      v93 = (signed __int64 *)v91[3];
      _m_prefetchw(v93);
      v94 = *v93;
      while ( ((unsigned __int64)v92 ^ v94) < 0xF )
      {
        v95 = v94;
        v94 = _InterlockedCompareExchange64(v93, v94 + 1, v94);
        if ( v95 == v94 )
          goto LABEL_186;
      }
      _InterlockedDecrement((volatile signed __int32 *)v91[2] + 3);
LABEL_186:
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v33 + 448) + 8LL * **v91), 1u);
      ++i;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)v151, v26, CurrentThread, v22);
  return (unsigned int)v118;
}
