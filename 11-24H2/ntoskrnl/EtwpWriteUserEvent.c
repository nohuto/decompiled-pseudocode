/*
 * XREFs of EtwpWriteUserEvent @ 0x140AD78A0
 * Callers:
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140235480 (RtlpGetStackLimits.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PsGetCurrentProcessSessionId @ 0x1402BAD30 (PsGetCurrentProcessSessionId.c)
 *     EtwpReserveTraceBuffer @ 0x1402D0980 (EtwpReserveTraceBuffer.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1403DD150 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpDereferenceStackEntry @ 0x1403DEC00 (EtwpDereferenceStackEntry.c)
 *     DecodeProviderTraits @ 0x1403F8CC0 (DecodeProviderTraits.c)
 *     EtwpFailLogging @ 0x1403FABA0 (EtwpFailLogging.c)
 *     EtwpTraceLostEvent @ 0x1403FAEA8 (EtwpTraceLostEvent.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405330 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x140411780 (EtwpReleaseStackLookasideListEntry.c)
 *     EtwpCreateEventKey @ 0x140425E30 (EtwpCreateEventKey.c)
 *     EtwpGetStackLookasideListEntry @ 0x1404364B0 (EtwpGetStackLookasideListEntry.c)
 *     PsGetProcessStartKey @ 0x140447F60 (PsGetProcessStartKey.c)
 *     EtwpApplyLevelKwFilter @ 0x140455B40 (EtwpApplyLevelKwFilter.c)
 *     EtwpSendTraceEvent @ 0x1404A70B8 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404A71B4 (EtwpInvokeEventCallback.c)
 *     EtwpGetCrimsonStackKey @ 0x1404C5C9C (EtwpGetCrimsonStackKey.c)
 *     EtwpApplyEventNameFilter @ 0x1404ED680 (EtwpApplyEventNameFilter.c)
 *     EtwpIsEventNameFilterEnabled @ 0x1404EDA40 (EtwpIsEventNameFilterEnabled.c)
 *     RtlCopyFromUser @ 0x1404F96D8 (RtlCopyFromUser.c)
 *     Feature_1345841464__private_IsEnabledDeviceUsageNoInline @ 0x14064D6E8 (Feature_1345841464__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x14064D73C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x1406FA06C (RtlReadULong64FromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14098FEE0 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x1409A8BD0 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x140A419F0 (EtwpApplyStackWalkFilterOnUserEvent.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140AA71D0 (EtwpGetPsmKeyExtendedHeaderItem.c)
 */

