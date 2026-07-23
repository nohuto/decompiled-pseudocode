/*
 * XREFs of EtwpEventWriteFull @ 0x140326D30
 * Callers:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x140326CA0 (EtwWriteKMSecurityEvent.c)
 *     EtwpDiskProvTraceDisk @ 0x1403C379C (EtwpDiskProvTraceDisk.c)
 *     EtwpStackWalkApc @ 0x1403DD480 (EtwpStackWalkApc.c)
 *     EtwpApcPoolThunk @ 0x1403DD840 (EtwpApcPoolThunk.c)
 *     EtwWriteString @ 0x1404A4090 (EtwWriteString.c)
 *     EtwWriteErrorLogEntry @ 0x140A3FFE4 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     MmCanThreadFault @ 0x1402331D0 (MmCanThreadFault.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReserveTraceBuffer @ 0x1402D0980 (EtwpReserveTraceBuffer.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1403DD150 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpQueueApc @ 0x1403DE1A0 (EtwpQueueApc.c)
 *     EtwpDereferenceStackEntry @ 0x1403DEC00 (EtwpDereferenceStackEntry.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x1403E82B0 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpFailLogging @ 0x1403FABA0 (EtwpFailLogging.c)
 *     EtwpTraceLostEvent @ 0x1403FAEA8 (EtwpTraceLostEvent.c)
 *     EtwpApplyStackWalkIdFilter @ 0x14040EDA4 (EtwpApplyStackWalkIdFilter.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x140411780 (EtwpReleaseStackLookasideListEntry.c)
 *     EtwpGetStackLookasideListEntry @ 0x1404364B0 (EtwpGetStackLookasideListEntry.c)
 *     Feature_Servicing_EtwLostEventsFlags__private_IsEnabledDeviceUsageNoInline @ 0x1404410B4 (Feature_Servicing_EtwLostEventsFlags__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwpApplyLevelKwFilter @ 0x140455B40 (EtwpApplyLevelKwFilter.c)
 *     EtwpSendTraceEvent @ 0x1404A70B8 (EtwpSendTraceEvent.c)
 *     EtwpGetNextEventOffsetType @ 0x1404A7234 (EtwpGetNextEventOffsetType.c)
 *     EtwpGetCrimsonStackKey @ 0x1404C5C9C (EtwpGetCrimsonStackKey.c)
 *     EtwpApplyEventNameFilter @ 0x1404ED680 (EtwpApplyEventNameFilter.c)
 *     EtwpIsEventNameFilterEnabled @ 0x1404EDA40 (EtwpIsEventNameFilterEnabled.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     Feature_1345841464__private_IsEnabledDeviceUsageNoInline @ 0x14064D6E8 (Feature_1345841464__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x14064D73C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14098FEE0 (EtwpGetSidExtendedHeaderItem.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        __int64 a1,
        unsigned __int16 a2,
        __int16 a3,
        int a4,
        unsigned __int16 *a5,
        __int16 a6,
        __int16 a7,
        GUID *a8,
        _OWORD *a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int16 a15,
        void *a16,
        unsigned __int64 *a17)
{
  int v19; // r15d
  int v20; // r14d
  __int16 v21; // dx
  unsigned __int8 v22; // r13
  __int64 v24; // rax
  char v25; // di
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v27; // rax
  unsigned __int8 CurrentIrql; // r11
  int v29; // ebx
  unsigned __int16 *v30; // rsi
  __int64 v31; // r10
  bool v32; // zf
  __int64 v33; // rcx
  __int64 v34; // r12
  __int64 v35; // r13
  int v36; // ecx
  __int64 v37; // rdx
  unsigned __int8 v38; // al
  _KPROCESS *Process; // rcx
  __int64 v40; // rdx
  unsigned int v41; // ebx
  char v42; // al
  char v43; // al
  char v44; // al
  unsigned __int64 v45; // r10
  __int64 v46; // rcx
  signed __int64 *v47; // r8
  signed __int64 v48; // rax
  signed __int64 v49; // rtt
  __int64 v50; // rcx
  unsigned __int8 v51; // r13
  __int64 v52; // rcx
  int v53; // ebx
  int v54; // esi
  unsigned int v55; // r12d
  int v56; // eax
  int v57; // eax
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  _GENERAL_LOOKASIDE *L; // rsi
  int v61; // esi
  __int64 v62; // rdx
  unsigned int v63; // r15d
  int v64; // edx
  char v65; // al
  __int64 v66; // r9
  ULONG_PTR StackLookasideListEntry; // rax
  __int64 v68; // r8
  char v69; // cl
  ULONG_PTR v70; // rsi
  _BYTE *v71; // r13
  unsigned int v72; // r14d
  unsigned __int16 *v73; // rsi
  unsigned __int8 v74; // al
  unsigned int v75; // eax
  int v76; // ebx
  unsigned int v77; // eax
  __int16 v78; // ax
  __int64 v79; // r12
  _SLIST_ENTRY *v80; // rsi
  __int64 v81; // rcx
  int v82; // ebx
  __int64 v83; // r9
  unsigned int v84; // r10d
  __int64 v85; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  int v87; // eax
  unsigned __int8 v88; // cl
  __int128 v89; // xmm0
  GUID v90; // xmm0
  struct _LIST_ENTRY *v91; // r15
  __int16 v92; // r14
  unsigned __int16 v93; // r14
  _QWORD *v94; // r14
  __int64 v95; // r8
  __int64 v96; // rcx
  void *v97; // rsi
  int Next_low; // eax
  _DWORD *v99; // rcx
  _KPROCESS *v100; // rax
  unsigned __int64 CycleTime; // rdx
  int v102; // eax
  __int64 v103; // rdx
  struct _KPRCB *v104; // rcx
  unsigned __int64 v105; // rax
  _QWORD *v106; // rsi
  __int64 v107; // rax
  unsigned __int16 *v108; // rdx
  __int64 v109; // rcx
  unsigned __int16 *v110; // rsi
  unsigned __int16 *v111; // r14
  unsigned __int16 v112; // si
  int v113; // r10d
  unsigned __int16 *v114; // rbx
  unsigned __int16 v115; // dx
  char *v116; // r14
  unsigned int i; // esi
  size_t v118; // rbx
  _QWORD *v119; // r9
  char v120; // dl
  void *v121; // rcx
  ULONG_PTR v122; // r8
  __int64 v123; // rbx
  unsigned int v124; // r10d
  signed __int64 *v125; // rdx
  unsigned __int64 v126; // r8
  unsigned int **v127; // r9
  __int64 v128; // rsi
  signed __int64 v129; // rax
  signed __int64 v130; // rtt
  struct _KTHREAD *v131; // rcx
  struct _KPRCB *v132; // rdx
  _GENERAL_LOOKASIDE *v133; // rcx
  unsigned int BugCheckParameter2; // [rsp+64h] [rbp-4F4h]
  unsigned __int8 BugCheckParameter2_4; // [rsp+68h] [rbp-4F0h]
  unsigned __int8 BugCheckParameter2_4a; // [rsp+68h] [rbp-4F0h]
  unsigned int BugCheckParameter3; // [rsp+70h] [rbp-4E8h]
  int v138; // [rsp+78h] [rbp-4E0h]
  int v139; // [rsp+78h] [rbp-4E0h]
  int v140; // [rsp+7Ch] [rbp-4DCh]
  unsigned int Size; // [rsp+80h] [rbp-4D8h]
  unsigned int Sizea; // [rsp+80h] [rbp-4D8h]
  unsigned __int8 Size_4; // [rsp+84h] [rbp-4D4h]
  unsigned int v144; // [rsp+8Ch] [rbp-4CCh]
  char v145; // [rsp+90h] [rbp-4C8h]
  int v146; // [rsp+94h] [rbp-4C4h]
  __int64 v148; // [rsp+A0h] [rbp-4B8h]
  unsigned __int8 v149; // [rsp+B0h] [rbp-4A8h]
  unsigned __int16 v150; // [rsp+B8h] [rbp-4A0h]
  unsigned int v151; // [rsp+BCh] [rbp-49Ch]
  __int64 v152; // [rsp+C0h] [rbp-498h]
  __int16 v153; // [rsp+C8h] [rbp-490h]
  unsigned __int16 *v154; // [rsp+D8h] [rbp-480h]
  _SLIST_ENTRY *Src; // [rsp+E0h] [rbp-478h]
  __int64 v156; // [rsp+F0h] [rbp-468h]
  __int64 v157; // [rsp+108h] [rbp-450h]
  unsigned __int64 v158; // [rsp+118h] [rbp-440h]
  unsigned __int16 *v159; // [rsp+120h] [rbp-438h]
  PSLIST_ENTRY ListEntry; // [rsp+128h] [rbp-430h] BYREF
  __int64 v161; // [rsp+130h] [rbp-428h]
  __int64 v162; // [rsp+138h] [rbp-420h]
  __int128 *v163; // [rsp+140h] [rbp-418h]
  __int64 v164; // [rsp+148h] [rbp-410h]
  void *v165; // [rsp+150h] [rbp-408h]
  unsigned int v166; // [rsp+158h] [rbp-400h] BYREF
  void *v167; // [rsp+160h] [rbp-3F8h]
  __int64 v168; // [rsp+168h] [rbp-3F0h]
  __int64 v169; // [rsp+170h] [rbp-3E8h]
  __int64 v170; // [rsp+178h] [rbp-3E0h]
  __int64 v171; // [rsp+180h] [rbp-3D8h]
  int v172; // [rsp+188h] [rbp-3D0h]
  unsigned int v173; // [rsp+18Ch] [rbp-3CCh]
  signed __int64 v174; // [rsp+190h] [rbp-3C8h] BYREF
  unsigned __int64 v175; // [rsp+198h] [rbp-3C0h]
  __int64 v176; // [rsp+1A0h] [rbp-3B8h]
  ULONG_PTR v177; // [rsp+1A8h] [rbp-3B0h]
  struct _KTHREAD *v178; // [rsp+1B0h] [rbp-3A8h]
  struct _LIST_ENTRY *Flink; // [rsp+1B8h] [rbp-3A0h]
  unsigned __int64 *v180; // [rsp+1C0h] [rbp-398h]
  char *v181; // [rsp+1C8h] [rbp-390h]
  __int128 v182; // [rsp+1D0h] [rbp-388h] BYREF
  __int64 v183; // [rsp+1E0h] [rbp-378h]
  _OWORD *v184; // [rsp+1E8h] [rbp-370h]
  __int64 v185; // [rsp+1F0h] [rbp-368h]
  _BYTE v186[768]; // [rsp+200h] [rbp-358h] BYREF
  unsigned int v187; // [rsp+500h] [rbp-58h]

  v138 = a2;
  v185 = a11;
  v173 = a10;
  v184 = a9;
  v161 = a1;
  v172 = a4;
  v162 = a11;
  v176 = a13;
  v167 = a16;
  v180 = a17;
  v19 = 0;
  v20 = 0;
  v140 = 0;
  memset_0(v186, 0, 0x308uLL);
  Src = 0LL;
  v164 = 0LL;
  v159 = 0LL;
  v177 = 0LL;
  v175 = 0LL;
  v153 = a15 & 0x100;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  v22 = 0;
  ListEntry = 0LL;
  v151 = 0;
  if ( a10 > 0x80 )
    return 3221225485LL;
  v24 = a14;
  if ( !a14 )
    v24 = a1;
  v152 = v24;
  v169 = v24;
  if ( v167 )
  {
    if ( v21 )
    {
      v150 = 0;
      v163 = (__int128 *)((char *)v167 + 6);
    }
    else
    {
      v150 = *(_WORD *)v167;
      v163 = 0LL;
    }
  }
  else
  {
    v150 = 0;
    v163 = 0LL;
  }
  v25 = 0;
  v156 = *(_QWORD *)(a1 + 648);
  v168 = v156;
  if ( v180 && *v180 )
  {
    v175 = *v180;
    v25 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v178 = CurrentThread;
  v27 = a12;
  if ( !a12 )
    v27 = (__int64)CurrentThread;
  v157 = v27;
  v171 = v27;
  if ( KeAreInterruptsEnabled() )
    CurrentIrql = KeGetCurrentIrql();
  else
    CurrentIrql = 15;
  v149 = CurrentIrql;
  Size_4 = CurrentIrql;
  v145 = 0;
  if ( !CurrentIrql )
  {
    --v178->KernelApcDisable;
    v145 = 1;
  }
  HIWORD(v29) = HIWORD(v138);
  LOWORD(v29) = ~a3 & v138;
  v30 = a5;
  v31 = v152;
LABEL_23:
  while ( 2 )
  {
    v32 = !_BitScanForward((unsigned int *)&v33, (unsigned __int16)v29);
    Size = v33;
    if ( !v32 )
    {
      v182 = 0LL;
      v183 = 0LL;
      v174 = 0LL;
      BugCheckParameter2 = 80;
      v154 = 0LL;
      v144 = 0;
      v146 = 0;
      v165 = 0LL;
      v181 = 0LL;
      BugCheckParameter2_4 = 0;
      v34 = 1LL;
      v148 = 1LL;
      ListEntry = 0LL;
      LOWORD(v29) = (v29 - 1) & v29;
      v139 = v29;
      v35 = v31 + 32 * ((unsigned int)v33 + 4LL);
      if ( v176 )
      {
        v36 = *(_DWORD *)(v176 + 4LL * (*(unsigned __int16 *)(v35 + 6) >> 5));
        if ( _bittest(&v36, *(_BYTE *)(v35 + 6) & 0x1F) )
          goto LABEL_21;
      }
      v37 = *((_QWORD *)v30 + 1);
      if ( !*(_DWORD *)v35 )
        goto LABEL_69;
      v38 = *(_BYTE *)(v35 + 4);
      if ( *((_BYTE *)v30 + 4) > v38 )
      {
        if ( v38 )
          goto LABEL_69;
      }
      if ( ((*(_DWORD *)(v35 + 8) & 0x40) == 0 || v37)
        && ((v37 & *(_QWORD *)(v35 + 16)) == 0 || (v37 & *(_QWORD *)(v35 + 24)) != *(_QWORD *)(v35 + 24)) )
      {
        goto LABEL_69;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( ((a4 & 2) != 0 || SLODWORD(Process[1].DirectoryTableBase) < 0) && (*(_DWORD *)(v35 + 8) & 0x200) != 0 )
      {
LABEL_21:
        v22 = 0;
        continue;
      }
      v40 = *(_QWORD *)(v31 + 640);
      if ( v40 )
      {
        v41 = Size;
        v40 = *(unsigned int *)(104LL * Size + v40);
        if ( (v40 & 0x80000200) == 0x80000200 || (v40 = (unsigned int)v40 & 0x80000100, (_DWORD)v40 == -2147483392) )
        {
          v42 = 1;
LABEL_42:
          if ( v42 )
          {
            v43 = EtwpApplyEventIdPayloadFilter(v31, v41, 0, (_DWORD)v30, *v30, a10, v162, 0, CurrentIrql);
            v31 = v152;
            CurrentIrql = v149;
            if ( !v43 )
              goto LABEL_68;
          }
          if ( v153 )
          {
            if ( (unsigned __int8)EtwpIsEventNameFilterEnabled(
                                    v31,
                                    v41,
                                    CurrentIrql,
                                    *((unsigned __int8 *)v30 + 4),
                                    *((_QWORD *)v30 + 1),
                                    0) )
            {
              v44 = EtwpApplyEventNameFilter(
                      v152,
                      v41,
                      a10,
                      v162,
                      0,
                      v149,
                      *((_BYTE *)v30 + 4),
                      *((_QWORD *)v30 + 1),
                      0);
              CurrentIrql = v149;
              if ( !v44 )
                goto LABEL_67;
            }
            else
            {
              CurrentIrql = v149;
            }
          }
          v45 = *(unsigned __int16 *)(v35 + 6);
          v151 = *(unsigned __int16 *)(v35 + 6);
          v158 = v45;
          if ( CurrentIrql >= 2u )
          {
            v158 = (unsigned int)v45;
            if ( (unsigned int)v45 >= *(_DWORD *)(v156 + 16) )
            {
              v158 = (unsigned int)v45;
            }
            else
            {
              _mm_lfence();
              v34 = *(_QWORD *)(*(_QWORD *)(v156 + 712) + 8 * v45);
            }
          }
          else
          {
            v46 = *(_QWORD *)(*(_QWORD *)(v156 + 704) + 8 * v45);
            v40 = *(_DWORD *)(v46 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v46 + 20));
            v47 = (signed __int64 *)(*(_QWORD *)v46 + v40);
            _m_prefetchw(v47);
            v48 = *v47;
            if ( (*v47 & 1) != 0 )
              goto LABEL_61;
            while ( 1 )
            {
              v49 = v48;
              v48 = _InterlockedCompareExchange64(v47, v48 + 2, v48);
              if ( v49 == v48 )
                break;
              if ( (v48 & 1) != 0 )
                goto LABEL_61;
            }
            if ( (unsigned int)v45 < *(_DWORD *)(v156 + 16) )
            {
              _mm_lfence();
              v34 = *(_QWORD *)(*(_QWORD *)(v156 + 712) + 8 * v45);
            }
            BugCheckParameter2_4 = 1;
          }
          v148 = v34;
LABEL_61:
          if ( (v34 & 1) != 0 )
          {
            if ( BugCheckParameter2_4 )
            {
              ExReleaseRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v156 + 704) + 8 * v45),
                1u);
              v51 = BugCheckParameter2_4;
              if ( (unsigned int)Feature_1345841464__private_IsEnabledDeviceUsageNoInline(v50) )
                v51 = 0;
              BugCheckParameter2_4 = v51;
              CurrentIrql = v149;
              LODWORD(v45) = v151;
            }
            if ( (_DWORD)v45 != 3 )
            {
LABEL_67:
              v31 = v152;
LABEL_68:
              v29 = v139;
LABEL_69:
              v22 = BugCheckParameter2_4;
              continue;
            }
            v33 = 3221226238LL;
            v20 = -1073741816;
            if ( *(_DWORD *)(v156 + 4340) )
              v20 = -1073741058;
            LOWORD(v29) = v139;
            goto LABEL_301;
          }
          v52 = (__int64)v184;
          v53 = v184 != 0LL ? 0x10 : 0;
          v54 = 104;
          if ( !v184 )
            v54 = 80;
          v55 = v54;
          BugCheckParameter3 = v54;
          if ( (*(_DWORD *)(v35 + 8) & 0xFFFFFF9F) == 0 )
            goto LABEL_132;
          if ( EtwpPagingDisabled
            || (a4 & 1) != 0
            || !MmCanThreadFault((__int64)v184, v40)
            || (v56 = 256, BYTE6(v178[1].Queue)) )
          {
            v56 = 0;
          }
          v53 |= v56;
          v57 = *(_DWORD *)(v35 + 8);
          BugCheckParameter3 = v54;
          if ( (v57 & 0x800) != 0 )
          {
            if ( Flink )
            {
              BugCheckParameter3 = v54;
              if ( Flink != (struct _LIST_ENTRY *)EtwpHostSiloState )
              {
                v53 |= 0x200u;
                v55 = v54 + ((LOWORD(Flink[281].Flink) + 15) & 0xFFFFFFF8);
                BugCheckParameter3 = v55;
              }
            }
          }
          if ( (v57 & 1) != 0 && (v53 & 0x100) != 0 )
          {
            v52 = (__int64)Src;
            if ( Src )
              goto LABEL_95;
            CurrentPrcb = KeGetCurrentPrcb();
            P = CurrentPrcb->PPLookasideList[8].P;
            ++P->TotalAllocates;
            v52 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
            Src = (_SLIST_ENTRY *)v52;
            if ( !v52 )
            {
              ++P->AllocateMisses;
              L = CurrentPrcb->PPLookasideList[8].L;
              ++L->TotalAllocates;
              v52 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
              Src = (_SLIST_ENTRY *)v52;
              if ( !v52 )
              {
                ++L->AllocateMisses;
                v52 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size);
                Src = (_SLIST_ENTRY *)v52;
              }
            }
            if ( v52 )
              *(_DWORD *)v52 = CurrentPrcb->Number;
            v164 = v52;
            if ( v52 )
            {
              EtwpGetSidExtendedHeaderItem(v52);
              v52 = (__int64)Src;
              if ( Src )
              {
LABEL_95:
                v53 |= 2u;
                v55 += *(unsigned __int16 *)v52;
                BugCheckParameter3 = v55;
              }
            }
          }
          v61 = *(_DWORD *)(v35 + 8);
          if ( (v61 & 2) != 0 )
          {
            v53 |= 1u;
            v55 += 16;
            BugCheckParameter3 = v55;
          }
          if ( (v61 & 0x80u) != 0
            && (KeAreInterruptsEnabled() && KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->NestingLevel) )
          {
            v53 |= 0x40u;
            v55 += 16;
            BugCheckParameter3 = v55;
          }
          if ( (v61 & 0x100) != 0 )
          {
            v53 |= 0x80u;
            v55 += 16;
            BugCheckParameter3 = v55;
          }
          if ( (v61 & 4) == 0 || EtwpPagingDisabled )
          {
LABEL_132:
            LOBYTE(v63) = Size;
            goto LABEL_133;
          }
          v62 = *(_QWORD *)(v152 + 640);
          if ( v62 )
          {
            v63 = Size;
            v52 = 104LL * Size;
            v64 = *(_DWORD *)(v52 + v62);
            if ( (v64 & 0x80001000) == 0x80001000
              || (v64 & 0x80002000) == 0x80002000
              || (v64 & 0x80004000) == 0x80004000 )
            {
              v65 = 1;
LABEL_114:
              if ( !v65
                || (unsigned __int8)EtwpApplyLevelKwFilter(
                                      v152,
                                      v63,
                                      *((unsigned __int8 *)a5 + 4),
                                      *((_QWORD *)a5 + 1),
                                      Size_4 < 2u)
                && (LOBYTE(v66) = Size_4 < 2u, (unsigned __int8)EtwpApplyStackWalkIdFilter(*a5, v152, v63, v66))
                && (unsigned __int8)EtwpApplyEventNameFilter(
                                      v152,
                                      v63,
                                      a10,
                                      v162,
                                      0,
                                      v149,
                                      *((_BYTE *)a5 + 4),
                                      *((_QWORD *)a5 + 1),
                                      1) )
              {
                if ( (v25 & 1) == 0 )
                {
                  StackLookasideListEntry = EtwpGetStackLookasideListEntry(v52);
                  v177 = StackLookasideListEntry;
                  if ( StackLookasideListEntry )
                  {
                    v159 = (unsigned __int16 *)(StackLookasideListEntry + 32);
                    v25 |= 2u;
                    v68 = 0LL;
                    v69 = (*(_DWORD *)(v148 + 816) & 0x40000000) == 0;
                    if ( *(_QWORD *)(v161 + 40) == *(_QWORD *)&EventTracingProvGuid.Data1
                      && *(_QWORD *)(v161 + 48) == *(_QWORD *)EventTracingProvGuid.Data4
                      && *a5 == 18 )
                    {
                      v53 |= 0x20u;
                      v68 = v161 + 80;
                      v69 = 0;
                    }
                    v70 = v177;
                    if ( !(unsigned __int8)EtwpGetStackExtendedHeaderItem(v148, v157, a4, v177, v69, v68) )
                    {
                      EtwpReleaseStackLookasideListEntry(v70);
                      v25 &= ~2u;
                      v159 = 0LL;
                    }
                  }
                  v25 |= 1u;
                }
                if ( v159 )
                {
                  if ( (*(_DWORD *)(v148 + 820) & 1) != 0
                    && (unsigned __int8)EtwpGetCrimsonStackKey(v148, v159, &ListEntry) )
                  {
                    v53 |= 8u;
                    v55 += 24;
                    BugCheckParameter3 = v55;
                  }
                  else
                  {
                    v53 |= 4u;
                    v55 += *v159;
                    BugCheckParameter3 = v55;
                  }
                }
              }
LABEL_133:
              v33 = 48LL * v187;
              v71 = &v186[v33];
              v72 = 0;
              if ( a10 )
              {
                v73 = (unsigned __int16 *)(v162 + 8);
                while ( !(unsigned int)Feature_1345841464__private_IsEnabledDeviceUsageNoInline(v33)
                     || *(_DWORD *)v73 <= 0xFFFFu )
                {
                  if ( v153 )
                    v74 = *((_BYTE *)v73 + 4);
                  else
                    v74 = 0;
                  v33 = v74;
                  if ( v74 )
                  {
                    v33 = (unsigned int)v74 - 1;
                    if ( v74 == 1 )
                    {
                      if ( (unsigned int)Feature_1345841464__private_IsEnabledDeviceUsageNoInline(v33) )
                        v144 += *(_DWORD *)v73;
                      else
                        v144 += *v73;
                      ++v146;
                    }
                    else if ( v74 == 4
                           && (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline(v33)
                           && *(_DWORD *)v73 == 16 )
                    {
                      v163 = (__int128 *)*((_QWORD *)v73 - 1);
                    }
                  }
                  else
                  {
                    v55 += *(_DWORD *)v73;
                    BugCheckParameter3 = v55;
                  }
                  ++v72;
                  v73 += 8;
                  if ( v72 >= a10 )
                    goto LABEL_152;
                }
                v20 = v140;
                if ( v140 >= 0 )
                  v20 = -2147483643;
                v76 = (unsigned __int16)v139;
LABEL_300:
                v29 = v76 | (1 << v63);
                v19 = 0;
LABEL_301:
                v140 = v20;
LABEL_302:
                v22 = BugCheckParameter2_4;
                break;
              }
LABEL_152:
              if ( v146 )
              {
                if ( (unsigned int)Feature_1345841464__private_IsEnabledDeviceUsageNoInline(v33) )
                {
                  v75 = (v144 + 15) & 0xFFFFFFF8;
                  if ( v75 > 0xFFFF )
                    goto LABEL_297;
                }
                else
                {
                  v75 = (v144 + 15) & 0xFFFFFFF8;
                }
                v55 += v75;
                BugCheckParameter3 = v55;
              }
              if ( v150 )
              {
                if ( (unsigned int)Feature_1345841464__private_IsEnabledDeviceUsageNoInline(v33) )
                {
                  v77 = (v150 + 15) & 0xFFFFFFF8;
                  if ( v77 > 0xFFFF )
                  {
LABEL_297:
                    v20 = v140;
                    if ( v140 >= 0 )
                      v20 = -1073741675;
                    v76 = (unsigned __int16)v139;
                    goto LABEL_300;
                  }
                }
                else
                {
                  v77 = (v150 + 15) & 0xFFFFFFF8;
                }
                v55 += v77;
                BugCheckParameter3 = v55;
              }
              *((_DWORD *)v71 + 10) = v55;
              v19 = 0;
              if ( (unsigned int)Feature_Servicing_EtwLostEventsFlags__private_IsEnabledDeviceUsageNoInline(v33) )
              {
                v78 = 0;
                if ( (a4 & 4) != 0 )
                  v78 = 512;
                if ( (a4 & 8) != 0 )
                  v78 |= 0x600u;
              }
              else
              {
                v78 = v172;
              }
              v79 = EtwpReserveTraceBuffer((unsigned int *)v148, v55, (unsigned __int64 *)&v182, &v174, v78);
              v170 = v79;
              v80 = ListEntry;
              if ( ListEntry )
              {
                EtwpDereferenceStackEntry(ListEntry);
                if ( (unsigned int)Feature_1345841464__private_IsEnabledDeviceUsageNoInline(v81) )
                  v80 = 0LL;
                ListEntry = v80;
              }
              if ( !v79 )
              {
                if ( BugCheckParameter3 <= 0xFFF8 )
                {
                  v82 = -1073741801;
                  if ( BugCheckParameter3 > *(_DWORD *)(v148 + 8) )
                    v82 = -2147483643;
                }
                else
                {
                  v82 = -1073741675;
                }
                v83 = v185;
                if ( !v146 )
                  v83 = 0LL;
                v84 = v173;
                if ( !v146 )
                  v84 = 0;
                if ( EtwpEventTracingProvRegHandle
                  && ((v33 = *(_QWORD *)(EtwpEventTracingProvRegHandle + 32), *(_DWORD *)(v33 + 96))
                   && *(_BYTE *)(v33 + 100) != 1
                   && (*(_BYTE *)(v33 + 112) & 0x40) != 0
                   && (v33 = *(_QWORD *)(v33 + 120), (v33 & 0x40) == v33)
                   || *(_WORD *)(EtwpEventTracingProvRegHandle + 102)
                   && EtwpLevelKeywordEnabled(*(_QWORD *)(EtwpEventTracingProvRegHandle + 40) + 96LL, 2u, 64LL)) )
                {
                  v30 = a5;
                  EtwpTraceLostEvent(v161 + 40, (_DWORD)a5, v148 + 136, a4, v82, v84, v83, Size_4 < 2u, 0);
                }
                else
                {
                  v30 = a5;
                }
                v20 = v140;
                if ( v140 >= 0 )
                {
                  if ( (*(_DWORD *)(v148 + 12) & 0x8000000) == 0 )
                    v20 = v82;
                  v140 = v20;
                }
                if ( BugCheckParameter2_4 )
                {
                  ExReleaseRundownProtectionCacheAwareEx(
                    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v156 + 704) + 8 * v158),
                    1u);
                  IsEnabledDeviceUsageNoInline = Feature_1345841464__private_IsEnabledDeviceUsageNoInline(v85);
                  v33 = BugCheckParameter2_4;
                  if ( IsEnabledDeviceUsageNoInline )
                    v33 = 0LL;
                  BugCheckParameter2_4 = v33;
                }
                v32 = v82 == -1073741675;
                v29 = v139;
                v22 = BugCheckParameter2_4;
                v31 = v152;
                if ( !v32 )
                {
LABEL_22:
                  CurrentIrql = v149;
                  continue;
                }
                v20 = -1073741675;
                v140 = -1073741675;
                goto LABEL_302;
              }
              *(_QWORD *)v71 = v148;
              *((_QWORD *)v71 + 1) = v79;
              *((_OWORD *)v71 + 1) = v182;
              *((_QWORD *)v71 + 4) = v183;
              ++v187;
              v87 = Feature_1345841464__private_IsEnabledDeviceUsageNoInline(v33);
              v88 = BugCheckParameter2_4;
              if ( v87 )
                v88 = 0;
              BugCheckParameter2_4a = v88;
              *(_DWORD *)v79 = BugCheckParameter3 | 0xC0130000;
              *(_WORD *)(v79 + 4) = a6;
              *(_WORD *)(v79 + 6) = a7;
              *(_OWORD *)(v79 + 40) = *(_OWORD *)a5;
              if ( v163 )
              {
                v89 = *v163;
                *(_WORD *)(v79 + 4) = a6 | 0x80;
              }
              else
              {
                v89 = *(_OWORD *)(v161 + 40);
              }
              *(_OWORD *)(v79 + 24) = v89;
              if ( a8 )
                v90 = *a8;
              else
                v90 = CPER_EMPTY_GUID;
              *(GUID *)(v79 + 64) = v90;
              *(_QWORD *)(v79 + 16) = v174;
              *(_DWORD *)(v79 + 8) = *(_DWORD *)(v157 + 1296);
              *(_DWORD *)(v79 + 12) = *(_DWORD *)(v157 + 1288);
              *(_DWORD *)(v79 + 56) = *(_DWORD *)(v157 + 652);
              *(_DWORD *)(v79 + 60) = *(_DWORD *)(v157 + 732);
              if ( (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline(v157) && (a15 & 0x400) != 0 )
                *(_WORD *)(v79 + 4) |= 0x400u;
              if ( v53 )
              {
                if ( (v53 & 0x200) != 0 )
                {
                  v154 = (unsigned __int16 *)(v79 + 80);
                  v91 = Flink;
                  v92 = (LOWORD(Flink[281].Flink) + 15) & 0xFFF8;
                  *(_WORD *)(v79 + 80) = v92;
                  *(_WORD *)(v79 + 82) = 16;
                  *(_WORD *)(v79 + 86) = v91[281].Flink;
                  *(_WORD *)(v79 + 84) = 0;
                  v93 = v92 - LOWORD(v91[281].Flink) - 8;
                  memmove((void *)(v79 + 88), v91[280].Blink, LOWORD(v91[281].Flink));
                  memset_0((void *)(v79 + 88 + LOWORD(v91[281].Flink)), 0, v93);
                  *(_WORD *)(v79 + 4) |= 1u;
                  v94 = (_QWORD *)(v79 + 80);
                  v95 = (unsigned int)*(unsigned __int16 *)(v79 + 80) + 80;
                  BugCheckParameter2 = *(unsigned __int16 *)(v79 + 80) + 80;
                }
                else
                {
                  v94 = 0LL;
                  v95 = 80LL;
                }
                if ( (v53 & 0x10) != 0 )
                {
                  v96 = v79 + (unsigned int)v95;
                  *(_DWORD *)v96 = 65560;
                  *(_DWORD *)(v96 + 4) = 0x100000;
                  *(_OWORD *)(v96 + 8) = *a9;
                  *(_WORD *)(v79 + 4) |= 1u;
                  v95 = (unsigned int)(v95 + 24);
                  BugCheckParameter2 = v95;
                  if ( v94 )
                    *((_WORD *)v94 + 2) |= 1u;
                  v94 = (_QWORD *)v96;
                  v154 = (unsigned __int16 *)v96;
                }
                if ( (v53 & 2) != 0 )
                {
                  v97 = (void *)(v79 + (unsigned int)v95);
                  memmove(v97, Src, LOWORD(Src->Next));
                  *(_WORD *)(v79 + 4) |= 1u;
                  Next_low = LOWORD(Src->Next);
                  v95 = Next_low + BugCheckParameter2;
                  BugCheckParameter2 += Next_low;
                  if ( v94 )
                    *((_WORD *)v94 + 2) |= 1u;
                  v94 = v97;
                  v154 = (unsigned __int16 *)v97;
                }
                if ( (v53 & 1) != 0 )
                {
                  v99 = (_DWORD *)(v79 + (unsigned int)v95);
                  *v99 = 196624;
                  v99[1] = 0x40000;
                  v100 = KeGetCurrentThread()->ApcState.Process;
                  CycleTime = v100[1].CycleTime;
                  if ( !CycleTime
                    || (v100[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0
                    || (v102 = *(_DWORD *)(CycleTime + 8), v102 == -1) )
                  {
                    v102 = 0;
                  }
                  v99[2] = v102;
                  *(_WORD *)(v79 + 4) |= 1u;
                  v95 = (unsigned int)(v95 + 16);
                  BugCheckParameter2 = v95;
                  if ( v94 )
                    *((_WORD *)v94 + 2) |= 1u;
                  v94 = v99;
                  v154 = (unsigned __int16 *)v99;
                }
                if ( (v53 & 0x40) != 0 )
                {
                  v103 = v79 + (unsigned int)v95;
                  *(_DWORD *)v103 = 851984;
                  *(_DWORD *)(v103 + 4) = 0x80000;
                  *(_QWORD *)(v103 + 8) = KeGetCurrentThread()->ApcState.Process[3].CycleTime | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
                  *(_WORD *)(v79 + 4) |= 1u;
                  v95 = (unsigned int)(v95 + 16);
                  BugCheckParameter2 = v95;
                  if ( v94 )
                    *((_WORD *)v94 + 2) |= 1u;
                  v94 = (_QWORD *)v103;
                  v154 = (unsigned __int16 *)v103;
                }
                if ( (v53 & 0x80u) != 0 )
                {
                  v95 += v79;
                  *(_DWORD *)v95 = 655376;
                  *(_DWORD *)(v95 + 4) = 0x80000;
                  if ( (v25 & 4) == 0 )
                  {
                    v104 = KeGetCurrentPrcb();
                    v105 = _InterlockedIncrement64((volatile signed __int64 *)v104->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v104->Number << 48);
                    v175 = v105;
                    v25 |= 4u;
                    if ( v180 )
                      *v180 = v105;
                  }
                  *(_QWORD *)(v95 + 8) = v175;
                  *(_WORD *)(v79 + 4) |= 1u;
                  BugCheckParameter2 += 16;
                  if ( v94 )
                    *((_WORD *)v94 + 2) |= 1u;
                  v94 = (_QWORD *)v95;
                  v154 = (unsigned __int16 *)v95;
                  LODWORD(v95) = BugCheckParameter2;
                }
                if ( (v53 & 4) != 0 )
                {
                  v106 = (_QWORD *)(v79 + (unsigned int)v95);
                  memmove(v106, v159, *v159);
                  v107 = v106[1];
                  if ( v107
                    && (v53 & 0x20) == 0
                    && (_bittest((const signed __int32 *)(v157 + 120), 0x17u)
                     || (int)EtwpQueueApc(
                               (int)v148 + 832,
                               v157,
                               v149,
                               (unsigned int)EtwpStackWalkApc,
                               (__int64)EtwpCancelStackWalkApc,
                               1LL,
                               HIDWORD(v106[1]),
                               (unsigned int)v107) < 0) )
                  {
                    v106[1] = 0LL;
                  }
                  *(_WORD *)(v79 + 4) |= 1u;
                  v108 = v159;
                  LODWORD(v95) = *v159 + BugCheckParameter2;
                  BugCheckParameter2 = v95;
                  if ( v94 )
                    *((_WORD *)v94 + 2) |= 1u;
                  v94 = v106;
                  v154 = (unsigned __int16 *)v106;
                }
                else
                {
                  v108 = v159;
                }
                if ( (v53 & 8) != 0 )
                {
                  v109 = v79 + (unsigned int)v95;
                  *(_DWORD *)v109 = 1179672;
                  *(_DWORD *)(v109 + 4) = 0x100000;
                  *(_QWORD *)(v109 + 16) = ListEntry;
                  *(_QWORD *)(v109 + 8) = *((_QWORD *)v108 + 1);
                  *(_WORD *)(v79 + 4) |= 1u;
                  LODWORD(v95) = v95 + 24;
                  BugCheckParameter2 = v95;
                  if ( v94 )
                    *((_WORD *)v94 + 2) |= 1u;
                  v110 = (unsigned __int16 *)v109;
                  v154 = (unsigned __int16 *)v109;
                  goto LABEL_261;
                }
              }
              else
              {
                LODWORD(v95) = 80;
              }
              v110 = v154;
LABEL_261:
              if ( v150 )
              {
                v111 = (unsigned __int16 *)(v79 + (unsigned int)v95);
                v112 = (v150 + 15) & 0xFFF8;
                *v111 = v112;
                *(_DWORD *)(v111 + 1) = 12;
                v111[3] = v150;
                memmove(v111 + 4, v167, v150);
                memset_0((char *)v111 + v150 + 8, 0, (unsigned __int16)(v112 - v150 - 8));
                *(_WORD *)(v79 + 4) |= 1u;
                LODWORD(v95) = *v111 + BugCheckParameter2;
                BugCheckParameter2 = v95;
                if ( v154 )
                  v154[2] |= 1u;
                v110 = v111;
              }
              v113 = v146;
              v19 = 0;
              if ( v146 )
              {
                v114 = (unsigned __int16 *)(v79 + (unsigned int)v95);
                v115 = (v144 + 15) & 0xFFF8;
                *v114 = v115;
                *(_DWORD *)(v114 + 1) = 11;
                v114[3] = v144;
                v116 = (char *)(v114 + 4);
                v165 = v114 + 4;
                v181 = (char *)v114 + v144 + 8;
                memset_0(v181, 0, (unsigned __int16)(v115 - v144 - 8));
                *(_WORD *)(v79 + 4) |= 1u;
                LODWORD(v95) = *v114 + BugCheckParameter2;
                BugCheckParameter2 = v95;
                v113 = v146;
                if ( v110 )
                  v110[2] |= 1u;
              }
              else
              {
                v116 = (char *)v165;
              }
              for ( i = 0; ; ++i )
              {
                while ( 1 )
                {
                  if ( i >= a10 )
                  {
                    if ( (*(_DWORD *)(v148 + 12) & 0x80000) != 0
                      && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
                    {
                      EtwpSendTraceEvent(v148, &v182);
                    }
                    if ( *(_QWORD *)(v148 + 1552) )
                    {
                      v166 = 0;
                      v123 = v182;
                      if ( (unsigned int)EtwpGetNextEventOffsetType(v182, (unsigned int)v183, &v166) )
                      {
                        if ( (KiDynamicTraceEnabled & 2) != 0 )
                          guard_dispatch_icall_no_overrides(v123 + v124, v166);
                      }
                    }
                    v20 = v140;
                    v29 = v139;
                    v30 = a5;
                    v22 = BugCheckParameter2_4a;
                    v31 = v152;
                    CurrentIrql = v149;
                    if ( v176 )
                    {
                      *(_DWORD *)(v176 + 4LL * (v151 >> 5)) |= 1 << (v151 & 0x1F);
                      goto LABEL_22;
                    }
                    goto LABEL_23;
                  }
                  v118 = *(unsigned int *)(v162 + 16LL * i + 8);
                  v119 = *(_QWORD **)(v162 + 16LL * i);
                  v120 = v153 ? *(_BYTE *)(v162 + 16LL * i + 12) : 0;
                  if ( v120 )
                    break;
                  v121 = (void *)(v79 + (unsigned int)v95);
                  v122 = (unsigned int)(v118 + v95);
                  BugCheckParameter2 = v122;
                  if ( (unsigned int)v122 > BugCheckParameter3 )
                    KeBugCheckEx(0x11Du, 5uLL, v122, BugCheckParameter3, 0LL);
                  memmove(v121, v119, v118);
                  LODWORD(v95) = BugCheckParameter2;
                  v113 = v146;
LABEL_285:
                  ++i;
                  v116 = (char *)v165;
                }
                if ( v120 != 1 )
                {
                  if ( v120 == 3 && (_DWORD)v118 == 8 )
                    *(_QWORD *)(v79 + 16) = *v119;
                  goto LABEL_285;
                }
                if ( !v116 || &v116[v118] > v181 || !v113 )
                  KeBugCheckEx(0x11Du, 5uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
                memmove(v116, *(const void **)(v162 + 16LL * i), v118);
                LODWORD(v95) = BugCheckParameter2;
                v116 += (unsigned int)v118;
                v165 = v116;
                v113 = --v146;
              }
            }
          }
          else
          {
            v63 = Size;
          }
          v65 = 0;
          goto LABEL_114;
        }
      }
      else
      {
        v41 = Size;
      }
      v42 = 0;
      goto LABEL_42;
    }
    break;
  }
  if ( (unsigned int)Feature_1345841464__private_IsEnabledDeviceUsageNoInline(v33) )
  {
    if ( ListEntry )
      EtwpDereferenceStackEntry(ListEntry);
    v128 = v156;
    if ( v22 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v156 + 704) + 8LL * v151), 1u);
  }
  else
  {
    v128 = v156;
  }
  if ( (v25 & 2) != 0 )
    EtwpReleaseStackLookasideListEntry(v177);
  if ( v20 < 0 )
  {
    EtwpFailLogging(
      *((unsigned __int8 *)a5 + 4),
      *((_QWORD *)a5 + 1),
      v161,
      (unsigned int)v186,
      v29,
      a4,
      v20,
      (__int64)a5,
      Size_4 < 2u,
      a10,
      v162,
      0);
  }
  else
  {
    Sizea = 0;
    if ( v187 )
    {
      do
      {
        v127 = (unsigned int **)&v186[48 * v19];
        v126 = (unsigned __int64)v127[2];
        v125 = (signed __int64 *)v127[3];
        _m_prefetchw(v125);
        v129 = *v125;
        if ( (v126 ^ *v125) >= 0xF )
        {
LABEL_316:
          _InterlockedDecrement((volatile signed __int32 *)v127[2] + 3);
        }
        else
        {
          while ( 1 )
          {
            v130 = v129;
            v129 = _InterlockedCompareExchange64(v125, v129 + 1, v129);
            if ( v130 == v129 )
              break;
            if ( (v129 ^ v126) >= 0xF )
              goto LABEL_316;
          }
        }
        if ( v149 < 2u )
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v128 + 704) + 8LL * **v127),
            1u);
        v19 = ++Sizea;
      }
      while ( Sizea < v187 );
      v20 = v140;
    }
  }
  if ( v145 )
  {
    v131 = v178;
    v32 = v178->KernelApcDisable++ == -1;
    if ( v32
      && ($727077A9B6E167EAE1398C74674DC5A5 *)v131->ApcState.ApcListHead[0].Flink != &v131->152
      && !v131->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v131, v125, v126, v127);
    }
  }
  if ( Src )
  {
    v132 = KeGetCurrentPrcb();
    v133 = v132->PPLookasideList[8].P;
    ++v133->TotalFrees;
    if ( LOWORD(v133->ListHead.Alignment) < v133->Depth
      || (++v133->FreeMisses,
          v133 = v132->PPLookasideList[8].L,
          ++v133->TotalFrees,
          LOWORD(v133->ListHead.Alignment) < v133->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v133->ListHead, Src);
    }
    else
    {
      ++v133->FreeMisses;
      guard_dispatch_icall_no_overrides(Src, v132);
    }
  }
  return (unsigned int)v20;
}
