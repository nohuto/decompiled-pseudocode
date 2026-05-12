/*
 * XREFs of NvmeProcessPendingIoInCompletionDpc @ 0x140120370
 * Callers:
 *     NvmeCompletionDpcRoutine @ 0x14011A4A0 (NvmeCompletionDpcRoutine.c)
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

bool __fastcall NvmeProcessPendingIoInCompletionDpc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  ULONG CurrentProcessorNumber; // eax
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned int v10; // r13d
  int v11; // r8d
  unsigned int v12; // edx
  __int64 v13; // rdi
  unsigned int v14; // eax
  int v15; // ebx
  int v16; // ebx
  KIRQL v17; // r14
  __int64 v18; // r9
  signed __int32 v19; // r8d
  IRP *v20; // rsi
  unsigned int v21; // edx
  unsigned int v22; // r8d
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // r15d
  __int64 v28; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v30; // r14
  _IO_STACK_LOCATION *v31; // rcx
  __int64 QuadPart; // rdx
  _LARGE_INTEGER ByteOffset; // r8
  __int16 v34; // di
  __int64 v35; // r10
  int v36; // r11d
  __int64 v37; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // r12
  unsigned int v39; // ebx
  __int64 v40; // rax
  unsigned int v41; // r9d
  int v42; // r12d
  char v43; // cl
  __int64 v44; // rbx
  signed __int32 v45; // eax
  int v46; // eax
  __int64 v47; // rax
  unsigned int v48; // et2
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rbx
  __int64 v51; // rbx
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // rdx
  unsigned int v55; // edx
  char v56; // al
  unsigned int v57; // eax
  __int64 NVMeSGLBufferContext; // rax
  __int64 v59; // r15
  char v60; // al
  char v61; // cl
  __int64 v62; // rax
  _MDL *v63; // rcx
  __int64 v64; // rax
  int v65; // ebx
  __int64 v66; // rdi
  KIRQL v67; // al
  _MDL *v68; // rbx
  __int64 v69; // rcx
  __int64 v70; // rdi
  int v71; // eax
  unsigned __int64 v72; // r8
  unsigned __int64 v73; // r15
  unsigned __int64 v74; // rdx
  __int16 v75; // r12
  __int64 v76; // r11
  unsigned int v77; // edx
  char v78; // al
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // r9
  int v81; // r10d
  PSLIST_ENTRY v82; // rax
  __int64 NewNVMePrpListBufferEntry; // rax
  __int64 v84; // r8
  __int64 v85; // r9
  bool v86; // zf
  PSLIST_ENTRY v87; // rbx
  __int64 v88; // r12
  char v89; // di
  __int64 v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // rdi
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rax
  volatile signed __int32 *v98; // rcx
  IO_PRIORITY_HINT IoPriorityHint; // eax
  __int64 v100; // rax
  __int64 v101; // rbx
  __int64 v102; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v103; // rcx
  __int64 v104; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // rax
  _DWORD *v108; // r9
  unsigned int v109; // r12d
  unsigned int v110; // r9d
  _DWORD *v111; // rax
  __int64 v112; // rax
  __int64 v113; // r13
  unsigned int v114; // esi
  unsigned int v115; // edx
  __int64 v116; // rbx
  unsigned int v117; // eax
  __int64 v118; // rax
  int v119; // edi
  int v120; // edi
  KIRQL v121; // r14
  __int64 v122; // r9
  signed __int32 v123; // r8d
  IRP *v124; // rsi
  unsigned int v125; // edx
  unsigned int v126; // r8d
  unsigned int v127; // edx
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rcx
  int v131; // r15d
  __int64 v132; // rdi
  _IO_STACK_LOCATION *v133; // rax
  __int64 v134; // r14
  _IO_STACK_LOCATION *v135; // r13
  __int64 v136; // rcx
  __int64 v137; // r11
  _LARGE_INTEGER v138; // r8
  __int16 v139; // di
  __int64 v140; // rdx
  int v141; // r10d
  _IO_SECURITY_CONTEXT *v142; // r12
  unsigned int v143; // ebx
  __int64 v144; // rax
  __int64 v145; // rax
  unsigned int v146; // r9d
  char v147; // r12
  char v148; // r13
  __int64 v149; // rbx
  signed __int32 v150; // eax
  int v151; // eax
  __int64 v152; // rax
  unsigned int v153; // et2
  unsigned __int64 v154; // rdi
  unsigned __int64 v155; // rbx
  IO_PRIORITY_HINT v156; // eax
  __int64 v157; // rbx
  unsigned __int64 v158; // r8
  unsigned __int64 v159; // rdi
  unsigned __int64 v160; // rdx
  unsigned int v161; // r8d
  char v162; // al
  unsigned __int64 v163; // rax
  unsigned __int64 v164; // r10
  __int64 v165; // rax
  __int64 v166; // r15
  char v167; // al
  _IO_SECURITY_CONTEXT *v168; // rax
  int v169; // ebx
  __int64 v170; // rdi
  KIRQL v171; // r13
  __int64 v172; // rbx
  _MDL *v173; // rdi
  int v174; // eax
  unsigned __int64 v175; // r8
  unsigned __int64 v176; // r12
  unsigned __int64 v177; // rdx
  __int16 v178; // r13
  __int64 v179; // r15
  unsigned int v180; // r8d
  char v181; // al
  unsigned int v182; // eax
  int v183; // r10d
  __int64 v184; // rcx
  __int64 v185; // r15
  PSLIST_ENTRY v186; // rax
  __int64 v187; // rax
  __int64 v188; // r8
  __int64 v189; // r9
  bool v190; // zf
  PSLIST_ENTRY v191; // rbx
  __int64 v192; // r12
  char v193; // di
  __int64 v194; // rbx
  KIRQL v195; // r13
  __int64 v196; // rdx
  __int64 v197; // rdi
  __int64 v198; // rcx
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // rax
  __int64 v202; // rax
  volatile signed __int32 *v203; // rcx
  IO_PRIORITY_HINT v204; // eax
  __int64 v205; // rbx
  __int64 v206; // rax
  __int64 v207; // rbx
  __int64 v208; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v209; // rcx
  __int64 v210; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v211; // rcx
  __int64 v212; // rcx
  __int64 v213; // rax
  __int64 v214; // rbx
  __int64 v215; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v216; // rcx
  __int64 v217; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v218; // rcx
  __int64 v219; // rcx
  __int64 v220; // rax
  int v222; // [rsp+28h] [rbp-D8h]
  int v223; // [rsp+38h] [rbp-C8h]
  __int64 v224; // [rsp+40h] [rbp-C0h]
  __int64 v225; // [rsp+40h] [rbp-C0h]
  int v226; // [rsp+48h] [rbp-B8h]
  int v227; // [rsp+48h] [rbp-B8h]
  unsigned __int8 MajorFunction; // [rsp+60h] [rbp-A0h]
  bool v229; // [rsp+60h] [rbp-A0h]
  KIRQL v230; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v231; // [rsp+60h] [rbp-A0h]
  bool v232; // [rsp+60h] [rbp-A0h]
  char v233; // [rsp+61h] [rbp-9Fh] BYREF
  bool v234; // [rsp+62h] [rbp-9Eh]
  unsigned __int8 v235; // [rsp+63h] [rbp-9Dh]
  char v236; // [rsp+64h] [rbp-9Ch] BYREF
  char v237[3]; // [rsp+65h] [rbp-9Bh] BYREF
  unsigned int v238; // [rsp+68h] [rbp-98h]
  ULONG v239; // [rsp+6Ch] [rbp-94h]
  __int64 v240; // [rsp+70h] [rbp-90h]
  __int64 v241; // [rsp+78h] [rbp-88h]
  __int64 v242; // [rsp+80h] [rbp-80h]
  unsigned int v243; // [rsp+88h] [rbp-78h]
  int v244; // [rsp+8Ch] [rbp-74h]
  unsigned int v245; // [rsp+90h] [rbp-70h]
  __int64 v246; // [rsp+98h] [rbp-68h]
  PSLIST_ENTRY ListEntry; // [rsp+A0h] [rbp-60h]
  __int64 v248; // [rsp+A8h] [rbp-58h]
  __int64 MdlAddress; // [rsp+B0h] [rbp-50h]
  __int64 v250; // [rsp+B8h] [rbp-48h]
  __int16 v251[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v252; // [rsp+C4h] [rbp-3Ch] BYREF
  __int64 v253; // [rsp+C8h] [rbp-38h]
  __int64 v254; // [rsp+D0h] [rbp-30h]
  _DWORD *v255; // [rsp+D8h] [rbp-28h]
  _MDL *v256; // [rsp+E0h] [rbp-20h]
  __int64 v257; // [rsp+E8h] [rbp-18h]
  int v258; // [rsp+F0h] [rbp-10h] BYREF
  int v259; // [rsp+F4h] [rbp-Ch] BYREF
  __int64 v260; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v261; // [rsp+100h] [rbp+0h] BYREF
  __int64 v262; // [rsp+108h] [rbp+8h]
  __int64 v263; // [rsp+110h] [rbp+10h] BYREF
  __int64 v264; // [rsp+118h] [rbp+18h] BYREF
  __int128 v265; // [rsp+120h] [rbp+20h] BYREF
  __int128 v266; // [rsp+130h] [rbp+30h] BYREF
  __int128 v267; // [rsp+140h] [rbp+40h] BYREF
  __int128 v268; // [rsp+150h] [rbp+50h] BYREF

  v4 = a1;
  v257 = a1;
  v241 = a4;
  v238 = 0;
  v5 = a4;
  v248 = a2;
  v6 = a2;
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v8 = *(_QWORD *)(v4 + 1104);
  v239 = CurrentProcessorNumber;
  v233 = 0;
  v242 = CurrentProcessorNumber;
  v9 = *(_QWORD *)(v8 + 8LL * CurrentProcessorNumber);
  v254 = v9;
  v10 = *(_DWORD *)(v9 + 64);
  v11 = *(_DWORD *)(v4 + 656);
  v255 = g_CpuInfo;
  v244 = v11;
  while ( 1 )
  {
    v12 = v10;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v9 + 8LL * v10 + 264);
      if ( v13 )
      {
        if ( **(_DWORD **)(v13 + 16) )
          goto LABEL_377;
        if ( *(_DWORD *)v13 || *(_DWORD *)(v13 + 48) != *(_DWORD *)(v13 + 52) )
          break;
      }
      if ( v11 != 1 )
      {
        v14 = v10 + 1;
        v10 = 0;
        if ( v14 < *(_DWORD *)(v9 + 4) )
          v10 = v14;
        if ( v12 != v10 )
          continue;
      }
      goto LABEL_173;
    }
    v15 = *(_DWORD *)(v4 + 136);
    v260 = 0LL;
    v16 = v15 & 2;
    v17 = KfRaiseIrql(2u);
    while ( 1 )
    {
      v18 = *(unsigned int *)(v13 + 52);
      if ( (_DWORD)v18 == *(_DWORD *)(v13 + 48) )
        break;
      v19 = 0;
      if ( (unsigned int)(v18 + 1) < *(_DWORD *)(*(_QWORD *)(v13 + 16) + 4LL) )
        v19 = v18 + 1;
      if ( (_DWORD)v18 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 52), v19, v18) )
      {
        do
          v20 = (IRP *)_InterlockedExchange64((volatile __int64 *)(8 * v18 + *(_QWORD *)(v13 + 56)), 0LL);
        while ( !v20 );
        if ( !*(_DWORD *)(*(_QWORD *)(v13 + 16) + 16LL)
          && (*(_DWORD *)v13 == 2
           || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v13 + 32) + 16LL * *(unsigned int *)(v13 + 8)))) )
        {
          if ( *(_DWORD *)(v13 + 48) == *(_DWORD *)(v13 + 52)
            || ((v21 = *(_DWORD *)(v13 + 48), v22 = *(_DWORD *)(v13 + 52), v21 != v22)
              ? (v21 <= v22
               ? ((v24 = *(_QWORD *)(v13 + 24), *(_BYTE *)(*(_QWORD *)(v13 + 16) + 20LL))
                ? (v25 = *(_QWORD *)(v24 + 1024))
                : (v25 = *(_QWORD *)(v24 + 256)),
                  v23 = *(_DWORD *)(v25 + 4) - v22 + v21)
               : (v23 = v21 - v22))
              : (v23 = 0),
                v23 <= *(_DWORD *)(*(_QWORD *)(v13 + 16) + 8LL)) )
          {
            if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v13 + 16) + 16LL), 1, 0) )
            {
              v26 = *(_QWORD *)(v13 + 24);
              if ( *(_BYTE *)(*(_QWORD *)(v13 + 16) + 20LL) )
                IoQueueWorkItem(
                  *(PIO_WORKITEM *)(v26 + 1032),
                  (PIO_WORKITEM_ROUTINE)NvmeControllerRefillShadowQueueRoutine,
                  DelayedWorkQueue,
                  *(PVOID *)(v13 + 24));
              else
                KeSetEvent((PRKEVENT)(v26 + 480), 0, 0);
            }
          }
        }
        KeLowerIrql(v17);
        if ( v16 )
        {
          v27 = NvmeNamespaceProcessRequest(*(_QWORD *)(v13 + 24), (__int64)v20, v239);
          goto LABEL_161;
        }
        if ( (int)IoGetIoAttributionHandle(v20, &v260) >= 0 )
        {
          v28 = v260;
          v265 = 0LL;
          LODWORD(v265) = 1;
          CurrentStackLocation = v20->Tail.Overlay.CurrentStackLocation;
          v266 = 0LL;
          DWORD1(v265) = CurrentStackLocation->MajorFunction | 0x200;
          *((_QWORD *)&v266 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v266 + 1);
          IoRecordIoAttribution(v28, &v265);
        }
        v30 = *(_QWORD *)(v13 + 24);
        v31 = v20->Tail.Overlay.CurrentStackLocation;
        QuadPart = 0LL;
        v236 = 0;
        ByteOffset.QuadPart = 0LL;
        v251[0] = 0;
        v34 = 0;
        v35 = *(_QWORD *)(v30 + 16);
        v36 = v5;
        v263 = 0LL;
        v258 = 0;
        ListEntry = 0LL;
        v240 = 0LL;
        v234 = 0;
        LOWORD(v243) = 0;
        v250 = v5;
        v27 = 0;
        v37 = HIDWORD(*(_QWORD *)(v35 + 136));
        LOBYTE(v37) = v37 & 1;
        v253 = v6;
        SecurityContext = v31->Parameters.Create.SecurityContext;
        v246 = v37;
        v39 = (unsigned int)SecurityContext;
        v256 = (_MDL *)v31;
        MdlAddress = v35;
        v233 = 0;
        if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0x8765432100000003LL )
        {
          QuadPart = v31->Parameters.Read.ByteOffset.QuadPart;
          v240 = QuadPart;
        }
        else if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0xFEDCBA9000000000LL )
        {
          ByteOffset = v31->Parameters.Read.ByteOffset;
          ListEntry = (PSLIST_ENTRY)ByteOffset.QuadPart;
        }
        if ( (unsigned int)(*(_DWORD *)(v30 + 96) - 5) > 1 )
        {
          v40 = *(_QWORD *)(v35 + 128);
          MajorFunction = v31->MajorFunction;
          v235 = v31->MajorFunction == 3;
          v41 = *(_DWORD *)(v40 + 200);
          v245 = v41;
          if ( v240 )
          {
            QuadPart = v240;
            v42 = v253;
            v43 = v246;
            while ( 2 )
            {
              v44 = QuadPart;
LABEL_47:
              v45 = _InterlockedCompareExchange((volatile signed __int32 *)(v44 + 104), 4, 3);
              if ( v43 )
              {
                if ( v45 != 3 && _InterlockedCompareExchange((volatile signed __int32 *)(v44 + 104), 4, 1) != 1 )
                  goto LABEL_59;
              }
              else if ( v45 != 3 )
              {
                if ( *(_DWORD *)(v44 + 104) == 1 )
                  ++v34;
LABEL_59:
                v44 = *(_QWORD *)(v44 + 96);
                if ( v34 )
                {
                  if ( !v44 )
                  {
                    v34 = 0;
                    continue;
                  }
                }
                else if ( !v44 )
                {
                  goto LABEL_123;
                }
                goto LABEL_47;
              }
              break;
            }
            v46 = NvmeSendSplitIo(
                    v44,
                    v239,
                    v42,
                    v36,
                    (__int64)&v236,
                    (__int64)&v263,
                    (__int64)&v258,
                    (__int64)v251,
                    v234);
            v27 = v46;
            if ( v46 == 259 )
            {
              v47 = *(_QWORD *)(v30 + 16);
              v250 = 0LL;
              v36 = 0;
              LOWORD(v243) = v243 + 1;
              v42 = 0;
              v48 = (unsigned __int16)v243 % (unsigned int)*(unsigned __int8 *)(v47 + 1730);
              v43 = v246;
              v233 = 1;
              QuadPart = v240;
              v234 = v48 == 0;
            }
            else
            {
              if ( v46 == -2147483631 )
              {
                _InterlockedCompareExchange((volatile signed __int32 *)(v44 + 104), 3, 4);
                NvmeNamespaceQueueIo(v30, *(_QWORD *)(v44 + 24), v239);
                goto LABEL_160;
              }
              QuadPart = v240;
              if ( !*(_WORD *)(v44 + 34) )
              {
                v236 = 1;
                goto LABEL_123;
              }
              if ( v236 )
                goto LABEL_123;
              v36 = v250;
              v43 = v246;
            }
            goto LABEL_59;
          }
          if ( !(_BYTE)v246 )
          {
            if ( ByteOffset.QuadPart )
            {
              v49 = *(_QWORD *)(ByteOffset.QuadPart + 96);
              v39 = *(_DWORD *)(ByteOffset.QuadPart + 116);
              *(_QWORD *)(ByteOffset.QuadPart + 64) = v241;
              *(_QWORD *)(ByteOffset.QuadPart + 72) = v248;
              goto LABEL_97;
            }
            v50 = v31->Parameters.Read.ByteOffset.QuadPart;
            if ( !(_DWORD)SecurityContext )
            {
LABEL_70:
              if ( FeatureFixFUAForReadIoPerf && IoGetIoPriorityHint(v20) > IoPriorityLow )
              {
                v51 = v242;
                _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(v30 + 680) + 8 * v242));
                goto LABEL_147;
              }
LABEL_146:
              v51 = v242;
              goto LABEL_147;
            }
            v52 = *(unsigned int *)(v30 + 64);
            if ( (unsigned int)SecurityContext % (unsigned int)v52
              || (v53 = v50 / v52, v50 % v52)
              || (v54 = *(_QWORD *)(v30 + 432),
                  LODWORD(v246) = (unsigned int)SecurityContext / (unsigned int)v52,
                  v53 >= v54)
              || v54 - v53 < (unsigned int)SecurityContext / (unsigned int)v52 )
            {
              v27 = -1073741811;
              goto LABEL_70;
            }
            if ( (unsigned int)SecurityContext <= v41 )
            {
              v55 = *(_DWORD *)(v30 + 428);
              if ( !v55 )
                goto LABEL_84;
              if ( (unsigned int)SecurityContext <= v55 )
              {
                v56 = *(_BYTE *)(v30 + 427);
                if ( v56 )
                {
                  v57 = ((unsigned __int64)(unsigned int)SecurityContext >> v56)
                      + ((((unsigned int)v50 & (v55 - 1))
                        + v55
                        + (unsigned __int64)((v55 - 1) & (unsigned int)SecurityContext)
                        - 1) >> v56);
                }
                else
                {
                  v57 = (unsigned int)SecurityContext / v55
                      + ((unsigned int)SecurityContext % v55 + v55 + v50 % v55 - 1) / v55;
                  v35 = MdlAddress;
                }
                if ( v57 <= 1 )
                {
LABEL_84:
                  NVMeSGLBufferContext = GetNVMeSGLBufferContext(v35, v239);
                  ListEntry = (PSLIST_ENTRY)NVMeSGLBufferContext;
                  v59 = NVMeSGLBufferContext;
                  if ( !NVMeSGLBufferContext )
                  {
                    v27 = -1073741670;
                    goto LABEL_70;
                  }
                  *(_QWORD *)(NVMeSGLBufferContext + 40) = v20;
                  v60 = *(_BYTE *)(NVMeSGLBufferContext + 126) & 0xFE;
                  *(_QWORD *)(v59 + 96) = v50;
                  v61 = v60 | (MajorFunction == 3);
                  *(_QWORD *)(v59 + 104) = v53;
                  *(_DWORD *)(v59 + 112) = v246;
                  *(_QWORD *)(v59 + 64) = v241;
                  v62 = v248;
                  *(_BYTE *)(v59 + 126) = v61;
                  v63 = v256;
                  *(_QWORD *)(v59 + 72) = v62;
                  *(_QWORD *)(v59 + 32) = v30;
                  *(_DWORD *)(v59 + 116) = (_DWORD)SecurityContext;
                  *(_QWORD *)(v59 + 56) = v63->MappedSystemVa;
                  v64 = *(_QWORD *)&v63->Size;
                  v63->MappedSystemVa = (void *)v59;
                  *(_QWORD *)(v59 + 48) = v64;
                  *(_QWORD *)&v63->Size = 0xFEDCBA9000000000uLL;
                  v65 = *(unsigned __int16 *)(v59 + 124);
                  v66 = *(_QWORD *)(v59 + 16);
                  v256 = (_MDL *)((char *)v20->MdlAddress->StartVa + v20->MdlAddress->ByteOffset);
                  *(_QWORD *)(v59 + 80) = v256;
                  MdlAddress = (__int64)v20->MdlAddress;
                  v250 = *(_QWORD *)(v30 + 16);
                  v67 = KfRaiseIrql(2u);
                  v226 = v65;
                  v68 = v256;
                  v224 = v66;
                  v69 = *(_QWORD *)(v250 + 128);
                  v70 = MdlAddress;
                  v234 = v67;
                  v229 = MajorFunction != 3;
                  LOBYTE(v223) = v229;
                  v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _MDL *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int, __int64, int))(*(_QWORD *)(*(_QWORD *)(v69 + 1144) + 8LL) + 112LL))(
                          *(_QWORD *)(v69 + 1144),
                          *(_QWORD *)(v69 + 8),
                          MdlAddress,
                          v256,
                          (_DWORD)SecurityContext,
                          NvmeContinueScatterGatherProcessIO,
                          v59,
                          v223,
                          v224,
                          v226);
                  if ( v27 == -1073741789 )
                  {
                    LOBYTE(v223) = v229;
                    v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _MDL *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), PSLIST_ENTRY, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v250 + 128) + 1144LL) + 8LL) + 88LL))(
                            *(_QWORD *)(*(_QWORD *)(v250 + 128) + 1144LL),
                            *(_QWORD *)(*(_QWORD *)(v250 + 128) + 8LL),
                            v70,
                            v68,
                            (_DWORD)SecurityContext,
                            NvmeContinueScatterGatherProcessIO,
                            ListEntry,
                            v223);
                  }
                  if ( (unsigned __int8)v234 < 2u )
                    KeLowerIrql(v234);
                  if ( v27 >= 0 )
                  {
                    v27 = 259;
                    goto LABEL_160;
                  }
LABEL_125:
                  if ( v27 == -2147483631 )
                  {
                    v86 = 0;
                    goto LABEL_127;
                  }
                  goto LABEL_128;
                }
                v41 = v245;
              }
            }
            v71 = NvmeSplitIoParallel(
                    v30,
                    (_DWORD)v20,
                    v235,
                    (_DWORD)SecurityContext,
                    v50,
                    v41,
                    v239,
                    v248,
                    v241,
                    (__int64)&v233);
LABEL_94:
            v27 = v71;
LABEL_124:
            v86 = v27 == 0;
            if ( v27 < 0 )
              goto LABEL_125;
LABEL_127:
            if ( !v86 )
              goto LABEL_160;
LABEL_128:
            QuadPart = v240;
            goto LABEL_129;
          }
          v49 = v31->Parameters.Read.ByteOffset.QuadPart;
LABEL_97:
          if ( !v39 )
            goto LABEL_128;
          v72 = *(unsigned int *)(v30 + 64);
          if ( v39 % (unsigned int)v72
            || (v73 = v49 / v72, v49 % v72)
            || (v74 = *(_QWORD *)(v30 + 432), v75 = v39 / (unsigned int)v72, v73 >= v74)
            || v74 - v73 < v39 / (unsigned int)v72 )
          {
            v27 = -1073741811;
            goto LABEL_128;
          }
          v76 = *(_QWORD *)(v30 + 16);
          if ( v39 <= *(_DWORD *)(*(_QWORD *)(v76 + 128) + 200LL) )
          {
            v77 = *(_DWORD *)(v30 + 428);
            if ( !v77 )
            {
LABEL_109:
              v81 = 0;
              if ( ((v39 + ((LODWORD(v20->MdlAddress->StartVa) + v20->MdlAddress->ByteOffset) & 0xFFF) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x2000 )
              {
                v82 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v76 + 880) + 8 * v242));
                v81 = (int)v82;
                if ( !v82 )
                {
                  NewNVMePrpListBufferEntry = AllocateNewNVMePrpListBufferEntry(*(_QWORD *)(v30 + 16), v239);
                  v81 = NewNVMePrpListBufferEntry;
                  if ( !NewNVMePrpListBufferEntry )
                  {
                    NvmeNamespaceQueueIo(v30, (__int64)v20, v239);
                    v27 = -2147483631;
                    goto LABEL_160;
                  }
                }
              }
              if ( v241 )
              {
                LODWORD(v84) = v248;
              }
              else
              {
                v85 = *(_QWORD *)(v30 + 16);
                if ( (*(_BYTE *)(v85 + 136) & 2) != 0 )
                  v84 = *(_QWORD *)(v85 + 728) + 192 * v242;
                else
                  LODWORD(v84) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v85 + 872) + 2 * v242)
                               + *(_DWORD *)(v85 + 728)
                               - 192;
              }
              LOBYTE(v222) = 0;
              v27 = NvmeSubmitIoToSQ(v30, (_DWORD)v20, v84, v81, v239, v222, v39, v49, v73, v75, v235, v241);
              goto LABEL_124;
            }
            if ( v39 <= v77 )
            {
              v78 = *(_BYTE *)(v30 + 427);
              if ( v78 )
              {
                v79 = ((v39 & (v77 - 1)) + v77 + (unsigned __int64)((v77 - 1) & (unsigned int)v49) - 1) >> v78;
                v80 = (unsigned __int64)v39 >> *(_BYTE *)(v30 + 427);
              }
              else
              {
                LODWORD(v80) = v39 / v77;
                v79 = (v39 % v77 - 1LL + v77 + v49 % v77) / v77;
              }
              if ( (unsigned int)(v80 + v79) <= 1 )
                goto LABEL_109;
              v41 = v245;
            }
          }
          v71 = NvmeSplitIoParallel(v30, (_DWORD)v20, v235, v39, v49, v41, v239, v248, v241, (__int64)&v233);
          goto LABEL_94;
        }
        v236 = 1;
        v27 = -1073741810;
        if ( QuadPart )
        {
LABEL_123:
          _interlockedbittestandreset((volatile signed __int32 *)(QuadPart + 108), 0);
          goto LABEL_124;
        }
LABEL_129:
        v87 = ListEntry;
        if ( ListEntry )
        {
          v88 = *((_QWORD *)&ListEntry[1].Next + 1);
          if ( v88 )
          {
            v89 = *((_BYTE *)&ListEntry[7].Next + 14);
            v90 = *(_QWORD *)(*(_QWORD *)(v30 + 16) + 128LL);
            v230 = KfRaiseIrql(2u);
            (*(void (__fastcall **)(_QWORD, __int64, bool))(*(_QWORD *)(*(_QWORD *)(v90 + 1144) + 8LL) + 96LL))(
              *(_QWORD *)(v90 + 1144),
              v88,
              (v89 & 1) == 0);
            if ( v230 < 2u )
              KeLowerIrql(v230);
            v87 = ListEntry;
          }
          v91 = *((_QWORD *)&v87[5].Next + 1);
          v92 = v242;
          if ( v91 )
          {
            v93 = *(_QWORD *)(v30 + 16);
            *(_QWORD *)(v91 + 88) = 0LL;
            *(_DWORD *)(v91 + 108) = 0;
            *(_DWORD *)(v91 + 104) = 0;
            ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v93 + 888) + 8 * v92), (PSLIST_ENTRY)v91);
          }
          v94 = *(_QWORD *)(v30 + 16);
          v95 = *(_QWORD *)(*((_QWORD *)&v87[2].Next + 1) + 184LL);
          *(_QWORD *)(v95 + 8) = v87[3].Next;
          *(_QWORD *)(v95 + 24) = *((_QWORD *)&v87[3].Next + 1);
          v96 = *((unsigned int *)&v87[7].Next + 2);
          *((_QWORD *)&v87[1].Next + 1) = 0LL;
          *((_QWORD *)&v87[5].Next + 1) = 0LL;
          *((_BYTE *)&v87[7].Next + 14) = 0;
          ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v94 + 896) + 8 * v96), v87);
          if ( FeatureFixFUAForReadIoPerf && IoGetIoPriorityHint(v20) > IoPriorityLow )
            _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(v30 + 680) + 8 * v92));
          v20->IoStatus.Status = v27;
          IofCompleteRequest(v20, 0);
          v97 = *(_QWORD *)(v30 + 128);
          if ( *(_BYTE *)v97 )
            goto LABEL_160;
          v98 = *(volatile signed __int32 **)(*(_QWORD *)(v97 + 24) + 8 * v92);
          goto LABEL_149;
        }
        if ( !QuadPart )
          goto LABEL_70;
        if ( v236 )
        {
          FreeAllSglAndContextInChainedSplitIoContext(*(_QWORD **)(v30 + 16), QuadPart);
          FreeNVMeChainedIoSplitContext(*(_QWORD *)(v30 + 16), v239, v240, (__int64)v20);
          if ( !FeatureFixFUAForReadIoPerf )
            goto LABEL_146;
          IoPriorityHint = IoGetIoPriorityHint(v20);
          v51 = v242;
          if ( IoPriorityHint > IoPriorityLow )
            _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(v30 + 680) + 8 * v242));
LABEL_147:
          v20->IoStatus.Status = v27;
          IofCompleteRequest(v20, 0);
          v100 = *(_QWORD *)(v30 + 128);
          if ( !*(_BYTE *)v100 )
          {
            v98 = *(volatile signed __int32 **)(*(_QWORD *)(v100 + 24) + 8 * v51);
LABEL_149:
            if ( _InterlockedExchangeAdd(v98, 0xFFFFFFFF) == 1 )
            {
              v101 = *(_QWORD *)(*(_QWORD *)(v30 + 16) + 128LL);
              v102 = *(_QWORD *)(v30 + 128);
              if ( v102 )
              {
                if ( *(_QWORD *)(v102 + 8) )
                {
                  v103 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v102 + 40);
                  if ( v103 )
                  {
                    if ( ExAcquireRundownProtectionCacheAware(v103) )
                    {
                      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v30 + 128) + 8LL), 0LL, 2LL);
                      v104 = *(_QWORD *)(v30 + 128);
                      if ( v104 )
                      {
                        if ( *(_QWORD *)(v104 + 8) )
                        {
                          v105 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v104 + 40);
                          if ( v105 )
                            ExReleaseRundownProtectionCacheAware(v105);
                        }
                      }
                    }
                  }
                }
              }
              v106 = *(_QWORD *)(v101 + 160);
              if ( *(_BYTE *)v106 == 1 )
                PoFxIdleComponent(**(_QWORD **)(v106 + 8), 0LL, 2LL);
            }
          }
        }
LABEL_160:
        v6 = v248;
LABEL_161:
        if ( v27 != 259 )
        {
          v9 = v254;
          goto LABEL_168;
        }
        goto LABEL_194;
      }
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)v13, 0, 1) == 1 )
    {
      v107 = *(_QWORD *)(v13 + 24);
      if ( *(_BYTE *)(*(_QWORD *)(v13 + 16) + 20LL) == 1 )
        _InterlockedDecrement((volatile signed __int32 *)(v107 + 956));
      else
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v107 + 16) + 952LL));
    }
    KeLowerIrql(v17);
    v27 = -2147483622;
LABEL_168:
    if ( v233 )
    {
LABEL_194:
      v118 = 0LL;
      return v118 == 0;
    }
    if ( v27 == -2147483631 )
      goto LABEL_377;
    if ( v27 != -2147483622 )
    {
      if ( v244 == 1 )
        goto LABEL_192;
      goto LABEL_190;
    }
    v11 = v244;
    if ( v244 == 1 )
      break;
LABEL_190:
    if ( ++v10 >= *(_DWORD *)(v9 + 4) )
      v10 = 0;
LABEL_192:
    if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
      goto LABEL_377;
    v11 = v244;
    v5 = v241;
    v4 = v257;
  }
  v5 = v241;
  v4 = v257;
LABEL_173:
  v108 = v255;
  *(_DWORD *)(v9 + 64) = v10;
  if ( v108[3] )
  {
    v109 = v238;
    v110 = v239;
    v111 = v255;
    while ( v109 == v110 )
    {
LABEL_187:
      v238 = ++v109;
      if ( v109 >= v111[3] )
        goto LABEL_377;
      v5 = v241;
      v4 = v257;
    }
    v112 = *(_QWORD *)(v4 + 1104);
    v242 = v109;
    v113 = *(_QWORD *)(v112 + 8LL * v109);
    v262 = v113;
    v114 = *(_DWORD *)(v113 + 64);
    v245 = v114;
    while ( 2 )
    {
      v115 = v114;
      while ( 1 )
      {
        v116 = *(_QWORD *)(v113 + 8LL * v114 + 264);
        if ( v116 )
        {
          if ( **(_DWORD **)(v116 + 16) )
            goto LABEL_377;
          if ( *(_DWORD *)v116 || *(_DWORD *)(v116 + 48) != *(_DWORD *)(v116 + 52) )
            break;
        }
        if ( v11 != 1 )
        {
          v117 = v114 + 1;
          v114 = 0;
          if ( v117 != *(_DWORD *)(v113 + 4) )
            v114 = v117;
          v245 = v114;
          if ( v115 != v114 )
            continue;
        }
LABEL_186:
        v110 = v239;
        v111 = v255;
        goto LABEL_187;
      }
      v119 = *(_DWORD *)(v4 + 136);
      v261 = 0LL;
      v120 = v119 & 2;
      v121 = KfRaiseIrql(2u);
      do
      {
        v122 = *(unsigned int *)(v116 + 52);
        if ( (_DWORD)v122 == *(_DWORD *)(v116 + 48) )
        {
          if ( _InterlockedCompareExchange((volatile signed __int32 *)v116, 0, 1) == 1 )
          {
            v220 = *(_QWORD *)(v116 + 24);
            if ( *(_BYTE *)(*(_QWORD *)(v116 + 16) + 20LL) == 1 )
              _InterlockedDecrement((volatile signed __int32 *)(v220 + 956));
            else
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v220 + 16) + 952LL));
          }
          KeLowerIrql(v121);
          v131 = -2147483622;
          goto LABEL_366;
        }
        v123 = 0;
        if ( (unsigned int)(v122 + 1) < *(_DWORD *)(*(_QWORD *)(v116 + 16) + 4LL) )
          v123 = v122 + 1;
      }
      while ( (_DWORD)v122 != _InterlockedCompareExchange((volatile signed __int32 *)(v116 + 52), v123, v122) );
      do
        v124 = (IRP *)_InterlockedExchange64((volatile __int64 *)(8 * v122 + *(_QWORD *)(v116 + 56)), 0LL);
      while ( !v124 );
      if ( !*(_DWORD *)(*(_QWORD *)(v116 + 16) + 16LL)
        && (*(_DWORD *)v116 == 2
         || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v116 + 32) + 16LL * *(unsigned int *)(v116 + 8)))) )
      {
        if ( *(_DWORD *)(v116 + 48) == *(_DWORD *)(v116 + 52)
          || ((v125 = *(_DWORD *)(v116 + 48), v126 = *(_DWORD *)(v116 + 52), v125 != v126)
            ? (v125 <= v126
             ? ((v128 = *(_QWORD *)(v116 + 24), *(_BYTE *)(*(_QWORD *)(v116 + 16) + 20LL))
              ? (v129 = *(_QWORD *)(v128 + 1024))
              : (v129 = *(_QWORD *)(v128 + 256)),
                v127 = *(_DWORD *)(v129 + 4) - v126 + v125)
             : (v127 = v125 - v126))
            : (v127 = 0),
              v127 <= *(_DWORD *)(*(_QWORD *)(v116 + 16) + 8LL)) )
        {
          if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v116 + 16) + 16LL), 1, 0) )
          {
            v130 = *(_QWORD *)(v116 + 24);
            if ( *(_BYTE *)(*(_QWORD *)(v116 + 16) + 20LL) )
              IoQueueWorkItem(
                *(PIO_WORKITEM *)(v130 + 1032),
                (PIO_WORKITEM_ROUTINE)NvmeControllerRefillShadowQueueRoutine,
                DelayedWorkQueue,
                *(PVOID *)(v116 + 24));
            else
              KeSetEvent((PRKEVENT)(v130 + 480), 0, 0);
          }
        }
      }
      KeLowerIrql(v121);
      if ( v120 )
      {
        v131 = NvmeNamespaceProcessRequest(*(_QWORD *)(v116 + 24), (__int64)v124, v109);
        goto LABEL_359;
      }
      if ( (int)IoGetIoAttributionHandle(v124, &v261) >= 0 )
      {
        v132 = v261;
        v267 = 0LL;
        LODWORD(v267) = 1;
        v133 = v124->Tail.Overlay.CurrentStackLocation;
        v268 = 0LL;
        DWORD1(v267) = v133->MajorFunction | 0x200;
        *((_QWORD *)&v268 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v268 + 1);
        IoRecordIoAttribution(v132, &v267);
      }
      v134 = *(_QWORD *)(v116 + 24);
      v135 = v124->Tail.Overlay.CurrentStackLocation;
      v136 = 0LL;
      v137 = v248;
      v138.QuadPart = 0LL;
      v237[0] = 0;
      v139 = 0;
      v140 = *(_QWORD *)(v134 + 16);
      v141 = v5;
      v252 = 0;
      v264 = 0LL;
      v259 = 0;
      v142 = v135->Parameters.Create.SecurityContext;
      ListEntry = 0LL;
      v143 = (unsigned int)v142;
      v240 = 0LL;
      LOWORD(v243) = 0;
      v250 = v5;
      v131 = 0;
      v144 = HIDWORD(*(_QWORD *)(v140 + 136));
      LOBYTE(v144) = v144 & 1;
      v253 = v248;
      MdlAddress = v144;
      v254 = v140;
      v233 = 0;
      if ( v142 == (_IO_SECURITY_CONTEXT *)0x8765432100000003LL )
      {
        v136 = v135->Parameters.Read.ByteOffset.QuadPart;
        v240 = v136;
      }
      else if ( v142 == (_IO_SECURITY_CONTEXT *)0xFEDCBA9000000000LL )
      {
        v138 = v135->Parameters.Read.ByteOffset;
        ListEntry = (PSLIST_ENTRY)v138.QuadPart;
      }
      if ( (unsigned int)(*(_DWORD *)(v134 + 96) - 5) <= 1 )
      {
        v237[0] = 1;
        v131 = -1073741810;
        if ( v136 )
        {
LABEL_307:
          _interlockedbittestandreset((volatile signed __int32 *)(v136 + 108), 0);
          goto LABEL_308;
        }
        goto LABEL_313;
      }
      v145 = *(_QWORD *)(v140 + 128);
      v231 = v135->MajorFunction;
      v234 = v135->MajorFunction == 3;
      v146 = *(_DWORD *)(v145 + 200);
      LODWORD(v246) = v146;
      if ( v240 )
      {
        v136 = v240;
        v147 = 0;
        v148 = MdlAddress;
        while ( 2 )
        {
          v149 = v136;
LABEL_230:
          v150 = _InterlockedCompareExchange((volatile signed __int32 *)(v149 + 104), 4, 3);
          if ( v148 )
          {
            if ( v150 != 3 && _InterlockedCompareExchange((volatile signed __int32 *)(v149 + 104), 4, 1) != 1 )
              goto LABEL_242;
          }
          else if ( v150 != 3 )
          {
            if ( *(_DWORD *)(v149 + 104) == 1 )
              ++v139;
LABEL_242:
            v149 = *(_QWORD *)(v149 + 96);
            if ( v139 )
            {
              if ( !v149 )
              {
                v139 = 0;
                continue;
              }
            }
            else if ( !v149 )
            {
              goto LABEL_307;
            }
            goto LABEL_230;
          }
          break;
        }
        v151 = NvmeSendSplitIo(
                 v149,
                 v238,
                 v137,
                 v141,
                 (__int64)v237,
                 (__int64)&v264,
                 (__int64)&v259,
                 (__int64)&v252,
                 v147);
        v131 = v151;
        if ( v151 == 259 )
        {
          v152 = *(_QWORD *)(v134 + 16);
          v250 = 0LL;
          v141 = 0;
          v253 = 0LL;
          LODWORD(v137) = 0;
          v153 = (unsigned __int16)(v243 + 1) % (unsigned int)*(unsigned __int8 *)(v152 + 1730);
          v136 = v240;
          LOWORD(v243) = v243 + 1;
          v233 = 1;
          v235 = v153 == 0;
          v147 = v153 == 0;
        }
        else
        {
          if ( v151 == -2147483631 )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)(v149 + 104), 3, 4);
            v109 = v238;
            NvmeNamespaceQueueIo(v134, *(_QWORD *)(v149 + 24), v238);
            goto LABEL_358;
          }
          v136 = v240;
          if ( !*(_WORD *)(v149 + 34) )
          {
            v237[0] = 1;
            goto LABEL_307;
          }
          if ( v237[0] )
            goto LABEL_307;
          v141 = v250;
          LODWORD(v137) = v253;
        }
        goto LABEL_242;
      }
      if ( !(_BYTE)MdlAddress )
      {
        if ( v138.QuadPart )
        {
          v154 = *(_QWORD *)(v138.QuadPart + 96);
          v143 = *(_DWORD *)(v138.QuadPart + 116);
          *(_QWORD *)(v138.QuadPart + 64) = v241;
          *(_QWORD *)(v138.QuadPart + 72) = v137;
          goto LABEL_280;
        }
        v155 = v135->Parameters.Read.ByteOffset.QuadPart;
        if ( !(_DWORD)v142 )
        {
LABEL_253:
          if ( FeatureFixFUAForReadIoPerf )
          {
            v156 = IoGetIoPriorityHint(v124);
            v157 = v242;
            if ( v156 > IoPriorityLow )
              _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(v134 + 680) + 8 * v242));
          }
          else
          {
            v157 = v242;
          }
          v124->IoStatus.Status = v131;
          IofCompleteRequest(v124, 0);
          v213 = *(_QWORD *)(v134 + 128);
          if ( !*(_BYTE *)v213 )
          {
            v203 = *(volatile signed __int32 **)(*(_QWORD *)(v213 + 24) + 8 * v157);
            goto LABEL_346;
          }
          goto LABEL_357;
        }
        v158 = *(unsigned int *)(v134 + 64);
        if ( (unsigned int)v142 % (unsigned int)v158
          || (v159 = v155 / v158, v155 % v158)
          || (v160 = *(_QWORD *)(v134 + 432), v243 = (unsigned int)v142 / (unsigned int)v158, v159 >= v160)
          || v160 - v159 < (unsigned int)v142 / (unsigned int)v158 )
        {
          v131 = -1073741811;
          goto LABEL_253;
        }
        if ( (unsigned int)v142 > v146 )
          goto LABEL_276;
        v161 = *(_DWORD *)(v134 + 428);
        if ( !v161 )
        {
LABEL_267:
          v165 = GetNVMeSGLBufferContext(v254, v238);
          ListEntry = (PSLIST_ENTRY)v165;
          v166 = v165;
          if ( !v165 )
          {
            v131 = -1073741670;
            goto LABEL_253;
          }
          *(_QWORD *)(v165 + 40) = v124;
          v167 = *(_BYTE *)(v165 + 126) & 0xFE;
          *(_QWORD *)(v166 + 96) = v155;
          *(_QWORD *)(v166 + 104) = v159;
          *(_DWORD *)(v166 + 112) = v243;
          *(_QWORD *)(v166 + 64) = v241;
          *(_QWORD *)(v166 + 72) = v248;
          *(_BYTE *)(v166 + 126) = v167 | (v231 == 3);
          *(_QWORD *)(v166 + 32) = v134;
          *(_DWORD *)(v166 + 116) = (_DWORD)v142;
          *(_QWORD *)(v166 + 56) = v135->Parameters.Read.ByteOffset.QuadPart;
          v168 = v135->Parameters.Create.SecurityContext;
          v135->Parameters.Read.ByteOffset.QuadPart = v166;
          *(_QWORD *)(v166 + 48) = v168;
          v135->Parameters.WMI.ProviderId = 0xFEDCBA9000000000uLL;
          v169 = *(unsigned __int16 *)(v166 + 124);
          v170 = *(_QWORD *)(v166 + 16);
          v254 = (__int64)v124->MdlAddress->StartVa + v124->MdlAddress->ByteOffset;
          *(_QWORD *)(v166 + 80) = v254;
          v256 = v124->MdlAddress;
          MdlAddress = *(_QWORD *)(v134 + 16);
          v171 = KfRaiseIrql(2u);
          v227 = v169;
          v172 = v254;
          v225 = v170;
          v173 = v256;
          v232 = v231 != 3;
          LOBYTE(v223) = v232;
          v131 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, __int64, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int, __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 1144LL) + 8LL) + 112LL))(
                   *(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 1144LL),
                   *(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 8LL),
                   v256,
                   v254,
                   (_DWORD)v142,
                   NvmeContinueScatterGatherProcessIO,
                   v166,
                   v223,
                   v225,
                   v227);
          if ( v131 == -1073741789 )
          {
            LOBYTE(v223) = v232;
            v131 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, __int64, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), PSLIST_ENTRY, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 1144LL) + 8LL) + 88LL))(
                     *(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 1144LL),
                     *(_QWORD *)(*(_QWORD *)(MdlAddress + 128) + 8LL),
                     v173,
                     v172,
                     (_DWORD)v142,
                     NvmeContinueScatterGatherProcessIO,
                     ListEntry,
                     v223);
          }
          if ( v171 < 2u )
            KeLowerIrql(v171);
          if ( v131 >= 0 )
          {
            v131 = 259;
            goto LABEL_357;
          }
          goto LABEL_309;
        }
        if ( (unsigned int)v142 <= v161 )
        {
          v162 = *(_BYTE *)(v134 + 427);
          if ( v162 )
          {
            v163 = (((v161 - 1) & (unsigned int)v142) - 1LL + v161 + (unsigned __int64)((v161 - 1) & (unsigned int)v155)) >> v162;
            v164 = (unsigned __int64)(unsigned int)v142 >> *(_BYTE *)(v134 + 427);
          }
          else
          {
            LODWORD(v164) = (unsigned int)v142 / v161;
            v163 = ((unsigned int)v142 % v161 + v161 + v155 % v161 - 1) / v161;
          }
          if ( (unsigned int)(v164 + v163) <= 1 )
            goto LABEL_267;
          v146 = v246;
        }
LABEL_276:
        v174 = NvmeSplitIoParallel(v134, (_DWORD)v124, v234, (_DWORD)v142, v155, v146, v238, v248, v241, (__int64)&v233);
LABEL_277:
        v131 = v174;
LABEL_308:
        v190 = v131 == 0;
        if ( v131 >= 0 )
        {
LABEL_311:
          if ( !v190 )
            goto LABEL_357;
        }
        else
        {
LABEL_309:
          if ( v131 == -2147483631 )
          {
            v190 = 0;
            goto LABEL_311;
          }
        }
LABEL_312:
        v136 = v240;
LABEL_313:
        v191 = ListEntry;
        if ( ListEntry )
        {
          v192 = *((_QWORD *)&ListEntry[1].Next + 1);
          if ( v192 )
          {
            v193 = *((_BYTE *)&ListEntry[7].Next + 14);
            v194 = *(_QWORD *)(*(_QWORD *)(v134 + 16) + 128LL);
            v195 = KfRaiseIrql(2u);
            (*(void (__fastcall **)(_QWORD, __int64, bool))(*(_QWORD *)(*(_QWORD *)(v194 + 1144) + 8LL) + 96LL))(
              *(_QWORD *)(v194 + 1144),
              v192,
              (v193 & 1) == 0);
            if ( v195 < 2u )
              KeLowerIrql(v195);
            v191 = ListEntry;
          }
          v196 = *((_QWORD *)&v191[5].Next + 1);
          v197 = v242;
          if ( v196 )
          {
            v198 = *(_QWORD *)(v134 + 16);
            *(_QWORD *)(v196 + 88) = 0LL;
            *(_DWORD *)(v196 + 108) = 0;
            *(_DWORD *)(v196 + 104) = 0;
            ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v198 + 888) + 8 * v197), (PSLIST_ENTRY)v196);
          }
          v199 = *(_QWORD *)(v134 + 16);
          v200 = *(_QWORD *)(*((_QWORD *)&v191[2].Next + 1) + 184LL);
          *(_QWORD *)(v200 + 8) = v191[3].Next;
          *(_QWORD *)(v200 + 24) = *((_QWORD *)&v191[3].Next + 1);
          v201 = *((unsigned int *)&v191[7].Next + 2);
          *((_QWORD *)&v191[1].Next + 1) = 0LL;
          *((_QWORD *)&v191[5].Next + 1) = 0LL;
          *((_BYTE *)&v191[7].Next + 14) = 0;
          ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v199 + 896) + 8 * v201), v191);
          if ( FeatureFixFUAForReadIoPerf && IoGetIoPriorityHint(v124) > IoPriorityLow )
            _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(v134 + 680) + 8 * v197));
          v124->IoStatus.Status = v131;
          IofCompleteRequest(v124, 0);
          v202 = *(_QWORD *)(v134 + 128);
          if ( !*(_BYTE *)v202 )
          {
            v203 = *(volatile signed __int32 **)(*(_QWORD *)(v202 + 24) + 8 * v197);
LABEL_346:
            if ( _InterlockedExchangeAdd(v203, 0xFFFFFFFF) == 1 )
            {
              v214 = *(_QWORD *)(*(_QWORD *)(v134 + 16) + 128LL);
              v215 = *(_QWORD *)(v134 + 128);
              if ( v215 )
              {
                if ( *(_QWORD *)(v215 + 8) )
                {
                  v216 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v215 + 40);
                  if ( v216 )
                  {
                    if ( ExAcquireRundownProtectionCacheAware(v216) )
                    {
                      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v134 + 128) + 8LL), 0LL, 2LL);
                      v217 = *(_QWORD *)(v134 + 128);
                      if ( v217 )
                      {
                        if ( *(_QWORD *)(v217 + 8) )
                        {
                          v218 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v217 + 40);
                          if ( v218 )
                            ExReleaseRundownProtectionCacheAware(v218);
                        }
                      }
                    }
                  }
                }
              }
              v219 = *(_QWORD *)(v214 + 160);
              if ( *(_BYTE *)v219 == 1 )
                PoFxIdleComponent(**(_QWORD **)(v219 + 8), 0LL, 2LL);
            }
          }
LABEL_357:
          v109 = v238;
        }
        else
        {
          if ( !v136 )
            goto LABEL_253;
          if ( !v237[0] )
            goto LABEL_357;
          FreeAllSglAndContextInChainedSplitIoContext(*(_QWORD **)(v134 + 16), v136);
          v109 = v238;
          FreeNVMeChainedIoSplitContext(*(_QWORD *)(v134 + 16), v238, v240, (__int64)v124);
          if ( FeatureFixFUAForReadIoPerf )
          {
            v204 = IoGetIoPriorityHint(v124);
            v205 = v242;
            if ( v204 > IoPriorityLow )
              _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(v134 + 680) + 8 * v242));
          }
          else
          {
            v205 = v242;
          }
          v124->IoStatus.Status = v131;
          IofCompleteRequest(v124, 0);
          v206 = *(_QWORD *)(v134 + 128);
          if ( !*(_BYTE *)v206
            && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v206 + 24) + 8 * v205), 0xFFFFFFFF) == 1 )
          {
            v207 = *(_QWORD *)(*(_QWORD *)(v134 + 16) + 128LL);
            v208 = *(_QWORD *)(v134 + 128);
            if ( v208 )
            {
              if ( *(_QWORD *)(v208 + 8) )
              {
                v209 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v208 + 40);
                if ( v209 )
                {
                  if ( ExAcquireRundownProtectionCacheAware(v209) )
                  {
                    PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v134 + 128) + 8LL), 0LL, 2LL);
                    v210 = *(_QWORD *)(v134 + 128);
                    if ( v210 )
                    {
                      if ( *(_QWORD *)(v210 + 8) )
                      {
                        v211 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v210 + 40);
                        if ( v211 )
                          ExReleaseRundownProtectionCacheAware(v211);
                      }
                    }
                  }
                }
              }
            }
            v212 = *(_QWORD *)(v207 + 160);
            if ( *(_BYTE *)v212 == 1 )
              PoFxIdleComponent(**(_QWORD **)(v212 + 8), 0LL, 2LL);
          }
        }
LABEL_358:
        v113 = v262;
LABEL_359:
        if ( v131 == 259 )
          goto LABEL_194;
        v114 = v245;
LABEL_366:
        if ( v233 )
          goto LABEL_194;
        if ( v131 == -2147483631 )
          goto LABEL_377;
        if ( v131 == -2147483622 )
        {
          v11 = v244;
          if ( v244 == 1 )
            goto LABEL_186;
LABEL_372:
          if ( ++v114 >= *(_DWORD *)(v113 + 4) )
            v114 = 0;
          v245 = v114;
        }
        else if ( v244 != 1 )
        {
          goto LABEL_372;
        }
        if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
          goto LABEL_377;
        v11 = v244;
        v5 = v241;
        v4 = v257;
        continue;
      }
      break;
    }
    v154 = v135->Parameters.Read.ByteOffset.QuadPart;
LABEL_280:
    if ( !v143 )
      goto LABEL_312;
    v175 = *(unsigned int *)(v134 + 64);
    if ( v143 % (unsigned int)v175
      || (v176 = v154 / v175, v154 % v175)
      || (v177 = *(_QWORD *)(v134 + 432), v178 = v143 / (unsigned int)v175, v176 >= v177)
      || v177 - v176 < v143 / (unsigned int)v175 )
    {
      v131 = -1073741811;
      goto LABEL_312;
    }
    v179 = *(_QWORD *)(v134 + 16);
    if ( v143 <= *(_DWORD *)(*(_QWORD *)(v179 + 128) + 200LL) )
    {
      v180 = *(_DWORD *)(v134 + 428);
      if ( !v180 )
        goto LABEL_292;
      if ( v143 <= v180 )
      {
        v181 = *(_BYTE *)(v134 + 427);
        if ( v181 )
          v182 = ((unsigned __int64)v143 >> v181)
               + ((((v180 - 1) & v143) + v180 + (unsigned __int64)((v180 - 1) & (unsigned int)v154) - 1) >> v181);
        else
          v182 = v143 / v180 + (v143 % v180 - 1LL + v180 + v154 % v180) / v180;
        if ( v182 <= 1 )
        {
LABEL_292:
          v183 = 0;
          if ( ((v143 + ((LODWORD(v124->MdlAddress->StartVa) + v124->MdlAddress->ByteOffset) & 0xFFF) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) <= 0x2000 )
          {
            v185 = v242;
          }
          else
          {
            v184 = *(_QWORD *)(v179 + 880);
            v185 = v242;
            v186 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(v184 + 8 * v242));
            v183 = (int)v186;
            if ( !v186 )
            {
              v187 = AllocateNewNVMePrpListBufferEntry(*(_QWORD *)(v134 + 16), v238);
              v183 = v187;
              if ( !v187 )
              {
                v109 = v238;
                NvmeNamespaceQueueIo(v134, (__int64)v124, v238);
                v131 = -2147483631;
                goto LABEL_358;
              }
            }
          }
          if ( v241 )
          {
            LODWORD(v188) = v248;
          }
          else
          {
            v189 = *(_QWORD *)(v134 + 16);
            if ( (*(_BYTE *)(v189 + 136) & 2) != 0 )
              v188 = *(_QWORD *)(v189 + 728) + 192 * v185;
            else
              LODWORD(v188) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v189 + 872) + 2 * v185)
                            + *(_DWORD *)(v189 + 728)
                            - 192;
          }
          LOBYTE(v222) = 0;
          v131 = NvmeSubmitIoToSQ(v134, (_DWORD)v124, v188, v183, v238, v222, v143, v154, v176, v178, v234, v241);
          goto LABEL_308;
        }
        v146 = v246;
      }
    }
    v174 = NvmeSplitIoParallel(v134, (_DWORD)v124, v234, v143, v154, v146, v238, v248, v241, (__int64)&v233);
    goto LABEL_277;
  }
LABEL_377:
  v118 = v241;
  return v118 == 0;
}