__int64 __fastcall EtwpWriteUserEvent(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        int a5,
        __int64 a6,
        _OWORD *a7,
        unsigned __int8 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int16 a14,
        void *a15,
        unsigned __int64 *a16)
{
  __int64 v18; // r14
  unsigned int v19; // r13d
  char v20; // si
  __int64 v21; // r12
  __int64 v23; // r11
  __int64 v24; // rdi
  unsigned int v25; // r10d
  __int64 v26; // r11
  __int64 v27; // r8
  __int64 v28; // rbx
  unsigned __int8 v29; // r9
  bool v30; // zf
  unsigned int v31; // edx
  __int64 v32; // rsi
  int v33; // ecx
  unsigned __int8 v34; // al
  _KPROCESS *Process; // rcx
  __int64 v36; // rdx
  unsigned int v37; // r14d
  int v38; // edx
  char v39; // al
  unsigned __int64 v40; // rbx
  char v41; // al
  __int64 v42; // rbx
  __int64 v43; // r13
  int IsEnabledDeviceUsageNoInline; // eax
  int v45; // ecx
  int v46; // edi
  unsigned int v47; // r15d
  int v48; // ecx
  __int64 v49; // rbx
  __int64 v50; // rdx
  int v51; // edx
  bool v52; // al
  char v53; // bl
  PSLIST_ENTRY StackLookasideListEntry; // rax
  char v55; // bl
  unsigned __int16 *v56; // rbx
  char StackLimits; // al
  __int64 v58; // rcx
  void *v59; // rsp
  _OWORD *v60; // rsi
  unsigned int v61; // edx
  __int64 v62; // r8
  unsigned int v63; // r14d
  unsigned int v64; // r12d
  void **v65; // rsi
  unsigned int v66; // ebx
  char v67; // al
  unsigned int v68; // eax
  int v69; // ebx
  int v70; // eax
  unsigned int v71; // eax
  __int64 v72; // r12
  _SLIST_ENTRY *v73; // rbx
  __int64 v74; // r14
  unsigned int v75; // edi
  void **v76; // rsi
  int v77; // ebx
  int v78; // ecx
  int v79; // eax
  int v80; // eax
  int v81; // ecx
  __int64 v82; // r14
  unsigned __int16 *v83; // rsi
  _OWORD *v84; // rax
  __int128 v85; // xmm0
  void *v86; // rcx
  struct _LIST_ENTRY *v87; // rcx
  __int16 v88; // r14
  unsigned __int16 v89; // r14
  __int64 v90; // rdx
  int v91; // ebx
  int v92; // ebx
  int v93; // ebx
  __int64 v94; // r14
  unsigned int v95; // ebx
  __int64 v96; // r8
  unsigned __int64 ProcessStartKey; // rax
  unsigned __int16 *v98; // r8
  int v99; // edx
  int v100; // r10d
  __int64 v101; // r9
  unsigned __int64 v102; // rax
  unsigned __int16 *v103; // rbx
  _QWORD *v104; // rdx
  __int64 v105; // rcx
  unsigned __int16 *v106; // rbx
  unsigned __int16 *v107; // rdi
  unsigned int v108; // ecx
  unsigned __int16 *v109; // r13
  unsigned __int16 v110; // r14
  unsigned __int16 v111; // r14
  __int64 v112; // rbx
  unsigned __int16 *v113; // rbx
  __int64 v114; // rcx
  unsigned __int16 v115; // dx
  unsigned __int16 *v116; // rdi
  unsigned int v117; // esi
  size_t v118; // rbx
  signed __int64 *v119; // rdx
  unsigned __int8 v120; // cl
  int v121; // ecx
  void *v122; // r9
  unsigned int v123; // eax
  struct _KTHREAD *v124; // r9
  int v125; // eax
  unsigned int **v126; // r9
  unsigned __int64 v127; // r8
  signed __int64 *v128; // rdx
  signed __int64 v129; // rax
  signed __int64 v130; // rtt
  struct _KTHREAD *v131; // rcx
  _BYTE v132[384]; // [rsp+40h] [rbp-1E0h] BYREF
  char v133; // [rsp+220h] [rbp+0h]
  unsigned __int16 v134; // [rsp+228h] [rbp+8h]
  int v135; // [rsp+230h] [rbp+10h]
  int v136; // [rsp+234h] [rbp+14h]
  char v137; // [rsp+238h] [rbp+18h]
  int v138; // [rsp+23Ch] [rbp+1Ch]
  int v139; // [rsp+240h] [rbp+20h]
  unsigned int i; // [rsp+244h] [rbp+24h]
  __int64 v141; // [rsp+248h] [rbp+28h]
  int v142; // [rsp+250h] [rbp+30h]
  unsigned __int16 v143; // [rsp+254h] [rbp+34h] BYREF
  __int16 v144; // [rsp+258h] [rbp+38h]
  unsigned int v145; // [rsp+25Ch] [rbp+3Ch]
  __int64 v146; // [rsp+260h] [rbp+40h]
  unsigned int v147; // [rsp+268h] [rbp+48h]
  unsigned __int16 v148; // [rsp+26Ch] [rbp+4Ch]
  __int64 v149; // [rsp+270h] [rbp+50h]
  unsigned __int16 *v150; // [rsp+278h] [rbp+58h]
  PSLIST_ENTRY ListEntry; // [rsp+280h] [rbp+60h] BYREF
  char v152; // [rsp+288h] [rbp+68h]
  char PreviousMode; // [rsp+28Ah] [rbp+6Ah]
  char v155; // [rsp+28Bh] [rbp+6Bh]
  char v156; // [rsp+28Ch] [rbp+6Ch]
  int v157; // [rsp+290h] [rbp+70h]
  __int64 v158; // [rsp+298h] [rbp+78h]
  __int64 v159; // [rsp+2A0h] [rbp+80h]
  unsigned __int16 *v160; // [rsp+2A8h] [rbp+88h]
  signed __int64 v161; // [rsp+2B0h] [rbp+90h] BYREF
  __int64 v162; // [rsp+2B8h] [rbp+98h]
  void *v163; // [rsp+2C0h] [rbp+A0h]
  __int64 v164; // [rsp+2C8h] [rbp+A8h]
  void *Src; // [rsp+2D0h] [rbp+B0h]
  __int64 v166; // [rsp+2D8h] [rbp+B8h]
  unsigned int v167; // [rsp+2E0h] [rbp+C0h]
  unsigned int v168; // [rsp+2E4h] [rbp+C4h]
  unsigned __int64 v169; // [rsp+2E8h] [rbp+C8h] BYREF
  unsigned int v170; // [rsp+2F0h] [rbp+D0h]
  __int64 v171; // [rsp+2F8h] [rbp+D8h] BYREF
  __int128 *v172; // [rsp+300h] [rbp+E0h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+308h] [rbp+E8h]
  void *v174; // [rsp+310h] [rbp+F0h]
  __int64 v175; // [rsp+318h] [rbp+F8h]
  ULONG_PTR BugCheckParameter3; // [rsp+320h] [rbp+100h]
  struct _KTHREAD *CurrentThread; // [rsp+328h] [rbp+108h]
  _OWORD *v178; // [rsp+330h] [rbp+110h]
  __int64 v179; // [rsp+338h] [rbp+118h] BYREF
  unsigned __int64 *v180; // [rsp+340h] [rbp+120h]
  void *v181; // [rsp+348h] [rbp+128h]
  char *v182; // [rsp+350h] [rbp+130h]
  __int64 v183; // [rsp+358h] [rbp+138h]
  __int64 v184; // [rsp+360h] [rbp+140h]
  __int128 v185; // [rsp+368h] [rbp+148h] BYREF
  __int64 v186; // [rsp+378h] [rbp+158h]
  int v188; // [rsp+384h] [rbp+164h]
  int v190; // [rsp+38Ch] [rbp+16Ch]
  void *ULong64FromUser; // [rsp+390h] [rbp+170h]
  _OWORD v192[48]; // [rsp+3A0h] [rbp+180h] BYREF
  unsigned int v193; // [rsp+6A0h] [rbp+480h]
  _OWORD v194[5]; // [rsp+6B0h] [rbp+490h] BYREF

  v148 = a3;
  v158 = a1;
  v164 = a13;
  v183 = a1;
  v134 = a2;
  v159 = a6;
  v18 = a11;
  v141 = a11;
  v184 = a11;
  v166 = a12;
  v181 = a15;
  v180 = a16;
  v19 = 0;
  v139 = 0;
  memset_0(v192, 0, 0x308uLL);
  i = 0;
  memset(v194, 0, sizeof(v194));
  v163 = 0LL;
  BugCheckParameter3 = 0LL;
  v174 = 0LL;
  v143 = 0;
  v172 = 0LL;
  Src = 0LL;
  v169 = 0LL;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  v144 = a14 & 0x100;
  v20 = 0;
  v21 = 1LL;
  ListEntry = 0LL;
  v147 = 0;
  if ( !a11 )
  {
    if ( !a10 )
      goto LABEL_5;
    return 3221225485LL;
  }
  if ( !a10 )
    return 3221225485LL;
LABEL_5:
  if ( a10 > 0x80 )
    return 3221225485LL;
  v23 = v164;
  if ( !v164 )
    v23 = a1;
  v164 = v23;
  v133 = 0;
  v24 = *(_QWORD *)(a1 + 648);
  v149 = v24;
  v175 = v24;
  if ( v180 && *v180 )
  {
    v169 = *v180;
    v133 = 16;
  }
  DecodeProviderTraits((unsigned __int16 *)v181, (a14 & 0x200) != 0, &v143, &v172);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v134 &= ~a4;
  v27 = a9;
  v28 = v166;
  v29 = a8;
  while ( 1 )
  {
    while ( 1 )
    {
      v30 = !_BitScanForward(&v31, v134);
      i = v31;
      if ( v30 )
        goto LABEL_292;
      v185 = 0LL;
      v186 = 0LL;
      v161 = 0LL;
      v135 = 80;
      v145 = 0;
      v142 = 0;
      v160 = 0LL;
      v182 = 0LL;
      LOBYTE(v26) = 0;
      v136 = v26;
      v137 = 0;
      v21 = 1LL;
      v146 = 1LL;
      v162 = 1LL;
      ListEntry = 0LL;
      v134 &= v134 - 1;
      v26 = v164;
      v32 = v164 + 32 * (v31 + 4LL);
      if ( !v28
        || (v33 = *(_DWORD *)(v28 + 4LL * (*(unsigned __int16 *)(v32 + 6) >> 5)),
            !_bittest(&v33, *(_BYTE *)(v32 + 6) & 0x1F)) )
      {
        if ( *(_DWORD *)v32 )
        {
          v34 = *(_BYTE *)(v32 + 4);
          if ( (v29 <= v34 || !v34)
            && ((*(_DWORD *)(v32 + 8) & 0x40) != 0 && !v27
             || (v27 & *(_QWORD *)(v32 + 16)) != 0 && (v27 & *(_QWORD *)(v32 + 24)) == *(_QWORD *)(v32 + 24)) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( (a5 & 2) == 0 && SLODWORD(Process[1].DirectoryTableBase) >= 0 )
              break;
            if ( (*(_DWORD *)(v32 + 8) & 0x200) == 0 )
              break;
          }
        }
      }
LABEL_14:
      v20 = v136;
    }
    v36 = *(_QWORD *)(v164 + 640);
    if ( v36 )
    {
      v37 = i;
      v38 = *(_DWORD *)(104LL * i + v36);
      if ( (v38 & 0x80000200) == 0x80000200 || (v38 & 0x80000100) == 0x80000100 )
      {
        v39 = 1;
        goto LABEL_34;
      }
    }
    else
    {
      v37 = i;
    }
    v39 = 0;
LABEL_34:
    v40 = v141;
    if ( v39 )
    {
      v41 = EtwpApplyEventIdPayloadFilterOnUserEvent(v164, v37, v148, v159, v25, v141);
      v27 = a9;
      v29 = a8;
      if ( !v41 )
        goto LABEL_54;
      v26 = v164;
    }
    if ( v144
      && EtwpIsEventNameFilterEnabled(v26, v37, 0, v29, v27, 0)
      && !EtwpApplyEventNameFilter(v164, v37, a10, v40, 1, 0, a8, a9, 0) )
    {
      goto LABEL_53;
    }
    v42 = *(unsigned __int16 *)(v32 + 6);
    v147 = v42;
    v157 = v42;
    v43 = 8 * v42;
    if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v24 + 704) + 8 * v42), 1u) )
    {
      if ( (unsigned int)v42 >= *(_DWORD *)(v24 + 16) )
      {
        v146 = 1LL;
        v162 = 1LL;
      }
      else
      {
        _mm_lfence();
        v21 = *(_QWORD *)(*(_QWORD *)(v24 + 712) + 8 * v42);
        v146 = v21;
        v162 = v21;
        v37 = i;
      }
      LOBYTE(v26) = 1;
      v136 = v26;
      v137 = 1;
    }
    else
    {
      LODWORD(v26) = v136;
    }
    if ( (v21 & 1) != 0 )
    {
      if ( (_BYTE)v26 )
      {
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v24 + 704) + 8 * v42), 1u);
        IsEnabledDeviceUsageNoInline = Feature_1345841464__private_IsEnabledDeviceUsageNoInline();
        LODWORD(v26) = (unsigned __int8)v136;
        v19 = 0;
        if ( IsEnabledDeviceUsageNoInline )
          LODWORD(v26) = 0;
        v136 = v26;
      }
      else
      {
        v19 = 0;
      }
      if ( (_DWORD)v42 != 3 )
      {
LABEL_53:
        v29 = a8;
        v27 = a9;
LABEL_54:
        v25 = a10;
        v18 = v141;
        v28 = v166;
        goto LABEL_14;
      }
      v45 = -1073741816;
      if ( *(_DWORD *)(v24 + 4340) )
        v45 = -1073741058;
      v139 = v45;
