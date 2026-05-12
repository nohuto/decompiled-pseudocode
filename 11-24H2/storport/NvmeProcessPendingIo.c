/*
 * XREFs of NvmeProcessPendingIo @ 0x14011E5A0
 * Callers:
 *     NvmeAdapterCompleteControllerQueueRequest @ 0x1400DF110 (NvmeAdapterCompleteControllerQueueRequest.c)
 *     StorRefillShadowQueue @ 0x14012796C (StorRefillShadowQueue.c)
 *     StorRestartDeviceIoQueue @ 0x140127E4C (StorRestartDeviceIoQueue.c)
 *     StorRestartDeviceIoQueue2 @ 0x140127EA8 (StorRestartDeviceIoQueue2.c)
 *     StorRestartDeviceIoQueue3WithReason @ 0x140127F18 (StorRestartDeviceIoQueue3WithReason.c)
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
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

char __fastcall NvmeProcessPendingIo(__int64 a1, struct _SLIST_ENTRY *a2, unsigned int a3)
{
  __int64 v3; // r9
  struct _SLIST_ENTRY *v4; // r15
  __int64 v5; // rax
  __int64 v6; // r12
  unsigned int v7; // r13d
  int v8; // esi
  unsigned int v9; // edx
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rbx
  KIRQL v13; // r14
  __int64 v14; // r9
  signed __int32 v15; // r8d
  IRP *v16; // rsi
  unsigned int v17; // edx
  unsigned int v18; // r8d
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // r15d
  __int64 v24; // rbx
  _IO_STACK_LOCATION *v25; // rax
  __int64 v26; // r14
  _IO_STACK_LOCATION *v27; // rcx
  __int64 v28; // rdx
  int v29; // r11d
  _LARGE_INTEGER v30; // r8
  __int64 v31; // r9
  __int16 v32; // di
  _IO_SECURITY_CONTEXT *v33; // r12
  unsigned int v34; // ebx
  struct _SLIST_ENTRY *v35; // rax
  __int64 v36; // rax
  unsigned int v37; // r10d
  char v38; // r12
  char v39; // cl
  __int64 v40; // rbx
  signed __int32 v41; // eax
  int v42; // eax
  __int64 v43; // rax
  unsigned int v44; // et2
  struct _SLIST_ENTRY *v45; // rax
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rdx
  unsigned int v51; // r8d
  char v52; // al
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // r10
  __int64 v55; // rax
  __int64 v56; // r15
  __int64 v57; // rbx
  char v58; // al
  char v59; // cl
  struct _SLIST_ENTRY *v60; // rax
  _MDL *v61; // rcx
  __int64 v62; // rax
  int v63; // ebx
  __int64 v64; // rdi
  KIRQL v65; // al
  _MDL *v66; // rbx
  _SLIST_ENTRY *Next; // rcx
  __int64 v68; // rdi
  int v69; // eax
  unsigned __int64 v70; // r8
  unsigned __int64 v71; // r15
  unsigned __int64 v72; // rdx
  __int16 v73; // r12
  __int64 v74; // r11
  unsigned int v75; // edx
  char v76; // al
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // r9
  int v79; // r9d
  PSLIST_ENTRY v80; // rax
  __int64 v81; // rax
  __int64 v82; // r10
  __int64 v83; // r8
  bool v84; // zf
  PSLIST_ENTRY v85; // r12
  char v86; // di
  __int64 v87; // rbx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  IO_PRIORITY_HINT v93; // eax
  __int64 v94; // rax
  __int64 v95; // rbx
  __int64 v96; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v97; // rcx
  __int64 v98; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v99; // rcx
  __int64 v100; // rcx
  NTSTATUS v101; // eax
  __int64 v102; // rax
  _DWORD *v103; // r8
  unsigned int v104; // r12d
  unsigned int v105; // r8d
  _DWORD *v106; // rax
  __int64 v107; // rax
  __int64 v108; // r13
  unsigned int v109; // r14d
  unsigned int v110; // edx
  __int64 v111; // rbx
  unsigned int v112; // eax
  __int64 v113; // rdi
  KIRQL v114; // r15
  __int64 v115; // r9
  signed __int32 v116; // r8d
  IRP *v117; // rsi
  unsigned int v118; // edx
  unsigned int v119; // r8d
  unsigned int v120; // edx
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rcx
  int v124; // r15d
  __int64 v125; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v127; // r14
  _IO_STACK_LOCATION *v128; // r13
  __int64 QuadPart; // rcx
  struct _SLIST_ENTRY *v130; // r10
  _LARGE_INTEGER ByteOffset; // r8
  __int64 v132; // rdx
  __int16 v133; // di
  char v134; // r11
  _IO_SECURITY_CONTEXT *SecurityContext; // r12
  unsigned int v136; // ebx
  __int64 v137; // rax
  __int64 v138; // rax
  unsigned int v139; // r9d
  char v140; // r12
  unsigned int v141; // r13d
  __int64 v142; // rbx
  signed __int32 v143; // eax
  int v144; // eax
  __int64 v145; // rax
  unsigned int v146; // et2
  unsigned __int64 v147; // rdi
  unsigned __int64 v148; // rbx
  IO_PRIORITY_HINT IoPriorityHint; // eax
  __int64 v150; // rbx
  unsigned __int64 v151; // r8
  unsigned __int64 v152; // rdi
  unsigned __int64 v153; // rdx
  unsigned int v154; // r8d
  char v155; // al
  unsigned __int64 v156; // rax
  unsigned __int64 v157; // r10
  __int64 NVMeSGLBufferContext; // rax
  __int64 v159; // r15
  char v160; // al
  _IO_SECURITY_CONTEXT *v161; // rax
  int v162; // ebx
  __int64 v163; // rdi
  KIRQL v164; // r13
  __int64 v165; // rbx
  _MDL *v166; // rdi
  int v167; // eax
  unsigned __int64 v168; // r8
  unsigned __int64 v169; // r12
  unsigned __int64 v170; // rdx
  __int16 v171; // r13
  __int64 v172; // r15
  unsigned int v173; // r8d
  char v174; // al
  unsigned int v175; // eax
  int v176; // r9d
  PSLIST_ENTRY v177; // rax
  __int64 NewNVMePrpListBufferEntry; // rax
  __int64 v179; // r10
  __int64 v180; // r8
  bool v181; // zf
  PSLIST_ENTRY v182; // rbx
  __int64 v183; // r12
  char v184; // di
  __int64 v185; // rbx
  KIRQL v186; // r13
  __int64 v187; // rdx
  __int64 v188; // rdi
  __int64 v189; // rcx
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // rax
  __int64 v193; // rax
  volatile signed __int32 *v194; // rcx
  IO_PRIORITY_HINT v195; // eax
  __int64 v196; // rbx
  __int64 v197; // rax
  __int64 v198; // rbx
  __int64 v199; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v200; // rcx
  __int64 v201; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v202; // rcx
  __int64 v203; // rcx
  __int64 v204; // rax
  __int64 v205; // rbx
  __int64 v206; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v207; // rcx
  __int64 v208; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v209; // rcx
  __int64 v210; // rcx
  __int64 v211; // rax
  int v213; // [rsp+28h] [rbp-D8h]
  int v214; // [rsp+38h] [rbp-C8h]
  __int64 v215; // [rsp+40h] [rbp-C0h]
  __int64 v216; // [rsp+40h] [rbp-C0h]
  int v217; // [rsp+48h] [rbp-B8h]
  int v218; // [rsp+48h] [rbp-B8h]
  unsigned __int8 v219; // [rsp+60h] [rbp-A0h]
  bool v220; // [rsp+60h] [rbp-A0h]
  KIRQL v221; // [rsp+60h] [rbp-A0h]
  bool v222; // [rsp+60h] [rbp-A0h]
  bool v223; // [rsp+60h] [rbp-A0h]
  char v224; // [rsp+61h] [rbp-9Fh] BYREF
  bool v225; // [rsp+62h] [rbp-9Eh]
  char MajorFunction; // [rsp+63h] [rbp-9Dh]
  char v227; // [rsp+64h] [rbp-9Ch] BYREF
  char v228[3]; // [rsp+65h] [rbp-9Bh] BYREF
  unsigned int v229; // [rsp+68h] [rbp-98h]
  unsigned int v230; // [rsp+6Ch] [rbp-94h]
  __int64 v231; // [rsp+70h] [rbp-90h]
  __int64 v232; // [rsp+78h] [rbp-88h]
  unsigned int v233; // [rsp+80h] [rbp-80h]
  PSLIST_ENTRY v234; // [rsp+88h] [rbp-78h]
  unsigned int v235; // [rsp+90h] [rbp-70h]
  struct _SLIST_ENTRY *v236; // [rsp+98h] [rbp-68h]
  struct _SLIST_ENTRY *v237; // [rsp+A0h] [rbp-60h]
  int v238; // [rsp+A8h] [rbp-58h]
  __int64 v239; // [rsp+B0h] [rbp-50h]
  __int16 v240[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v241; // [rsp+BCh] [rbp-44h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+C0h] [rbp-40h]
  _MDL *MdlAddress; // [rsp+C8h] [rbp-38h]
  __int64 v244; // [rsp+D0h] [rbp-30h]
  __int64 v245; // [rsp+D8h] [rbp-28h]
  _DWORD *v246; // [rsp+E0h] [rbp-20h]
  int v247; // [rsp+E8h] [rbp-18h] BYREF
  int v248; // [rsp+ECh] [rbp-14h] BYREF
  __int64 v249; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v250; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v251; // [rsp+100h] [rbp+0h]
  __int64 v252; // [rsp+108h] [rbp+8h] BYREF
  __int64 v253; // [rsp+110h] [rbp+10h] BYREF
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+118h] [rbp+18h] BYREF
  __int128 v255; // [rsp+130h] [rbp+30h] BYREF
  __int128 v256; // [rsp+140h] [rbp+40h] BYREF
  __int128 v257; // [rsp+150h] [rbp+50h] BYREF
  __int128 v258; // [rsp+160h] [rbp+60h] BYREF

  v3 = a1;
  v244 = a1;
  v230 = a3;
  v4 = a2;
  v236 = a2;
  v229 = 0;
  v5 = *(_QWORD *)(a1 + 1104);
  v224 = 0;
  v232 = 8LL * a3;
  v6 = *(_QWORD *)(v232 + v5);
  v245 = v6;
  v7 = *(_DWORD *)(v6 + 64);
  v8 = *(_DWORD *)(a1 + 656);
  v246 = g_CpuInfo;
  v238 = v8;
  do
  {
    v9 = v7;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v6 + 8LL * v7 + 264);
      if ( *(_DWORD *)v10 || *(_DWORD *)(v10 + 48) != *(_DWORD *)(v10 + 52) )
        break;
      if ( v8 != 1 )
      {
        v11 = v7 + 1;
        v7 = 0;
        if ( v11 < *(_DWORD *)(v6 + 4) )
          v7 = v11;
        if ( v9 != v7 )
          continue;
      }
LABEL_175:
      v103 = v246;
      *(_DWORD *)(v6 + 64) = v7;
      if ( v103[3] )
      {
        v104 = v229;
        v105 = v230;
        v106 = v246;
        while ( 1 )
        {
          if ( v104 == v105 )
            goto LABEL_187;
          v107 = *(_QWORD *)(v3 + 1104);
          v232 = 8LL * v104;
          v108 = *(_QWORD *)(v232 + v107);
          v251 = v108;
          v109 = *(_DWORD *)(v108 + 64);
          v235 = v109;
LABEL_179:
          v110 = v109;
          do
          {
            v111 = *(_QWORD *)(v108 + 8LL * v109 + 264);
            if ( *(_DWORD *)v111 || *(_DWORD *)(v111 + 48) != *(_DWORD *)(v111 + 52) )
            {
              v113 = *(_DWORD *)(v3 + 136) & 2;
              v250 = 0LL;
              v114 = KfRaiseIrql(2u);
              do
              {
                v115 = *(unsigned int *)(v111 + 52);
                if ( (_DWORD)v115 == *(_DWORD *)(v111 + 48) )
                {
                  if ( _InterlockedCompareExchange((volatile signed __int32 *)v111, 0, 1) == 1 )
                  {
                    v211 = *(_QWORD *)(v111 + 24);
                    if ( *(_BYTE *)(*(_QWORD *)(v111 + 16) + 20LL) == 1 )
                      _InterlockedDecrement((volatile signed __int32 *)(v211 + 956));
                    else
                      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v211 + 16) + 952LL));
                  }
                  KeLowerIrql(v114);
                  v124 = -2147483622;
                  goto LABEL_363;
                }
                v116 = 0;
                if ( (unsigned int)(v115 + 1) < *(_DWORD *)(*(_QWORD *)(v111 + 16) + 4LL) )
                  v116 = v115 + 1;
              }
              while ( (_DWORD)v115 != _InterlockedCompareExchange((volatile signed __int32 *)(v111 + 52), v116, v115) );
              do
                v117 = (IRP *)_InterlockedExchange64((volatile __int64 *)(8 * v115 + *(_QWORD *)(v111 + 56)), 0LL);
              while ( !v117 );
              if ( !*(_DWORD *)(*(_QWORD *)(v111 + 16) + 16LL)
                && (*(_DWORD *)v111 == 2
                 || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v111 + 32) + 16LL * *(unsigned int *)(v111 + 8)))) )
              {
                if ( *(_DWORD *)(v111 + 48) == *(_DWORD *)(v111 + 52)
                  || ((v118 = *(_DWORD *)(v111 + 48), v119 = *(_DWORD *)(v111 + 52), v118 != v119)
                    ? (v118 <= v119
                     ? ((v121 = *(_QWORD *)(v111 + 24), *(_BYTE *)(*(_QWORD *)(v111 + 16) + 20LL))
                      ? (v122 = *(_QWORD *)(v121 + 1024))
                      : (v122 = *(_QWORD *)(v121 + 256)),
                        v120 = *(_DWORD *)(v122 + 4) - v119 + v118)
                     : (v120 = v118 - v119))
                    : (v120 = 0),
                      v120 <= *(_DWORD *)(*(_QWORD *)(v111 + 16) + 8LL)) )
                {
                  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v111 + 16) + 16LL), 1, 0) )
                  {
                    v123 = *(_QWORD *)(v111 + 24);
                    if ( *(_BYTE *)(*(_QWORD *)(v111 + 16) + 20LL) )
                      IoQueueWorkItem(
                        *(PIO_WORKITEM *)(v123 + 1032),
                        (PIO_WORKITEM_ROUTINE)NvmeControllerRefillShadowQueueRoutine,
                        DelayedWorkQueue,
                        *(PVOID *)(v111 + 24));
                    else
                      KeSetEvent((PRKEVENT)(v123 + 480), 0, 0);
                  }
                }
              }
              KeLowerIrql(v114);
              if ( v113 )
              {
                v124 = NvmeNamespaceProcessRequest(*(_QWORD *)(v111 + 24), (__int64)v117, v104);
                goto LABEL_351;
              }
              if ( (int)IoGetIoAttributionHandle(v117, &v250) >= 0 )
              {
                v125 = v250;
                v257 = 0LL;
                LODWORD(v257) = 1;
                CurrentStackLocation = v117->Tail.Overlay.CurrentStackLocation;
                v258 = 0LL;
                DWORD1(v257) = CurrentStackLocation->MajorFunction | 0x200;
                *((_QWORD *)&v258 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v258 + 1);
                IoRecordIoAttribution(v125, &v257);
              }
              v127 = *(_QWORD *)(v111 + 24);
              v128 = v117->Tail.Overlay.CurrentStackLocation;
              QuadPart = 0LL;
              v130 = v236;
              ByteOffset.QuadPart = 0LL;
              v228[0] = 0;
              v124 = 0;
              v132 = *(_QWORD *)(v127 + 16);
              v133 = 0;
              v241 = 0;
              v134 = 0;
              v253 = 0LL;
              v247 = 0;
              SecurityContext = v128->Parameters.Create.SecurityContext;
              v234 = 0LL;
              v136 = (unsigned int)SecurityContext;
              v231 = 0LL;
              LOWORD(v233) = 0;
              v137 = HIDWORD(*(_QWORD *)(v132 + 136));
              LOBYTE(v137) = v137 & 1;
              ListEntry = v236;
              v239 = v137;
              v222 = 0;
              v245 = v132;
              v224 = 0;
              if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0x8765432100000003LL )
              {
                QuadPart = v128->Parameters.Read.ByteOffset.QuadPart;
                v231 = QuadPart;
              }
              else if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0xFEDCBA9000000000LL )
              {
                ByteOffset = v128->Parameters.Read.ByteOffset;
                v234 = (PSLIST_ENTRY)ByteOffset.QuadPart;
              }
              if ( (unsigned int)(*(_DWORD *)(v127 + 96) - 5) <= 1 )
              {
                v228[0] = 1;
                v124 = -1073741810;
                if ( QuadPart )
                {
LABEL_299:
                  _interlockedbittestandreset((volatile signed __int32 *)(QuadPart + 108), 0);
                  goto LABEL_300;
                }
                goto LABEL_305;
              }
              v138 = *(_QWORD *)(v132 + 128);
              MajorFunction = v128->MajorFunction;
              v225 = MajorFunction == 3;
              v139 = *(_DWORD *)(v138 + 200);
              LODWORD(v237) = v139;
              if ( v231 )
              {
                QuadPart = v231;
                v140 = v239;
                v141 = v229;
                while ( 2 )
                {
                  v142 = QuadPart;
LABEL_224:
                  v143 = _InterlockedCompareExchange((volatile signed __int32 *)(v142 + 104), 4, 3);
                  if ( v140 )
                  {
                    if ( v143 != 3 && _InterlockedCompareExchange((volatile signed __int32 *)(v142 + 104), 4, 1) != 1 )
                      goto LABEL_236;
                  }
                  else if ( v143 != 3 )
                  {
                    if ( *(_DWORD *)(v142 + 104) == 1 )
                      ++v133;
LABEL_236:
                    v142 = *(_QWORD *)(v142 + 96);
                    if ( v133 )
                    {
                      if ( !v142 )
                      {
                        v133 = 0;
                        continue;
                      }
                    }
                    else if ( !v142 )
                    {
                      goto LABEL_299;
                    }
                    goto LABEL_224;
                  }
                  break;
                }
                v144 = NvmeSendSplitIo(
                         v142,
                         v141,
                         (_DWORD)v130,
                         0,
                         (__int64)v228,
                         (__int64)&v253,
                         (__int64)&v247,
                         (__int64)&v241,
                         v134);
                v124 = v144;
                if ( v144 == 259 )
                {
                  v145 = *(_QWORD *)(v127 + 16);
                  ListEntry = 0LL;
                  LODWORD(v130) = 0;
                  LOWORD(v233) = v233 + 1;
                  v146 = (unsigned __int16)v233 % (unsigned int)*(unsigned __int8 *)(v145 + 1730);
                  QuadPart = v231;
                  v224 = 1;
                  v134 = v146 == 0;
                  v222 = v146 == 0;
                }
                else
                {
                  if ( v144 == -2147483631 )
                  {
                    _InterlockedCompareExchange((volatile signed __int32 *)(v142 + 104), 3, 4);
                    v104 = v141;
                    NvmeNamespaceQueueIo(v127, *(_QWORD *)(v142 + 24), v141);
                    goto LABEL_350;
                  }
                  QuadPart = v231;
                  if ( !*(_WORD *)(v142 + 34) )
                  {
                    v228[0] = 1;
                    goto LABEL_299;
                  }
                  if ( v228[0] )
                    goto LABEL_299;
                  LODWORD(v130) = (_DWORD)ListEntry;
                  v134 = v222;
                }
                goto LABEL_236;
              }
              if ( !(_BYTE)v239 )
              {
                if ( ByteOffset.QuadPart )
                {
                  v147 = *(_QWORD *)(ByteOffset.QuadPart + 96);
                  v136 = *(_DWORD *)(ByteOffset.QuadPart + 116);
                  *(_QWORD *)(ByteOffset.QuadPart + 64) = 0LL;
                  *(_QWORD *)(ByteOffset.QuadPart + 72) = v130;
                  goto LABEL_274;
                }
                v148 = v128->Parameters.Read.ByteOffset.QuadPart;
                if ( !(_DWORD)SecurityContext )
                {
LABEL_247:
                  if ( FeatureFixFUAForReadIoPerf )
                  {
                    IoPriorityHint = IoGetIoPriorityHint(v117);
                    v150 = v232;
                    if ( IoPriorityHint > IoPriorityLow )
                      _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(v127 + 680) + v232));
                  }
                  else
                  {
                    v150 = v232;
                  }
                  v117->IoStatus.Status = v124;
                  IofCompleteRequest(v117, 0);
                  v204 = *(_QWORD *)(v127 + 128);
                  if ( !*(_BYTE *)v204 )
                  {
                    v194 = *(volatile signed __int32 **)(*(_QWORD *)(v204 + 24) + v150);
                    goto LABEL_338;
                  }
                  goto LABEL_349;
                }
                v151 = *(unsigned int *)(v127 + 64);
                if ( (unsigned int)SecurityContext % (unsigned int)v151
                  || (v152 = v148 / v151, v148 % v151)
                  || (v153 = *(_QWORD *)(v127 + 432),
                      v233 = (unsigned int)SecurityContext / (unsigned int)v151,
                      v152 >= v153)
                  || v153 - v152 < (unsigned int)SecurityContext / (unsigned int)v151 )
                {
                  v124 = -1073741811;
                  goto LABEL_247;
                }
                if ( (unsigned int)SecurityContext > v139 )
                  goto LABEL_270;
                v154 = *(_DWORD *)(v127 + 428);
                if ( !v154 )
                {
LABEL_261:
                  NVMeSGLBufferContext = GetNVMeSGLBufferContext(v245, v229);
                  v234 = (PSLIST_ENTRY)NVMeSGLBufferContext;
                  v159 = NVMeSGLBufferContext;
                  if ( !NVMeSGLBufferContext )
                  {
                    v124 = -1073741670;
                    goto LABEL_247;
                  }
                  v84 = MajorFunction == 3;
                  *(_QWORD *)(NVMeSGLBufferContext + 40) = v117;
                  v160 = *(_BYTE *)(NVMeSGLBufferContext + 126) & 0xFE;
                  *(_QWORD *)(v159 + 96) = v148;
                  *(_QWORD *)(v159 + 104) = v152;
                  *(_DWORD *)(v159 + 112) = v233;
                  *(_QWORD *)(v159 + 64) = 0LL;
                  *(_QWORD *)(v159 + 72) = v236;
                  *(_BYTE *)(v159 + 126) = v160 | v84;
                  *(_QWORD *)(v159 + 32) = v127;
                  *(_DWORD *)(v159 + 116) = (_DWORD)SecurityContext;
                  *(_QWORD *)(v159 + 56) = v128->Parameters.Read.ByteOffset.QuadPart;
                  v161 = v128->Parameters.Create.SecurityContext;
                  v128->Parameters.Read.ByteOffset.QuadPart = v159;
                  *(_QWORD *)(v159 + 48) = v161;
                  v128->Parameters.WMI.ProviderId = 0xFEDCBA9000000000uLL;
                  v162 = *(unsigned __int16 *)(v159 + 124);
                  v163 = *(_QWORD *)(v159 + 16);
                  v245 = (__int64)v117->MdlAddress->StartVa + v117->MdlAddress->ByteOffset;
                  *(_QWORD *)(v159 + 80) = v245;
                  MdlAddress = v117->MdlAddress;
                  v239 = *(_QWORD *)(v127 + 16);
                  v164 = KfRaiseIrql(2u);
                  v218 = v162;
                  v165 = v245;
                  v216 = v163;
                  v166 = MdlAddress;
                  LOBYTE(v214) = MajorFunction != 3;
                  v223 = MajorFunction != 3;
                  v124 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, __int64, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int, __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v239 + 128) + 1144LL) + 8LL) + 112LL))(
                           *(_QWORD *)(*(_QWORD *)(v239 + 128) + 1144LL),
                           *(_QWORD *)(*(_QWORD *)(v239 + 128) + 8LL),
                           MdlAddress,
                           v245,
                           (_DWORD)SecurityContext,
                           NvmeContinueScatterGatherProcessIO,
                           v159,
                           v214,
                           v216,
                           v218);
                  if ( v124 == -1073741789 )
                  {
                    LOBYTE(v214) = v223;
                    v124 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, __int64, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), PSLIST_ENTRY, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v239 + 128) + 1144LL) + 8LL) + 88LL))(
                             *(_QWORD *)(*(_QWORD *)(v239 + 128) + 1144LL),
                             *(_QWORD *)(*(_QWORD *)(v239 + 128) + 8LL),
                             v166,
                             v165,
                             (_DWORD)SecurityContext,
                             NvmeContinueScatterGatherProcessIO,
                             v234,
                             v214);
                  }
                  if ( v164 < 2u )
                    KeLowerIrql(v164);
                  if ( v124 >= 0 )
                  {
                    v124 = 259;
                    goto LABEL_349;
                  }
                  goto LABEL_301;
                }
                if ( (unsigned int)SecurityContext <= v154 )
                {
                  v155 = *(_BYTE *)(v127 + 427);
                  if ( v155 )
                  {
                    v156 = (((v154 - 1) & (unsigned int)SecurityContext)
                          - 1LL
                          + v154
                          + (unsigned __int64)((v154 - 1) & (unsigned int)v148)) >> v155;
                    v157 = (unsigned __int64)(unsigned int)SecurityContext >> *(_BYTE *)(v127 + 427);
                  }
                  else
                  {
                    LODWORD(v157) = (unsigned int)SecurityContext / v154;
                    v156 = ((unsigned int)SecurityContext % v154 + v154 + v148 % v154 - 1) / v154;
                  }
                  if ( (unsigned int)(v157 + v156) <= 1 )
                    goto LABEL_261;
                  v139 = (unsigned int)v237;
                }
LABEL_270:
                v167 = NvmeSplitIoParallel(
                         v127,
                         (_DWORD)v117,
                         v225,
                         (_DWORD)SecurityContext,
                         v148,
                         v139,
                         v229,
                         (__int64)v236,
                         0LL,
                         (__int64)&v224);
LABEL_271:
                v124 = v167;
LABEL_300:
                v181 = v124 == 0;
                if ( v124 >= 0 )
                {
LABEL_303:
                  if ( !v181 )
                    goto LABEL_349;
                }
                else
                {
LABEL_301:
                  if ( v124 == -2147483631 )
                  {
                    v181 = 0;
                    goto LABEL_303;
                  }
                }
LABEL_304:
                QuadPart = v231;
LABEL_305:
                v182 = v234;
                if ( v234 )
                {
                  v183 = *((_QWORD *)&v234[1].Next + 1);
                  if ( v183 )
                  {
                    v184 = *((_BYTE *)&v234[7].Next + 14);
                    v185 = *(_QWORD *)(*(_QWORD *)(v127 + 16) + 128LL);
                    v186 = KfRaiseIrql(2u);
                    (*(void (__fastcall **)(_QWORD, __int64, bool))(*(_QWORD *)(*(_QWORD *)(v185 + 1144) + 8LL) + 96LL))(
                      *(_QWORD *)(v185 + 1144),
                      v183,
                      (v184 & 1) == 0);
                    if ( v186 < 2u )
                      KeLowerIrql(v186);
                    v182 = v234;
                  }
                  v187 = *((_QWORD *)&v182[5].Next + 1);
                  v188 = v232;
                  if ( v187 )
                  {
                    v189 = *(_QWORD *)(v127 + 16);
                    *(_QWORD *)(v187 + 88) = 0LL;
                    *(_DWORD *)(v187 + 108) = 0;
                    *(_DWORD *)(v187 + 104) = 0;
                    ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v189 + 888) + v188), (PSLIST_ENTRY)v187);
                  }
                  v190 = *(_QWORD *)(v127 + 16);
                  v191 = *(_QWORD *)(*((_QWORD *)&v182[2].Next + 1) + 184LL);
                  *(_QWORD *)(v191 + 8) = v182[3].Next;
                  *(_QWORD *)(v191 + 24) = *((_QWORD *)&v182[3].Next + 1);
                  v192 = *((unsigned int *)&v182[7].Next + 2);
                  *((_QWORD *)&v182[1].Next + 1) = 0LL;
                  *((_QWORD *)&v182[5].Next + 1) = 0LL;
                  *((_BYTE *)&v182[7].Next + 14) = 0;
                  ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v190 + 896) + 8 * v192), v182);
                  if ( FeatureFixFUAForReadIoPerf && IoGetIoPriorityHint(v117) > IoPriorityLow )
                    _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(v127 + 680) + v188));
                  v117->IoStatus.Status = v124;
                  IofCompleteRequest(v117, 0);
                  v193 = *(_QWORD *)(v127 + 128);
                  if ( !*(_BYTE *)v193 )
                  {
                    v194 = *(volatile signed __int32 **)(*(_QWORD *)(v193 + 24) + v188);
LABEL_338:
                    if ( _InterlockedExchangeAdd(v194, 0xFFFFFFFF) == 1 )
                    {
                      v205 = *(_QWORD *)(*(_QWORD *)(v127 + 16) + 128LL);
                      v206 = *(_QWORD *)(v127 + 128);
                      if ( v206 )
                      {
                        if ( *(_QWORD *)(v206 + 8) )
                        {
                          v207 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v206 + 40);
                          if ( v207 )
                          {
                            if ( ExAcquireRundownProtectionCacheAware(v207) )
                            {
                              PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v127 + 128) + 8LL), 0LL, 2LL);
                              v208 = *(_QWORD *)(v127 + 128);
                              if ( v208 )
                              {
                                if ( *(_QWORD *)(v208 + 8) )
                                {
                                  v209 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v208 + 40);
                                  if ( v209 )
                                    ExReleaseRundownProtectionCacheAware(v209);
                                }
                              }
                            }
                          }
                        }
                      }
                      v210 = *(_QWORD *)(v205 + 160);
                      if ( *(_BYTE *)v210 == 1 )
                        PoFxIdleComponent(**(_QWORD **)(v210 + 8), 0LL, 2LL);
                    }
                  }
LABEL_349:
                  v104 = v229;
                }
                else
                {
                  if ( !QuadPart )
                    goto LABEL_247;
                  if ( !v228[0] )
                    goto LABEL_349;
                  FreeAllSglAndContextInChainedSplitIoContext(*(_QWORD **)(v127 + 16), QuadPart);
                  v104 = v229;
                  FreeNVMeChainedIoSplitContext(*(_QWORD *)(v127 + 16), v229, v231, (__int64)v117);
                  if ( FeatureFixFUAForReadIoPerf )
                  {
                    v195 = IoGetIoPriorityHint(v117);
                    v196 = v232;
                    if ( v195 > IoPriorityLow )
                      _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(v127 + 680) + v232));
                  }
                  else
                  {
                    v196 = v232;
                  }
                  v117->IoStatus.Status = v124;
                  IofCompleteRequest(v117, 0);
                  v197 = *(_QWORD *)(v127 + 128);
                  if ( !*(_BYTE *)v197
                    && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v197 + 24) + v196), 0xFFFFFFFF) == 1 )
                  {
                    v198 = *(_QWORD *)(*(_QWORD *)(v127 + 16) + 128LL);
                    v199 = *(_QWORD *)(v127 + 128);
                    if ( v199 )
                    {
                      if ( *(_QWORD *)(v199 + 8) )
                      {
                        v200 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v199 + 40);
                        if ( v200 )
                        {
                          if ( ExAcquireRundownProtectionCacheAware(v200) )
                          {
                            PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v127 + 128) + 8LL), 0LL, 2LL);
                            v201 = *(_QWORD *)(v127 + 128);
                            if ( v201 )
                            {
                              if ( *(_QWORD *)(v201 + 8) )
                              {
                                v202 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v201 + 40);
                                if ( v202 )
                                  ExReleaseRundownProtectionCacheAware(v202);
                              }
                            }
                          }
                        }
                      }
                    }
                    v203 = *(_QWORD *)(v198 + 160);
                    if ( *(_BYTE *)v203 == 1 )
                      PoFxIdleComponent(**(_QWORD **)(v203 + 8), 0LL, 2LL);
                  }
                }
LABEL_350:
                v109 = v235;
                v108 = v251;
LABEL_351:
                v8 = v238;
                if ( v124 == 259 )
                  goto LABEL_352;
LABEL_363:
                if ( !v224 )
                {
                  if ( v124 == -2147483631 )
                    return 1;
                  if ( v124 == -2147483622 )
                  {
                    if ( v8 == 1 )
                      break;
                    goto LABEL_353;
                  }
                }
LABEL_352:
                if ( v8 == 1 )
                  goto LABEL_356;
LABEL_353:
                if ( ++v109 >= *(_DWORD *)(v108 + 4) )
                  v109 = 0;
                v235 = v109;
LABEL_356:
                if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
                  return 1;
                v3 = v244;
                goto LABEL_179;
              }
              v147 = v128->Parameters.Read.ByteOffset.QuadPart;
LABEL_274:
              if ( !v136 )
              {
                v124 = 0;
                goto LABEL_304;
              }
              v168 = *(unsigned int *)(v127 + 64);
              if ( v136 % (unsigned int)v168
                || (v169 = v147 / v168, v147 % v168)
                || (v170 = *(_QWORD *)(v127 + 432), v171 = v136 / (unsigned int)v168, v169 >= v170)
                || v170 - v169 < v136 / (unsigned int)v168 )
              {
                v124 = -1073741811;
                goto LABEL_304;
              }
              v172 = *(_QWORD *)(v127 + 16);
              if ( v136 <= *(_DWORD *)(*(_QWORD *)(v172 + 128) + 200LL) )
              {
                v173 = *(_DWORD *)(v127 + 428);
                if ( !v173 )
                {
LABEL_287:
                  v176 = 0;
                  if ( ((v136 + ((LODWORD(v117->MdlAddress->StartVa) + v117->MdlAddress->ByteOffset) & 0xFFF) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) <= 0x2000
                    || (v177 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v172 + 880) + v232)),
                        v176 = (int)v177,
                        v177)
                    || (NewNVMePrpListBufferEntry = AllocateNewNVMePrpListBufferEntry(*(_QWORD *)(v127 + 16), v229),
                        v176 = NewNVMePrpListBufferEntry,
                        NewNVMePrpListBufferEntry) )
                  {
                    v179 = *(_QWORD *)(v127 + 16);
                    if ( (*(_BYTE *)(v179 + 136) & 2) != 0 )
                      v180 = *(_QWORD *)(v179 + 728) + 192LL * v229;
                    else
                      LODWORD(v180) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v179 + 872) + 2LL * v229)
                                    + *(_DWORD *)(v179 + 728)
                                    - 192;
                    LOBYTE(v213) = 0;
                    v124 = NvmeSubmitIoToSQ(
                             v127,
                             (_DWORD)v117,
                             v180,
                             v176,
                             v229,
                             v213,
                             v136,
                             v147,
                             v169,
                             v171,
                             v225,
                             0LL);
                    goto LABEL_300;
                  }
                  v104 = v229;
                  NvmeNamespaceQueueIo(v127, (__int64)v117, v229);
                  v124 = -2147483631;
                  goto LABEL_350;
                }
                if ( v136 <= v173 )
                {
                  v174 = *(_BYTE *)(v127 + 427);
                  if ( v174 )
                    v175 = ((unsigned __int64)v136 >> v174)
                         + ((((v173 - 1) & v136) + v173 + (unsigned __int64)((v173 - 1) & (unsigned int)v147) - 1) >> v174);
                  else
                    v175 = v136 / v173 + (v136 % v173 - 1LL + v173 + v147 % v173) / v173;
                  if ( v175 <= 1 )
                    goto LABEL_287;
                  v139 = (unsigned int)v237;
                }
              }
              v167 = NvmeSplitIoParallel(
                       v127,
                       (_DWORD)v117,
                       v225,
                       v136,
                       v147,
                       v139,
                       v229,
                       (__int64)v236,
                       0LL,
                       (__int64)&v224);
              goto LABEL_271;
            }
            if ( v8 == 1 )
              break;
            v112 = v109 + 1;
            v109 = 0;
            if ( v112 != *(_DWORD *)(v108 + 4) )
              v109 = v112;
            v235 = v109;
          }
          while ( v110 != v109 );
          v105 = v230;
          v106 = v246;
LABEL_187:
          v229 = ++v104;
          if ( v104 >= v106[3] )
            return 1;
          v3 = v244;
        }
      }
      return 1;
    }
    v12 = *(_DWORD *)(v3 + 136) & 2;
    v249 = 0LL;
    v13 = KfRaiseIrql(2u);
    do
    {
      v14 = *(unsigned int *)(v10 + 52);
      if ( (_DWORD)v14 == *(_DWORD *)(v10 + 48) )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)v10, 0, 1) == 1 )
        {
          v102 = *(_QWORD *)(v10 + 24);
          if ( *(_BYTE *)(*(_QWORD *)(v10 + 16) + 20LL) == 1 )
            _InterlockedDecrement((volatile signed __int32 *)(v102 + 956));
          else
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v102 + 16) + 952LL));
        }
        KeLowerIrql(v13);
        v23 = -2147483622;
        goto LABEL_170;
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
      v23 = NvmeNamespaceProcessRequest(*(_QWORD *)(v10 + 24), (__int64)v16, v230);
      goto LABEL_155;
    }
    if ( (int)IoGetIoAttributionHandle(v16, &v249) >= 0 )
    {
      v24 = v249;
      v255 = 0LL;
      LODWORD(v255) = 1;
      v25 = v16->Tail.Overlay.CurrentStackLocation;
      v256 = 0LL;
      DWORD1(v255) = v25->MajorFunction | 0x200;
      *((_QWORD *)&v256 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v256 + 1);
      IoRecordIoAttribution(v24, &v255);
    }
    v26 = *(_QWORD *)(v10 + 24);
    v27 = v16->Tail.Overlay.CurrentStackLocation;
    v28 = 0LL;
    v227 = 0;
    v29 = (int)v4;
    v240[0] = 0;
    v30.QuadPart = 0LL;
    v31 = *(_QWORD *)(v26 + 16);
    v32 = 0;
    v252 = 0LL;
    v248 = 0;
    v33 = v27->Parameters.Create.SecurityContext;
    v34 = (unsigned int)v33;
    v35 = (struct _SLIST_ENTRY *)HIDWORD(*(_QWORD *)(v31 + 136));
    LOBYTE(v35) = (unsigned __int8)v35 & 1;
    v237 = v4;
    v234 = v35;
    v23 = 0;
    MdlAddress = (_MDL *)v27;
    ListEntry = 0LL;
    v231 = 0LL;
    LOWORD(v233) = 0;
    v239 = v31;
    v224 = 0;
    if ( v33 == (_IO_SECURITY_CONTEXT *)0x8765432100000003LL )
    {
      v28 = v27->Parameters.Read.ByteOffset.QuadPart;
      v231 = v28;
    }
    else if ( v33 == (_IO_SECURITY_CONTEXT *)0xFEDCBA9000000000LL )
    {
      v30 = v27->Parameters.Read.ByteOffset;
      ListEntry = (PSLIST_ENTRY)v30.QuadPart;
    }
    if ( (unsigned int)(*(_DWORD *)(v26 + 96) - 5) <= 1 )
    {
      v227 = 1;
      v23 = -1073741810;
      if ( !v28 )
        goto LABEL_127;
LABEL_121:
      _interlockedbittestandreset((volatile signed __int32 *)(v28 + 108), 0);
    }
    else
    {
      v36 = *(_QWORD *)(v31 + 128);
      v219 = v27->MajorFunction;
      v225 = v27->MajorFunction == 3;
      v37 = *(_DWORD *)(v36 + 200);
      v235 = v37;
      if ( v231 )
      {
        v28 = v231;
        v38 = 0;
        v39 = (char)v234;
        while ( 2 )
        {
          v40 = v28;
LABEL_45:
          v41 = _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 104), 4, 3);
          if ( v39 )
          {
            if ( v41 != 3 && _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 104), 4, 1) != 1 )
              goto LABEL_57;
          }
          else if ( v41 != 3 )
          {
            if ( *(_DWORD *)(v40 + 104) == 1 )
              ++v32;
LABEL_57:
            v40 = *(_QWORD *)(v40 + 96);
            if ( v32 )
            {
              if ( !v40 )
              {
                v32 = 0;
                continue;
              }
            }
            else if ( !v40 )
            {
              goto LABEL_121;
            }
            goto LABEL_45;
          }
          break;
        }
        v42 = NvmeSendSplitIo(v40, v230, v29, 0, (__int64)&v227, (__int64)&v252, (__int64)&v248, (__int64)v240, v38);
        v23 = v42;
        if ( v42 == 259 )
        {
          v43 = *(_QWORD *)(v26 + 16);
          v237 = 0LL;
          v29 = 0;
          LOWORD(v233) = v233 + 1;
          v44 = (unsigned __int16)v233 % (unsigned int)*(unsigned __int8 *)(v43 + 1730);
          v39 = (char)v234;
          v224 = 1;
          v28 = v231;
          MajorFunction = v44 == 0;
          v38 = v44 == 0;
        }
        else
        {
          if ( v42 == -2147483631 )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 104), 3, 4);
            NvmeNamespaceQueueIo(v26, *(_QWORD *)(v40 + 24), v230);
            goto LABEL_154;
          }
          v28 = v231;
          if ( !*(_WORD *)(v40 + 34) )
          {
            v227 = 1;
            goto LABEL_121;
          }
          if ( v227 )
            goto LABEL_121;
          v29 = (int)v237;
          v39 = (char)v234;
        }
        goto LABEL_57;
      }
      if ( (_BYTE)v234 )
      {
        v46 = v27->Parameters.Read.ByteOffset.QuadPart;
      }
      else
      {
        if ( !v30.QuadPart )
        {
          v47 = v27->Parameters.Read.ByteOffset.QuadPart;
          if ( !(_DWORD)v33 )
            goto LABEL_82;
          v48 = *(unsigned int *)(v26 + 64);
          if ( (unsigned int)v33 % (unsigned int)v48
            || (v49 = v47 / v48, v47 % v48)
            || (v50 = *(_QWORD *)(v26 + 432), LODWORD(v237) = (unsigned int)v33 / (unsigned int)v48, v49 >= v50)
            || v50 - v49 < (unsigned int)v33 / (unsigned int)v48 )
          {
            v23 = -1073741811;
LABEL_82:
            if ( !FeatureFixFUAForReadIoPerf || IoGetIoPriorityHint(v16) <= IoPriorityLow )
              goto LABEL_141;
            v57 = v232;
            _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(v26 + 680) + v232));
LABEL_142:
            v16->IoStatus.Status = v23;
            IofCompleteRequest(v16, 0);
            v94 = *(_QWORD *)(v26 + 128);
            if ( !*(_BYTE *)v94
              && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v94 + 24) + v57), 0xFFFFFFFF) == 1 )
            {
              v95 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 128LL);
              v96 = *(_QWORD *)(v26 + 128);
              if ( v96 )
              {
                if ( *(_QWORD *)(v96 + 8) )
                {
                  v97 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v96 + 40);
                  if ( v97 )
                  {
                    if ( ExAcquireRundownProtectionCacheAware(v97) )
                    {
                      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v26 + 128) + 8LL), 0LL, 2LL);
                      v98 = *(_QWORD *)(v26 + 128);
                      if ( v98 )
                      {
                        if ( *(_QWORD *)(v98 + 8) )
                        {
                          v99 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v98 + 40);
                          if ( v99 )
                            ExReleaseRundownProtectionCacheAware(v99);
                        }
                      }
                    }
                  }
                }
              }
              v100 = *(_QWORD *)(v95 + 160);
              if ( *(_BYTE *)v100 == 1 )
                PoFxIdleComponent(**(_QWORD **)(v100 + 8), 0LL, 2LL);
            }
            goto LABEL_154;
          }
          if ( (unsigned int)v33 <= v37 )
          {
            v51 = *(_DWORD *)(v26 + 428);
            if ( !v51 )
              goto LABEL_80;
            if ( (unsigned int)v33 <= v51 )
            {
              v52 = *(_BYTE *)(v26 + 427);
              if ( v52 )
              {
                v53 = (((v51 - 1) & (unsigned int)v33) - 1LL + v51 + (unsigned __int64)((unsigned int)v47 & (v51 - 1))) >> v52;
                v54 = (unsigned __int64)(unsigned int)v33 >> *(_BYTE *)(v26 + 427);
              }
              else
              {
                LODWORD(v54) = (unsigned int)v33 / v51;
                v53 = ((unsigned int)v33 % v51 + v51 + v47 % v51 - 1) / v51;
              }
              if ( (unsigned int)(v54 + v53) <= 1 )
              {
                v31 = v239;
LABEL_80:
                v55 = GetNVMeSGLBufferContext(v31, v230);
                ListEntry = (PSLIST_ENTRY)v55;
                v56 = v55;
                if ( !v55 )
                {
                  v23 = -1073741670;
                  goto LABEL_82;
                }
                *(_QWORD *)(v55 + 40) = v16;
                v58 = *(_BYTE *)(v55 + 126) & 0xFE;
                *(_QWORD *)(v56 + 96) = v47;
                v59 = v58 | (v219 == 3);
                *(_QWORD *)(v56 + 104) = v49;
                *(_DWORD *)(v56 + 112) = (_DWORD)v237;
                v60 = v236;
                *(_BYTE *)(v56 + 126) = v59;
                v61 = MdlAddress;
                *(_QWORD *)(v56 + 72) = v60;
                *(_QWORD *)(v56 + 32) = v26;
                *(_DWORD *)(v56 + 116) = (_DWORD)v33;
                *(_QWORD *)(v56 + 64) = 0LL;
                *(_QWORD *)(v56 + 56) = v61->MappedSystemVa;
                v62 = *(_QWORD *)&v61->Size;
                v61->MappedSystemVa = (void *)v56;
                *(_QWORD *)(v56 + 48) = v62;
                *(_QWORD *)&v61->Size = 0xFEDCBA9000000000uLL;
                v63 = *(unsigned __int16 *)(v56 + 124);
                v64 = *(_QWORD *)(v56 + 16);
                MdlAddress = (_MDL *)((char *)v16->MdlAddress->StartVa + v16->MdlAddress->ByteOffset);
                *(_QWORD *)(v56 + 80) = MdlAddress;
                v239 = (__int64)v16->MdlAddress;
                v234 = *(PSLIST_ENTRY *)(v26 + 16);
                v65 = KfRaiseIrql(2u);
                v217 = v63;
                v66 = MdlAddress;
                v215 = v64;
                Next = v234[8].Next;
                v68 = v239;
                v225 = v65;
                v220 = v219 != 3;
                LOBYTE(v214) = v220;
                v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _MDL *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int, __int64, int))(*(_QWORD *)(*((_QWORD *)&Next[71].Next + 1) + 8LL) + 112LL))(
                        *((_QWORD *)&Next[71].Next + 1),
                        *((_QWORD *)&Next->Next + 1),
                        v239,
                        MdlAddress,
                        (_DWORD)v33,
                        NvmeContinueScatterGatherProcessIO,
                        v56,
                        v214,
                        v215,
                        v217);
                if ( v23 == -1073741789 )
                {
                  LOBYTE(v214) = v220;
                  v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _MDL *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), PSLIST_ENTRY, int))(*(_QWORD *)(*((_QWORD *)&v234[8].Next[71].Next + 1) + 8LL) + 88LL))(
                          *((_QWORD *)&v234[8].Next[71].Next + 1),
                          *((_QWORD *)&v234[8].Next->Next + 1),
                          v68,
                          v66,
                          (_DWORD)v33,
                          NvmeContinueScatterGatherProcessIO,
                          ListEntry,
                          v214);
                }
                if ( (unsigned __int8)v225 < 2u )
                  KeLowerIrql(v225);
                if ( v23 >= 0 )
                {
                  v23 = 259;
                  goto LABEL_154;
                }
                goto LABEL_123;
              }
              v37 = v235;
            }
          }
          v69 = NvmeSplitIoParallel(
                  v26,
                  (_DWORD)v16,
                  v225,
                  (_DWORD)v33,
                  v47,
                  v37,
                  v230,
                  (__int64)v236,
                  0LL,
                  (__int64)&v224);
          goto LABEL_93;
        }
        v45 = v236;
        v46 = *(_QWORD *)(v30.QuadPart + 96);
        v34 = *(_DWORD *)(v30.QuadPart + 116);
        *(_QWORD *)(v30.QuadPart + 64) = 0LL;
        *(_QWORD *)(v30.QuadPart + 72) = v45;
      }
      if ( !v34 )
      {
        v23 = 0;
        goto LABEL_126;
      }
      v70 = *(unsigned int *)(v26 + 64);
      if ( v34 % (unsigned int)v70
        || (v71 = v46 / v70, v46 % v70)
        || (v72 = *(_QWORD *)(v26 + 432), v73 = v34 / (unsigned int)v70, v71 >= v72)
        || v72 - v71 < v34 / (unsigned int)v70 )
      {
        v23 = -1073741811;
        goto LABEL_126;
      }
      v74 = *(_QWORD *)(v26 + 16);
      if ( v34 > *(_DWORD *)(*(_QWORD *)(v74 + 128) + 200LL) )
        goto LABEL_118;
      v75 = *(_DWORD *)(v26 + 428);
      if ( v75 )
      {
        if ( v34 > v75 )
          goto LABEL_118;
        v76 = *(_BYTE *)(v26 + 427);
        if ( v76 )
        {
          v77 = ((v34 & (v75 - 1)) + v75 + (unsigned __int64)((v75 - 1) & (unsigned int)v46) - 1) >> v76;
          v78 = (unsigned __int64)v34 >> *(_BYTE *)(v26 + 427);
        }
        else
        {
          LODWORD(v78) = v34 / v75;
          v77 = (v34 % v75 - 1LL + v75 + v46 % v75) / v75;
        }
        if ( (unsigned int)(v78 + v77) > 1 )
        {
          v37 = v235;
LABEL_118:
          v69 = NvmeSplitIoParallel(v26, (_DWORD)v16, v225, v34, v46, v37, v230, (__int64)v236, 0LL, (__int64)&v224);
LABEL_93:
          v23 = v69;
          goto LABEL_122;
        }
      }
      v79 = 0;
      if ( ((v34 + ((LODWORD(v16->MdlAddress->StartVa) + v16->MdlAddress->ByteOffset) & 0xFFF) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x2000 )
      {
        v80 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v74 + 880) + v232));
        v79 = (int)v80;
        if ( !v80 )
        {
          v81 = AllocateNewNVMePrpListBufferEntry(*(_QWORD *)(v26 + 16), v230);
          v79 = v81;
          if ( !v81 )
          {
            NvmeNamespaceQueueIo(v26, (__int64)v16, v230);
            v23 = -2147483631;
            goto LABEL_154;
          }
        }
      }
      v82 = *(_QWORD *)(v26 + 16);
      if ( (*(_BYTE *)(v82 + 136) & 2) != 0 )
        v83 = *(_QWORD *)(v82 + 728) + 192LL * v230;
      else
        LODWORD(v83) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v82 + 872) + 2LL * v230) + *(_DWORD *)(v82 + 728) - 192;
      LOBYTE(v213) = 0;
      v23 = NvmeSubmitIoToSQ(v26, (_DWORD)v16, v83, v79, v230, v213, v34, v46, v71, v73, v225, 0LL);
    }
LABEL_122:
    v84 = v23 == 0;
    if ( v23 >= 0 )
      goto LABEL_125;
LABEL_123:
    if ( v23 == -2147483631 )
    {
      v84 = 0;
LABEL_125:
      if ( !v84 )
        goto LABEL_154;
    }
LABEL_126:
    v28 = v231;
LABEL_127:
    v85 = ListEntry;
    if ( ListEntry )
    {
      MdlAddress = (_MDL *)*((_QWORD *)&ListEntry[1].Next + 1);
      if ( MdlAddress )
      {
        v86 = *((_BYTE *)&ListEntry[7].Next + 14);
        v87 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 128LL);
        v221 = KfRaiseIrql(2u);
        (*(void (__fastcall **)(_QWORD, _MDL *, bool))(*(_QWORD *)(*(_QWORD *)(v87 + 1144) + 8LL) + 96LL))(
          *(_QWORD *)(v87 + 1144),
          MdlAddress,
          (v86 & 1) == 0);
        if ( v221 < 2u )
          KeLowerIrql(v221);
      }
      v88 = *((_QWORD *)&v85[5].Next + 1);
      v57 = v232;
      if ( v88 )
      {
        v89 = *(_QWORD *)(v26 + 16);
        *(_QWORD *)(v88 + 88) = 0LL;
        *(_DWORD *)(v88 + 108) = 0;
        *(_DWORD *)(v88 + 104) = 0;
        ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v89 + 888) + v57), (PSLIST_ENTRY)v88);
      }
      v90 = *(_QWORD *)(v26 + 16);
      v91 = *(_QWORD *)(*((_QWORD *)&v85[2].Next + 1) + 184LL);
      *(_QWORD *)(v91 + 8) = v85[3].Next;
      *(_QWORD *)(v91 + 24) = *((_QWORD *)&v85[3].Next + 1);
      v92 = *((unsigned int *)&v85[7].Next + 2);
      *((_QWORD *)&v85[1].Next + 1) = 0LL;
      *((_QWORD *)&v85[5].Next + 1) = 0LL;
      *((_BYTE *)&v85[7].Next + 14) = 0;
      ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v90 + 896) + 8 * v92), v85);
      if ( FeatureFixFUAForReadIoPerf && IoGetIoPriorityHint(v16) > IoPriorityLow )
        _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(v26 + 680) + v57));
      goto LABEL_142;
    }
    if ( !v28 )
      goto LABEL_82;
    if ( v227 )
    {
      FreeAllSglAndContextInChainedSplitIoContext(*(_QWORD **)(v26 + 16), v28);
      FreeNVMeChainedIoSplitContext(*(_QWORD *)(v26 + 16), v230, v231, (__int64)v16);
      if ( FeatureFixFUAForReadIoPerf )
      {
        v93 = IoGetIoPriorityHint(v16);
        v57 = v232;
        if ( v93 > IoPriorityLow )
          _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(v26 + 680) + v232));
        goto LABEL_142;
      }
LABEL_141:
      v57 = v232;
      goto LABEL_142;
    }
LABEL_154:
    v6 = v245;
LABEL_155:
    v8 = v238;
    if ( v23 == 259 )
      goto LABEL_156;
LABEL_170:
    if ( !v224 )
    {
      if ( v23 == -2147483631 )
        return 1;
      if ( v23 == -2147483622 )
      {
        if ( v8 == 1 )
        {
          v3 = v244;
          goto LABEL_175;
        }
        goto LABEL_157;
      }
    }
LABEL_156:
    if ( v8 == 1 )
      goto LABEL_159;
LABEL_157:
    if ( ++v7 >= *(_DWORD *)(v6 + 4) )
      v7 = 0;
LABEL_159:
    memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
    v101 = KeQueryDpcWatchdogInformation(&WatchdogInformation);
    v4 = v236;
    v3 = v244;
  }
  while ( v101 < 0
       || (!WatchdogInformation.DpcWatchdogLimit
        || 100 * (unsigned __int64)WatchdogInformation.DpcWatchdogCount >= 5
                                                                         * (unsigned __int64)WatchdogInformation.DpcWatchdogLimit)
       && (!WatchdogInformation.DpcTimeLimit
        || 100 * (unsigned __int64)WatchdogInformation.DpcTimeCount >= 10
                                                                     * (unsigned __int64)WatchdogInformation.DpcTimeLimit) );
  return 1;
}
