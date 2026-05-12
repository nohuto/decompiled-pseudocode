/*
 * XREFs of NvmeProcessPendingLowPriorityIo @ 0x140123160
 * Callers:
 *     NvmeLowPriorityIoDpcRoutine @ 0x14011CAF0 (NvmeLowPriorityIoDpcRoutine.c)
 *     StorRefillShadowQueue @ 0x14012796C (StorRefillShadowQueue.c)
 *     StorRestartDeviceLowPriorityIoQueue @ 0x140127F9C (StorRestartDeviceLowPriorityIoQueue.c)
 * Callees:
 *     StorCheckDpcWatchdogTimerExpire @ 0x14008EE70 (StorCheckDpcWatchdogTimerExpire.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceReleasePoFx @ 0x1400F9EFC (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceProcessRequest @ 0x140107538 (NvmeNamespaceProcessRequest.c)
 *     AllocateNewNVMePrpListBufferEntry @ 0x140119600 (AllocateNewNVMePrpListBufferEntry.c)
 *     FreeAllSglAndContextInChainedSplitIoContext @ 0x14011A100 (FreeAllSglAndContextInChainedSplitIoContext.c)
 *     FreeNVMeChainedIoSplitContext @ 0x14011A240 (FreeNVMeChainedIoSplitContext.c)
 *     FreeNVMeSGLBufferContext @ 0x14011A350 (FreeNVMeSGLBufferContext.c)
 *     GetNVMePrpListBufferEntry @ 0x14011A3B0 (GetNVMePrpListBufferEntry.c)
 *     GetNVMeSGLBufferContext @ 0x14011A3F0 (GetNVMeSGLBufferContext.c)
 *     NvmeNamespaceQueueIo @ 0x14011D6B0 (NvmeNamespaceQueueIo.c)
 *     NvmeSendSplitIo @ 0x140124340 (NvmeSendSplitIo.c)
 *     NvmeSetLowPriorityIoTimer @ 0x140125604 (NvmeSetLowPriorityIoTimer.c)
 *     NvmeSplitIoParallel @ 0x1401256A0 (NvmeSplitIoParallel.c)
 *     NvmeSubmitIoToSQ @ 0x140126050 (NvmeSubmitIoToSQ.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

char __fastcall NvmeProcessPendingLowPriorityIo(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // r15
  _DWORD *v4; // rdx
  _QWORD *v5; // r14
  int v6; // edi
  int v7; // ebp
  __int64 v8; // r12
  int v9; // r8d
  int v10; // ecx
  int v11; // eax
  __int64 v12; // r13
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdi
  KIRQL v16; // si
  __int64 v17; // r9
  signed __int32 v18; // r8d
  IRP *v19; // rbp
  unsigned int v20; // edx
  unsigned int v21; // r8d
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // r15d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v28; // rdi
  _IO_STACK_LOCATION *v29; // rcx
  __int64 v30; // r14
  char v31; // r8
  __int64 QuadPart; // rdx
  __int16 v33; // si
  __int64 v34; // r11
  _IO_SECURITY_CONTEXT *SecurityContext; // r12
  unsigned int v36; // edi
  __int64 v37; // r10
  __int64 v38; // rax
  unsigned int v39; // r9d
  __int64 v40; // rdi
  signed __int32 v41; // eax
  int v42; // eax
  __int64 v43; // rax
  bool v44; // zf
  __int64 v45; // rdi
  __int64 v46; // r12
  char v47; // si
  __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // r8
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rdx
  unsigned int v57; // r15d
  unsigned int v58; // ecx
  char v59; // al
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r9
  __int64 NVMeSGLBufferContext; // rax
  __int64 v63; // rdx
  volatile signed __int32 *v64; // rcx
  char v65; // al
  _MDL *v66; // rcx
  __int64 v67; // rax
  int v68; // edi
  __int64 v69; // rsi
  char *v70; // r15
  KIRQL v71; // al
  _MDL *v72; // rdi
  __int64 v73; // rcx
  __int64 v74; // rsi
  int v75; // eax
  unsigned __int64 v76; // r8
  unsigned __int64 v77; // r15
  unsigned __int64 v78; // rdx
  unsigned int v79; // ecx
  char v80; // al
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // r9
  int v83; // r9d
  PSLIST_ENTRY NVMePrpListBufferEntry; // rax
  __int64 NewNVMePrpListBufferEntry; // rax
  __int64 v86; // r10
  __int64 v87; // r8
  __int64 v88; // rax
  volatile signed __int32 *v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rdi
  __int64 v92; // rcx
  __int64 v93; // rax
  unsigned int v94; // eax
  __int64 v95; // rcx
  __int64 v96; // rcx
  unsigned int v97; // edx
  unsigned int v98; // r8d
  unsigned int v99; // edx
  _DWORD *v100; // rax
  _DWORD *v102; // r9
  unsigned int v103; // r8d
  _DWORD *v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rcx
  int v107; // [rsp+28h] [rbp-110h]
  int v108; // [rsp+38h] [rbp-100h]
  __int64 v109; // [rsp+40h] [rbp-F8h]
  int v110; // [rsp+48h] [rbp-F0h]
  unsigned __int8 MajorFunction; // [rsp+60h] [rbp-D8h]
  KIRQL v112; // [rsp+60h] [rbp-D8h]
  bool v113; // [rsp+60h] [rbp-D8h]
  char v114; // [rsp+61h] [rbp-D7h] BYREF
  KIRQL v115; // [rsp+62h] [rbp-D6h]
  unsigned int v116; // [rsp+64h] [rbp-D4h]
  unsigned __int8 v117; // [rsp+68h] [rbp-D0h]
  unsigned __int8 v118; // [rsp+69h] [rbp-CFh]
  __int64 v119; // [rsp+70h] [rbp-C8h]
  unsigned int v120; // [rsp+78h] [rbp-C0h]
  int v121; // [rsp+7Ch] [rbp-BCh]
  __int16 v122[2]; // [rsp+80h] [rbp-B8h] BYREF
  int v123; // [rsp+84h] [rbp-B4h]
  __int64 v124; // [rsp+88h] [rbp-B0h]
  char *v125; // [rsp+90h] [rbp-A8h]
  int v126; // [rsp+98h] [rbp-A0h]
  int v127; // [rsp+9Ch] [rbp-9Ch]
  __int64 v128; // [rsp+A0h] [rbp-98h]
  _MDL *MdlAddress; // [rsp+A8h] [rbp-90h]
  int v130; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v131; // [rsp+B8h] [rbp-80h]
  __int64 v132; // [rsp+C0h] [rbp-78h] BYREF
  _DWORD *v133; // [rsp+C8h] [rbp-70h]
  __int64 v134; // [rsp+D0h] [rbp-68h] BYREF
  _QWORD *v135; // [rsp+D8h] [rbp-60h]
  __int128 v136; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v137; // [rsp+F0h] [rbp-48h] BYREF

  v3 = a1[33];
  v4 = g_CpuInfo;
  v5 = a1;
  v135 = a1;
  v6 = 0;
  v118 = a3;
  v7 = 0;
  LODWORD(v8) = *(_DWORD *)(v3 + 44);
  v9 = v8;
  v10 = v8;
  v133 = g_CpuInfo;
  v127 = v8;
  v121 = 0;
  v131 = v3;
  v116 = v8;
  v126 = v8;
  while ( 1 )
  {
LABEL_2:
    v11 = v6;
    if ( v10 != (_DWORD)v8 )
      v11 = v7;
    v7 = v11;
    v123 = v11;
    v12 = *(_QWORD *)(v3 + 8LL * (unsigned int)v8 + 64);
    if ( *(_DWORD *)v12 || *(_DWORD *)(v12 + 48) != *(_DWORD *)(v12 + 52) )
      break;
    v13 = v8 + 1;
    LODWORD(v8) = 0;
    if ( v13 < v4[2] )
      LODWORD(v8) = v13;
    v116 = v8;
    if ( v9 == (_DWORD)v8 && v7 == v6 )
      goto LABEL_185;
    v10 = v127;
  }
  v14 = v5[2];
  v132 = 0LL;
  v15 = *(_DWORD *)(v14 + 136) & 2;
  v16 = KfRaiseIrql(2u);
  do
  {
    v17 = *(unsigned int *)(v12 + 52);
    if ( (_DWORD)v17 == *(_DWORD *)(v12 + 48) )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)v12, 0, 1) == 1 )
      {
        v93 = *(_QWORD *)(v12 + 24);
        if ( *(_BYTE *)(*(_QWORD *)(v12 + 16) + 20LL) == 1 )
          _InterlockedDecrement((volatile signed __int32 *)(v93 + 956));
        else
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v93 + 16) + 952LL));
      }
      KeLowerIrql(v16);
LABEL_169:
      v6 = v121;
      goto LABEL_170;
    }
    v18 = 0;
    if ( (unsigned int)(v17 + 1) < *(_DWORD *)(*(_QWORD *)(v12 + 16) + 4LL) )
      v18 = v17 + 1;
  }
  while ( (_DWORD)v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 52), v18, v17) );
  do
    v19 = (IRP *)_InterlockedExchange64((volatile __int64 *)(8 * v17 + *(_QWORD *)(v12 + 56)), 0LL);
  while ( !v19 );
  if ( !*(_DWORD *)(*(_QWORD *)(v12 + 16) + 16LL)
    && (*(_DWORD *)v12 == 2
     || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v12 + 32) + 16LL * *(unsigned int *)(v12 + 8)))) )
  {
    if ( *(_DWORD *)(v12 + 48) == *(_DWORD *)(v12 + 52)
      || ((v20 = *(_DWORD *)(v12 + 48), v21 = *(_DWORD *)(v12 + 52), v20 != v21)
        ? (v20 <= v21
         ? ((v23 = *(_QWORD *)(v12 + 24), *(_BYTE *)(*(_QWORD *)(v12 + 16) + 20LL))
          ? (v24 = *(_QWORD *)(v23 + 1024))
          : (v24 = *(_QWORD *)(v23 + 256)),
            v22 = *(_DWORD *)(v24 + 4) - v21 + v20)
         : (v22 = v20 - v21))
        : (v22 = 0),
          v22 <= *(_DWORD *)(*(_QWORD *)(v12 + 16) + 8LL)) )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v12 + 16) + 16LL), 1, 0) )
      {
        v25 = *(_QWORD *)(v12 + 24);
        if ( *(_BYTE *)(*(_QWORD *)(v12 + 16) + 20LL) )
          IoQueueWorkItem(
            *(PIO_WORKITEM *)(v25 + 1032),
            (PIO_WORKITEM_ROUTINE)NvmeControllerRefillShadowQueueRoutine,
            DelayedWorkQueue,
            *(PVOID *)(v12 + 24));
        else
          KeSetEvent((PRKEVENT)(v25 + 480), 0, 0);
      }
    }
  }
  KeLowerIrql(v16);
  if ( !v15 )
  {
    if ( (int)IoGetIoAttributionHandle(v19, &v132) >= 0 )
    {
      CurrentStackLocation = v19->Tail.Overlay.CurrentStackLocation;
      v28 = v132;
      v136 = 0LL;
      LODWORD(v136) = 1;
      v137 = 0LL;
      DWORD1(v136) = CurrentStackLocation->MajorFunction | 0x200;
      *((_QWORD *)&v137 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v137 + 1);
      IoRecordIoAttribution(v28, &v136);
    }
    v29 = v19->Tail.Overlay.CurrentStackLocation;
    v30 = *(_QWORD *)(v12 + 24);
    v31 = 0;
    v114 = 0;
    QuadPart = 0LL;
    v122[0] = 0;
    v26 = 0;
    v134 = 0LL;
    v33 = 0;
    v34 = *(_QWORD *)(v30 + 16);
    v130 = 0;
    SecurityContext = v29->Parameters.Create.SecurityContext;
    v124 = 0LL;
    v36 = (unsigned int)SecurityContext;
    v37 = HIDWORD(*(_QWORD *)(v34 + 136));
    LOBYTE(v37) = v37 & 1;
    v119 = 0LL;
    LOWORD(v120) = 0;
    MdlAddress = (_MDL *)v29;
    v115 = 0;
    v128 = v37;
    if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0x8765432100000003LL )
    {
      QuadPart = v29->Parameters.Read.ByteOffset.QuadPart;
      v119 = QuadPart;
    }
    else if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0xFEDCBA9000000000LL )
    {
      v124 = v29->Parameters.Read.ByteOffset.QuadPart;
    }
    if ( (unsigned int)(*(_DWORD *)(v30 + 96) - 5) <= 1 )
    {
      v114 = 1;
      v26 = -1073741810;
      if ( !QuadPart )
      {
LABEL_72:
        v45 = v124;
        if ( v124 )
        {
          v46 = *(_QWORD *)(v124 + 24);
          if ( v46 )
          {
            v47 = *(_BYTE *)(v124 + 126);
            v48 = *(_QWORD *)(*(_QWORD *)(v30 + 16) + 128LL);
            v112 = KfRaiseIrql(2u);
            (*(void (__fastcall **)(_QWORD, __int64, bool))(*(_QWORD *)(*(_QWORD *)(v48 + 1144) + 8LL) + 96LL))(
              *(_QWORD *)(v48 + 1144),
              v46,
              (v47 & 1) == 0);
            if ( v112 < 2u )
              KeLowerIrql(v112);
            v45 = v124;
          }
          v49 = *(_QWORD *)(v45 + 88);
          if ( v49 )
          {
            v50 = *(_QWORD *)(v30 + 16);
            v8 = v116;
            *(_QWORD *)(v49 + 88) = 0LL;
            *(_DWORD *)(v49 + 108) = 0;
            *(_DWORD *)(v49 + 104) = 0;
            ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v50 + 888) + 8 * v8), (PSLIST_ENTRY)v49);
          }
          else
          {
            LODWORD(v8) = v116;
          }
          FreeNVMeSGLBufferContext(*(_QWORD *)(v30 + 16), v45, 1);
          if ( FeatureFixFUAForReadIoPerf && IoGetIoPriorityHint(v19) > IoPriorityLow )
          {
            v64 = *(volatile signed __int32 **)(*(_QWORD *)(v30 + 680) + 8LL * (unsigned int)v8);
            goto LABEL_147;
          }
          goto LABEL_148;
        }
        if ( QuadPart )
        {
          if ( v114 )
          {
            FreeAllSglAndContextInChainedSplitIoContext(*(_QWORD **)(v30 + 16), QuadPart);
            v8 = v116;
            FreeNVMeChainedIoSplitContext(*(_QWORD *)(v30 + 16), v116, v119, (__int64)v19);
            if ( FeatureFixFUAForReadIoPerf && IoGetIoPriorityHint(v19) > IoPriorityLow )
              _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(v30 + 680) + 8 * v8));
            v19->IoStatus.Status = v26;
            IofCompleteRequest(v19, 0);
            v90 = *(_QWORD *)(v30 + 128);
            if ( *(_BYTE *)v90 )
              goto LABEL_107;
            v89 = *(volatile signed __int32 **)(*(_QWORD *)(v90 + 24) + 8 * v8);
            goto LABEL_157;
          }
          goto LABEL_106;
        }
LABEL_97:
        if ( FeatureFixFUAForReadIoPerf && IoGetIoPriorityHint(v19) > IoPriorityLow )
        {
          LODWORD(v8) = v116;
          v64 = *(volatile signed __int32 **)(*(_QWORD *)(v30 + 680) + 8LL * v116);
LABEL_147:
          _InterlockedDecrement(v64);
          goto LABEL_148;
        }
        LODWORD(v8) = v116;
LABEL_148:
        v19->IoStatus.Status = v26;
        IofCompleteRequest(v19, 0);
        v88 = *(_QWORD *)(v30 + 128);
        if ( !*(_BYTE *)v88 )
        {
          v89 = *(volatile signed __int32 **)(*(_QWORD *)(v88 + 24) + 8LL * (unsigned int)v8);
LABEL_157:
          if ( _InterlockedExchangeAdd(v89, 0xFFFFFFFF) == 1 )
          {
            v91 = *(_QWORD *)(*(_QWORD *)(v30 + 16) + 128LL);
            if ( NvmeNamespaceCheckAndAcquirePoFx(v30) )
            {
              PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v30 + 128) + 8LL), 0LL, 2LL);
              NvmeNamespaceReleasePoFx(v30);
            }
            v92 = *(_QWORD *)(v91 + 160);
            if ( *(_BYTE *)v92 == 1 )
              PoFxIdleComponent(**(_QWORD **)(v92 + 8), 0LL, 2LL);
          }
        }
LABEL_107:
        v5 = v135;
        goto LABEL_108;
      }
LABEL_66:
      _interlockedbittestandreset((volatile signed __int32 *)(QuadPart + 108), 0);
LABEL_67:
      v44 = v26 == 0;
      if ( v26 >= 0 )
      {
LABEL_70:
        if ( v44 )
          goto LABEL_71;
LABEL_106:
        LODWORD(v8) = v116;
        goto LABEL_107;
      }
LABEL_68:
      if ( v26 != -2147483631 )
      {
LABEL_71:
        QuadPart = v119;
        goto LABEL_72;
      }
      v44 = 0;
      goto LABEL_70;
    }
    v38 = *(_QWORD *)(v34 + 128);
    MajorFunction = v29->MajorFunction;
    v117 = v29->MajorFunction == 3;
    v39 = *(_DWORD *)(v38 + 200);
    LODWORD(v125) = v39;
    if ( v119 )
    {
      QuadPart = v119;
LABEL_45:
      v40 = QuadPart;
      while ( 1 )
      {
        v41 = _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 104), 4, 3);
        if ( (_BYTE)v37 )
        {
          if ( v41 != 3 && _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 104), 4, 1) != 1 )
            goto LABEL_59;
        }
        else if ( v41 != 3 )
        {
          if ( *(_DWORD *)(v40 + 104) == 1 )
            ++v33;
          goto LABEL_59;
        }
        LODWORD(v8) = v116;
        v42 = NvmeSendSplitIo(v40, v116, 0, 0, (__int64)&v114, (__int64)&v134, (__int64)&v130, (__int64)v122, v31);
        v26 = v42;
        if ( v42 == 259 )
        {
          v43 = *(_QWORD *)(v30 + 16);
          LOWORD(v120) = v120 + 1;
          v31 = (unsigned __int16)v120 % (unsigned int)*(unsigned __int8 *)(v43 + 1730) == 0;
          v115 = v31;
        }
        else
        {
          if ( v42 == -2147483631 )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 104), 3, 4);
            NvmeNamespaceQueueIo(v30, *(_QWORD *)(v40 + 24), v8);
            goto LABEL_107;
          }
          if ( !*(_WORD *)(v40 + 34) )
          {
            v114 = 1;
LABEL_65:
            QuadPart = v119;
            goto LABEL_66;
          }
          if ( v114 )
            goto LABEL_65;
          v31 = v115;
        }
        QuadPart = v119;
        LOBYTE(v37) = v128;
LABEL_59:
        v40 = *(_QWORD *)(v40 + 96);
        if ( v33 )
        {
          if ( !v40 )
          {
            v33 = 0;
            goto LABEL_45;
          }
        }
        else if ( !v40 )
        {
          goto LABEL_66;
        }
      }
    }
    if ( (_BYTE)v37 )
    {
      v52 = v29->Parameters.Read.ByteOffset.QuadPart;
      goto LABEL_117;
    }
    v51 = v124;
    if ( v124 )
    {
      v52 = *(_QWORD *)(v124 + 96);
      v36 = *(_DWORD *)(v124 + 116);
      *(_QWORD *)(v124 + 64) = 0LL;
      *(_QWORD *)(v51 + 72) = 0LL;
LABEL_117:
      if ( !v36 )
      {
        v26 = 0;
        goto LABEL_71;
      }
      v76 = *(unsigned int *)(v30 + 64);
      if ( v36 % (unsigned int)v76
        || (v77 = v52 / v76, v52 % v76)
        || (v78 = *(_QWORD *)(v30 + 432), v120 = v36 / (unsigned int)v76, v77 >= v78)
        || v78 - v77 < v36 / (unsigned int)v76 )
      {
        v26 = -1073741811;
        goto LABEL_71;
      }
      if ( v36 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 128LL) + 200LL) )
      {
        v79 = *(_DWORD *)(v30 + 428);
        if ( !v79 )
        {
LABEL_130:
          v83 = 0;
          LODWORD(v8) = v116;
          if ( ((v36 + ((LODWORD(v19->MdlAddress->StartVa) + v19->MdlAddress->ByteOffset) & 0xFFF) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x2000 )
          {
            NVMePrpListBufferEntry = GetNVMePrpListBufferEntry(*(_QWORD *)(v30 + 16), v116);
            v83 = (int)NVMePrpListBufferEntry;
            if ( !NVMePrpListBufferEntry )
            {
              NewNVMePrpListBufferEntry = AllocateNewNVMePrpListBufferEntry(*(_QWORD *)(v30 + 16), v8);
              v83 = NewNVMePrpListBufferEntry;
              if ( !NewNVMePrpListBufferEntry )
              {
                NvmeNamespaceQueueIo(v30, (__int64)v19, v8);
                v26 = -2147483631;
                goto LABEL_107;
              }
            }
          }
          v86 = *(_QWORD *)(v30 + 16);
          if ( (*(_BYTE *)(v86 + 136) & 2) != 0 )
            v87 = *(_QWORD *)(v86 + 728) + 192LL * (unsigned int)v8;
          else
            LODWORD(v87) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v86 + 872) + 2LL * (unsigned int)v8)
                         + *(_DWORD *)(v86 + 728)
                         - 192;
          LOBYTE(v107) = 0;
          v26 = NvmeSubmitIoToSQ(v30, (_DWORD)v19, v87, v83, v8, v107, v36, v52, v77, v120, v117, 0LL);
          goto LABEL_67;
        }
        if ( v36 <= v79 )
        {
          v80 = *(_BYTE *)(v30 + 427);
          if ( v80 )
          {
            v81 = (((unsigned int)v52 & (v79 - 1)) + v79 + (unsigned __int64)(v36 & (v79 - 1)) - 1) >> v80;
            v82 = (unsigned __int64)v36 >> *(_BYTE *)(v30 + 427);
          }
          else
          {
            LODWORD(v82) = v36 / v79;
            v81 = (v36 % v79 - 1LL + v79 + v52 % v79) / v79;
          }
          if ( (unsigned int)(v82 + v81) <= 1 )
            goto LABEL_130;
          v39 = (unsigned int)v125;
        }
      }
      v75 = NvmeSplitIoParallel(v30, (_DWORD)v19, v117, v36, v52, v39, v116, 0LL, 0LL, 0LL);
LABEL_114:
      v26 = v75;
      goto LABEL_67;
    }
    v53 = v29->Parameters.Read.ByteOffset.QuadPart;
    if ( !(_DWORD)SecurityContext )
      goto LABEL_97;
    v54 = *(unsigned int *)(v30 + 64);
    if ( (unsigned int)SecurityContext % (unsigned int)v54
      || (v55 = v53 / v54, v53 % v54)
      || (v56 = *(_QWORD *)(v30 + 432), v57 = (unsigned int)SecurityContext / (unsigned int)v54, v55 >= v56)
      || v56 - v55 < (unsigned int)SecurityContext / (unsigned int)v54 )
    {
      v26 = -1073741811;
      goto LABEL_97;
    }
    if ( (unsigned int)SecurityContext <= v39 )
    {
      v58 = *(_DWORD *)(v30 + 428);
      if ( !v58 )
        goto LABEL_95;
      if ( (unsigned int)SecurityContext <= v58 )
      {
        v59 = *(_BYTE *)(v30 + 427);
        if ( v59 )
        {
          v60 = (((unsigned int)SecurityContext & (v58 - 1))
               + v58
               + (unsigned __int64)((unsigned int)v53 & (v58 - 1))
               - 1) >> v59;
          v61 = (unsigned __int64)(unsigned int)SecurityContext >> *(_BYTE *)(v30 + 427);
        }
        else
        {
          LODWORD(v61) = (unsigned int)SecurityContext / v58;
          v60 = ((unsigned int)SecurityContext % v58 - 1LL + v58 + v53 % v58) / v58;
        }
        if ( (unsigned int)(v61 + v60) <= 1 )
        {
LABEL_95:
          NVMeSGLBufferContext = GetNVMeSGLBufferContext(v34, v116);
          v124 = NVMeSGLBufferContext;
          v63 = NVMeSGLBufferContext;
          if ( !NVMeSGLBufferContext )
          {
            v26 = -1073741670;
            goto LABEL_97;
          }
          *(_QWORD *)(NVMeSGLBufferContext + 40) = v19;
          v65 = *(_BYTE *)(NVMeSGLBufferContext + 126);
          *(_QWORD *)(v63 + 96) = v53;
          *(_QWORD *)(v63 + 104) = v55;
          *(_BYTE *)(v63 + 126) = v65 & 0xFE | (MajorFunction == 3);
          v66 = MdlAddress;
          *(_QWORD *)(v63 + 64) = 0LL;
          *(_QWORD *)(v63 + 72) = 0LL;
          *(_QWORD *)(v63 + 32) = v30;
          *(_DWORD *)(v63 + 112) = v57;
          *(_DWORD *)(v63 + 116) = (_DWORD)SecurityContext;
          *(_QWORD *)(v63 + 56) = v66->MappedSystemVa;
          v67 = *(_QWORD *)&v66->Size;
          v66->MappedSystemVa = (void *)v63;
          *(_QWORD *)(v63 + 48) = v67;
          *(_QWORD *)&v66->Size = 0xFEDCBA9000000000uLL;
          v68 = *(unsigned __int16 *)(v63 + 124);
          v69 = *(_QWORD *)(v63 + 16);
          v70 = (char *)v19->MdlAddress->StartVa + v19->MdlAddress->ByteOffset;
          *(_QWORD *)(v63 + 80) = v70;
          MdlAddress = v19->MdlAddress;
          v128 = *(_QWORD *)(v30 + 16);
          v125 = v70;
          v71 = KfRaiseIrql(2u);
          v110 = v68;
          v72 = MdlAddress;
          v109 = v69;
          v73 = *(_QWORD *)(v128 + 128);
          v74 = v124;
          v115 = v71;
          v113 = MajorFunction != 3;
          LOBYTE(v108) = v113;
          v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int, __int64, int))(*(_QWORD *)(*(_QWORD *)(v73 + 1144) + 8LL) + 112LL))(
                  *(_QWORD *)(v73 + 1144),
                  *(_QWORD *)(v73 + 8),
                  MdlAddress,
                  v70,
                  (_DWORD)SecurityContext,
                  NvmeContinueScatterGatherProcessIO,
                  v124,
                  v108,
                  v109,
                  v110);
          if ( v26 == -1073741789 )
          {
            LOBYTE(v108) = v113;
            v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v128 + 128) + 1144LL) + 8LL) + 88LL))(
                    *(_QWORD *)(*(_QWORD *)(v128 + 128) + 1144LL),
                    *(_QWORD *)(*(_QWORD *)(v128 + 128) + 8LL),
                    v72,
                    v125,
                    (_DWORD)SecurityContext,
                    NvmeContinueScatterGatherProcessIO,
                    v74,
                    v108);
          }
          if ( v115 < 2u )
            KeLowerIrql(v115);
          if ( v26 >= 0 )
          {
            v26 = 259;
            goto LABEL_106;
          }
          goto LABEL_68;
        }
        v39 = (unsigned int)v125;
      }
    }
    v75 = NvmeSplitIoParallel(v30, (_DWORD)v19, v117, (_DWORD)SecurityContext, v53, v39, v116, 0LL, 0LL, 0LL);
    goto LABEL_114;
  }
  v26 = NvmeNamespaceProcessRequest(*(_QWORD *)(v12 + 24), (__int64)v19, (unsigned int)v8);
LABEL_108:
  if ( v26 == 259 || !v26 )
  {
    v7 = v123;
    v6 = v121 + 1;
    v3 = v131;
    ++v121;
LABEL_170:
    v94 = v8 + 1;
    LODWORD(v8) = 0;
    if ( v94 < v133[2] )
      LODWORD(v8) = v94;
    v116 = v8;
    if ( v126 == (_DWORD)v8 && v7 == v6 )
    {
LABEL_185:
      *(_DWORD *)(v3 + 44) = v8;
      goto LABEL_186;
    }
    if ( StorCheckDpcWatchdogTimerExpire(0x62u, 0x63u) )
      goto LABEL_195;
    v95 = *(_QWORD *)(v5[16] + 8LL);
    if ( !v95 || *(_BYTE *)(v95 + 64) )
    {
      v96 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5[2] + 128LL) + 160LL) + 8LL);
      if ( !v96 || *(_BYTE *)(v96 + 64) )
      {
        if ( !v118 && *(_DWORD *)(v5[33] + 40LL) )
          goto LABEL_195;
        v97 = 0;
        v98 = *((_DWORD *)g_CpuInfo + 3);
        if ( v98 )
        {
          while ( !**(_DWORD **)(v5[85] + 8LL * v97) )
          {
            if ( ++v97 >= v98 )
              goto LABEL_184;
          }
LABEL_195:
          v102 = g_CpuInfo;
          *(_DWORD *)(v3 + 44) = v8;
          v103 = 0;
          if ( v102[3] )
          {
            do
            {
              v104 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 264LL) + 8LL * v103 + 64);
              if ( v104 )
              {
                if ( *v104 || v104[12] != v104[13] )
                  goto LABEL_201;
              }
            }
            while ( ++v103 < v102[3] );
          }
LABEL_186:
          if ( v118 )
            _InterlockedExchange((volatile __int32 *)(v5[33] + 40LL), 0);
          v99 = 0;
          if ( !*((_DWORD *)g_CpuInfo + 3) )
            return 0;
          while ( 1 )
          {
            v100 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 264LL) + 8LL * v99 + 64);
            if ( v100 )
            {
              if ( *v100 || v100[12] != v100[13] )
                break;
            }
            if ( ++v99 >= *((_DWORD *)g_CpuInfo + 3) )
              return 0;
          }
          v105 = *(_QWORD *)(v12 + 24);
          v106 = *(_QWORD *)(v105 + 16);
          if ( *(_QWORD *)(v106 + 1288) && **(_DWORD **)(v106 + 1288) || *(_DWORD *)(*(_QWORD *)(v105 + 16) + 948LL) )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v105 + 264) + 40LL), 0, 1);
            return 1;
          }
          else
          {
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v105 + 264) + 40LL), 1, 0) != 1 )
              KeSetTimer(
                *(PKTIMER *)(*(_QWORD *)(v105 + 264) + 32LL),
                (LARGE_INTEGER)-120000LL,
                *(PKDPC *)(*(_QWORD *)(v105 + 264) + 24LL));
            return 1;
          }
        }
      }
    }
LABEL_184:
    v9 = v126;
    v10 = v126;
    v4 = v133;
    goto LABEL_2;
  }
  if ( v26 != -2147483631 )
  {
    v7 = v123;
    v3 = v131;
    goto LABEL_169;
  }
  *(_DWORD *)(v131 + 44) = v8;
LABEL_201:
  NvmeSetLowPriorityIoTimer(v5, -120000LL, v118);
  return 1;
}