LABEL_291:
      v20 = v136;
      v18 = v141;
      goto LABEL_292;
    }
    v46 = 0;
    if ( a7 )
    {
      v47 = 104;
      v135 = 104;
      v46 = 16;
    }
    else
    {
      v47 = v135;
    }
    v48 = *(_DWORD *)(v32 + 8);
    if ( (v48 & 0xFFFFFF9F) != 0 )
    {
      if ( (v48 & 0x800) != 0 && Flink && Flink != (struct _LIST_ENTRY *)EtwpHostSiloState )
      {
        v46 |= 0x100u;
        v47 += (LOWORD(Flink[281].Flink) + 15) & 0xFFFFFFF8;
        v135 = v47;
      }
      if ( (v48 & 1) != 0 )
      {
        if ( (v133 & 2) == 0 )
        {
          EtwpGetSidExtendedHeaderItem((__int64)v194);
          v133 |= 2u;
          v48 = *(_DWORD *)(v32 + 8);
        }
        v46 |= 2u;
        v47 += LOWORD(v194[0]);
        v135 = v47;
      }
      if ( (v48 & 2) != 0 )
      {
        v46 |= 1u;
        v47 += 16;
        v135 = v47;
      }
      if ( (v48 & 0x80u) != 0 )
      {
        v46 |= 0x40u;
        v47 += 16;
        v135 = v47;
      }
      if ( (v48 & 0x100) != 0 )
      {
        v46 |= 0x80u;
        v47 += 16;
        v135 = v47;
      }
      if ( (v48 & 4) != 0 )
      {
        v49 = v164;
        v50 = *(_QWORD *)(v164 + 640);
        v52 = 0;
        if ( v50 )
        {
          v51 = *(_DWORD *)(104LL * v37 + v50);
          if ( (v51 & 0x80001000) == 0x80001000 || (v51 & 0x80002000) == 0x80002000 || (v51 & 0x80004000) == 0x80004000 )
            v52 = 1;
        }
        if ( !v52
          || EtwpApplyLevelKwFilter(v164, v37, a8, a9, 1)
          && EtwpApplyStackWalkFilterOnUserEvent(v159, v49, v37)
          && EtwpApplyEventNameFilter(v49, v37, a10, v141, 1, 0, a8, a9, 1) )
        {
          v53 = v133;
          if ( (v133 & 1) == 0 )
          {
            StackLookasideListEntry = EtwpGetStackLookasideListEntry();
            BugCheckParameter3 = (ULONG_PTR)StackLookasideListEntry;
            if ( StackLookasideListEntry )
            {
              v55 = v53 | 8;
              v133 = v55;
              v163 = &StackLookasideListEntry[2];
              if ( !EtwpGetStackExtendedHeaderItem(
                      v21,
                      (__int64)CurrentThread,
                      0,
                      (__int64)StackLookasideListEntry,
                      0,
                      0LL) )
              {
                EtwpReleaseStackLookasideListEntry(BugCheckParameter3);
                v133 = v55 & 0xF7;
                v163 = 0LL;
              }
            }
            v133 |= 1u;
          }
          v56 = (unsigned __int16 *)v163;
          if ( v163 )
          {
            if ( (*(_DWORD *)(v21 + 820) & 1) != 0 && EtwpGetCrimsonStackKey(v21, (__int64)v163, &ListEntry) )
            {
              v46 |= 8u;
              v47 += 24;
            }
            else
            {
              v46 |= 4u;
              v47 += *v56;
            }
            v135 = v47;
          }
        }
      }
      if ( (*(_DWORD *)(v32 + 8) & 8) != 0 )
      {
        if ( (v133 & 4) == 0 )
        {
          v179 = 0LL;
          v171 = 0LL;
          StackLimits = RtlpGetStackLimits((__int64)&v171, (__int64)&v179);
          v58 = v171;
          if ( !StackLimits )
            v58 = 0LL;
          v171 = v58;
          if ( (unsigned __int64)&v179 - v58 > 0x1E0 )
          {
            v59 = alloca(480LL);
            v174 = v132;
            EtwpGetPsmKeyExtendedHeaderItem((__int64)v132);
          }
          v133 |= 4u;
        }
        if ( v174 )
        {
          v46 |= 0x20u;
          v47 += *(unsigned __int16 *)v174;
          v135 = v47;
        }
      }
    }
    v60 = &v192[3 * v193];
    v178 = v60;
    v61 = a10;
    if ( a10 )
      break;
