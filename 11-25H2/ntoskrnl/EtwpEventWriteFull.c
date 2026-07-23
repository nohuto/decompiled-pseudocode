/*
 * XREFs of EtwpEventWriteFull @ 0x14030D050
 * Callers:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     EtwpStackWalkApc @ 0x140308980 (EtwpStackWalkApc.c)
 *     EtwpApcPoolThunk @ 0x14030A360 (EtwpApcPoolThunk.c)
 *     EtwWriteKMSecurityEvent @ 0x140310C8C (EtwWriteKMSecurityEvent.c)
 *     EtwpDiskProvTraceDisk @ 0x140310E84 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteString @ 0x1404A8DE0 (EtwWriteString.c)
 *     EtwWriteErrorLogEntry @ 0x140A449EC (EtwWriteErrorLogEntry.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReserveTraceBuffer @ 0x14030C840 (EtwpReserveTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     MmCanThreadFault @ 0x140348130 (MmCanThreadFault.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1403F03A0 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpDereferenceStackEntry @ 0x1403F6280 (EtwpDereferenceStackEntry.c)
 *     EtwpReleaseTraceBuffer @ 0x1403F86A0 (EtwpReleaseTraceBuffer.c)
 *     EtwpTraceLostEvent @ 0x1403F86D8 (EtwpTraceLostEvent.c)
 *     EtwpUpdateEventsLostCount @ 0x1403F8AC8 (EtwpUpdateEventsLostCount.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405F50 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpApplyStackWalkIdFilter @ 0x14041DEDC (EtwpApplyStackWalkIdFilter.c)
 *     EtwpPerfectHashFunctionSearch @ 0x14041DFC0 (EtwpPerfectHashFunctionSearch.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x140420600 (EtwpReleaseStackLookasideListEntry.c)
 *     PsGetCurrentProcessSessionId @ 0x140425EC0 (PsGetCurrentProcessSessionId.c)
 *     EtwpQueueStackWalkApc @ 0x140430910 (EtwpQueueStackWalkApc.c)
 *     EtwpGetStackLookasideListEntry @ 0x1404402F0 (EtwpGetStackLookasideListEntry.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14045839C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpApplyLevelKwFilter @ 0x140461AB8 (EtwpApplyLevelKwFilter.c)
 *     EtwpSendTraceEvent @ 0x1404AB404 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404AB500 (EtwpInvokeEventCallback.c)
 *     EtwpGetCrimsonStackKey @ 0x1404CCBE8 (EtwpGetCrimsonStackKey.c)
 *     EtwpApplyEventNameFilter @ 0x1404EC710 (EtwpApplyEventNameFilter.c)
 *     EtwpIsEventNameFilterEnabled @ 0x1404ECAD0 (EtwpIsEventNameFilterEnabled.c)
 *     Feature_Servicing_EtwLostEventsFlags__private_IsEnabledDeviceUsageNoInline @ 0x1404F0B8C (Feature_Servicing_EtwLostEventsFlags__private_IsEnabledDeviceUsageNoInline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140925E00 (EtwpGetSidExtendedHeaderItem.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        _QWORD *a1,
        unsigned __int8 a2,
        char a3,
        int a4,
        __int64 a5,
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
  __int64 CurrentIrql; // r12
  __int64 v20; // r13
  __int64 v21; // rbx
  int v22; // r15d
  __int16 v23; // dx
  char v24; // di
  __int64 v25; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v27; // r9
  __int64 v28; // r10
  __int64 v29; // r8
  bool v30; // zf
  signed __int64 v31; // rdx
  __int64 v32; // rsi
  int v33; // ecx
  __int64 v34; // rbx
  bool v35; // al
  __int64 v36; // rdx
  unsigned __int64 v37; // r11
  _KPROCESS *Process; // rcx
  __int64 v39; // rcx
  _SLIST_ENTRY *v41; // r8
  __int64 v43; // rbx
  signed __int64 v44; // rax
  signed __int64 v45; // rtt
  __int64 v46; // rax
  char v47; // cl
  int v48; // ebx
  int v49; // r14d
  unsigned int v50; // r12d
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  unsigned int *v55; // r14
  __int64 v56; // rcx
  _BYTE *v57; // rsi
  __int64 v58; // r9
  int v59; // r10d
  unsigned __int8 v60; // al
  int v61; // eax
  __int64 v62; // r12
  unsigned int v63; // r14d
  __int128 v64; // xmm0
  GUID v65; // xmm0
  unsigned __int16 v66; // bx
  volatile signed __int32 *v67; // r12
  unsigned __int8 v68; // r14
  unsigned __int8 v69; // r14
  unsigned __int16 v70; // cx
  char v71; // al
  int v72; // ecx
  unsigned __int8 v73; // di
  __int64 v74; // rsi
  unsigned __int8 v75; // r14
  __int64 v76; // rbx
  unsigned int v77; // ecx
  __int64 v78; // r12
  unsigned __int8 v79; // al
  __int64 v80; // r13
  unsigned int **v81; // r11
  _DWORD *v82; // rcx
  unsigned int v83; // r10d
  _DWORD *v84; // r11
  _DWORD *v85; // r8
  struct _KPRCB *v86; // rcx
  _QWORD *v87; // r8
  unsigned __int16 *v88; // rsi
  unsigned __int16 v89; // dx
  int v90; // r11d
  unsigned int v91; // ebx
  size_t v92; // rsi
  char v93; // cl
  void *v94; // rcx
  unsigned int v95; // r10d
  unsigned int *v96; // rbx
  char v97; // al
  int v98; // ebx
  __int64 v99; // rsi
  unsigned int v100; // r14d
  BOOLEAN v101; // al
  unsigned int *v102; // r12
  int v103; // ecx
  int v104; // r14d
  unsigned __int16 *v105; // rsi
  struct _KPRCB *v106; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  unsigned __int16 *v108; // rcx
  _GENERAL_LOOKASIDE *v109; // r14
  PSLIST_ENTRY v110; // rcx
  unsigned __int64 v111; // r14
  __int64 v112; // rax
  __int16 v113; // si
  unsigned __int16 v114; // si
  __int64 v115; // rbx
  unsigned __int16 *v116; // rbx
  int v117; // r10d
  unsigned __int16 *v118; // rcx
  _DWORD *v119; // rdx
  unsigned __int16 *v120; // rbx
  __int64 v121; // rax
  unsigned __int16 v122; // dx
  char v123; // al
  unsigned __int16 *v124; // rsi
  unsigned int v125; // r14d
  __int64 v126; // r9
  ULONG_PTR StackLookasideListEntry; // rax
  __int64 v128; // rdx
  char v129; // cl
  __int64 v130; // rax
  ULONG_PTR v131; // rsi
  unsigned __int16 *v132; // rsi
  _QWORD *v133; // rsi
  _GENERAL_LOOKASIDE *v134; // rcx
  unsigned __int64 v135; // rcx
  char *v136; // rcx
  __int64 v137; // rcx
  __int16 v138; // r14
  unsigned __int16 v139; // r14
  unsigned int **v140; // r15
  __int64 v141; // r13
  int v142; // r14d
  int v143; // edi
  unsigned int *v144; // r12
  _DWORD *v145; // rsi
  _DWORD *v146; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-398h]
  unsigned __int8 v148; // [rsp+50h] [rbp-368h]
  char v149[7]; // [rsp+51h] [rbp-367h] BYREF
  unsigned __int8 v150; // [rsp+58h] [rbp-360h]
  char v151; // [rsp+60h] [rbp-358h]
  bool v152; // [rsp+61h] [rbp-357h]
  int BugCheckParameter2; // [rsp+64h] [rbp-354h]
  unsigned __int16 BugCheckParameter2_4; // [rsp+68h] [rbp-350h]
  unsigned int v155; // [rsp+6Ch] [rbp-34Ch]
  __int16 v156; // [rsp+70h] [rbp-348h]
  int v157; // [rsp+74h] [rbp-344h]
  char v158; // [rsp+78h] [rbp-340h]
  int v159; // [rsp+7Ch] [rbp-33Ch]
  size_t Size; // [rsp+80h] [rbp-338h]
  unsigned __int16 v161; // [rsp+88h] [rbp-330h]
  unsigned __int16 *v162; // [rsp+90h] [rbp-328h]
  unsigned int *v163; // [rsp+98h] [rbp-320h]
  int v164; // [rsp+A0h] [rbp-318h]
  int v165; // [rsp+A4h] [rbp-314h]
  unsigned __int16 *v166; // [rsp+A8h] [rbp-310h]
  __int16 v167; // [rsp+B0h] [rbp-308h]
  __int64 v168; // [rsp+B8h] [rbp-300h]
  __int64 v169; // [rsp+C0h] [rbp-2F8h]
  unsigned int v170; // [rsp+C8h] [rbp-2F0h]
  _QWORD *v171; // [rsp+D0h] [rbp-2E8h]
  void *Src; // [rsp+D8h] [rbp-2E0h]
  __int64 v173; // [rsp+E0h] [rbp-2D8h]
  __int64 v174; // [rsp+E8h] [rbp-2D0h]
  void *v175; // [rsp+F0h] [rbp-2C8h]
  unsigned __int64 CurrentPrcb; // [rsp+F8h] [rbp-2C0h]
  int v177; // [rsp+100h] [rbp-2B8h]
  unsigned int v178; // [rsp+108h] [rbp-2B0h]
  void *v179; // [rsp+110h] [rbp-2A8h]
  void *v180; // [rsp+118h] [rbp-2A0h]
  PSLIST_ENTRY v181; // [rsp+120h] [rbp-298h]
  __int128 *v182; // [rsp+128h] [rbp-290h]
  void *v183; // [rsp+130h] [rbp-288h]
  __int64 v184; // [rsp+138h] [rbp-280h]
  __int64 v185; // [rsp+140h] [rbp-278h]
  _QWORD *v186; // [rsp+148h] [rbp-270h]
  __int64 v187; // [rsp+150h] [rbp-268h]
  int v188; // [rsp+158h] [rbp-260h]
  signed __int64 v189; // [rsp+160h] [rbp-258h] BYREF
  __int64 v190; // [rsp+168h] [rbp-250h]
  unsigned __int64 v191; // [rsp+170h] [rbp-248h]
  _DWORD *v192; // [rsp+178h] [rbp-240h]
  PSLIST_ENTRY ListEntry; // [rsp+180h] [rbp-238h] BYREF
  __int64 v194; // [rsp+188h] [rbp-230h]
  ULONG_PTR BugCheckParameter3; // [rsp+190h] [rbp-228h]
  struct _KTHREAD *v196; // [rsp+198h] [rbp-220h]
  __int64 v197; // [rsp+1A0h] [rbp-218h]
  unsigned __int64 *v198; // [rsp+1A8h] [rbp-210h]
  char *v199; // [rsp+1B0h] [rbp-208h]
  __int128 v200; // [rsp+1B8h] [rbp-200h] BYREF
  __int64 v201; // [rsp+1C8h] [rbp-1F0h]
  _OWORD *v202; // [rsp+1D0h] [rbp-1E8h]
  _BYTE v203[8]; // [rsp+1E0h] [rbp-1D8h] BYREF
  char v204; // [rsp+1E8h] [rbp-1D0h] BYREF
  unsigned int v205; // [rsp+360h] [rbp-58h]

  v159 = a4;
  v171 = a1;
  v174 = a11;
  v197 = a11;
  v178 = a10;
  v202 = a9;
  v20 = a14;
  v186 = a1;
  v150 = a2;
  v177 = a4;
  v188 = a4;
  v169 = a5;
  v187 = a11;
  v21 = a12;
  v194 = a13;
  v183 = a16;
  v198 = a17;
  v22 = 0;
  v165 = 0;
  memset_0(v203, 0, 0x188uLL);
  LODWORD(v162) = 0;
  Src = 0LL;
  v181 = 0LL;
  v179 = 0LL;
  BugCheckParameter3 = 0LL;
  v191 = 0LL;
  v167 = a15 & 0x100;
  v190 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(256LL, a15 & 0x200) + 832);
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a14 )
    v20 = (__int64)a1;
  v185 = v20;
  if ( v183 )
  {
    if ( v23 )
    {
      v164 = 0;
      v156 = 0;
      v182 = (__int128 *)((char *)v183 + 6);
    }
    else
    {
      v164 = *(unsigned __int16 *)v183;
      v156 = v164;
      v182 = 0LL;
    }
  }
  else
  {
    v164 = 0;
    v156 = 0;
    v182 = 0LL;
  }
  v24 = 0;
  v151 = 0;
  v25 = a1[49];
  v173 = v25;
  v184 = v25;
  if ( v198 && *v198 )
  {
    v191 = *v198;
    v24 = 4;
    v151 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v196 = CurrentThread;
  if ( !a12 )
    v21 = (__int64)CurrentThread;
  v192 = (_DWORD *)v21;
  if ( KeAreInterruptsEnabled() )
    CurrentIrql = KeGetCurrentIrql();
  else
    LOBYTE(CurrentIrql) = 15;
  v152 = CurrentIrql;
  v168 = CurrentIrql;
  v148 = CurrentIrql;
  v158 = 0;
  if ( !(_BYTE)CurrentIrql )
  {
    --v196->KernelApcDisable;
    v158 = 1;
  }
  v150 &= ~a3;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v28 = 1LL;
        while ( 2 )
        {
          v29 = 80LL;
LABEL_18:
          while ( 2 )
          {
            while ( 2 )
            {
              v30 = !_BitScanForward((unsigned int *)&v31, v150);
              LODWORD(v162) = v31;
              if ( v30 )
                goto LABEL_28;
              v163 = (unsigned int *)v28;
              v200 = 0LL;
              v201 = 0LL;
              ListEntry = 0LL;
              v189 = 0LL;
              BugCheckParameter2 = 80;
              v166 = 0LL;
              v175 = 0LL;
              LOBYTE(BugCheckParameter2_4) = 0;
              v161 = 0;
              v157 = 0;
              v180 = 0LL;
              v199 = 0LL;
              v150 &= v150 - 1;
              v27 = (unsigned int)v31;
              CurrentPrcb = (unsigned int)v31;
              v32 = v20 + 32 * (v31 + 4);
              if ( v194 )
              {
                v33 = *(_DWORD *)(v194 + 4LL * (*(unsigned __int16 *)(v32 + 6) >> 5));
                if ( _bittest(&v33, *(_BYTE *)(v32 + 6) & 0x1F) )
                  continue;
              }
              break;
            }
            v34 = v169;
            v35 = EtwpLevelKeywordEnabled(v32, *(_BYTE *)(v169 + 4), *(_QWORD *)(v169 + 8));
            v29 = 80LL;
            if ( !v35 )
              continue;
            break;
          }
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( ((v159 & 2) != 0 || SLODWORD(Process[1].DirectoryTableBase) < 0) && (*(_DWORD *)(v32 + 8) & 0x200) != 0 )
            continue;
          break;
        }
        v39 = *(_QWORD *)(v20 + 384);
        if ( !v39 )
          break;
        v36 = *(unsigned int *)(104 * v27 + v39);
        if ( (*(_DWORD *)(104 * v27 + v39) & 0x80000200) != 0x80000200 )
        {
          v36 = (unsigned int)v36 & 0x80000100;
          if ( (_DWORD)v36 != -2147483392 )
            break;
        }
        v66 = *(_WORD *)v34;
        v149[0] = 1;
        v67 = 0LL;
        v68 = v168;
        if ( (unsigned __int8)v168 < 2u )
        {
          v69 = KeGetCurrentIrql();
          __writecr8(v37);
          if ( KiIrqlFlags )
          {
            KiRaiseIrqlProcessIrqlFlags(v69);
            v27 = CurrentPrcb;
          }
          v36 = *(_QWORD *)(*(_QWORD *)(v20 + 384) + 104 * v27 + 72);
          if ( v36 )
          {
            v70 = __ROR2__(v66, *(_BYTE *)(v36 + 1)) & *(_WORD *)(v36 + 2);
            while ( v66 != *(_WORD *)(v36 + 4LL * v70 + 8) )
            {
              v70 = *(unsigned __int8 *)(v36 + 4LL * v70 + 6);
              if ( v70 == 255 )
              {
                v71 = 0;
                goto LABEL_93;
              }
            }
            v71 = 1;
LABEL_93:
            if ( *(_BYTE *)v36 != v71 )
            {
              v149[0] = 0;
LABEL_95:
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v69);
              __writecr8(v69);
              v68 = v168;
              goto LABEL_98;
            }
            v149[0] = 1;
          }
          else if ( !v149[0] )
          {
            goto LABEL_95;
          }
          v67 = *(volatile signed __int32 **)(104LL * (unsigned int)v162 + *(_QWORD *)(v20 + 384) + 80);
          if ( v67 )
            _InterlockedIncrement(v67);
          goto LABEL_95;
        }
        v36 = *(_QWORD *)(104LL * (unsigned int)v162 + v39 + 72);
        if ( !v36 )
          goto LABEL_172;
        v97 = EtwpPerfectHashFunctionSearch(v66, v36, 80LL);
        if ( *(_BYTE *)v36 == v97 )
        {
          v149[0] = 1;
LABEL_172:
          v67 = *(volatile signed __int32 **)(104LL * (unsigned int)v162 + *(_QWORD *)(v20 + 384) + 80);
          goto LABEL_98;
        }
        v149[0] = 0;
LABEL_98:
        v34 = v169;
        if ( v67 )
        {
          LOBYTE(BugCheckParameter4) = 1;
          if ( (int)EtwpApplyPayloadFilterInternal(v169, a10, v174, 0LL, BugCheckParameter4, v67 + 2, v149) < 0 )
            v149[0] = 1;
          if ( v68 < 2u && _InterlockedExchangeAdd(v67, 0xFFFFFFFF) == 1 )
            ExFreePoolWithTag((PVOID)v67, 0);
        }
        LOBYTE(CurrentIrql) = v168;
        if ( v149[0] )
          break;
LABEL_100:
        v25 = v173;
      }
      if ( v167 )
      {
        v104 = (int)v162;
        if ( (unsigned __int8)EtwpIsEventNameFilterEnabled(
                                v20,
                                (_DWORD)v162,
                                (unsigned __int8)CurrentIrql,
                                *(unsigned __int8 *)(v34 + 4),
                                *(_QWORD *)(v34 + 8),
                                0) )
        {
          if ( !(unsigned __int8)EtwpApplyEventNameFilter(
                                   v20,
                                   v104,
                                   a10,
                                   v174,
                                   0,
                                   CurrentIrql,
                                   *(_BYTE *)(v34 + 4),
                                   *(_QWORD *)(v34 + 8),
                                   0) )
            goto LABEL_100;
        }
      }
      v43 = *(unsigned __int16 *)(v32 + 6);
      v170 = *(unsigned __int16 *)(v32 + 6);
      v25 = v173;
      if ( (unsigned __int8)CurrentIrql >= 2u )
      {
        v47 = BugCheckParameter2_4;
        if ( (unsigned int)v43 >= *(_DWORD *)(v173 + 16) )
        {
          v46 = 1LL;
        }
        else
        {
          _mm_lfence();
          v46 = *(_QWORD *)(*(_QWORD *)(v173 + 456) + 8 * v43);
        }
      }
      else
      {
        v29 = *(_QWORD *)(*(_QWORD *)(v173 + 448) + 8 * v43);
        v36 = *(_DWORD *)(v29 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v29 + 20));
        v27 = *(_QWORD *)v29 + v36;
        _m_prefetchw((const void *)v27);
        v44 = *(_QWORD *)v27;
        do
        {
          if ( (v44 & 1) != 0 )
          {
            LOBYTE(v46) = (_BYTE)v163;
            v47 = BugCheckParameter2_4;
            goto LABEL_48;
          }
          v45 = v44;
          v44 = _InterlockedCompareExchange64((volatile signed __int64 *)v27, v44 + 2, v44);
        }
        while ( v45 != v44 );
        if ( (unsigned int)v43 >= *(_DWORD *)(v25 + 16) )
        {
          v46 = 1LL;
        }
        else
        {
          _mm_lfence();
          v46 = *(_QWORD *)(*(_QWORD *)(v25 + 456) + 8 * v43);
        }
        v47 = 1;
        LOBYTE(BugCheckParameter2_4) = 1;
      }
      v163 = (unsigned int *)v46;
LABEL_48:
      if ( (v46 & 1) != 0 )
        break;
      v48 = v202 != 0LL ? 0x10 : 0;
      v49 = 104;
      if ( !v202 )
        v49 = 80;
      v50 = v49;
      LODWORD(Size) = v49;
      v155 = v49;
      if ( (*(_DWORD *)(v32 + 8) & 0xFFFFFF9F) == 0 )
        goto LABEL_62;
      if ( EtwpPagingDisabled || (v159 & 1) != 0 || !(unsigned int)MmCanThreadFault() || BYTE6(v196[1].Queue) )
        v51 = 0;
      else
        v51 = 256;
      v48 |= v51;
      v52 = *(_DWORD *)(v32 + 8);
      LODWORD(Size) = v49;
      v155 = v49;
      if ( (v52 & 0x800) != 0 )
      {
        if ( v190 )
        {
          LODWORD(Size) = v49;
          v155 = v49;
          if ( v190 != EtwpHostSiloState )
          {
            v48 |= 0x200u;
            v50 = v49 + ((*(unsigned __int16 *)(v190 + 4224) + 15) & 0xFFFFFFF8);
            LODWORD(Size) = v50;
            v155 = v50;
          }
        }
      }
      if ( (v52 & 1) != 0 && (v48 & 0x100) != 0 )
      {
        v108 = (unsigned __int16 *)Src;
        if ( Src )
          goto LABEL_218;
        CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
        v109 = *(_GENERAL_LOOKASIDE **)(CurrentPrcb + 2176);
        ++v109->TotalAllocates;
        v110 = RtlpInterlockedPopEntrySList(&v109->ListHead);
        Src = v110;
        if ( v110 )
        {
          v111 = CurrentPrcb;
        }
        else
        {
          ++v109->AllocateMisses;
          v111 = CurrentPrcb;
          v134 = *(_GENERAL_LOOKASIDE **)(CurrentPrcb + 2184);
          CurrentPrcb = (unsigned __int64)v134;
          ++v134->TotalAllocates;
          v110 = RtlpInterlockedPopEntrySList(&v134->ListHead);
          Src = v110;
          if ( !v110 )
          {
            v135 = CurrentPrcb;
            ++*(_DWORD *)(CurrentPrcb + 24);
            v110 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(
                                   *(unsigned int *)(v135 + 36),
                                   *(unsigned int *)(v135 + 44));
            Src = v110;
          }
        }
        if ( v110 )
          LODWORD(v110->Next) = *(_DWORD *)(v111 + 36);
        v181 = v110;
        if ( v110 )
        {
          EtwpGetSidExtendedHeaderItem();
          v108 = (unsigned __int16 *)Src;
          if ( Src )
          {
LABEL_218:
            v48 |= 2u;
            v50 += *v108;
            LODWORD(Size) = v50;
            v155 = v50;
          }
        }
      }
      v53 = *(_DWORD *)(v32 + 8);
      if ( (v53 & 2) != 0 )
      {
        v48 |= 1u;
        v50 += 16;
        LODWORD(Size) = v50;
        v155 = v50;
      }
      if ( (v53 & 0x80u) != 0 && (ObGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->NestingLevel) )
      {
        v48 |= 0x40u;
        v50 += 16;
        LODWORD(Size) = v50;
        v155 = v50;
      }
      v54 = *(_DWORD *)(v32 + 8);
      if ( (v54 & 0x100) != 0 )
      {
        v48 |= 0x80u;
        v50 += 16;
        LODWORD(Size) = v50;
        v155 = v50;
      }
      if ( (v54 & 4) != 0
        && !EtwpPagingDisabled
        && ((v36 = *(_QWORD *)(v20 + 384)) != 0
         && ((v36 = *(unsigned int *)(104LL * (unsigned int)v162 + v36), (v36 & 0x80001000) == 0x80001000)
          || (v36 & 0x80002000) == 0x80002000
          || (v36 = (unsigned int)v36 & 0x80004000, (_DWORD)v36 == -2147467264))
          ? (v123 = 1)
          : (v123 = 0),
            !v123
         || (v124 = (unsigned __int16 *)v169,
             v125 = (unsigned int)v162,
             (unsigned __int8)EtwpApplyLevelKwFilter(
                                v20,
                                (_DWORD)v162,
                                *(unsigned __int8 *)(v169 + 4),
                                *(_QWORD *)(v169 + 8),
                                v148 < 2u))
         && (LOBYTE(v126) = v148 < 2u, (unsigned __int8)EtwpApplyStackWalkIdFilter(*v124, v20, v125, v126))
         && (unsigned __int8)EtwpApplyEventNameFilter(
                               v20,
                               v125,
                               a10,
                               v174,
                               0,
                               v168,
                               *((_BYTE *)v124 + 4),
                               *((_QWORD *)v124 + 1),
                               1)) )
      {
        if ( (v24 & 1) == 0 )
        {
          StackLookasideListEntry = EtwpGetStackLookasideListEntry();
          BugCheckParameter3 = StackLookasideListEntry;
          if ( StackLookasideListEntry )
          {
            v179 = (void *)(StackLookasideListEntry + 32);
            v24 |= 2u;
            v128 = 0LL;
            v129 = (v163[204] & 0x40000000) == 0;
            v130 = v171[5] - *(_QWORD *)&EventTracingProvGuid.Data1;
            if ( !v130 )
              v130 = v171[6] - *(_QWORD *)EventTracingProvGuid.Data4;
            if ( !v130 && *(_WORD *)v169 == 18 )
            {
              v48 |= 0x20u;
              v128 = (__int64)(v171 + 10);
              v129 = 0;
            }
            v131 = BugCheckParameter3;
            if ( !(unsigned __int8)EtwpGetStackExtendedHeaderItem(
                                     (_DWORD)v163,
                                     (_DWORD)v192,
                                     v159,
                                     BugCheckParameter3,
                                     v129,
                                     v128) )
            {
              EtwpReleaseStackLookasideListEntry(v131);
              v24 &= ~2u;
              v179 = 0LL;
            }
          }
          v24 |= 1u;
          v151 = v24;
        }
        v132 = (unsigned __int16 *)v179;
        v55 = v163;
        if ( v179 )
        {
          if ( (v163[205] & 1) != 0 && (unsigned __int8)EtwpGetCrimsonStackKey(v163, v179, &ListEntry) )
          {
            v48 |= 8u;
            v50 += 24;
            LODWORD(Size) = v50;
            v155 = v50;
          }
          else
          {
            v48 |= 4u;
            v50 += *v132;
            LODWORD(Size) = v50;
            v155 = v50;
          }
        }
      }
      else
      {
LABEL_62:
        v55 = v163;
      }
      v56 = 48LL * v205;
      v57 = &v203[v56];
      v58 = 0LL;
      v59 = 0;
      if ( a10 )
      {
        v36 = v174 + 8;
        v29 = a10;
        do
        {
          if ( v167 )
            v60 = *(_BYTE *)(v36 + 4);
          else
            v60 = 0;
          v56 = v60;
          if ( v60 )
          {
            if ( v60 == 1 )
            {
              LOWORD(v58) = *(_WORD *)v36 + v58;
              v161 = v58;
              v157 = ++v59;
            }
          }
          else
          {
            v50 += *(_DWORD *)v36;
            v155 = v50;
          }
          v36 += 16LL;
          --v29;
        }
        while ( v29 );
        LODWORD(Size) = v50;
      }
      if ( v59 )
      {
        v50 += ((unsigned __int16)v58 + 15) & 0xFFFFFFF8;
        LODWORD(Size) = v50;
        v155 = v50;
      }
      if ( (_WORD)v164 )
      {
        v50 += ((unsigned __int16)v164 + 15) & 0xFFFFFFF8;
        LODWORD(Size) = v50;
        v155 = v50;
      }
      *((_DWORD *)v57 + 10) = v50;
      if ( (unsigned int)Feature_Servicing_EtwLostEventsFlags__private_IsEnabledDeviceUsageNoInline(v56, v36, v29, v58) )
      {
        v61 = 0;
        if ( (v159 & 4) != 0 )
          v61 = 512;
        if ( (v159 & 8) != 0 )
          v61 |= 0x600u;
      }
      else
      {
        v61 = v188;
      }
      v62 = EtwpReserveTraceBuffer(v55, v50, (unsigned __int64 *)&v200, &v189, v61);
      CurrentPrcb = v62;
      if ( ListEntry )
        EtwpDereferenceStackEntry(ListEntry);
      if ( v62 )
      {
        *(_QWORD *)v57 = v55;
        *((_QWORD *)v57 + 1) = v62;
        *((_OWORD *)v57 + 1) = v200;
        *((_QWORD *)v57 + 4) = v201;
        ++v205;
        v63 = Size;
        *(_DWORD *)v62 = Size | 0xC0130000;
        *(_WORD *)(v62 + 4) = a6;
        *(_WORD *)(v62 + 6) = a7;
        *(_OWORD *)(v62 + 40) = *(_OWORD *)v169;
        if ( v182 )
        {
          v64 = *v182;
          *(_WORD *)(v62 + 4) = a6 | 0x80;
        }
        else
        {
          v64 = *(_OWORD *)(v171 + 5);
        }
        *(_OWORD *)(v62 + 24) = v64;
        if ( a8 )
          v65 = *a8;
        else
          v65 = CPER_EMPTY_GUID;
        *(GUID *)(v62 + 64) = v65;
        *(_QWORD *)(v62 + 16) = v189;
        v82 = v192;
        *(_DWORD *)(v62 + 8) = v192[324];
        *(_DWORD *)(v62 + 12) = v82[322];
        *(_DWORD *)(v62 + 56) = v82[163];
        *(_DWORD *)(v62 + 60) = v82[183];
        if ( v48 )
        {
          if ( (v48 & 0x200) != 0 )
          {
            v166 = (unsigned __int16 *)(v62 + 80);
            v137 = v190;
            v138 = (*(_WORD *)(v190 + 4224) + 15) & 0xFFF8;
            *(_WORD *)(v62 + 80) = v138;
            *(_WORD *)(v62 + 82) = 16;
            *(_WORD *)(v62 + 86) = *(_WORD *)(v137 + 4224);
            *(_WORD *)(v62 + 84) = 0;
            v139 = v138 - *(_WORD *)(v137 + 4224) - 8;
            memmove((void *)(v62 + 88), *(const void **)(v137 + 4216), *(unsigned __int16 *)(v137 + 4224));
            memset_0((void *)(v62 + 88 + *(unsigned __int16 *)(v190 + 4224)), 0, v139);
            *(_WORD *)(v62 + 4) |= 1u;
            v84 = v166;
            v83 = *v166 + 80;
            BugCheckParameter2 = v83;
            v175 = v166;
            v63 = Size;
          }
          else
          {
            v83 = BugCheckParameter2;
            v84 = 0LL;
          }
          if ( (v48 & 0x10) != 0 )
          {
            v136 = (char *)(v62 + v83);
            *(_DWORD *)v136 = 65560;
            *((_DWORD *)v136 + 1) = 0x100000;
            *(_OWORD *)(v136 + 8) = *a9;
            *(_WORD *)(v62 + 4) |= 1u;
            v83 += 24;
            BugCheckParameter2 = v83;
            if ( v84 )
              *((_WORD *)v84 + 2) |= 1u;
            v84 = v136;
            v166 = (unsigned __int16 *)v136;
            v175 = v136;
          }
          if ( (v48 & 2) != 0 )
          {
            v105 = (unsigned __int16 *)(v62 + v83);
            memmove(v105, Src, *(unsigned __int16 *)Src);
            *(_WORD *)(v62 + 4) |= 1u;
            v83 = *(unsigned __int16 *)Src + BugCheckParameter2;
            BugCheckParameter2 = v83;
            if ( v166 )
              v166[2] |= 1u;
            v84 = v105;
            v166 = v105;
            v175 = v105;
          }
          if ( (v48 & 1) != 0 )
          {
            v145 = (_DWORD *)(v62 + v83);
            *v145 = 196624;
            v145[1] = 0x40000;
            v145[2] = PsGetCurrentProcessSessionId();
            *(_WORD *)(v62 + 4) |= 1u;
            v83 = BugCheckParameter2 + 16;
            BugCheckParameter2 += 16;
            if ( v166 )
              v166[2] |= 1u;
            v84 = v145;
            v166 = (unsigned __int16 *)v145;
            v175 = v145;
          }
          if ( (v48 & 0x40) != 0 )
          {
            v119 = (_DWORD *)(v62 + v83);
            *v119 = 851984;
            v119[1] = 0x80000;
            *((_QWORD *)v119 + 1) = KeGetCurrentThread()->ApcState.Process[3].CycleTime | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
            *(_WORD *)(v62 + 4) |= 1u;
            v83 += 16;
            BugCheckParameter2 = v83;
            if ( v84 )
              *((_WORD *)v84 + 2) |= 1u;
            v84 = v119;
            v166 = (unsigned __int16 *)v119;
            v175 = v119;
          }
          if ( (v48 & 0x80u) != 0 )
          {
            v85 = (_DWORD *)(v62 + v83);
            *v85 = 655376;
            v85[1] = 0x80000;
            if ( (v24 & 4) == 0 )
            {
              v86 = KeGetCurrentPrcb();
              v27 = _InterlockedIncrement64((volatile signed __int64 *)v86->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v86->Number << 48);
              v191 = v27;
              v24 |= 4u;
              v151 = v24;
              if ( v198 )
                *v198 = v27;
            }
            *((_QWORD *)v85 + 1) = v191;
            *(_WORD *)(v62 + 4) |= 1u;
            v83 += 16;
            BugCheckParameter2 = v83;
            if ( v84 )
              *((_WORD *)v84 + 2) |= 1u;
            v84 = v85;
            v166 = (unsigned __int16 *)v85;
            v175 = v85;
          }
          if ( (v48 & 4) != 0 )
          {
            v133 = (_QWORD *)(v62 + v83);
            memmove(v133, v179, *(unsigned __int16 *)v179);
            if ( v133[1] )
            {
              if ( (v48 & 0x20) == 0 )
              {
                LOBYTE(v27) = 1;
                if ( !(unsigned __int8)EtwpQueueStackWalkApc(
                                         (_DWORD)v192,
                                         (unsigned __int8)v168,
                                         (_DWORD)v163,
                                         v27,
                                         (__int64)(v133 + 1)) )
                  v133[1] = 0LL;
              }
            }
            *(_WORD *)(v62 + 4) |= 1u;
            v87 = v179;
            v83 = *(unsigned __int16 *)v179 + BugCheckParameter2;
            BugCheckParameter2 = v83;
            if ( v166 )
              v166[2] |= 1u;
            v84 = v133;
            v166 = (unsigned __int16 *)v133;
            v175 = v133;
          }
          else
          {
            v87 = v179;
          }
          if ( (v48 & 8) != 0 )
          {
            v146 = (_DWORD *)(v62 + v83);
            *v146 = 1179672;
            v146[1] = 0x100000;
            *((_QWORD *)v146 + 2) = ListEntry;
            *((_QWORD *)v146 + 1) = v87[1];
            *(_WORD *)(v62 + 4) |= 1u;
            v83 += 24;
            BugCheckParameter2 = v83;
            if ( v84 )
              *((_WORD *)v84 + 2) |= 1u;
            v88 = (unsigned __int16 *)v146;
            v166 = (unsigned __int16 *)v146;
            v175 = v146;
          }
          else
          {
            v88 = v166;
          }
        }
        else
        {
          v83 = BugCheckParameter2;
          v88 = 0LL;
        }
        v89 = v164;
        if ( (_WORD)v164 )
        {
          v112 = v62 + v83;
          v162 = (unsigned __int16 *)v112;
          v113 = (v164 + 15) & 0xFFF8;
          *(_WORD *)v112 = v113;
          *(_DWORD *)(v112 + 2) = 12;
          *(_WORD *)(v112 + 6) = v89;
          v114 = v113 - v89 - 8;
          BugCheckParameter2_4 = v114;
          Size = v112 + 8;
          v115 = v89;
          memmove((void *)(v112 + 8), v183, v89);
          memset_0((void *)(v115 + Size), 0, v114);
          v116 = v162;
          v117 = BugCheckParameter2;
          v118 = v166;
          *(_WORD *)(v62 + 4) |= 1u;
          v83 = *v116 + v117;
          BugCheckParameter2 = v83;
          if ( v118 )
            v118[2] |= 1u;
          v88 = v116;
        }
        v90 = v157;
        if ( v157 )
        {
          v120 = (unsigned __int16 *)(v62 + v83);
          v121 = v161;
          v122 = (v161 + 15) & 0xFFF8;
          *v120 = v122;
          *(_DWORD *)(v120 + 1) = 11;
          v120[3] = v121;
          v180 = v120 + 4;
          v199 = (char *)v120 + v121 + 8;
          memset_0(v199, 0, (unsigned __int16)(v122 - v121 - 8));
          *(_WORD *)(v62 + 4) |= 1u;
          v83 = *v120 + BugCheckParameter2;
          BugCheckParameter2 = v83;
          v90 = v157;
          if ( v88 )
            v88[2] |= 1u;
        }
        v91 = 0;
        while ( 1 )
        {
          LODWORD(v162) = v91;
          if ( v91 >= a10 )
          {
            v96 = v163;
            if ( (v163[3] & 0x80000) != 0 && (!KdPitchDebugger && !(_BYTE)KdDebuggerNotPresent || KdEventLoggingPresent) )
              EtwpSendTraceEvent(v163, &v200);
            if ( *((_QWORD *)v96 + 194) )
              EtwpInvokeEventCallback(v96, &v200, v171 + 5, 0LL);
            LOBYTE(CurrentIrql) = v168;
            v25 = v173;
            v29 = 80LL;
            v28 = 1LL;
            if ( v194 )
              *(_DWORD *)(v194 + 4LL * (v170 >> 5)) |= 1 << (v170 & 0x1F);
            goto LABEL_18;
          }
          v92 = *(unsigned int *)(v174 + 16LL * v91 + 8);
          LODWORD(Size) = *(_DWORD *)(v174 + 16LL * v91 + 8);
          v27 = *(_QWORD *)(v174 + 16LL * v91);
          v93 = v167 ? *(_BYTE *)(v174 + 16LL * v91 + 12) : 0;
          if ( !v93 )
            break;
          if ( v93 == 1 )
          {
            if ( !v180 || (char *)v180 + v92 > v199 || !v90 )
              KeBugCheckEx(0x11Du, 5uLL, v83, v63, 0LL);
            memmove(v180, *(const void **)(v174 + 16LL * v91), v92);
            v83 = BugCheckParameter2;
            v180 = (char *)v180 + (unsigned int)v92;
            v90 = --v157;
            ++v91;
          }
          else
          {
            if ( v93 == 3 && (_DWORD)v92 == 8 )
              *(_QWORD *)(v62 + 16) = *(_QWORD *)v27;
LABEL_160:
            ++v91;
          }
        }
        v94 = (void *)(v62 + v83);
        v175 = v94;
        v95 = v92 + v83;
        BugCheckParameter2 = v95;
        if ( v95 > v63 )
          KeBugCheckEx(0x11Du, 5uLL, v95, v63, 0LL);
        memmove(v94, (const void *)v27, v92);
        v83 = BugCheckParameter2;
        v90 = v157;
        goto LABEL_160;
      }
      if ( (unsigned int)Size > 0xFFF8 )
      {
        v98 = -1073741675;
      }
      else
      {
        v98 = -1073741801;
        if ( (unsigned int)Size > v55[2] )
          v98 = -2147483643;
      }
      v99 = v197;
      if ( !v157 )
        v99 = 0LL;
      v100 = v178;
      if ( !v157 )
        v100 = 0;
      v101 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT);
      v102 = v163;
      if ( v101 )
        EtwpTraceLostEvent((_DWORD)v171 + 40, v169, (_DWORD)v163 + 136, v159, v98, v100, v99, v148 < 2u, 0);
      v103 = v165;
      if ( v165 >= 0 )
      {
        if ( (v102[3] & 0x8000000) == 0 )
          v103 = v98;
        v165 = v103;
      }
      v25 = v173;
      if ( (_BYTE)BugCheckParameter2_4 )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v173 + 448) + 8LL * v170),
          1u);
      if ( v98 == -1073741675 )
      {
        v165 = -1073741675;
        LOBYTE(CurrentIrql) = v168;
        goto LABEL_28;
      }
      LOBYTE(CurrentIrql) = v168;
    }
    if ( v47 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v25 + 448) + 8 * v43), 1u);
  }
  while ( (_DWORD)v43 != 3 );
  v72 = -1073741816;
  v31 = 3221226238LL;
  if ( *(_DWORD *)(v25 + 4068) )
    v72 = -1073741058;
  v165 = v72;
LABEL_28:
  if ( (v24 & 2) != 0 )
    EtwpReleaseStackLookasideListEntry(BugCheckParameter3);
  if ( v165 < 0 )
  {
    v73 = v150;
    v74 = *(_QWORD *)(v169 + 8);
    v197 = v74;
    v75 = *(_BYTE *)(v169 + 4);
    LOBYTE(BugCheckParameter2_4) = v75;
    v31 = (signed __int64)v171;
    v76 = v171[49];
    if ( v205 )
    {
      v152 = v148 < 2u;
      v140 = (unsigned int **)&v204;
      v141 = v205;
      v142 = (int)v171;
      v143 = v169;
      do
      {
        v144 = *(v140 - 1);
        if ( (v144[3] & 0x8000000) == 0 )
        {
          **v140 = (unsigned __int16)**v140 | 0xC00D0000;
          EtwpUpdateEventsLostCount(v144);
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
            EtwpTraceLostEvent(v142 + 40, v143, (_DWORD)v144 + 136, v159, v165, a10, v174, v148 < 2u, 0);
        }
        EtwpReleaseTraceBuffer(v140 + 1, v31, v29);
        if ( v148 < 2u )
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v76 + 448) + 8LL * *v144),
            1u);
        v140 += 6;
        --v141;
      }
      while ( v141 );
      v73 = v150;
      v74 = v197;
      v75 = BugCheckParameter2_4;
      v31 = (signed __int64)v171;
    }
    v30 = !_BitScanForward(&v77, v150);
    if ( v30 )
      goto LABEL_32;
    while ( 1 )
    {
      v73 &= v73 - 1;
      if ( EtwpLevelKeywordEnabled(v31 + 32 * (v77 + 4LL), v75, v74) )
      {
        v78 = *(unsigned __int16 *)(v27 + 6);
        v79 = v148;
        if ( v148 < 2u )
        {
          if ( !ExAcquireRundownProtectionCacheAwareEx(
                  *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v76 + 448) + 8 * v78),
                  1u) )
            goto LABEL_118;
          v79 = v148;
        }
        if ( (unsigned int)v78 < *(_DWORD *)(v76 + 16) )
        {
          v80 = *(_QWORD *)(8 * v78 + *(_QWORD *)(v76 + 456));
          v79 = v148;
        }
        else
        {
          v80 = 1LL;
        }
        if ( (v80 & 1) != 0 )
        {
          if ( v79 >= 2u )
            goto LABEL_118;
        }
        else
        {
          EtwpUpdateEventsLostCount(v80);
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
            EtwpTraceLostEvent((_DWORD)v171 + 40, v169, v80 + 136, v159, v165, a10, v174, v148 < 2u, 0);
          if ( v148 >= 2u )
            goto LABEL_118;
        }
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v76 + 448) + 8 * v78), 1u);
      }
LABEL_118:
      v30 = !_BitScanForward(&v77, v73);
      v31 = (signed __int64)v171;
      if ( v30 )
        goto LABEL_32;
    }
  }
  LODWORD(v162) = 0;
  if ( v205 )
  {
    do
    {
      EtwpReleaseTraceBuffer(&v203[48 * v22 + 16], v31, v29);
      if ( (unsigned __int8)CurrentIrql < 2u )
      {
        v27 = *(_QWORD *)(*(_QWORD *)(v25 + 448) + 8LL * **v81);
        v29 = *(_QWORD *)v27 + *(_DWORD *)(v27 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v27 + 20));
        _m_prefetchw((const void *)v29);
        while ( 1 )
        {
          while ( 1 )
          {
            v31 = *(_QWORD *)v29;
            if ( (*(_QWORD *)v29 & 1) != 0 )
              break;
            if ( v31 == _InterlockedCompareExchange64((volatile signed __int64 *)v29, v31 - 2, v31) )
              goto LABEL_130;
          }
          if ( v31 != 1 )
            break;
          v29 = *(_QWORD *)v27;
        }
        v31 &= ~1uLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v31, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          KeSetEvent((PRKEVENT)(v31 + 8), 0, 0);
      }
LABEL_130:
      LODWORD(v162) = (_DWORD)v162 + 1;
      v22 = (int)v162;
    }
    while ( (unsigned int)v162 < v205 );
  }
LABEL_32:
  if ( v158 )
    KiLeaveCriticalRegionUnsafe((__int64)v196, v31, v29, v27);
  v41 = (_SLIST_ENTRY *)Src;
  if ( Src )
  {
    v106 = KeGetCurrentPrcb();
    P = v106->PPLookasideList[8].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses, P = v106->PPLookasideList[8].L, ++P->TotalFrees, LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v41);
    }
    else
    {
      ++P->FreeMisses;
      if ( (void (__stdcall *)(PVOID))P->FreeEx == ExFreePool )
        ExFreePool(v41);
      else
        guard_dispatch_icall_no_overrides(v41, v106);
    }
  }
  return (unsigned int)v165;
}
