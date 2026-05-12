/*
 * XREFs of NvmeProcessPendingIoInSpecifiedGroup @ 0x140122190
 * Callers:
 *     NvmePendingIoDpcRoutine @ 0x14011DB10 (NvmePendingIoDpcRoutine.c)
 * Callees:
 *     StorCheckDpcWatchdogTimerExpire @ 0x14008EE70 (StorCheckDpcWatchdogTimerExpire.c)
 *     NvmeNamespaceProcessRequest @ 0x140107538 (NvmeNamespaceProcessRequest.c)
 *     AllocateNewNVMePrpListBufferEntry @ 0x140119600 (AllocateNewNVMePrpListBufferEntry.c)
 *     FreeAllSglAndContextInChainedSplitIoContext @ 0x14011A100 (FreeAllSglAndContextInChainedSplitIoContext.c)
 *     FreeNVMeChainedIoSplitContext @ 0x14011A240 (FreeNVMeChainedIoSplitContext.c)
 *     GetNVMeSGLBufferContext @ 0x14011A3F0 (GetNVMeSGLBufferContext.c)
 *     NvmeNamespaceQueueIo @ 0x14011D6B0 (NvmeNamespaceQueueIo.c)
 *     NvmeSendSplitIo @ 0x140124340 (NvmeSendSplitIo.c)
 *     NvmeSplitIoParallel @ 0x1401256A0 (NvmeSplitIoParallel.c)
 *     NvmeSubmitIoToSQ @ 0x140126050 (NvmeSubmitIoToSQ.c)
 *     StorRefillShadowQueue @ 0x14012796C (StorRefillShadowQueue.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

char __fastcall NvmeProcessPendingIoInSpecifiedGroup(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // r13
  union _SLIST_HEADER *v6; // r8
  unsigned int v7; // edi
  unsigned int v8; // r12d
  unsigned int v9; // edx
  __int64 v10; // rbx
  unsigned int v11; // eax
  int v12; // r14d
  KIRQL v13; // r15
  __int64 v14; // r8
  signed __int32 v15; // edx
  IRP *v16; // rsi
  unsigned int v17; // edx
  unsigned int v18; // r8d
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // r15d
  __int64 v24; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v26; // r14
  __int64 QuadPart; // rdx
  _IO_STACK_LOCATION *v28; // rcx
  char v29; // r10
  _LARGE_INTEGER ByteOffset; // r8
  __int64 v31; // r11
  __int16 v32; // di
  _IO_SECURITY_CONTEXT *SecurityContext; // r13
  unsigned int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // r9d
  char v38; // r13
  __int64 v39; // rbx
  signed __int32 v40; // eax
  int v41; // eax
  __int64 v42; // rax
  bool v43; // zf
  PSLIST_ENTRY v44; // r13
  char v45; // di
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rdi
  unsigned __int64 v57; // rcx
  unsigned int v58; // edx
  char v59; // al
  unsigned int v60; // eax
  __int64 NVMeSGLBufferContext; // rax
  __int64 v62; // r15
  char v63; // al
  char v64; // cl
  unsigned int v65; // eax
  _IO_STACK_LOCATION *v66; // rcx
  _IO_SECURITY_CONTEXT *v67; // rax
  int v68; // ebx
  __int64 v69; // rdi
  KIRQL v70; // al
  _IO_STACK_LOCATION *v71; // rbx
  __int64 v72; // rcx
  _MDL *v73; // rdi
  int v74; // eax
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // r15
  unsigned __int64 v77; // rdx
  __int16 v78; // r13
  __int64 v79; // r11
  unsigned int v80; // edx
  char v81; // al
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // r9
  int v84; // r9d
  PSLIST_ENTRY v85; // rax
  __int64 NewNVMePrpListBufferEntry; // rax
  __int64 v87; // r10
  __int64 v88; // r8
  IO_PRIORITY_HINT IoPriorityHint; // eax
  __int64 v90; // rax
  __int64 v91; // rbx
  __int64 v92; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v93; // rcx
  __int64 v94; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rax
  bool v98; // al
  char v100; // r14
  int v101; // ecx
  unsigned int v102; // edi
  __int64 v103; // rbx
  unsigned int v104; // r8d
  unsigned int v105; // r9d
  unsigned int v106; // r8d
  __int64 v107; // rcx
  unsigned int v108; // eax
  __int64 v109; // rcx
  _DWORD *v110; // rax
  int v111; // [rsp+28h] [rbp-D8h]
  int v112; // [rsp+38h] [rbp-C8h]
  __int64 v113; // [rsp+40h] [rbp-C0h]
  int v114; // [rsp+48h] [rbp-B8h]
  unsigned __int8 MajorFunction; // [rsp+60h] [rbp-A0h]
  KIRQL v116; // [rsp+60h] [rbp-A0h]
  bool v117; // [rsp+60h] [rbp-A0h]
  char v118; // [rsp+61h] [rbp-9Fh] BYREF
  KIRQL v119; // [rsp+62h] [rbp-9Eh]
  unsigned __int8 v120; // [rsp+63h] [rbp-9Dh]
  unsigned int v121; // [rsp+64h] [rbp-9Ch]
  __int64 v122; // [rsp+68h] [rbp-98h]
  int v123; // [rsp+70h] [rbp-90h]
  __int64 v124; // [rsp+78h] [rbp-88h]
  unsigned int v125; // [rsp+80h] [rbp-80h]
  __int16 v126; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v127; // [rsp+88h] [rbp-78h]
  int v128; // [rsp+8Ch] [rbp-74h]
  _MDL *MdlAddress; // [rsp+90h] [rbp-70h]
  _IO_STACK_LOCATION *v130; // [rsp+98h] [rbp-68h]
  __int64 v131; // [rsp+A0h] [rbp-60h]
  PSLIST_ENTRY ListEntry; // [rsp+A8h] [rbp-58h]
  int v133; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v134; // [rsp+B8h] [rbp-48h] BYREF
  union _SLIST_HEADER *v135; // [rsp+C0h] [rbp-40h]
  __int64 v136; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v137; // [rsp+D0h] [rbp-30h]
  __int64 v138; // [rsp+D8h] [rbp-28h]
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v140; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v141; // [rsp+108h] [rbp+8h] BYREF

  v2 = a1;
  v138 = a1;
  v121 = a2;
  v124 = a2;
  v43 = (*(_BYTE *)(a1 + 136) & 2) == 0;
  v3 = *(_QWORD *)(a1 + 1104);
  v4 = *(_DWORD *)(a1 + 656);
  v128 = v4;
  v5 = *(_QWORD *)(v3 + 8LL * a2);
  v137 = v5;
  if ( v43 )
    v6 = (union _SLIST_HEADER *)(192LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 872) + 2LL * a2)
                               + *(_QWORD *)(a1 + 728)
                               - 192LL);
  else
    v6 = (union _SLIST_HEADER *)(*(_QWORD *)(a1 + 728) + 192LL * a2);
  v7 = *(_DWORD *)(v5 + 64);
  v8 = 0;
  v127 = v7;
  v123 = v7;
  v135 = v6;
  while ( 2 )
  {
    v9 = v7;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v5 + 8LL * v7 + 264);
      if ( v10 )
      {
        if ( **(_DWORD **)(v10 + 16) )
          return 0;
        if ( *(_DWORD *)v10 || *(_DWORD *)(v10 + 48) != *(_DWORD *)(v10 + 52) )
          break;
      }
      if ( v4 != 1 )
      {
        v11 = v7 + 1;
        v7 = 0;
        if ( v11 < *(_DWORD *)(v5 + 4) )
          v7 = v11;
        v127 = v7;
        if ( v9 != v7 )
          continue;
      }
LABEL_182:
      v100 = 0;
LABEL_183:
      v101 = v123;
      v102 = v123;
      while ( 1 )
      {
        v103 = *(_QWORD *)(v5 + 8LL * v102 + 264);
        if ( v103 )
        {
          if ( *(_DWORD *)v103 == 2
            || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v103 + 32) + 16LL * *(unsigned int *)(v103 + 8))) )
          {
            if ( *(_DWORD *)(v103 + 48) == *(_DWORD *)(v103 + 52)
              || ((v104 = *(_DWORD *)(v103 + 48), v105 = *(_DWORD *)(v103 + 52), v104 != v105)
                ? (v104 <= v105
                 ? ((v107 = *(_QWORD *)(v103 + 24), *(_BYTE *)(*(_QWORD *)(v103 + 16) + 20LL))
                  ? (v106 = *(_DWORD *)(*(_QWORD *)(v107 + 1024) + 4LL) - v105 + v104)
                  : (v106 = *(_DWORD *)(*(_QWORD *)(v107 + 256) + 4LL) - v105 + v104))
                 : (v106 = v104 - v105))
                : (v106 = 0),
                  v106 <= *(_DWORD *)(*(_QWORD *)(v103 + 16) + 8LL)) )
            {
              v100 = 1;
              if ( (unsigned int)StorRefillShadowQueue(*(_QWORD *)(v103 + 16), v102, 0LL) == 4 )
                return v100;
            }
          }
          v101 = v123;
        }
        if ( v4 == 1 )
          break;
        v108 = v102 + 1;
        v102 = 0;
        if ( v108 < *(_DWORD *)(v5 + 4) )
          v102 = v108;
        if ( v101 == v102 )
          break;
        memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
        if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) >= 0
          && (WatchdogInformation.DpcWatchdogLimit
           && 100 * (unsigned __int64)WatchdogInformation.DpcWatchdogCount < 5
                                                                           * (unsigned __int64)WatchdogInformation.DpcWatchdogLimit
           || WatchdogInformation.DpcTimeLimit
           && 100 * (unsigned __int64)WatchdogInformation.DpcTimeCount < 10
                                                                       * (unsigned __int64)WatchdogInformation.DpcTimeLimit) )
        {
          return 1;
        }
        v101 = v123;
      }
      if ( v100 || !*(_DWORD *)(v5 + 4) )
        return v100;
      while ( 1 )
      {
        v109 = 8LL * v8 + 264;
        if ( *(_QWORD *)(v109 + v5) )
        {
          v110 = *(_DWORD **)(v109 + v5);
          if ( *v110 || v110[12] != v110[13] )
            break;
        }
        if ( ++v8 >= *(_DWORD *)(v5 + 4) )
          return v100;
      }
      return 1;
    }
    if ( !ExQueryDepthSList(v6 + 4) )
    {
      v100 = 1;
      goto LABEL_183;
    }
    v12 = *(_DWORD *)(v2 + 136) & 2;
    v134 = 0LL;
    v13 = KfRaiseIrql(2u);
    do
    {
      v14 = *(unsigned int *)(v10 + 52);
      if ( (_DWORD)v14 == *(_DWORD *)(v10 + 48) )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)v10, 0, 1) == 1 )
        {
          v97 = *(_QWORD *)(v10 + 24);
          if ( *(_BYTE *)(*(_QWORD *)(v10 + 16) + 20LL) == 1 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v97 + 956));
            KeLowerIrql(v13);
            goto LABEL_173;
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v97 + 16) + 952LL));
        }
        KeLowerIrql(v13);
LABEL_173:
        if ( v4 == 1 )
          goto LABEL_182;
        goto LABEL_174;
      }
      v15 = 0;
      if ( (unsigned int)(v14 + 1) < *(_DWORD *)(*(_QWORD *)(v10 + 16) + 4LL) )
        v15 = v14 + 1;
    }
    while ( (_DWORD)v14 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 52), v15, v14) );
    do
      v16 = (IRP *)_InterlockedExchange64((volatile __int64 *)(8 * v14 + *(_QWORD *)(v10 + 56)), 0LL);
    while ( !v16 );
    if ( !*(_DWORD *)(*(_QWORD *)(v10 + 16) + 16LL)
      && (*(_DWORD *)v10 == 2
       || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v10 + 32) + 16LL * *(unsigned int *)(v10 + 8)))) )
    {
      if ( *(_DWORD *)(v10 + 48) == *(_DWORD *)(v10 + 52)
        || ((v17 = *(_DWORD *)(v10 + 48), v18 = *(_DWORD *)(v10 + 52), v17 != v18)
          ? (v17 <= v18
           ? ((v20 = *(_QWORD *)(v10 + 24), *(_BYTE *)(*(_QWORD *)(v10 + 16) + 20LL))
            ? (v21 = *(_QWORD *)(v20 + 1024))
            : (v21 = *(_QWORD *)(v20 + 256)),
              v19 = *(_DWORD *)(v21 + 4) - v18 + v17)
           : (v19 = v17 - v18))
          : (v19 = 0),
            v19 <= *(_DWORD *)(*(_QWORD *)(v10 + 16) + 8LL)) )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v10 + 16) + 16LL), 1, 0) )
        {
          v22 = *(_QWORD *)(v10 + 24);
          if ( *(_BYTE *)(*(_QWORD *)(v10 + 16) + 20LL) )
            IoQueueWorkItem(
              *(PIO_WORKITEM *)(v22 + 1032),
              (PIO_WORKITEM_ROUTINE)NvmeControllerRefillShadowQueueRoutine,
              DelayedWorkQueue,
              *(PVOID *)(v10 + 24));
          else
            KeSetEvent((PRKEVENT)(v22 + 480), 0, 0);
        }
      }
    }
    KeLowerIrql(v13);
    if ( v12 )
    {
      v23 = NvmeNamespaceProcessRequest(*(_QWORD *)(v10 + 24), (__int64)v16, v121);
      goto LABEL_162;
    }
    if ( (int)IoGetIoAttributionHandle(v16, &v134) >= 0 )
    {
      v24 = v134;
      v140 = 0LL;
      LODWORD(v140) = 1;
      CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
      v141 = 0LL;
      DWORD1(v140) = CurrentStackLocation->MajorFunction | 0x200;
      *((_QWORD *)&v141 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v141 + 1);
      IoRecordIoAttribution(v24, &v140);
    }
    v26 = *(_QWORD *)(v10 + 24);
    QuadPart = 0LL;
    v28 = v16->Tail.Overlay.CurrentStackLocation;
    v29 = 0;
    v118 = 0;
    ByteOffset.QuadPart = 0LL;
    v126 = 0;
    v23 = 0;
    v31 = *(_QWORD *)(v26 + 16);
    v32 = 0;
    v136 = 0LL;
    v133 = 0;
    SecurityContext = v28->Parameters.Create.SecurityContext;
    v34 = (unsigned int)SecurityContext;
    v35 = HIDWORD(*(_QWORD *)(v31 + 136));
    LOBYTE(v35) = v35 & 1;
    v130 = v28;
    v131 = v35;
    ListEntry = 0LL;
    v122 = 0LL;
    v119 = 0;
    LOWORD(v125) = 0;
    if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0x8765432100000003LL )
    {
      QuadPart = v28->Parameters.Read.ByteOffset.QuadPart;
      v122 = QuadPart;
    }
    else if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0xFEDCBA9000000000LL )
    {
      ByteOffset = v28->Parameters.Read.ByteOffset;
      ListEntry = (PSLIST_ENTRY)ByteOffset.QuadPart;
    }
    if ( (unsigned int)(*(_DWORD *)(v26 + 96) - 5) > 1 )
    {
      v36 = *(_QWORD *)(v31 + 128);
      MajorFunction = v28->MajorFunction;
      v120 = v28->MajorFunction == 3;
      v37 = *(_DWORD *)(v36 + 200);
      LODWORD(MdlAddress) = v37;
      if ( v122 )
      {
        QuadPart = v122;
        v38 = v131;
        while ( 2 )
        {
          v39 = QuadPart;
LABEL_51:
          v40 = _InterlockedCompareExchange((volatile signed __int32 *)(v39 + 104), 4, 3);
          if ( v38 )
          {
            if ( v40 != 3 && _InterlockedCompareExchange((volatile signed __int32 *)(v39 + 104), 4, 1) != 1 )
              goto LABEL_64;
          }
          else if ( v40 != 3 )
          {
            if ( *(_DWORD *)(v39 + 104) == 1 )
              ++v32;
LABEL_64:
            v39 = *(_QWORD *)(v39 + 96);
            if ( v32 )
            {
              if ( !v39 )
              {
                v32 = 0;
                continue;
              }
            }
            else if ( !v39 )
            {
              goto LABEL_71;
            }
            goto LABEL_51;
          }
          break;
        }
        v41 = NvmeSendSplitIo(v39, v121, 0, 0, (__int64)&v118, (__int64)&v136, (__int64)&v133, (__int64)&v126, v29);
        v23 = v41;
        if ( v41 == 259 )
        {
          v42 = *(_QWORD *)(v26 + 16);
          LOWORD(v125) = v125 + 1;
          v29 = (unsigned __int16)v125 % (unsigned int)*(unsigned __int8 *)(v42 + 1730) == 0;
          v119 = v29;
        }
        else
        {
          if ( v41 == -2147483631 )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)(v39 + 104), 3, 4);
            NvmeNamespaceQueueIo(v26, *(_QWORD *)(v39 + 24), v121);
            goto LABEL_161;
          }
          if ( !*(_WORD *)(v39 + 34) )
          {
            v118 = 1;
LABEL_70:
            QuadPart = v122;
            goto LABEL_71;
          }
          if ( v118 )
            goto LABEL_70;
          v29 = v119;
        }
        QuadPart = v122;
        goto LABEL_64;
      }
      if ( !(_BYTE)v131 )
      {
        if ( ByteOffset.QuadPart )
        {
          v53 = *(_QWORD *)(ByteOffset.QuadPart + 96);
          v34 = *(_DWORD *)(ByteOffset.QuadPart + 116);
          *(_QWORD *)(ByteOffset.QuadPart + 64) = 0LL;
          *(_QWORD *)(ByteOffset.QuadPart + 72) = 0LL;
          goto LABEL_118;
        }
        v54 = v28->Parameters.Read.ByteOffset.QuadPart;
        if ( (_DWORD)SecurityContext )
        {
          v55 = *(unsigned int *)(v26 + 64);
          if ( (unsigned int)SecurityContext % (unsigned int)v55
            || (v56 = v54 / v55, v54 % v55)
            || (v57 = *(_QWORD *)(v26 + 432), v125 = (unsigned int)SecurityContext / (unsigned int)v55, v56 >= v57)
            || v57 - v56 < (unsigned int)SecurityContext / (unsigned int)v55 )
          {
            v23 = -1073741811;
            goto LABEL_104;
          }
          if ( (unsigned int)SecurityContext <= v37 )
          {
            v58 = *(_DWORD *)(v26 + 428);
            if ( !v58 )
              goto LABEL_102;
            if ( (unsigned int)SecurityContext <= v58 )
            {
              v59 = *(_BYTE *)(v26 + 427);
              if ( v59 )
                v60 = ((unsigned __int64)(unsigned int)SecurityContext >> v59)
                    + ((((unsigned int)v54 & (v58 - 1))
                      + v58
                      + (unsigned __int64)((unsigned int)SecurityContext & (v58 - 1))
                      - 1) >> v59);
              else
                v60 = (unsigned int)SecurityContext / v58
                    + ((unsigned int)SecurityContext % v58 - 1LL + v58 + v54 % v58) / v58;
              if ( v60 <= 1 )
              {
LABEL_102:
                NVMeSGLBufferContext = GetNVMeSGLBufferContext(v31, v121);
                ListEntry = (PSLIST_ENTRY)NVMeSGLBufferContext;
                v62 = NVMeSGLBufferContext;
                if ( !NVMeSGLBufferContext )
                {
                  v23 = -1073741670;
                  goto LABEL_104;
                }
                *(_QWORD *)(NVMeSGLBufferContext + 40) = v16;
                v63 = *(_BYTE *)(NVMeSGLBufferContext + 126) & 0xFE;
                *(_QWORD *)(v62 + 96) = v54;
                v64 = v63 | (MajorFunction == 3);
                *(_QWORD *)(v62 + 104) = v56;
                v65 = v125;
                *(_BYTE *)(v62 + 126) = v64;
                v66 = v130;
                *(_DWORD *)(v62 + 112) = v65;
                *(_QWORD *)(v62 + 32) = v26;
                *(_DWORD *)(v62 + 116) = (_DWORD)SecurityContext;
                *(_QWORD *)(v62 + 64) = 0LL;
                *(_QWORD *)(v62 + 72) = 0LL;
                *(_QWORD *)(v62 + 56) = v66->Parameters.Read.ByteOffset.QuadPart;
                v67 = v66->Parameters.Create.SecurityContext;
                v66->Parameters.Read.ByteOffset.QuadPart = v62;
                *(_QWORD *)(v62 + 48) = v67;
                v66->Parameters.WMI.ProviderId = 0xFEDCBA9000000000uLL;
                v68 = *(unsigned __int16 *)(v62 + 124);
                v69 = *(_QWORD *)(v62 + 16);
                v130 = (_IO_STACK_LOCATION *)((char *)v16->MdlAddress->StartVa + v16->MdlAddress->ByteOffset);
                *(_QWORD *)(v62 + 80) = v130;
                MdlAddress = v16->MdlAddress;
                v131 = *(_QWORD *)(v26 + 16);
                v70 = KfRaiseIrql(2u);
                v114 = v68;
                v71 = v130;
                v113 = v69;
                v72 = *(_QWORD *)(v131 + 128);
                v73 = MdlAddress;
                v119 = v70;
                v117 = MajorFunction != 3;
                LOBYTE(v112) = v117;
                v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, _IO_STACK_LOCATION *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int, __int64, int))(*(_QWORD *)(*(_QWORD *)(v72 + 1144) + 8LL) + 112LL))(
                        *(_QWORD *)(v72 + 1144),
                        *(_QWORD *)(v72 + 8),
                        MdlAddress,
                        v130,
                        (_DWORD)SecurityContext,
                        NvmeContinueScatterGatherProcessIO,
                        v62,
                        v112,
                        v113,
                        v114);
                if ( v23 == -1073741789 )
                {
                  LOBYTE(v112) = v117;
                  v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, _IO_STACK_LOCATION *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), PSLIST_ENTRY, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v131 + 128) + 1144LL) + 8LL) + 88LL))(
                          *(_QWORD *)(*(_QWORD *)(v131 + 128) + 1144LL),
                          *(_QWORD *)(*(_QWORD *)(v131 + 128) + 8LL),
                          v73,
                          v71,
                          (_DWORD)SecurityContext,
                          NvmeContinueScatterGatherProcessIO,
                          ListEntry,
                          v112);
                }
                if ( v119 < 2u )
                  KeLowerIrql(v119);
                if ( v23 >= 0 )
                {
                  v23 = 259;
                  goto LABEL_161;
                }
LABEL_73:
                if ( v23 == -2147483631 )
                {
                  v43 = 0;
                  goto LABEL_75;
                }
                goto LABEL_76;
              }
              v37 = (unsigned int)MdlAddress;
            }
          }
          v74 = NvmeSplitIoParallel(v26, (_DWORD)v16, v120, (_DWORD)SecurityContext, v54, v37, v121, 0LL, 0LL, 0LL);
LABEL_115:
          v23 = v74;
LABEL_72:
          v43 = v23 == 0;
          if ( v23 < 0 )
            goto LABEL_73;
LABEL_75:
          if ( !v43 )
            goto LABEL_161;
LABEL_76:
          QuadPart = v122;
          goto LABEL_77;
        }
LABEL_104:
        if ( FeatureFixFUAForReadIoPerf && IoGetIoPriorityHint(v16) > IoPriorityLow )
        {
          v48 = v124;
          _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(v26 + 680) + 8 * v124));
          goto LABEL_149;
        }
LABEL_148:
        v48 = v124;
        goto LABEL_149;
      }
      v53 = v28->Parameters.Read.ByteOffset.QuadPart;
LABEL_118:
      if ( !v34 )
        goto LABEL_76;
      v75 = *(unsigned int *)(v26 + 64);
      if ( v34 % (unsigned int)v75
        || (v76 = v53 / v75, v53 % v75)
        || (v77 = *(_QWORD *)(v26 + 432), v78 = v34 / (unsigned int)v75, v76 >= v77)
        || v77 - v76 < v34 / (unsigned int)v75 )
      {
        v23 = -1073741811;
        goto LABEL_76;
      }
      v79 = *(_QWORD *)(v26 + 16);
      if ( v34 <= *(_DWORD *)(*(_QWORD *)(v79 + 128) + 200LL) )
      {
        v80 = *(_DWORD *)(v26 + 428);
        if ( !v80 )
          goto LABEL_130;
        if ( v34 <= v80 )
        {
          v81 = *(_BYTE *)(v26 + 427);
          if ( v81 )
          {
            v82 = ((v34 & (v80 - 1)) + v80 + (unsigned __int64)((unsigned int)v53 & (v80 - 1)) - 1) >> v81;
            v83 = (unsigned __int64)v34 >> *(_BYTE *)(v26 + 427);
          }
          else
          {
            LODWORD(v83) = v34 / v80;
            v82 = (v34 % v80 - 1LL + v80 + v53 % v80) / v80;
          }
          if ( (unsigned int)(v83 + v82) <= 1 )
          {
LABEL_130:
            v84 = 0;
            if ( ((v34 + ((LODWORD(v16->MdlAddress->StartVa) + v16->MdlAddress->ByteOffset) & 0xFFF) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) <= 0x2000
              || (v85 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v79 + 880) + 8 * v124)),
                  v84 = (int)v85,
                  v85)
              || (NewNVMePrpListBufferEntry = AllocateNewNVMePrpListBufferEntry(*(_QWORD *)(v26 + 16), v121),
                  v84 = NewNVMePrpListBufferEntry,
                  NewNVMePrpListBufferEntry) )
            {
              v87 = *(_QWORD *)(v26 + 16);
              if ( (*(_BYTE *)(v87 + 136) & 2) != 0 )
                v88 = *(_QWORD *)(v87 + 728) + 192 * v124;
              else
                LODWORD(v88) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v87 + 872) + 2 * v124)
                             + *(_DWORD *)(v87 + 728)
                             - 192;
              LOBYTE(v111) = 0;
              v23 = NvmeSubmitIoToSQ(v26, (_DWORD)v16, v88, v84, v121, v111, v34, v53, v76, v78, v120, 0LL);
              goto LABEL_72;
            }
            NvmeNamespaceQueueIo(v26, (__int64)v16, v121);
            v23 = -2147483631;
            goto LABEL_161;
          }
          v37 = (unsigned int)MdlAddress;
        }
      }
      v74 = NvmeSplitIoParallel(v26, (_DWORD)v16, v120, v34, v53, v37, v121, 0LL, 0LL, 0LL);
      goto LABEL_115;
    }
    v118 = 1;
    v23 = -1073741810;
    if ( QuadPart )
    {
LABEL_71:
      _interlockedbittestandreset((volatile signed __int32 *)(QuadPart + 108), 0);
      goto LABEL_72;
    }
LABEL_77:
    v44 = ListEntry;
    if ( ListEntry )
    {
      v130 = (_IO_STACK_LOCATION *)*((_QWORD *)&ListEntry[1].Next + 1);
      if ( v130 )
      {
        v45 = *((_BYTE *)&ListEntry[7].Next + 14);
        v46 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 128LL);
        v116 = KfRaiseIrql(2u);
        (*(void (__fastcall **)(_QWORD, _IO_STACK_LOCATION *, bool))(*(_QWORD *)(*(_QWORD *)(v46 + 1144) + 8LL) + 96LL))(
          *(_QWORD *)(v46 + 1144),
          v130,
          (v45 & 1) == 0);
        if ( v116 < 2u )
          KeLowerIrql(v116);
      }
      v47 = *((_QWORD *)&v44[5].Next + 1);
      v48 = v124;
      if ( v47 )
      {
        v49 = *(_QWORD *)(v26 + 16);
        *(_QWORD *)(v47 + 88) = 0LL;
        *(_DWORD *)(v47 + 108) = 0;
        *(_DWORD *)(v47 + 104) = 0;
        ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v49 + 888) + 8 * v48), (PSLIST_ENTRY)v47);
      }
      v50 = *(_QWORD *)(v26 + 16);
      v51 = *(_QWORD *)(*((_QWORD *)&v44[2].Next + 1) + 184LL);
      *(_QWORD *)(v51 + 8) = v44[3].Next;
      *(_QWORD *)(v51 + 24) = *((_QWORD *)&v44[3].Next + 1);
      v52 = *((unsigned int *)&v44[7].Next + 2);
      *((_QWORD *)&v44[1].Next + 1) = 0LL;
      *((_QWORD *)&v44[5].Next + 1) = 0LL;
      *((_BYTE *)&v44[7].Next + 14) = 0;
      ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v50 + 896) + 8 * v52), v44);
      if ( FeatureFixFUAForReadIoPerf && IoGetIoPriorityHint(v16) > IoPriorityLow )
        _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(v26 + 680) + 8 * v48));
      goto LABEL_149;
    }
    if ( !QuadPart )
      goto LABEL_104;
    if ( v118 )
    {
      FreeAllSglAndContextInChainedSplitIoContext(*(_QWORD **)(v26 + 16), QuadPart);
      FreeNVMeChainedIoSplitContext(*(_QWORD *)(v26 + 16), v121, v122, (__int64)v16);
      if ( !FeatureFixFUAForReadIoPerf )
        goto LABEL_148;
      IoPriorityHint = IoGetIoPriorityHint(v16);
      v48 = v124;
      if ( IoPriorityHint > IoPriorityLow )
        _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(v26 + 680) + 8 * v124));
LABEL_149:
      v16->IoStatus.Status = v23;
      IofCompleteRequest(v16, 0);
      v90 = *(_QWORD *)(v26 + 128);
      if ( !*(_BYTE *)v90
        && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v90 + 24) + 8 * v48), 0xFFFFFFFF) == 1 )
      {
        v91 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 128LL);
        v92 = *(_QWORD *)(v26 + 128);
        if ( v92 )
        {
          if ( *(_QWORD *)(v92 + 8) )
          {
            v93 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v92 + 40);
            if ( v93 )
            {
              if ( ExAcquireRundownProtectionCacheAware(v93) )
              {
                PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v26 + 128) + 8LL), 0LL, 2LL);
                v94 = *(_QWORD *)(v26 + 128);
                if ( v94 )
                {
                  if ( *(_QWORD *)(v94 + 8) )
                  {
                    v95 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v94 + 40);
                    if ( v95 )
                      ExReleaseRundownProtectionCacheAware(v95);
                  }
                }
              }
            }
          }
        }
        v96 = *(_QWORD *)(v91 + 160);
        if ( *(_BYTE *)v96 == 1 )
          PoFxIdleComponent(**(_QWORD **)(v96 + 8), 0LL, 2LL);
      }
    }
LABEL_161:
    v7 = v127;
    v5 = v137;
LABEL_162:
    if ( v23 != 259 )
    {
      if ( v23 == -2147483631 )
      {
        v4 = v128;
        goto LABEL_182;
      }
      if ( v23 == -2147483622 )
      {
        v4 = v128;
        goto LABEL_173;
      }
    }
    v4 = v128;
    if ( v128 == 1 )
      goto LABEL_177;
LABEL_174:
    if ( ++v7 >= *(_DWORD *)(v5 + 4) )
      v7 = 0;
    v127 = v7;
LABEL_177:
    v98 = StorCheckDpcWatchdogTimerExpire(0xAu, 5u);
    v2 = v138;
    v6 = v135;
    if ( !v98 )
      continue;
    return 1;
  }
}