LABEL_146:
    if ( v142 )
    {
      if ( (unsigned int)Feature_1345841464__private_IsEnabledDeviceUsageNoInline() )
      {
        v68 = (v145 + 15) & 0xFFFFFFF8;
        if ( v68 > 0xFFFF )
          goto LABEL_288;
      }
      else
      {
        v68 = (v145 + 15) & 0xFFFFFFF8;
      }
      v47 += v68;
      v135 = v47;
    }
    v69 = v143;
    if ( v143 )
    {
      v30 = (unsigned int)Feature_1345841464__private_IsEnabledDeviceUsageNoInline() == 0;
      v70 = v69 + 15;
      if ( v30 )
      {
        v71 = v70 & 0xFFFFFFF8;
      }
      else
      {
        v71 = v70 & 0xFFFFFFF8;
        if ( v71 > 0xFFFF )
        {
LABEL_288:
          v125 = v139;
          if ( v139 >= 0 )
            v125 = -1073741675;
          v139 = v125;
          v134 |= 1 << v37;
          v19 = 0;
          v24 = v149;
          goto LABEL_291;
        }
      }
      v47 += v71;
      v135 = v47;
    }
    *((_DWORD *)v60 + 10) = v47;
    v72 = EtwpReserveTraceBuffer((unsigned int *)v21, v47, (unsigned __int64 *)&v185, &v161, 0);
    v178 = (_OWORD *)v72;
    v73 = ListEntry;
    v74 = v146;
    if ( ListEntry )
    {
      EtwpDereferenceStackEntry(ListEntry, *(_SLIST_HEADER **)(v146 + 1056));
      if ( (unsigned int)Feature_1345841464__private_IsEnabledDeviceUsageNoInline() )
        v73 = 0LL;
      ListEntry = v73;
    }
    if ( v72 )
    {
      *(_QWORD *)v60 = v74;
      *((_QWORD *)v60 + 1) = v72;
      v60[1] = v185;
      *((_QWORD *)v60 + 4) = v186;
      ++v193;
      v80 = Feature_1345841464__private_IsEnabledDeviceUsageNoInline();
      v81 = (unsigned __int8)v136;
      v19 = 0;
      if ( v80 )
        v81 = 0;
      v136 = v81;
      v137 = v81;
      v168 = 0;
      v82 = 80LL;
      v138 = 80;
      v83 = 0LL;
      v150 = 0LL;
      v84 = (_OWORD *)v159;
      *(_OWORD *)v72 = *(_OWORD *)v159;
      *(_OWORD *)(v72 + 16) = v84[1];
      *(_OWORD *)(v72 + 32) = v84[2];
      *(_OWORD *)(v72 + 48) = v84[3];
      *(_OWORD *)(v72 + 64) = v84[4];
      if ( !(unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v172 )
        {
LABEL_194:
          v85 = *v172;
          *(_WORD *)(v72 + 4) |= 0x80u;
        }
        else
        {
          v85 = *(_OWORD *)(v158 + 40);
        }
LABEL_195:
        *(_OWORD *)(v72 + 24) = v85;
        goto LABEL_196;
      }
      if ( v172 )
      {
        if ( !Src )
          goto LABEL_194;
      }
      else if ( !Src )
      {
        v85 = *(_OWORD *)(v158 + 40);
        goto LABEL_195;
      }
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode && ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v155 = KeGetCurrentThread()->PreviousMode;
      v86 = (void *)(v72 + 24);
      if ( v155 )
        RtlCopyFromUser(v86, Src, 0x10uLL);
      else
        RtlCopyVolatileMemory(v86, Src, 0x10uLL);
      *(_WORD *)(v72 + 4) |= 0x80u;
      v47 = v135;
LABEL_196:
      *(_DWORD *)v72 = *((_DWORD *)&qword_140037FA8 + v148) | v47;
      v190 = Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline();
      if ( v190 && (a14 & 0x400) != 0 )
        *(_WORD *)(v72 + 4) |= 0x400u;
      if ( v46 )
      {
        if ( (v46 & 0x100) != 0 )
        {
          v83 = (unsigned __int16 *)(v72 + 80);
          v87 = Flink;
          v88 = (LOWORD(Flink[281].Flink) + 15) & 0xFFF8;
          *(_WORD *)(v72 + 80) = v88;
          *(_WORD *)(v72 + 82) = 16;
          *(_WORD *)(v72 + 86) = v87[281].Flink;
          *(_WORD *)(v72 + 84) &= ~1u;
          *(_WORD *)(v72 + 84) = 0;
          v89 = v88 - LOWORD(v87[281].Flink) - 8;
          memmove((void *)(v72 + 88), v87[280].Blink, LOWORD(v87[281].Flink));
          memset_0((void *)(v72 + 88 + LOWORD(Flink[281].Flink)), 0, v89);
          *(_WORD *)(v72 + 4) |= 1u;
          v82 = (unsigned int)*(unsigned __int16 *)(v72 + 80) + 80;
          v138 = *(unsigned __int16 *)(v72 + 80) + 80;
          v150 = (unsigned __int16 *)(v72 + 80);
        }
        if ( (v46 & 0x10) != 0 )
        {
          v90 = v82 + v72;
          *(_DWORD *)v90 = 65560;
          *(_WORD *)(v90 + 6) = 16;
          *(_WORD *)(v90 + 4) = *(_WORD *)(v82 + v72 + 4) & 0xFFFE;
          *(_WORD *)(v90 + 4) = 0;
          *(_OWORD *)(v90 + 8) = *a7;
          *(_WORD *)(v72 + 4) |= 1u;
          v82 = (unsigned int)(v82 + 24);
          v138 = v82;
          if ( v83 )
            v83[2] |= 1u;
          v83 = (unsigned __int16 *)v90;
          v150 = (unsigned __int16 *)v90;
        }
        if ( (v46 & 2) != 0 )
        {
          v82 += v72;
          v91 = LOWORD(v194[0]);
          memmove((void *)v82, v194, LOWORD(v194[0]));
          *(_WORD *)(v72 + 4) |= 1u;
          v92 = v91 + v138;
          v138 = v92;
          if ( v83 )
            v83[2] |= 1u;
          v83 = (unsigned __int16 *)v82;
          v150 = (unsigned __int16 *)v82;
          LODWORD(v82) = v92;
        }
        if ( (v46 & 1) != 0 )
        {
          v93 = v82;
          v94 = (unsigned int)v82 + v72;
          *(_DWORD *)v94 = 196624;
          *(_WORD *)(v94 + 6) = 4;
          *(_WORD *)(v94 + 4) &= ~1u;
          *(_WORD *)(v94 + 4) = 0;
          *(_DWORD *)(v94 + 8) = PsGetCurrentProcessSessionId();
          *(_WORD *)(v72 + 4) |= 1u;
          v95 = v93 + 16;
          v138 = v95;
          if ( v83 )
            v83[2] |= 1u;
          v83 = (unsigned __int16 *)v94;
          v150 = (unsigned __int16 *)v94;
        }
        else
        {
          v95 = v138;
        }
        LODWORD(v26) = 16;
        if ( (v46 & 0x40) != 0 )
        {
          v96 = v95 + v72;
          *(_DWORD *)v96 = 851984;
          *(_WORD *)(v96 + 6) = 8;
          *(_WORD *)(v96 + 4) &= ~1u;
          *(_WORD *)(v96 + 4) = 0;
          ProcessStartKey = PsGetProcessStartKey((__int64)KeGetCurrentThread()->ApcState.Process);
          *((_QWORD *)v98 + 1) = ProcessStartKey;
          *(_WORD *)(v72 + 4) |= 1u;
          LODWORD(v82) = v99 + 16;
          v138 = v99 + 16;
          if ( v83 )
            v83[2] |= 1u;
          v83 = v98;
          v150 = v98;
          v47 = v135;
        }
        else
        {
          LODWORD(v82) = v138;
        }
        if ( (v46 & 0x80u) != 0 )
        {
          v100 = v82;
          v101 = (unsigned int)v82 + v72;
          *(_DWORD *)v101 = 655376;
          *(_WORD *)(v101 + 6) = 8;
          *(_WORD *)(v101 + 4) &= ~1u;
          *(_WORD *)(v101 + 4) = 0;
          if ( (v133 & 0x10) != 0 || (EtwpCreateEventKey(&v169), v133 |= 0x10u, !v180) )
          {
            v102 = v169;
          }
          else
          {
            v102 = v169;
            *v180 = v169;
          }
          *(_QWORD *)(v101 + 8) = v102;
          *(_WORD *)(v72 + 4) |= 1u;
          LODWORD(v82) = v100 + 16;
          v138 = v100 + 16;
          if ( v83 )
            v83[2] |= 1u;
          v83 = (unsigned __int16 *)v101;
          v150 = (unsigned __int16 *)v101;
        }
        if ( (v46 & 4) != 0 )
        {
          v103 = (unsigned __int16 *)(v72 + (unsigned int)v82);
          memmove(v103, v163, *(unsigned __int16 *)v163);
          *(_WORD *)(v72 + 4) |= 1u;
          v104 = v163;
          LODWORD(v82) = *(unsigned __int16 *)v163 + (_DWORD)v82;
          v138 = v82;
          if ( v83 )
            v83[2] |= 1u;
          v83 = v103;
          v150 = v103;
        }
        else
        {
          v104 = v163;
        }
        if ( (v46 & 8) != 0 )
        {
          v105 = v72 + (unsigned int)v82;
          *(_DWORD *)v105 = 1179672;
          *(_WORD *)(v105 + 6) = 16;
          *(_WORD *)(v105 + 4) &= ~1u;
          *(_WORD *)(v105 + 4) = 0;
          *(_QWORD *)(v105 + 16) = ListEntry;
          *(_QWORD *)(v105 + 8) = v104[1];
          *(_WORD *)(v72 + 4) |= 1u;
          LODWORD(v82) = v82 + 24;
          v138 = v82;
          if ( v83 )
            v83[2] |= 1u;
          v83 = (unsigned __int16 *)v105;
          v150 = (unsigned __int16 *)v105;
        }
        if ( (v46 & 0x20) != 0 )
        {
          v106 = (unsigned __int16 *)(v72 + (unsigned int)v82);
          v107 = (unsigned __int16 *)v174;
          memmove(v106, v174, *(unsigned __int16 *)v174);
          *(_WORD *)(v72 + 4) |= 1u;
          LODWORD(v82) = *v107 + (_DWORD)v82;
          v138 = v82;
          if ( v83 )
            v83[2] |= 1u;
          v83 = v106;
          v150 = v106;
        }
      }
      v108 = v143;
      if ( v143 )
      {
        v109 = (unsigned __int16 *)(v72 + (unsigned int)v82);
        v110 = (v143 + 15) & 0xFFF8;
        *v109 = v110;
        v109[1] = 12;
        v109[3] = v108;
        v109[2] &= ~1u;
        v109[2] = 0;
        v111 = v110 - v108 - 8;
        v112 = v108;
        memmove(v109 + 4, v181, v108);
        memset_0((char *)v109 + v112 + 8, 0, v111);
        *(_WORD *)(v72 + 4) |= 1u;
        LODWORD(v82) = *v109 + v138;
        v138 = v82;
        if ( v83 )
          v83[2] |= 1u;
        v83 = v109;
        v150 = v109;
        v19 = 0;
      }
      if ( v142 )
      {
        v113 = (unsigned __int16 *)(v72 + (unsigned int)v82);
        v114 = v145;
        v115 = (v145 + 15) & 0xFFF8;
        *v113 = v115;
        v113[1] = 11;
        v113[3] = v114;
        v113[2] &= ~1u;
        v113[2] = 0;
        v116 = v113 + 4;
        v160 = v113 + 4;
        v182 = (char *)v113 + v114 + 8;
        memset_0(v182, 0, (unsigned __int16)(v115 - v114 - 8));
        *(_WORD *)(v72 + 4) |= 1u;
        LODWORD(v82) = *v113 + (_DWORD)v82;
        v138 = v82;
        if ( v83 )
          v83[2] |= 1u;
      }
      else
      {
        v116 = v160;
      }
      v117 = 0;
      v168 = 0;
      v25 = a10;
      while ( v117 < v25 )
      {
        v118 = *(unsigned int *)(v141 + 16LL * v117 + 8);
        v119 = *(signed __int64 **)(v141 + 16LL * v117);
        if ( v144 )
        {
          v120 = *(_BYTE *)(v141 + 16LL * v117 + 12);
          v47 = v135;
          v116 = v160;
        }
        else
        {
          v120 = 0;
        }
        if ( v120 )
        {
          v121 = v120 - 1;
          if ( v121 )
          {
            if ( v121 == 2 )
            {
              if ( (_DWORD)v118 == 8 )
              {
                if ( (unsigned __int64)(v119 + 1) > 0x7FFFFFFF0000LL || v119 + 1 < v119 )
                {
                  v47 = v135;
                  v116 = v160;
                }
                v161 = *v119;
              }
              v168 = ++v117;
            }
            else
            {
              v168 = ++v117;
            }
          }
          else
          {
            if ( !v116 || (unsigned __int16 *)((char *)v116 + v118) < v116 || (char *)v116 + v118 > v182 || !v142 )
              goto LABEL_278;
            if ( (_DWORD)v118
              && ((unsigned __int64)v119 + v118 > 0x7FFFFFFF0000LL || (signed __int64 *)((char *)v119 + v118) < v119) )
            {
              v47 = v135;
              v116 = v160;
            }
            memmove(v116, v119, *(unsigned int *)(v141 + 16LL * v117 + 8));
            v116 = (unsigned __int16 *)((char *)v116 + v118);
            v160 = v116;
            --v142;
            v25 = a10;
            v168 = ++v117;
          }
        }
        else
        {
          v122 = (void *)(v72 + (unsigned int)v82);
          v123 = v118 + v82;
          if ( (int)v118 + (int)v82 < (unsigned int)v82 )
          {
            v138 = -1;
LABEL_278:
            v139 = -1073741820;
            *(_DWORD *)v72 = v47 | 0xC00D0000;
            *(_QWORD *)(v72 + 16) = v161;
            v21 = v146;
            v24 = v149;
            v18 = v141;
            v20 = v136;
            goto LABEL_292;
          }
          LODWORD(v82) = v118 + v82;
          v138 = v123;
          if ( v123 > v47 )
            goto LABEL_278;
          v156 = KeGetCurrentThread()->PreviousMode;
          memmove(v122, v119, v118);
          v47 = v135;
          v116 = v160;
          v25 = a10;
          v168 = ++v117;
        }
      }
      v28 = v166;
      if ( v166 )
        *(_DWORD *)(v166 + 4LL * (v147 >> 5)) |= 1 << (v147 & 0x1F);
      *(_QWORD *)(v72 + 16) = v161;
      v124 = CurrentThread;
      *(_DWORD *)(v72 + 56) = CurrentThread->SchedulerApc.SpareLong0;
      *(_DWORD *)(v72 + 60) = v124->UserTime;
      *(_DWORD *)(v72 + 8) = v124[1].CurrentRunTime;
      *(_DWORD *)(v72 + 12) = v124[1].CycleTime;
      v21 = v146;
      if ( (*(_DWORD *)(v146 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendTraceEvent(v146, (__int64)&v185);
        v25 = a10;
      }
      v24 = v149;
      v18 = v141;
      v20 = v136;
      v27 = a9;
      v29 = a8;
      if ( *(_QWORD *)(v21 + 1552) )
      {
        EtwpInvokeEventCallback(v21, (__int64 *)&v185);
        v25 = a10;
        v27 = a9;
        v29 = a8;
        goto LABEL_14;
      }
    }
    else
    {
      v75 = 0;
      v76 = 0LL;
      v21 = v146;
      if ( v47 <= 0xFFF8 )
      {
        v77 = -1073741801;
        if ( v47 > *(_DWORD *)(v146 + 8) )
          v77 = -2147483643;
      }
      else
      {
        v77 = -1073741675;
      }
      v18 = v141;
      if ( v142 )
      {
        v75 = a10;
        v76 = (void **)v141;
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
        EtwpTraceLostEvent(
          (_QWORD *)(v158 + 40),
          (__int16 *)(v159 + 40),
          (unsigned __int16 *)(v21 + 136),
          a5,
          v77,
          v75,
          v76,
          1,
          1);
      v78 = v139;
      if ( v139 >= 0 )
      {
        if ( (*(_DWORD *)(v21 + 12) & 0x8000000) == 0 )
          v78 = v77;
        v139 = v78;
      }
      v24 = v149;
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v149 + 704) + v43), 1u);
      v79 = Feature_1345841464__private_IsEnabledDeviceUsageNoInline();
      v20 = v136;
      v19 = 0;
      if ( v79 )
        v20 = 0;
      LODWORD(v26) = -1073741675;
      v30 = v77 == -1073741675;
      v28 = v166;
      if ( v30 )
      {
        v139 = -1073741675;
        goto LABEL_292;
      }
      v25 = a10;
      v27 = a9;
      v29 = a8;
    }
  }
  v167 = 0;
  v152 = KeGetCurrentThread()->PreviousMode;
  v62 = v141;
  if ( v152 && 16LL * a10 && (v141 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v63 = 0;
  v167 = 0;
  v47 = v135;
  while ( 2 )
  {
    if ( v63 >= v61 )
    {
      LOBYTE(v37) = i;
      v60 = v178;
      v21 = v146;
      goto LABEL_146;
    }
    v64 = v47;
    v65 = (void **)(v62 + 16LL * v63);
    v66 = *((_DWORD *)v65 + 2);
    v170 = v66;
    if ( v66 > 0xFFFF )
    {
      v139 = -2147483643;
      v134 |= 1 << i;
      if ( (unsigned int)Feature_1345841464__private_IsEnabledDeviceUsageNoInline() )
      {
        v24 = v149;
      }
      else
      {
        if ( ListEntry )
          EtwpDereferenceStackEntry(ListEntry, *(_SLIST_HEADER **)(v146 + 1056));
        v24 = v149;
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v149 + 704) + v43), 1u);
      }
      v21 = v146;
      v19 = 0;
      v18 = v141;
      v20 = v136;
      goto LABEL_292;
    }
    if ( v144 )
    {
      v67 = *((_BYTE *)v65 + 12);
      v66 = v170;
    }
    else
    {
      v67 = 0;
    }
    if ( !v67 )
    {
      v47 = v66 + v135;
      v135 += v66;
      goto LABEL_137;
    }
    if ( v67 == 1 )
    {
      if ( (unsigned int)Feature_1345841464__private_IsEnabledDeviceUsageNoInline() )
      {
        v145 += v66;
        ++v142;
        v47 = v135;
        goto LABEL_137;
      }
      v145 += (unsigned __int16)v66;
      ++v142;
      goto LABEL_135;
    }
    if ( v67 != 4 || (v188 = Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()) == 0 || v66 != 16 )
    {
LABEL_135:
      v47 = v135;
      goto LABEL_137;
    }
    if ( KeGetCurrentThread()->PreviousMode )
      ULong64FromUser = (void *)RtlReadULong64FromUser(v65);
    else
      ULong64FromUser = *v65;
    Src = ULong64FromUser;
    v47 = v135;
