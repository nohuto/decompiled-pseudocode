/*
 * XREFs of NvmeNamespaceProcessIoForDeviceIdle @ 0x14011CB50
 * Callers:
 *     NvmeProcessIoIrp @ 0x14011DC30 (NvmeProcessIoIrp.c)
 * Callees:
 *     AllocateNewNVMePrpListBufferEntry @ 0x140119600 (AllocateNewNVMePrpListBufferEntry.c)
 *     FreeAllSglAndContextInChainedSplitIoContext @ 0x14011A100 (FreeAllSglAndContextInChainedSplitIoContext.c)
 *     FreeNVMeChainedIoSplitContext @ 0x14011A240 (FreeNVMeChainedIoSplitContext.c)
 *     GetNVMeSGLBufferContext @ 0x14011A3F0 (GetNVMeSGLBufferContext.c)
 *     NvmeNamespaceQueueIo @ 0x14011D6B0 (NvmeNamespaceQueueIo.c)
 *     NvmeSendSplitIo @ 0x140124340 (NvmeSendSplitIo.c)
 *     NvmeSplitIoParallel @ 0x1401256A0 (NvmeSplitIoParallel.c)
 *     NvmeSubmitIoToSQ @ 0x140126050 (NvmeSubmitIoToSQ.c)
 *     StorPopRequestFromDeviceQueue @ 0x1401275E0 (StorPopRequestFromDeviceQueue.c)
 *     StorPushRequestToDeviceQueue @ 0x1401277F0 (StorPushRequestToDeviceQueue.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall NvmeNamespaceProcessIoForDeviceIdle(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v6; // r15
  unsigned __int8 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  IRP *v11; // rax
  PIRP v12; // r11
  __int64 v13; // rdi
  $5243D9705AA03FA392AB3724828FE791 *v14; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v16; // rcx
  __int64 QuadPart; // rdx
  __int64 v18; // r10
  char v19; // r9
  __int64 v20; // r13
  int v21; // r14d
  __int16 v22; // di
  __int64 v23; // r8
  _IO_SECURITY_CONTEXT *SecurityContext; // r12
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rbx
  signed __int32 v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rdx
  unsigned int v36; // edi
  unsigned int v37; // eax
  unsigned int v38; // edx
  char v39; // al
  unsigned int v40; // eax
  __int64 NVMeSGLBufferContext; // rax
  PIRP v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v46; // rcx
  __int64 v47; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v48; // rcx
  __int64 v49; // rcx
  PIRP v50; // rdx
  char v51; // al
  _MDL *v52; // rcx
  __int64 v53; // rax
  int v54; // ebx
  __int64 v55; // rdi
  char *v56; // r14
  KIRQL v57; // al
  _MDL *v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned int v62; // r9d
  unsigned __int64 v63; // r8
  unsigned __int64 v64; // r14
  unsigned __int64 v65; // rdx
  __int64 v66; // r12
  unsigned int v67; // edx
  char v68; // al
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // r9
  int v71; // r9d
  PSLIST_ENTRY v72; // rax
  __int64 NewNVMePrpListBufferEntry; // rax
  __int64 v74; // r10
  __int64 v75; // r8
  bool v76; // zf
  __int64 v77; // r12
  char v78; // di
  __int64 v79; // rbx
  KIRQL v80; // al
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rax
  signed __int32 v87[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int64 v88; // [rsp+20h] [rbp-E0h]
  __int64 v89; // [rsp+28h] [rbp-D8h]
  __int64 v90; // [rsp+30h] [rbp-D0h]
  __int64 v91; // [rsp+38h] [rbp-C8h]
  __int64 v92; // [rsp+40h] [rbp-C0h]
  __int64 v93; // [rsp+48h] [rbp-B8h]
  KIRQL v94; // [rsp+60h] [rbp-A0h]
  char v95; // [rsp+61h] [rbp-9Fh] BYREF
  unsigned __int8 v96; // [rsp+62h] [rbp-9Eh]
  unsigned __int8 MajorFunction; // [rsp+63h] [rbp-9Dh]
  unsigned int v98; // [rsp+64h] [rbp-9Ch]
  PIRP Irp; // [rsp+68h] [rbp-98h]
  unsigned int v100; // [rsp+70h] [rbp-90h]
  __int64 v101; // [rsp+78h] [rbp-88h]
  __int16 v102; // [rsp+80h] [rbp-80h] BYREF
  __int64 v103; // [rsp+88h] [rbp-78h]
  int v104; // [rsp+90h] [rbp-70h] BYREF
  __int64 v105; // [rsp+98h] [rbp-68h] BYREF
  __int64 v106; // [rsp+A0h] [rbp-60h]
  _MDL *MdlAddress; // [rsp+A8h] [rbp-58h]
  __int64 v108; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v109; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 QpcTimeStamp[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v111; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v112[2]; // [rsp+E8h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v6 = a3;
  v105 = 0LL;
  *(_BYTE *)(v3 + 3) |= 1u;
  if ( (int)IoGetIoAttributionHandle(a2, &v105) >= 0 )
  {
    v7 = *(unsigned __int8 **)(a2 + 184);
    v8 = v105;
    v109 = 0LL;
    LODWORD(v109) = 1;
    *(_OWORD *)QpcTimeStamp = 0LL;
    DWORD1(v109) = *v7 | 0x300;
    QpcTimeStamp[1] = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp[1]);
    IoRecordIoAttribution(v8, &v109);
  }
  StorPushRequestToDeviceQueue(*(_QWORD *)(a1 + 256), (unsigned int)v6);
  _InterlockedOr(v87, 0);
  v9 = *(_QWORD *)(a1 + 128);
  if ( *(_BYTE *)(v9 + 1) == 1 && !*(_BYTE *)(*(_QWORD *)(v9 + 8) + 64LL) )
    return;
  if ( FeatureFixTRIMAddSCSIPassthrough )
  {
    v10 = *(_QWORD *)(a1 + 16);
    **(_QWORD **)(*(_QWORD *)(v10 + 1288) + 40LL) = KeQueryUnbiasedInterruptTime();
  }
  v11 = (IRP *)StorPopRequestFromDeviceQueue(*(_QWORD *)(a1 + 256), (unsigned int)v6);
  Irp = v11;
  v12 = v11;
  if ( !v11 )
    return;
  v13 = v105;
  v14 = &v11->Tail.Overlay.64;
  if ( v105 )
  {
    CurrentStackLocation = v14->CurrentStackLocation;
    v111 = 0LL;
    LODWORD(v111) = 1;
    *(_OWORD *)v112 = 0LL;
    DWORD1(v111) = CurrentStackLocation->MajorFunction | 0x200;
    v112[1] = KeQueryUnbiasedInterruptTimePrecise(&v112[1]);
    IoRecordIoAttribution(v13, &v111);
    v12 = Irp;
  }
  v16 = v14->CurrentStackLocation;
  QuadPart = 0LL;
  v18 = *(_QWORD *)(a1 + 16);
  v19 = 0;
  v95 = 0;
  v20 = 0LL;
  v102 = 0;
  v21 = 0;
  v108 = 0LL;
  v22 = 0;
  v104 = 0;
  v23 = HIDWORD(*(_QWORD *)(v18 + 136));
  LOBYTE(v23) = v23 & 1;
  LOWORD(v98) = 0;
  SecurityContext = v16->Parameters.Create.SecurityContext;
  MdlAddress = (_MDL *)v16;
  v25 = (unsigned int)SecurityContext;
  v101 = 0LL;
  v94 = 0;
  v106 = v18;
  v103 = v23;
  if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0x8765432100000003LL )
  {
    QuadPart = v16->Parameters.Read.ByteOffset.QuadPart;
    v101 = QuadPart;
  }
  else if ( SecurityContext == (_IO_SECURITY_CONTEXT *)0xFEDCBA9000000000LL )
  {
    v20 = v16->Parameters.Read.ByteOffset.QuadPart;
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 96) - 5) <= 1 )
  {
    v95 = 1;
    v21 = -1073741810;
    if ( !QuadPart )
      goto LABEL_113;
LABEL_107:
    _interlockedbittestandreset((volatile signed __int32 *)(v101 + 108), 0);
LABEL_108:
    v76 = v21 == 0;
    if ( v21 >= 0 )
      goto LABEL_111;
LABEL_109:
    if ( v21 == -2147483631 )
    {
      v76 = 0;
LABEL_111:
      if ( !v76 )
        return;
    }
LABEL_112:
    QuadPart = v101;
LABEL_113:
    if ( v20 )
    {
      v77 = *(_QWORD *)(v20 + 24);
      if ( v77 )
      {
        v78 = *(_BYTE *)(v20 + 126);
        v79 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
        v80 = KfRaiseIrql(2u);
        v81 = *(_QWORD *)(v79 + 1144);
        v94 = v80;
        (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)(v81 + 8) + 96LL))(v81, v77, (v78 & 1) == 0);
        if ( v94 < 2u )
          KeLowerIrql(v94);
      }
      v82 = *(_QWORD *)(v20 + 88);
      if ( v82 )
      {
        v83 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(v82 + 88) = 0LL;
        *(_DWORD *)(v82 + 108) = 0;
        *(_DWORD *)(v82 + 104) = 0;
        ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v83 + 888) + 8 * v6), (PSLIST_ENTRY)v82);
      }
      v84 = *(_QWORD *)(a1 + 16);
      v85 = *(_QWORD *)(*(_QWORD *)(v20 + 40) + 184LL);
      *(_QWORD *)(v85 + 8) = *(_QWORD *)(v20 + 48);
      *(_QWORD *)(v85 + 24) = *(_QWORD *)(v20 + 56);
      v86 = *(unsigned int *)(v20 + 120);
      *(_QWORD *)(v20 + 24) = 0LL;
      *(_QWORD *)(v20 + 88) = 0LL;
      *(_BYTE *)(v20 + 126) = 0;
      ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v84 + 896) + 8 * v86), (PSLIST_ENTRY)v20);
    }
    else if ( QuadPart )
    {
      if ( !v95 )
        return;
      FreeAllSglAndContextInChainedSplitIoContext(*(_QWORD **)(a1 + 16), QuadPart);
      v42 = Irp;
      FreeNVMeChainedIoSplitContext(*(_QWORD *)(a1 + 16), v6, v101, (__int64)Irp);
      goto LABEL_56;
    }
LABEL_55:
    v42 = Irp;
LABEL_56:
    if ( FeatureFixFUAForReadIoPerf && IoGetIoPriorityHint(v42) > IoPriorityLow )
      _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 680) + 8 * v6));
    v42->IoStatus.Status = v21;
    IofCompleteRequest(v42, 0);
    v43 = *(_QWORD *)(a1 + 128);
    if ( !*(_BYTE *)v43
      && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v43 + 24) + 8 * v6), 0xFFFFFFFF) == 1 )
    {
      v44 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
      v45 = *(_QWORD *)(a1 + 128);
      if ( v45 )
      {
        if ( *(_QWORD *)(v45 + 8) )
        {
          v46 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v45 + 40);
          if ( v46 )
          {
            if ( ExAcquireRundownProtectionCacheAware(v46) )
            {
              PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(a1 + 128) + 8LL), 0LL, 2LL);
              v47 = *(_QWORD *)(a1 + 128);
              if ( v47 )
              {
                if ( *(_QWORD *)(v47 + 8) )
                {
                  v48 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v47 + 40);
                  if ( v48 )
                    ExReleaseRundownProtectionCacheAware(v48);
                }
              }
            }
          }
        }
      }
      v49 = *(_QWORD *)(v44 + 160);
      if ( *(_BYTE *)v49 == 1 )
        PoFxIdleComponent(**(_QWORD **)(v49 + 8), 0LL, 2LL);
    }
    return;
  }
  v76 = v16->MajorFunction == 3;
  MajorFunction = v16->MajorFunction;
  v26 = *(_QWORD *)(v18 + 128);
  v96 = v76;
  v100 = *(_DWORD *)(v26 + 200);
  if ( QuadPart )
  {
LABEL_16:
    v27 = QuadPart;
    while ( 1 )
    {
      v28 = _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 104), 4, 3);
      if ( (_BYTE)v23 )
      {
        if ( v28 != 3 && _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 104), 4, 1) != 1 )
          goto LABEL_30;
      }
      else if ( v28 != 3 )
      {
        if ( *(_DWORD *)(v27 + 104) == 1 )
          ++v22;
        goto LABEL_30;
      }
      v29 = NvmeSendSplitIo(v27, v6, 0, 0, (__int64)&v95, (__int64)&v108, (__int64)&v104, (__int64)&v102, v19);
      v21 = v29;
      if ( v29 == 259 )
      {
        v30 = *(_QWORD *)(a1 + 16);
        LOWORD(v98) = v98 + 1;
        v19 = (unsigned __int16)v98 % (unsigned int)*(unsigned __int8 *)(v30 + 1730) == 0;
        v94 = v19;
      }
      else
      {
        if ( v29 == -2147483631 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 104), 3, 4);
          NvmeNamespaceQueueIo(a1, *(_QWORD *)(v27 + 24), (unsigned int)v6);
          return;
        }
        if ( !*(_WORD *)(v27 + 34) )
        {
          v95 = 1;
          goto LABEL_107;
        }
        if ( v95 )
          goto LABEL_107;
        v19 = v94;
      }
      LOBYTE(v23) = v103;
      QuadPart = v101;
LABEL_30:
      v27 = *(_QWORD *)(v27 + 96);
      if ( v22 )
      {
        if ( !v27 )
        {
          v22 = 0;
          goto LABEL_16;
        }
      }
      else if ( !v27 )
      {
        goto LABEL_107;
      }
    }
  }
  if ( (_BYTE)v23 )
  {
    v31 = v16->Parameters.Read.ByteOffset.QuadPart;
    goto LABEL_83;
  }
  if ( v20 )
  {
    v31 = *(_QWORD *)(v20 + 96);
    v25 = *(_DWORD *)(v20 + 116);
    *(_QWORD *)(v20 + 64) = 0LL;
    *(_QWORD *)(v20 + 72) = 0LL;
LABEL_83:
    if ( !v25 )
      goto LABEL_113;
    v63 = *(unsigned int *)(a1 + 64);
    if ( v25 % (unsigned int)v63
      || (v64 = v31 / v63, v31 % v63)
      || (v65 = *(_QWORD *)(a1 + 432), v98 = v25 / (unsigned int)v63, v64 >= v65)
      || v65 - v64 < v25 / (unsigned int)v63 )
    {
      v21 = -1073741811;
      goto LABEL_112;
    }
    v66 = *(_QWORD *)(a1 + 16);
    if ( v25 <= *(_DWORD *)(*(_QWORD *)(v66 + 128) + 200LL) )
    {
      v67 = *(_DWORD *)(a1 + 428);
      if ( !v67
        || v25 <= v67
        && ((v68 = *(_BYTE *)(a1 + 427)) == 0
          ? (LODWORD(v70) = v25 / v67, v69 = (v25 % v67 - 1LL + v67 + v31 % v67) / v67)
          : (v69 = ((v25 & (v67 - 1)) + ((unsigned int)v31 & (v67 - 1)) + (unsigned __int64)v67 - 1) >> v68,
             v70 = (unsigned __int64)v25 >> *(_BYTE *)(a1 + 427)),
            (unsigned int)(v70 + v69) <= 1) )
      {
        v71 = 0;
        if ( ((v25 + ((LODWORD(v12->MdlAddress->StartVa) + v12->MdlAddress->ByteOffset) & 0xFFF) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x2000 )
        {
          v72 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v66 + 880) + 8 * v6));
          v71 = (int)v72;
          if ( !v72 )
          {
            NewNVMePrpListBufferEntry = AllocateNewNVMePrpListBufferEntry(*(_QWORD *)(a1 + 16), v6);
            v71 = NewNVMePrpListBufferEntry;
            if ( !NewNVMePrpListBufferEntry )
            {
              NvmeNamespaceQueueIo(a1, Irp, (unsigned int)v6);
              return;
            }
          }
          LODWORD(v12) = (_DWORD)Irp;
        }
        v74 = *(_QWORD *)(a1 + 16);
        if ( (*(_BYTE *)(v74 + 136) & 2) != 0 )
          v75 = *(_QWORD *)(v74 + 728) + 192 * v6;
        else
          LODWORD(v75) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v74 + 872) + 2 * v6) + *(_DWORD *)(v74 + 728) - 192;
        LOBYTE(v89) = 0;
        v21 = NvmeSubmitIoToSQ(a1, (_DWORD)v12, v75, v71, v6, v89, v25, v31, v64, v98, v96, 0LL);
        goto LABEL_108;
      }
    }
    v62 = v25;
    v93 = 0LL;
    v92 = 0LL;
    v91 = 0LL;
    LODWORD(v90) = v6;
    LODWORD(v89) = v100;
    v88 = v31;
LABEL_80:
    v21 = NvmeSplitIoParallel(a1, (_DWORD)v12, v96, v62, v88, v89, v90, v91, v92, v93);
    goto LABEL_108;
  }
  v32 = v16->Parameters.Read.ByteOffset.QuadPart;
  if ( !(_DWORD)SecurityContext )
    goto LABEL_55;
  v33 = *(unsigned int *)(a1 + 64);
  if ( (unsigned int)SecurityContext % (unsigned int)v33
    || (v34 = v32 / v33, v32 % v33)
    || (v35 = *(_QWORD *)(a1 + 432),
        v36 = (unsigned int)SecurityContext / (unsigned int)v33,
        v98 = (unsigned int)SecurityContext / (unsigned int)v33,
        v34 >= v35)
    || v35 - v34 < (unsigned int)SecurityContext / (unsigned int)v33 )
  {
    v21 = -1073741811;
    goto LABEL_55;
  }
  v37 = v100;
  if ( (unsigned int)SecurityContext > v100 )
    goto LABEL_79;
  v38 = *(_DWORD *)(a1 + 428);
  if ( !v38 )
    goto LABEL_53;
  if ( (unsigned int)SecurityContext > v38 )
  {
LABEL_79:
    v62 = (unsigned int)SecurityContext;
    v93 = 0LL;
    v92 = 0LL;
    v91 = 0LL;
    LODWORD(v90) = v6;
    LODWORD(v89) = v37;
    v88 = v32;
    goto LABEL_80;
  }
  v39 = *(_BYTE *)(a1 + 427);
  if ( v39 )
  {
    v40 = ((unsigned __int64)(unsigned int)SecurityContext >> v39)
        + ((((unsigned int)v32 & (v38 - 1)) + ((unsigned int)SecurityContext & (v38 - 1)) + (unsigned __int64)v38 - 1) >> v39);
  }
  else
  {
    v40 = (unsigned int)SecurityContext / v38 + ((unsigned int)SecurityContext % v38 + v38 + v32 % v38 - 1) / v38;
    v18 = v106;
  }
  if ( v40 > 1 )
  {
    v37 = v100;
    goto LABEL_79;
  }
  v36 = v98;
LABEL_53:
  NVMeSGLBufferContext = GetNVMeSGLBufferContext(v18, v6);
  v20 = NVMeSGLBufferContext;
  if ( !NVMeSGLBufferContext )
  {
    v21 = -1073741670;
    goto LABEL_55;
  }
  v50 = Irp;
  v76 = MajorFunction == 3;
  *(_QWORD *)(NVMeSGLBufferContext + 40) = Irp;
  v51 = *(_BYTE *)(NVMeSGLBufferContext + 126);
  *(_QWORD *)(v20 + 96) = v32;
  *(_DWORD *)(v20 + 112) = v36;
  *(_BYTE *)(v20 + 126) = v51 & 0xFE | v76;
  v52 = MdlAddress;
  *(_QWORD *)(v20 + 64) = 0LL;
  *(_QWORD *)(v20 + 72) = 0LL;
  *(_QWORD *)(v20 + 32) = a1;
  *(_QWORD *)(v20 + 104) = v34;
  *(_DWORD *)(v20 + 116) = (_DWORD)SecurityContext;
  *(_QWORD *)(v20 + 56) = v52->MappedSystemVa;
  v53 = *(_QWORD *)&v52->Size;
  v52->MappedSystemVa = (void *)v20;
  *(_QWORD *)(v20 + 48) = v53;
  *(_QWORD *)&v52->Size = 0xFEDCBA9000000000uLL;
  v54 = *(unsigned __int16 *)(v20 + 124);
  v55 = *(_QWORD *)(v20 + 16);
  v56 = (char *)v50->MdlAddress->StartVa + v50->MdlAddress->ByteOffset;
  *(_QWORD *)(v20 + 80) = v56;
  MdlAddress = v50->MdlAddress;
  v103 = *(_QWORD *)(a1 + 16);
  v106 = (__int64)v56;
  v57 = KfRaiseIrql(2u);
  LODWORD(v93) = v54;
  v58 = MdlAddress;
  v59 = *(_QWORD *)(v103 + 128);
  v92 = v55;
  LOBYTE(v91) = MajorFunction != 3;
  v96 = v57;
  v60 = *(_QWORD *)(v59 + 8);
  v61 = *(_QWORD *)(v59 + 1144);
  v94 = MajorFunction != 3;
  v21 = (*(__int64 (__fastcall **)(__int64, __int64, _MDL *, char *, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, _DWORD, __int64, _DWORD))(*(_QWORD *)(v61 + 8) + 112LL))(
          v61,
          v60,
          MdlAddress,
          v56,
          (_DWORD)SecurityContext,
          NvmeContinueScatterGatherProcessIO,
          v20,
          v91,
          v55,
          v93);
  if ( v21 == -1073741789 )
  {
    LOBYTE(v91) = v94;
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, __int64, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v103 + 128) + 1144LL) + 8LL) + 88LL))(
            *(_QWORD *)(*(_QWORD *)(v103 + 128) + 1144LL),
            *(_QWORD *)(*(_QWORD *)(v103 + 128) + 8LL),
            v58,
            v106,
            (_DWORD)SecurityContext,
            NvmeContinueScatterGatherProcessIO,
            v20,
            v91);
  }
  if ( v96 < 2u )
    KeLowerIrql(v96);
  if ( v21 < 0 )
    goto LABEL_109;
}
