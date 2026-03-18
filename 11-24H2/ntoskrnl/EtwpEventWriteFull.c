/*
 * XREFs of EtwpEventWriteFull @ 0x140328590
 * Callers:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x1403482A0 (EtwWriteKMSecurityEvent.c)
 *     EtwpDiskProvTraceDisk @ 0x140349D5C (EtwpDiskProvTraceDisk.c)
 *     EtwpStackWalkApc @ 0x1403ED4B0 (EtwpStackWalkApc.c)
 *     EtwpApcPoolThunk @ 0x1403ED870 (EtwpApcPoolThunk.c)
 *     EtwWriteString @ 0x1404A9DC0 (EtwWriteString.c)
 *     EtwWriteErrorLogEntry @ 0x140A492C4 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MmCanThreadFault @ 0x14027DC40 (MmCanThreadFault.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x140327DF0 (EtwpReserveTraceBuffer.c)
 *     Feature_Servicing_EtwLostEventsFlags__private_IsEnabledDeviceUsageNoInline @ 0x14032A690 (Feature_Servicing_EtwLostEventsFlags__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x14032A6D0 (EtwpReleaseStackLookasideListEntry.c)
 *     EtwpIsEventNameFilterEnabled @ 0x14032A760 (EtwpIsEventNameFilterEnabled.c)
 *     EtwpDereferenceStackEntry @ 0x14032A8D0 (EtwpDereferenceStackEntry.c)
 *     EtwpReleaseTraceBuffer @ 0x14032ACC0 (EtwpReleaseTraceBuffer.c)
 *     EtwpApplyPayloadFilterInternal @ 0x14032B140 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpTraceLostEvent @ 0x14032BB34 (EtwpTraceLostEvent.c)
 *     EtwpUpdateEventsLostCount @ 0x14032BF28 (EtwpUpdateEventsLostCount.c)
 *     PsGetCurrentProcessSessionId @ 0x140331630 (PsGetCurrentProcessSessionId.c)
 *     PsGetEffectiveServerSilo @ 0x140349B30 (PsGetEffectiveServerSilo.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1403ED180 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpQueueStackWalkApc @ 0x1403EE1D0 (EtwpQueueStackWalkApc.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14040CCA0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpApplyStackWalkIdFilter @ 0x14041B264 (EtwpApplyStackWalkIdFilter.c)
 *     EtwpGetStackLookasideListEntry @ 0x1404407E0 (EtwpGetStackLookasideListEntry.c)
 *     EtwpApplyLevelKwFilter @ 0x1404606A8 (EtwpApplyLevelKwFilter.c)
 *     EtwpSendTraceEvent @ 0x1404AC8C4 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404AC9C0 (EtwpInvokeEventCallback.c)
 *     EtwpGetCrimsonStackKey @ 0x1404CC8C8 (EtwpGetCrimsonStackKey.c)
 *     EtwpApplyEventNameFilter @ 0x1404EFD50 (EtwpApplyEventNameFilter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1409227D0 (EtwpGetSidExtendedHeaderItem.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        _QWORD *a1,
        unsigned __int16 a2,
        __int16 a3,
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
  __int64 v19; // r15
  __int64 CurrentIrql; // rbx
  int v21; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 EffectiveServerSilo; // rax
  _QWORD *v24; // rax
  char v25; // di
  struct _KTHREAD *v26; // rax
  __int64 v27; // r9
  __int64 v28; // r8
  bool i; // zf
  signed __int64 v30; // rdx
  char v31; // r13
  __int64 v32; // r12
  __int64 v33; // r14
  int v34; // ecx
  bool v35; // al
  __int64 v36; // r10
  unsigned __int64 v37; // r11
  _KPROCESS *Process; // rcx
  __int64 v39; // rdx
  __int64 v41; // r14
  struct _SLIST_ENTRY *v42; // r8
  __int64 v44; // r12
  __int64 v45; // r15
  __int64 v46; // r10
  signed __int64 *v47; // r9
  signed __int64 v48; // rax
  signed __int64 v49; // rtt
  int v50; // ebx
  int v51; // r15d
  unsigned int v52; // r13d
  int v53; // eax
  int v54; // eax
  unsigned __int16 *v55; // rcx
  struct _KPRCB *CurrentPrcb; // r13
  _GENERAL_LOOKASIDE *P; // r15
  _DWORD *v58; // rcx
  _GENERAL_LOOKASIDE *L; // r15
  __int64 v60; // r9
  int v61; // eax
  int v62; // eax
  _OWORD *v63; // r15
  __int64 v64; // rcx
  _BYTE *v65; // r14
  __int64 v66; // r9
  int v67; // r10d
  unsigned __int8 v68; // al
  __int16 v69; // ax
  __int64 v70; // r12
  __int128 v71; // xmm0
  GUID v72; // xmm0
  _DWORD *v73; // rcx
  unsigned int v74; // r10d
  _DWORD *v75; // r15
  unsigned __int16 *v76; // r14
  unsigned __int16 *v77; // r15
  _QWORD *v78; // rdx
  unsigned __int16 *v79; // r14
  unsigned __int16 v80; // ax
  int v81; // r11d
  char *v82; // r15
  unsigned int v83; // ebx
  size_t v84; // r14
  _QWORD *v85; // r9
  char v86; // cl
  void *v87; // rcx
  unsigned int v88; // r10d
  unsigned int *v89; // rbx
  struct _KPRCB *v90; // rdx
  _GENERAL_LOOKASIDE *v91; // rcx
  signed __int64 v92; // rax
  signed __int64 v93; // rtt
  unsigned int *v94; // r14
  __int64 v95; // r10
  int v96; // r11d
  int v97; // ecx
  __int16 v98; // bx
  volatile signed __int32 *v99; // r13
  unsigned __int8 v100; // r15
  __int64 v101; // rcx
  unsigned __int16 v102; // cx
  char v103; // al
  unsigned __int16 v104; // di
  __int64 v105; // r14
  unsigned __int8 v106; // r15
  __int64 v107; // rbx
  unsigned int v108; // ecx
  int v109; // ecx
  _DWORD *v110; // r8
  struct _KPRCB *v111; // rcx
  unsigned __int64 v112; // r9
  unsigned __int16 v113; // cx
  char v114; // al
  _DWORD *v115; // rdx
  int v116; // r15d
  unsigned __int16 *v117; // r15
  unsigned __int16 v118; // r14
  unsigned __int16 v119; // r14
  __int64 v120; // rbx
  int v121; // r10d
  unsigned __int16 *v122; // rcx
  unsigned __int16 *v123; // rbx
  __int64 v124; // rax
  unsigned __int16 v125; // dx
  unsigned int **v126; // rsi
  __int64 v127; // r12
  int v128; // r15d
  unsigned int *v129; // r13
  bool v130; // al
  unsigned __int16 *v131; // r14
  unsigned int v132; // r15d
  __int64 v133; // r9
  ULONG_PTR StackLookasideListEntry; // rax
  __int64 v135; // rdx
  char v136; // cl
  __int64 v137; // rax
  ULONG_PTR v138; // r14
  unsigned __int16 *v139; // r14
  __int64 v140; // r13
  __int16 v141; // r15
  unsigned __int16 v142; // r15
  _QWORD *v143; // r14
  int v144; // r9d
  char *v145; // rcx
  _DWORD *v146; // r14
  _DWORD *v147; // rcx
  __int64 v148; // r12
  unsigned __int8 v149; // al
  __int64 v150; // r13
  int BugCheckParameter4; // [rsp+20h] [rbp-518h]
  unsigned __int8 v152; // [rsp+50h] [rbp-4E8h]
  char v153; // [rsp+51h] [rbp-4E7h] BYREF
  char v154; // [rsp+52h] [rbp-4E6h]
  unsigned __int8 v155; // [rsp+53h] [rbp-4E5h]
  int BugCheckParameter2; // [rsp+54h] [rbp-4E4h]
  unsigned int BugCheckParameter2_4; // [rsp+58h] [rbp-4E0h]
  unsigned __int16 v158; // [rsp+60h] [rbp-4D8h]
  unsigned int v159; // [rsp+68h] [rbp-4D0h]
  unsigned __int16 v160; // [rsp+6Ch] [rbp-4CCh]
  __int16 v161; // [rsp+70h] [rbp-4C8h]
  int v162; // [rsp+74h] [rbp-4C4h]
  char v163; // [rsp+78h] [rbp-4C0h]
  int v164; // [rsp+7Ch] [rbp-4BCh]
  __int64 v165; // [rsp+80h] [rbp-4B8h]
  unsigned __int16 v166; // [rsp+88h] [rbp-4B0h]
  unsigned __int16 *v167; // [rsp+90h] [rbp-4A8h]
  int v168; // [rsp+98h] [rbp-4A0h]
  int v169; // [rsp+9Ch] [rbp-49Ch]
  __int16 v170; // [rsp+A0h] [rbp-498h]
  unsigned __int16 *v171; // [rsp+A8h] [rbp-490h]
  unsigned int *v172; // [rsp+B0h] [rbp-488h]
  __int64 v173; // [rsp+B8h] [rbp-480h]
  unsigned int v174; // [rsp+C0h] [rbp-478h]
  _QWORD *v175; // [rsp+C8h] [rbp-470h]
  void *Src; // [rsp+D0h] [rbp-468h]
  __int64 v177; // [rsp+D8h] [rbp-460h]
  __int64 v178; // [rsp+E0h] [rbp-458h]
  void *v179; // [rsp+E8h] [rbp-450h]
  __int64 v180; // [rsp+F0h] [rbp-448h]
  int v181; // [rsp+F8h] [rbp-440h]
  void *v182; // [rsp+100h] [rbp-438h]
  void *v183; // [rsp+108h] [rbp-430h]
  _DWORD *v184; // [rsp+110h] [rbp-428h]
  __int128 *v185; // [rsp+118h] [rbp-420h]
  void *v186; // [rsp+120h] [rbp-418h]
  __int64 v187; // [rsp+128h] [rbp-410h]
  _QWORD *v188; // [rsp+130h] [rbp-408h]
  __int64 v189; // [rsp+138h] [rbp-400h]
  __int64 v190; // [rsp+140h] [rbp-3F8h]
  int v191; // [rsp+14Ch] [rbp-3ECh]
  unsigned int v192; // [rsp+150h] [rbp-3E8h]
  signed __int64 v193; // [rsp+158h] [rbp-3E0h] BYREF
  unsigned __int64 v194; // [rsp+160h] [rbp-3D8h]
  _DWORD *v195; // [rsp+168h] [rbp-3D0h]
  PSLIST_ENTRY ListEntry; // [rsp+170h] [rbp-3C8h] BYREF
  __int64 v197; // [rsp+178h] [rbp-3C0h]
  ULONG_PTR BugCheckParameter3; // [rsp+180h] [rbp-3B8h]
  struct _KTHREAD *v199; // [rsp+188h] [rbp-3B0h]
  __int64 v200; // [rsp+190h] [rbp-3A8h]
  __int64 v201; // [rsp+198h] [rbp-3A0h]
  unsigned __int64 *v202; // [rsp+1A0h] [rbp-398h]
  char *v203; // [rsp+1A8h] [rbp-390h]
  __int128 v204; // [rsp+1B0h] [rbp-388h] BYREF
  __int64 v205; // [rsp+1C0h] [rbp-378h]
  _OWORD *v206; // [rsp+1C8h] [rbp-370h]
  __int64 v207; // [rsp+1D0h] [rbp-368h]
  _BYTE v208[8]; // [rsp+1E0h] [rbp-358h] BYREF
  char v209; // [rsp+1E8h] [rbp-350h] BYREF
  unsigned int v210; // [rsp+4E0h] [rbp-58h]

  v164 = a4;
  v175 = a1;
  v178 = a11;
  v200 = a11;
  v192 = a10;
  v206 = a9;
  v19 = a14;
  v188 = a1;
  v158 = a2;
  v181 = a4;
  v191 = a4;
  v165 = a5;
  v189 = a11;
  CurrentIrql = a12;
  v197 = a13;
  v186 = a16;
  v202 = a17;
  v21 = 0;
  v169 = 0;
  memset_0(v208, 0, 0x308uLL);
  LODWORD(v167) = 0;
  Src = 0LL;
  v184 = 0LL;
  v182 = 0LL;
  BugCheckParameter3 = 0LL;
  v194 = 0LL;
  v170 = a15 & 0x100;
  if ( !KeGetPcr()->Prcb.NestingLevel
    && ((CurrentThread = KeGetCurrentThread(),
         CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL)
      ? (EffectiveServerSilo = PsGetEffectiveServerSilo())
      : (EffectiveServerSilo = CurrentThread->Process[3].ActiveGroupsMask.Masks[0]),
        (v207 = EffectiveServerSilo) != 0) )
  {
    v24 = *(_QWORD **)(EffectiveServerSilo + 1504);
  }
  else
  {
    v24 = &PspHostSiloGlobals;
  }
  v201 = v24[104];
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a14 )
    v19 = (__int64)a1;
  v177 = v19;
  if ( v186 )
  {
    if ( (a15 & 0x200) != 0 )
    {
      v168 = 0;
      v161 = 0;
      v185 = (__int128 *)((char *)v186 + 6);
    }
    else
    {
      v168 = *(unsigned __int16 *)v186;
      v161 = v168;
      v185 = 0LL;
    }
  }
  else
  {
    v168 = 0;
    v161 = 0;
    v185 = 0LL;
  }
  v25 = 0;
  v154 = 0;
  v180 = a1[81];
  v187 = v180;
  if ( v202 && *v202 )
  {
    v194 = *v202;
    v25 = 4;
    v154 = 4;
  }
  v26 = KeGetCurrentThread();
  v199 = v26;
  if ( !a12 )
    CurrentIrql = (__int64)v26;
  v195 = (_DWORD *)CurrentIrql;
  if ( KeAreInterruptsEnabled() )
    CurrentIrql = KeGetCurrentIrql();
  else
    LOBYTE(CurrentIrql) = 15;
  v155 = CurrentIrql;
  v173 = CurrentIrql;
  v152 = CurrentIrql;
  v163 = 0;
  if ( !(_BYTE)CurrentIrql )
  {
    --v199->KernelApcDisable;
    v163 = 1;
  }
  v158 &= ~a3;
  v27 = 1LL;
  while ( 2 )
  {
    v28 = 80LL;
    while ( 1 )
    {
LABEL_22:
      i = !_BitScanForward((unsigned int *)&v30, v158);
      LODWORD(v167) = v30;
      if ( i )
      {
        v41 = v180;
        goto LABEL_32;
      }
      v172 = (unsigned int *)v27;
      v204 = 0LL;
      v205 = 0LL;
      ListEntry = 0LL;
      v193 = 0LL;
      BugCheckParameter2 = 80;
      v171 = 0LL;
      v179 = 0LL;
      v31 = 0;
      LOBYTE(v160) = 0;
      v166 = 0;
      v162 = 0;
      v183 = 0LL;
      v203 = 0LL;
      v158 &= v158 - 1;
      v32 = (unsigned int)v30;
      v33 = v19 + 32 * (v30 + 4);
      if ( v197 )
      {
        v34 = *(_DWORD *)(v197 + 4LL * (*(unsigned __int16 *)(v33 + 6) >> 5));
        if ( _bittest(&v34, *(_BYTE *)(v33 + 6) & 0x1F) )
          continue;
      }
      v35 = EtwpLevelKeywordEnabled(v33, *(_BYTE *)(v165 + 4), *(_QWORD *)(v165 + 8));
      v28 = 80LL;
      if ( v35 )
        break;
    }
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( ((v164 & 2) != 0 || SLODWORD(Process[1].DirectoryTableBase) < 0) && (*(_DWORD *)(v33 + 8) & 0x200) != 0 )
    {
LABEL_163:
      v19 = v177;
      continue;
    }
    break;
  }
  v39 = *(_QWORD *)(v19 + 640);
  if ( !v39
    || (*(_DWORD *)(104 * v32 + v39) & 0x80000200) != 0x80000200
    && (*(_DWORD *)(104 * v32 + v39) & 0x80000100) != 0x80000100 )
  {
    v44 = v177;
    goto LABEL_44;
  }
  v98 = *(_WORD *)v36;
  v153 = 1;
  v99 = 0LL;
  if ( (unsigned __int8)v173 < 2u )
  {
    v100 = KeGetCurrentIrql();
    __writecr8(v37);
    if ( KiIrqlFlags )
    {
      LOBYTE(v39) = 2;
      KiRaiseIrqlProcessIrqlFlags(v100, v39);
    }
    v101 = 104 * v32;
    v44 = v177;
    v39 = *(_QWORD *)(*(_QWORD *)(v177 + 640) + v101 + 72);
    if ( v39 )
    {
      v102 = __ROR2__(v98, *(_BYTE *)(v39 + 1)) & *(_WORD *)(v39 + 2);
      while ( v98 != *(_WORD *)(v39 + 4LL * v102 + 8) )
      {
        v102 = *(unsigned __int8 *)(v39 + 4LL * v102 + 6);
        if ( v102 == 255 )
        {
          v103 = 0;
          goto LABEL_172;
        }
      }
      v103 = 1;
LABEL_172:
      if ( *(_BYTE *)v39 != v103 )
      {
        v153 = 0;
LABEL_174:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v100);
        __writecr8(v100);
        v36 = v165;
        goto LABEL_177;
      }
      v153 = 1;
    }
    else if ( !v153 )
    {
      goto LABEL_174;
    }
    v99 = *(volatile signed __int32 **)(104LL * (unsigned int)v167 + *(_QWORD *)(v177 + 640) + 80);
    if ( v99 )
      _InterlockedIncrement(v99);
    goto LABEL_174;
  }
  v28 = *(_QWORD *)(104LL * (unsigned int)v167 + v39 + 72);
  if ( v28 )
  {
    v113 = __ROR2__(v98, *(_BYTE *)(v28 + 1)) & *(_WORD *)(v28 + 2);
    while ( v98 != *(_WORD *)(v28 + 4LL * v113 + 8) )
    {
      v113 = *(unsigned __int8 *)(v28 + 4LL * v113 + 6);
      if ( v113 == 255 )
      {
        v114 = 0;
        goto LABEL_220;
      }
    }
    v114 = 1;
LABEL_220:
    if ( *(_BYTE *)v28 != v114 )
    {
      v153 = 0;
      v44 = v177;
      goto LABEL_177;
    }
    v153 = 1;
  }
  v99 = *(volatile signed __int32 **)(104LL * (unsigned int)v167 + *(_QWORD *)(v19 + 640) + 80);
  v44 = v177;
LABEL_177:
  if ( v99 )
  {
    LOBYTE(BugCheckParameter4) = 1;
    if ( (int)EtwpApplyPayloadFilterInternal(v36, a10, v178, 0LL, BugCheckParameter4, v99 + 2, &v153) < 0 )
      v153 = 1;
    LOBYTE(CurrentIrql) = v173;
    if ( (unsigned __int8)v173 < 2u && _InterlockedExchangeAdd(v99, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag((PVOID)v99, 0);
  }
  else
  {
    LOBYTE(CurrentIrql) = v173;
  }
  if ( !v153 )
    goto LABEL_162;
  v31 = v160;
  v36 = v165;
LABEL_44:
  if ( v170 )
  {
    v116 = (int)v167;
    if ( (unsigned __int8)EtwpIsEventNameFilterEnabled(
                            v44,
                            (_DWORD)v167,
                            (unsigned __int8)CurrentIrql,
                            *(unsigned __int8 *)(v36 + 4),
                            *(_QWORD *)(v36 + 8),
                            0) )
    {
      if ( !(unsigned __int8)EtwpApplyEventNameFilter(
                               v44,
                               v116,
                               a10,
                               v178,
                               0,
                               CurrentIrql,
                               *(_BYTE *)(v165 + 4),
                               *(_QWORD *)(v165 + 8),
                               0) )
      {
LABEL_162:
        v27 = 1LL;
        goto LABEL_163;
      }
    }
  }
  v45 = *(unsigned __int16 *)(v33 + 6);
  v174 = *(unsigned __int16 *)(v33 + 6);
  v46 = v180;
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( (unsigned int)v45 >= *(_DWORD *)(v180 + 16) )
    {
      v27 = 1LL;
    }
    else
    {
      _mm_lfence();
      v27 = *(_QWORD *)(*(_QWORD *)(v180 + 712) + 8 * v45);
    }
  }
  else
  {
    v28 = *(_QWORD *)(*(_QWORD *)(v180 + 704) + 8 * v45);
    v39 = *(_DWORD *)(v28 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v28 + 20));
    v47 = (signed __int64 *)(*(_QWORD *)v28 + v39);
    _m_prefetchw(v47);
    v48 = *v47;
    do
    {
      if ( (v48 & 1) != 0 )
      {
        v27 = (__int64)v172;
        goto LABEL_53;
      }
      v49 = v48;
      v48 = _InterlockedCompareExchange64(v47, v48 + 2, v48);
    }
    while ( v49 != v48 );
    if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 16) )
    {
      v27 = 1LL;
    }
    else
    {
      _mm_lfence();
      v27 = *(_QWORD *)(*(_QWORD *)(v46 + 712) + 8 * v45);
    }
    v31 = 1;
    LOBYTE(v160) = 1;
  }
  v172 = (unsigned int *)v27;
LABEL_53:
  if ( (v27 & 1) != 0 )
  {
    if ( v31 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v46 + 704) + 8 * v45), 1u);
    if ( (_DWORD)v45 != 3 )
      goto LABEL_162;
    v41 = v180;
    v109 = -1073741816;
    v30 = 3221226238LL;
    if ( *(_DWORD *)(v180 + 4340) )
      v109 = -1073741058;
    v169 = v109;
  }
  else
  {
    v50 = v206 != 0LL ? 0x10 : 0;
    v51 = 104;
    if ( !v206 )
      v51 = 80;
    v52 = v51;
    BugCheckParameter2_4 = v51;
    v159 = v51;
    if ( (*(_DWORD *)(v33 + 8) & 0xFFFFFF9F) == 0 )
      goto LABEL_80;
    if ( EtwpPagingDisabled || (v164 & 1) != 0 || !MmCanThreadFault() || BYTE6(v199[1].Queue) )
      v53 = 0;
    else
      v53 = 256;
    v50 |= v53;
    v54 = *(_DWORD *)(v33 + 8);
    BugCheckParameter2_4 = v51;
    v159 = v51;
    if ( (v54 & 0x800) != 0 )
    {
      if ( v201 )
      {
        BugCheckParameter2_4 = v51;
        v159 = v51;
        if ( v201 != EtwpHostSiloState )
        {
          v50 |= 0x200u;
          BugCheckParameter2_4 = v51 + ((*(unsigned __int16 *)(v201 + 4496) + 15) & 0xFFFFFFF8);
          v159 = BugCheckParameter2_4;
        }
      }
    }
    if ( (v54 & 1) == 0 || (v50 & 0x100) == 0 )
      goto LABEL_190;
    v55 = (unsigned __int16 *)Src;
    if ( Src )
      goto LABEL_73;
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[8].P;
    ++P->TotalAllocates;
    v58 = RtlpInterlockedPopEntrySList(&P->ListHead);
    Src = v58;
    if ( !v58 )
    {
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[8].L;
      ++L->TotalAllocates;
      v58 = RtlpInterlockedPopEntrySList(&L->ListHead);
      Src = v58;
      if ( !v58 )
      {
        ++L->AllocateMisses;
        v58 = (_DWORD *)guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size, L->Tag, v60);
        Src = v58;
      }
    }
    if ( v58 )
      *v58 = CurrentPrcb->Number;
    v184 = v58;
    if ( v58 && (EtwpGetSidExtendedHeaderItem(), (v55 = (unsigned __int16 *)Src) != 0LL) )
    {
LABEL_73:
      v50 |= 2u;
      v52 = *v55 + BugCheckParameter2_4;
      BugCheckParameter2_4 = v52;
      v159 = v52;
    }
    else
    {
LABEL_190:
      v52 = BugCheckParameter2_4;
    }
    v61 = *(_DWORD *)(v33 + 8);
    if ( (v61 & 2) != 0 )
    {
      v50 |= 1u;
      v52 += 16;
      BugCheckParameter2_4 = v52;
      v159 = v52;
    }
    if ( (v61 & 0x80u) != 0 && (KeGetEffectiveIrql() < 2u || !KeGetCurrentPrcb()->NestingLevel) )
    {
      v50 |= 0x40u;
      v52 += 16;
      BugCheckParameter2_4 = v52;
      v159 = v52;
    }
    v62 = *(_DWORD *)(v33 + 8);
    if ( (v62 & 0x100) != 0 )
    {
      v50 |= 0x80u;
      v52 += 16;
      BugCheckParameter2_4 = v52;
      v159 = v52;
    }
    if ( (v62 & 4) != 0 && !EtwpPagingDisabled )
    {
      v39 = *(_QWORD *)(v44 + 640);
      v130 = 0;
      if ( v39 )
      {
        v39 = *(unsigned int *)(104LL * (unsigned int)v167 + v39);
        if ( (v39 & 0x80001000) == 0x80001000
          || (v39 & 0x80002000) == 0x80002000
          || (v39 = (unsigned int)v39 & 0x80004000, (_DWORD)v39 == -2147467264) )
        {
          v130 = 1;
        }
      }
      if ( !v130
        || (v131 = (unsigned __int16 *)v165,
            v132 = (unsigned int)v167,
            (unsigned __int8)EtwpApplyLevelKwFilter(
                               v44,
                               (_DWORD)v167,
                               *(unsigned __int8 *)(v165 + 4),
                               *(_QWORD *)(v165 + 8),
                               v152 < 2u))
        && (LOBYTE(v133) = v152 < 2u, (unsigned __int8)EtwpApplyStackWalkIdFilter(*v131, v44, v132, v133))
        && (unsigned __int8)EtwpApplyEventNameFilter(
                              v44,
                              v132,
                              a10,
                              v178,
                              0,
                              v173,
                              *((_BYTE *)v131 + 4),
                              *((_QWORD *)v131 + 1),
                              1) )
      {
        if ( (v25 & 1) != 0 )
        {
          v63 = (_OWORD *)v165;
        }
        else
        {
          StackLookasideListEntry = EtwpGetStackLookasideListEntry();
          BugCheckParameter3 = StackLookasideListEntry;
          if ( StackLookasideListEntry )
          {
            v182 = (void *)(StackLookasideListEntry + 32);
            v25 |= 2u;
            v135 = 0LL;
            v136 = (v172[204] & 0x40000000) == 0;
            v137 = v175[5] - *(_QWORD *)&EventTracingProvGuid.Data1;
            if ( !v137 )
              v137 = v175[6] - *(_QWORD *)EventTracingProvGuid.Data4;
            v63 = (_OWORD *)v165;
            if ( !v137 && *(_WORD *)v165 == 18 )
            {
              v50 |= 0x20u;
              v135 = (__int64)(v175 + 10);
              v136 = 0;
            }
            v138 = BugCheckParameter3;
            if ( !(unsigned __int8)EtwpGetStackExtendedHeaderItem(
                                     (_DWORD)v172,
                                     (_DWORD)v195,
                                     v164,
                                     BugCheckParameter3,
                                     v136,
                                     v135) )
            {
              EtwpReleaseStackLookasideListEntry(v138);
              v25 &= ~2u;
              v182 = 0LL;
            }
          }
          else
          {
            v63 = (_OWORD *)v165;
          }
          v25 |= 1u;
          v154 = v25;
        }
        v139 = (unsigned __int16 *)v182;
        if ( v182 )
        {
          if ( (v172[205] & 1) != 0 && (unsigned __int8)EtwpGetCrimsonStackKey(v172, v182, &ListEntry) )
          {
            v50 |= 8u;
            v52 += 24;
            BugCheckParameter2_4 = v52;
            v159 = v52;
          }
          else
          {
            v50 |= 4u;
            v52 += *v139;
            BugCheckParameter2_4 = v52;
            v159 = v52;
          }
        }
      }
      else
      {
        v63 = v131;
      }
    }
    else
    {
LABEL_80:
      v63 = (_OWORD *)v165;
    }
    v64 = 48LL * v210;
    v65 = &v208[v64];
    v66 = 0LL;
    v67 = 0;
    if ( a10 )
    {
      v39 = v178 + 8;
      v28 = a10;
      do
      {
        if ( v170 )
          v68 = *(_BYTE *)(v39 + 4);
        else
          v68 = 0;
        v64 = v68;
        if ( v68 )
        {
          if ( v68 == 1 )
          {
            LOWORD(v66) = *(_WORD *)v39 + v66;
            v166 = v66;
            v162 = ++v67;
          }
        }
        else
        {
          v52 += *(_DWORD *)v39;
          v159 = v52;
        }
        v39 += 16LL;
        --v28;
      }
      while ( v28 );
      BugCheckParameter2_4 = v52;
    }
    if ( v67 )
    {
      v52 += ((unsigned __int16)v66 + 15) & 0xFFFFFFF8;
      BugCheckParameter2_4 = v52;
      v159 = v52;
    }
    if ( (_WORD)v168 )
    {
      v52 += ((unsigned __int16)v168 + 15) & 0xFFFFFFF8;
      BugCheckParameter2_4 = v52;
      v159 = v52;
    }
    *((_DWORD *)v65 + 10) = v52;
    if ( (unsigned int)Feature_Servicing_EtwLostEventsFlags__private_IsEnabledDeviceUsageNoInline(v64, v39, v28, v66) )
    {
      v69 = 0;
      if ( (v164 & 4) != 0 )
        v69 = 512;
      if ( (v164 & 8) != 0 )
        v69 |= 0x600u;
    }
    else
    {
      v69 = v191;
    }
    v70 = EtwpReserveTraceBuffer(v172, v52, (unsigned __int64 *)&v204, &v193, v69);
    v190 = v70;
    if ( ListEntry )
      EtwpDereferenceStackEntry(ListEntry);
    if ( v70 )
    {
      *(_QWORD *)v65 = v172;
      *((_QWORD *)v65 + 1) = v70;
      *((_OWORD *)v65 + 1) = v204;
      *((_QWORD *)v65 + 4) = v205;
      ++v210;
      *(_DWORD *)v70 = v52 | 0xC0130000;
      *(_WORD *)(v70 + 4) = a6;
      *(_WORD *)(v70 + 6) = a7;
      *(_OWORD *)(v70 + 40) = *v63;
      if ( v185 )
      {
        v71 = *v185;
        *(_WORD *)(v70 + 4) = a6 | 0x80;
      }
      else
      {
        v71 = *(_OWORD *)(v175 + 5);
      }
      *(_OWORD *)(v70 + 24) = v71;
      if ( a8 )
        v72 = *a8;
      else
        v72 = CPER_EMPTY_GUID;
      *(GUID *)(v70 + 64) = v72;
      *(_QWORD *)(v70 + 16) = v193;
      v73 = v195;
      *(_DWORD *)(v70 + 8) = v195[324];
      *(_DWORD *)(v70 + 12) = v73[322];
      *(_DWORD *)(v70 + 56) = v73[163];
      *(_DWORD *)(v70 + 60) = v73[183];
      if ( v50 )
      {
        if ( (v50 & 0x200) != 0 )
        {
          v171 = (unsigned __int16 *)(v70 + 80);
          v140 = v201;
          v141 = (*(_WORD *)(v201 + 4496) + 15) & 0xFFF8;
          *(_WORD *)(v70 + 80) = v141;
          *(_WORD *)(v70 + 82) = 16;
          *(_WORD *)(v70 + 86) = *(_WORD *)(v140 + 4496);
          *(_WORD *)(v70 + 84) = 0;
          v142 = v141 - *(_WORD *)(v140 + 4496) - 8;
          memmove((void *)(v70 + 88), *(const void **)(v140 + 4488), *(unsigned __int16 *)(v140 + 4496));
          memset_0((void *)(v70 + 88 + *(unsigned __int16 *)(v140 + 4496)), 0, v142);
          *(_WORD *)(v70 + 4) |= 1u;
          v75 = v171;
          v74 = *v171 + 80;
          BugCheckParameter2 = v74;
          v179 = v171;
          v52 = BugCheckParameter2_4;
        }
        else
        {
          v74 = BugCheckParameter2;
          v75 = 0LL;
        }
        if ( (v50 & 0x10) != 0 )
        {
          v145 = (char *)(v70 + v74);
          *(_DWORD *)v145 = 65560;
          *((_DWORD *)v145 + 1) = 0x100000;
          *(_OWORD *)(v145 + 8) = *a9;
          *(_WORD *)(v70 + 4) |= 1u;
          v74 += 24;
          BugCheckParameter2 = v74;
          if ( v75 )
            *((_WORD *)v75 + 2) |= 1u;
          v75 = v145;
          v171 = (unsigned __int16 *)v145;
          v179 = v145;
        }
        if ( (v50 & 2) != 0 )
        {
          v76 = (unsigned __int16 *)(v70 + v74);
          v77 = (unsigned __int16 *)Src;
          memmove(v76, Src, *(unsigned __int16 *)Src);
          *(_WORD *)(v70 + 4) |= 1u;
          v74 = *v77 + BugCheckParameter2;
          BugCheckParameter2 = v74;
          if ( v171 )
            v171[2] |= 1u;
          v75 = v76;
          v171 = v76;
          v179 = v76;
        }
        if ( (v50 & 1) != 0 )
        {
          v146 = (_DWORD *)(v70 + v74);
          *v146 = 196624;
          v146[1] = 0x40000;
          v146[2] = PsGetCurrentProcessSessionId();
          *(_WORD *)(v70 + 4) |= 1u;
          v74 = BugCheckParameter2 + 16;
          BugCheckParameter2 += 16;
          if ( v75 )
            *((_WORD *)v75 + 2) |= 1u;
          v75 = v146;
          v171 = (unsigned __int16 *)v146;
          v179 = v146;
        }
        if ( (v50 & 0x40) != 0 )
        {
          v115 = (_DWORD *)(v70 + v74);
          *v115 = 851984;
          v115[1] = 0x80000;
          *((_QWORD *)v115 + 1) = KeGetCurrentThread()->ApcState.Process[3].CycleTime | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
          *(_WORD *)(v70 + 4) |= 1u;
          v74 += 16;
          BugCheckParameter2 = v74;
          if ( v75 )
            *((_WORD *)v75 + 2) |= 1u;
          v75 = v115;
          v171 = (unsigned __int16 *)v115;
          v179 = v115;
        }
        if ( (v50 & 0x80u) != 0 )
        {
          v110 = (_DWORD *)(v70 + v74);
          *v110 = 655376;
          v110[1] = 0x80000;
          if ( (v25 & 4) == 0 )
          {
            v111 = KeGetCurrentPrcb();
            v112 = _InterlockedIncrement64((volatile signed __int64 *)v111->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v111->Number << 48);
            v194 = v112;
            v25 |= 4u;
            v154 = v25;
            if ( v202 )
              *v202 = v112;
          }
          *((_QWORD *)v110 + 1) = v194;
          *(_WORD *)(v70 + 4) |= 1u;
          v74 += 16;
          BugCheckParameter2 = v74;
          if ( v75 )
            *((_WORD *)v75 + 2) |= 1u;
          v75 = v110;
          v171 = (unsigned __int16 *)v110;
          v179 = v110;
        }
        if ( (v50 & 4) != 0 )
        {
          v143 = (_QWORD *)(v70 + v74);
          memmove(v143, v182, *(unsigned __int16 *)v182);
          if ( v143[1] )
          {
            if ( (v50 & 0x20) == 0 )
            {
              LOBYTE(v144) = 1;
              if ( !(unsigned __int8)EtwpQueueStackWalkApc(
                                       (_DWORD)v195,
                                       (unsigned __int8)v173,
                                       (_DWORD)v172,
                                       v144,
                                       (__int64)(v143 + 1)) )
                v143[1] = 0LL;
            }
          }
          *(_WORD *)(v70 + 4) |= 1u;
          v78 = v182;
          v74 = *(unsigned __int16 *)v182 + BugCheckParameter2;
          BugCheckParameter2 = v74;
          if ( v171 )
            v171[2] |= 1u;
          v75 = v143;
          v171 = (unsigned __int16 *)v143;
          v179 = v143;
        }
        else
        {
          v78 = v182;
        }
        if ( (v50 & 8) != 0 )
        {
          v147 = (_DWORD *)(v70 + v74);
          *v147 = 1179672;
          v147[1] = 0x100000;
          *((_QWORD *)v147 + 2) = ListEntry;
          *((_QWORD *)v147 + 1) = v78[1];
          *(_WORD *)(v70 + 4) |= 1u;
          v74 += 24;
          BugCheckParameter2 = v74;
          if ( v75 )
            *((_WORD *)v75 + 2) |= 1u;
          v79 = (unsigned __int16 *)v147;
          v171 = (unsigned __int16 *)v147;
          v179 = v147;
        }
        else
        {
          v79 = v171;
        }
      }
      else
      {
        v74 = BugCheckParameter2;
        v79 = 0LL;
      }
      v80 = v168;
      if ( (_WORD)v168 )
      {
        v117 = (unsigned __int16 *)(v70 + v74);
        v167 = v117;
        v118 = (v168 + 15) & 0xFFF8;
        *v117 = v118;
        *(_DWORD *)(v117 + 1) = 12;
        v117[3] = v80;
        v119 = v118 - v80 - 8;
        v160 = v119;
        v120 = v80;
        memmove(v117 + 4, v186, v80);
        memset_0((char *)v117 + v120 + 8, 0, v119);
        v121 = BugCheckParameter2;
        v122 = v171;
        v70 = v190;
        *(_WORD *)(v190 + 4) |= 1u;
        v74 = *v117 + v121;
        BugCheckParameter2 = v74;
        if ( v122 )
          v122[2] |= 1u;
        v79 = v117;
      }
      v81 = v162;
      if ( v162 )
      {
        v123 = (unsigned __int16 *)(v70 + v74);
        v124 = v166;
        v125 = (v166 + 15) & 0xFFF8;
        *v123 = v125;
        *(_DWORD *)(v123 + 1) = 11;
        v123[3] = v124;
        v82 = (char *)(v123 + 4);
        v183 = v123 + 4;
        v203 = (char *)v123 + v124 + 8;
        memset_0(v203, 0, (unsigned __int16)(v125 - v124 - 8));
        *(_WORD *)(v70 + 4) |= 1u;
        v74 = *v123 + BugCheckParameter2;
        BugCheckParameter2 = v74;
        v81 = v162;
        if ( v79 )
          v79[2] |= 1u;
      }
      else
      {
        v82 = (char *)v183;
      }
      v83 = 0;
      while ( 1 )
      {
        LODWORD(v167) = v83;
        if ( v83 >= a10 )
        {
          v89 = v172;
          if ( (v172[3] & 0x80000) != 0 && (!KdPitchDebugger && !(_BYTE)KdDebuggerNotPresent || KdEventLoggingPresent) )
            EtwpSendTraceEvent(v172, &v204);
          if ( *((_QWORD *)v89 + 194) )
            EtwpInvokeEventCallback(v89, &v204, v175 + 5, 0LL);
          v19 = v177;
          LOBYTE(CurrentIrql) = v173;
          v28 = 80LL;
          v27 = 1LL;
          if ( v197 )
            *(_DWORD *)(v197 + 4LL * (v174 >> 5)) |= 1 << (v174 & 0x1F);
          goto LABEL_22;
        }
        v84 = *(unsigned int *)(v178 + 16LL * v83 + 8);
        BugCheckParameter2_4 = *(_DWORD *)(v178 + 16LL * v83 + 8);
        v85 = *(_QWORD **)(v178 + 16LL * v83);
        v86 = v170 ? *(_BYTE *)(v178 + 16LL * v83 + 12) : 0;
        if ( !v86 )
          break;
        if ( v86 == 1 )
        {
          if ( !v82 || &v82[v84] > v203 || !v81 )
            KeBugCheckEx(0x11Du, 5uLL, v74, v52, 0LL);
          memmove(v82, *(const void **)(v178 + 16LL * v83), v84);
          v74 = BugCheckParameter2;
          v82 += (unsigned int)v84;
          v183 = v82;
          v81 = --v162;
          ++v83;
        }
        else
        {
          if ( v86 == 3 && (_DWORD)v84 == 8 )
            *(_QWORD *)(v70 + 16) = *v85;
LABEL_127:
          ++v83;
        }
      }
      v87 = (void *)(v70 + v74);
      v179 = v87;
      v88 = v84 + v74;
      BugCheckParameter2 = v88;
      if ( v88 > v52 )
        KeBugCheckEx(0x11Du, 5uLL, v88, v52, 0LL);
      memmove(v87, v85, v84);
      v74 = BugCheckParameter2;
      v81 = v162;
      goto LABEL_127;
    }
    v94 = v172;
    if ( v52 > 0xFFF8 )
    {
      LODWORD(CurrentIrql) = -1073741675;
    }
    else
    {
      LODWORD(CurrentIrql) = -1073741801;
      if ( v52 > v172[2] )
        LODWORD(CurrentIrql) = -2147483643;
    }
    v27 = EtwpEventTracingProvRegHandle;
    if ( EtwpEventTracingProvRegHandle
      && (EtwpLevelKeywordEnabled(*(_QWORD *)(EtwpEventTracingProvRegHandle + 32) + 96LL, 2u, 64LL)
       || *(_WORD *)(v27 + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(v27 + 40) + 96LL, v30, v28)) )
    {
      EtwpTraceLostEvent((_DWORD)v175 + 40, (_DWORD)v63, (_DWORD)v94 + 136, v164, CurrentIrql, v96, v95, v152 < 2u, 0);
    }
    v97 = v169;
    if ( v169 >= 0 )
    {
      if ( (v94[3] & 0x8000000) == 0 )
        v97 = CurrentIrql;
      v169 = v97;
    }
    v41 = v180;
    if ( (_BYTE)v160 )
    {
      v27 = *(_QWORD *)(*(_QWORD *)(v180 + 704) + 8LL * v174);
      v28 = *(_QWORD *)v27 + *(_DWORD *)(v27 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v27 + 20));
      _m_prefetchw((const void *)v28);
      while ( 1 )
      {
        while ( 1 )
        {
          v30 = *(_QWORD *)v28;
          if ( (*(_QWORD *)v28 & 1) != 0 )
            break;
          if ( v30 == _InterlockedCompareExchange64((volatile signed __int64 *)v28, v30 - 2, v30) )
            goto LABEL_161;
        }
        if ( v30 != 1 )
          break;
        v28 = *(_QWORD *)v27;
      }
      v30 &= ~1uLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v30, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        KeSetEvent((PRKEVENT)(v30 + 8), 0, 0);
    }
LABEL_161:
    i = (_DWORD)CurrentIrql == -1073741675;
    LOBYTE(CurrentIrql) = v173;
    if ( !i )
      goto LABEL_162;
    v169 = -1073741675;
  }
LABEL_32:
  if ( (v25 & 2) != 0 )
    EtwpReleaseStackLookasideListEntry(BugCheckParameter3);
  if ( v169 >= 0 )
  {
    LODWORD(v167) = 0;
    if ( v210 )
    {
      do
      {
        v28 = (__int64)&v208[48 * v21];
        v27 = *(_QWORD *)(v28 + 16);
        v30 = *(_QWORD *)(v28 + 24);
        _m_prefetchw((const void *)v30);
        v92 = *(_QWORD *)v30;
        while ( (v27 ^ (unsigned __int64)v92) < 0xF )
        {
          v93 = v92;
          v92 = _InterlockedCompareExchange64((volatile signed __int64 *)v30, v92 + 1, v92);
          if ( v93 == v92 )
            goto LABEL_139;
        }
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v28 + 16) + 12LL));
LABEL_139:
        if ( (unsigned __int8)CurrentIrql < 2u )
        {
          v27 = *(_QWORD *)(*(_QWORD *)(v41 + 704) + 8LL * **(unsigned int **)v28);
          v28 = *(_QWORD *)v27 + *(_DWORD *)(v27 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v27 + 20));
          _m_prefetchw((const void *)v28);
          while ( 1 )
          {
            while ( 1 )
            {
              v30 = *(_QWORD *)v28;
              if ( (*(_QWORD *)v28 & 1) != 0 )
                break;
              if ( v30 == _InterlockedCompareExchange64((volatile signed __int64 *)v28, v30 - 2, v30) )
                goto LABEL_143;
            }
            if ( v30 != 1 )
              break;
            v28 = *(_QWORD *)v27;
          }
          v30 &= ~1uLL;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v30, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            KeSetEvent((PRKEVENT)(v30 + 8), 0, 0);
        }
LABEL_143:
        LODWORD(v167) = (_DWORD)v167 + 1;
        v21 = (int)v167;
      }
      while ( (unsigned int)v167 < v210 );
    }
    goto LABEL_36;
  }
  v104 = v158;
  v105 = *(_QWORD *)(v165 + 8);
  v200 = v105;
  v106 = *(_BYTE *)(v165 + 4);
  v155 = v106;
  v30 = (signed __int64)v175;
  v107 = v175[81];
  if ( v210 )
  {
    LOBYTE(v160) = v152 < 2u;
    v126 = (unsigned int **)&v209;
    v127 = v210;
    v128 = (int)v175;
    do
    {
      v129 = *(v126 - 1);
      if ( (v129[3] & 0x8000000) == 0 )
      {
        **v126 = (unsigned __int16)**v126 | 0xC00D0000;
        EtwpUpdateEventsLostCount(v129);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(v128 + 40, v165, (_DWORD)v129 + 136, v164, v169, a10, v178, v152 < 2u, 0);
      }
      EtwpReleaseTraceBuffer(v126 + 1, v30, v28);
      if ( v152 < 2u )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v107 + 704) + 8LL * *v129),
          1u);
      v126 += 6;
      --v127;
    }
    while ( v127 );
    v104 = v158;
    v105 = v200;
    v106 = v155;
    v30 = (signed __int64)v175;
  }
  for ( i = !_BitScanForward(&v108, v158); !i; v30 = (signed __int64)v175 )
  {
    v104 &= v104 - 1;
    if ( EtwpLevelKeywordEnabled(v30 + 32 * (v108 + 4LL), v106, v105) )
    {
      v148 = *(unsigned __int16 *)(v27 + 6);
      v149 = v152;
      if ( v152 < 2u )
      {
        if ( !ExAcquireRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v107 + 704) + 8 * v148),
                1u) )
          goto LABEL_188;
        v149 = v152;
      }
      if ( (unsigned int)v148 < *(_DWORD *)(v107 + 16) )
      {
        v150 = *(_QWORD *)(8 * v148 + *(_QWORD *)(v107 + 712));
        v149 = v152;
      }
      else
      {
        v150 = 1LL;
      }
      if ( (v150 & 1) != 0 )
      {
        if ( v149 >= 2u )
          goto LABEL_188;
      }
      else
      {
        EtwpUpdateEventsLostCount(v150);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent((_DWORD)v175 + 40, v165, v150 + 136, v164, v169, a10, v178, v152 < 2u, 0);
        if ( v152 >= 2u )
          goto LABEL_188;
      }
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v107 + 704) + 8 * v148), 1u);
    }
LABEL_188:
    i = !_BitScanForward(&v108, v104);
  }
LABEL_36:
  if ( v163 )
    KiLeaveCriticalRegionUnsafe((__int64)v199, v30, v28, v27);
  v42 = (struct _SLIST_ENTRY *)Src;
  if ( Src )
  {
    v90 = KeGetCurrentPrcb();
    v91 = v90->PPLookasideList[8].P;
    ++v91->TotalFrees;
    if ( LOWORD(v91->ListHead.Alignment) < v91->Depth
      || (++v91->FreeMisses,
          v91 = v90->PPLookasideList[8].L,
          ++v91->TotalFrees,
          LOWORD(v91->ListHead.Alignment) < v91->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v91->ListHead, v42);
    }
    else
    {
      ++v91->FreeMisses;
      if ( (void (__stdcall *)(PVOID))v91->FreeEx == ExFreePool )
        ExFreePool(v42);
      else
        guard_dispatch_icall_no_overrides(v42, v90, v42, v27);
    }
  }
  return (unsigned int)v169;
}