LABEL_137:
    if ( v47 >= v64 )
    {
      v167 = ++v63;
      v61 = a10;
      v62 = v141;
      continue;
    }
    break;
  }
  v139 = -2147483643;
  v134 |= 1 << i;
  if ( (unsigned int)Feature_1345841464__private_IsEnabledDeviceUsageNoInline() )
  {
    v24 = v149;
  }
  else
  {
    if ( ListEntry )
      EtwpDereferenceStackEntry(ListEntry, *(_SLIST_HEADER **)(v146 + 1056));
    v24 = v149;
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v149 + 704) + v43), 1u);
  }
  v21 = v146;
  v19 = 0;
  v18 = v141;
  v20 = v136;
LABEL_292:
  if ( (unsigned int)Feature_1345841464__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( ListEntry )
      EtwpDereferenceStackEntry(ListEntry, *(_SLIST_HEADER **)(v21 + 1056));
    if ( v20 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v24 + 704) + 8LL * v147), 1u);
  }
  if ( (v133 & 8) != 0 )
    EtwpReleaseStackLookasideListEntry(BugCheckParameter3);
  if ( v139 < 0 )
  {
    EtwpFailLogging(a8, a9, v158, (__int64)v192, v134, 0, v139, v159 + 40, 1, a10, v18, 1);
  }
  else
  {
    for ( i = 0; i < v193; v19 = i )
    {
      v126 = (unsigned int **)&v192[3 * v19];
      v127 = (unsigned __int64)v126[2];
      v128 = (signed __int64 *)v126[3];
      _m_prefetchw(v128);
      v129 = *v128;
      if ( (v127 ^ *v128) >= 0xF )
      {
LABEL_304:
        _InterlockedDecrement((volatile signed __int32 *)v126[2] + 3);
      }
      else
      {
        while ( 1 )
        {
          v130 = v129;
          v129 = _InterlockedCompareExchange64(v128, v129 + 1, v129);
          if ( v130 == v129 )
            break;
          if ( (v127 ^ v129) >= 0xF )
            goto LABEL_304;
        }
      }
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v24 + 704) + 8LL * **v126),
        1u);
      ++i;
    }
  }
  v131 = CurrentThread;
  v30 = CurrentThread->KernelApcDisable++ == -1;
  if ( v30
    && ($727077A9B6E167EAE1398C74674DC5A5 *)v131->ApcState.ApcListHead[0].Flink != &v131->152
    && !v131->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v139;
}
