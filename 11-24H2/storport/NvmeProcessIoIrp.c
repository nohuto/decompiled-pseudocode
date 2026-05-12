/*
 * XREFs of NvmeProcessIoIrp @ 0x14011DC30
 * Callers:
 *     NvmeNamespaceIoIrp @ 0x140105140 (NvmeNamespaceIoIrp.c)
 * Callees:
 *     AllocateNewNVMePrpListBufferEntry @ 0x140119600 (AllocateNewNVMePrpListBufferEntry.c)
 *     FreeNVMeSGLBufferContext @ 0x14011A350 (FreeNVMeSGLBufferContext.c)
 *     GetNVMeSGLBufferContext @ 0x14011A3F0 (GetNVMeSGLBufferContext.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011CB50 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeNamespaceQueueIo @ 0x14011D6B0 (NvmeNamespaceQueueIo.c)
 *     NvmeSplitIoParallel @ 0x1401256A0 (NvmeSplitIoParallel.c)
 *     NvmeSubmitIoToSQ @ 0x140126050 (NvmeSubmitIoToSQ.c)
 *     StorAttemptInsertDeviceQueue @ 0x140127370 (StorAttemptInsertDeviceQueue.c)
 *     StorPushRequestToDeviceQueue @ 0x1401277F0 (StorPushRequestToDeviceQueue.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeProcessIoIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  char v5; // r15
  unsigned int v6; // esi
  __int64 CurrentProcessorNumber; // rbp
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // rax
  bool v13; // di
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v25; // rcx
  _IO_STACK_LOCATION *v26; // rax
  _IO_STACK_LOCATION *v27; // rax
  _IO_STACK_LOCATION *v28; // rdi
  __int64 v29; // rax
  bool v30; // zf
  unsigned __int64 Length; // r15
  unsigned __int64 QuadPart; // rdi
  char v33; // r12
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rcx
  _QWORD *v37; // r10
  unsigned int v38; // r13d
  unsigned int v39; // edx
  char v40; // al
  unsigned int v41; // eax
  __int64 NVMeSGLBufferContext; // rax
  __int64 v43; // r13
  _IO_STACK_LOCATION *v44; // rdx
  char v45; // al
  _IO_SECURITY_CONTEXT *SecurityContext; // rax
  int v47; // edi
  __int64 v48; // rsi
  char v49; // r12
  int v50; // r9d
  PSLIST_ENTRY v51; // rax
  __int64 NewNVMePrpListBufferEntry; // rax
  __int64 v53; // r10
  __int64 v54; // r8
  unsigned int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v59; // rcx
  __int64 v60; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v61; // rcx
  __int64 v62; // rcx
  int v64; // [rsp+38h] [rbp-B0h]
  KIRQL v65; // [rsp+60h] [rbp-88h]
  unsigned int v66; // [rsp+68h] [rbp-80h]
  __int64 v67; // [rsp+68h] [rbp-80h]
  _IO_STACK_LOCATION *v68; // [rsp+70h] [rbp-78h] BYREF
  __int64 v69; // [rsp+78h] [rbp-70h]
  _MDL *MdlAddress; // [rsp+80h] [rbp-68h]
  __int128 v71; // [rsp+88h] [rbp-60h] BYREF
  __int128 v72; // [rsp+98h] [rbp-50h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v68 = CurrentStackLocation;
  v5 = 0;
  v6 = 259;
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  if ( FeatureFixFUAForReadIoPerf )
  {
    if ( IoGetIoPriorityHint(a2) > IoPriorityLow )
    {
      _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 680) + 8 * CurrentProcessorNumber));
      goto LABEL_14;
    }
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL);
    if ( !v9 || *(_BYTE *)(v9 + 64) )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 160LL) + 8LL);
      if ( !v10 || *(_BYTE *)(v10 + 64) )
      {
        if ( !*(_DWORD *)(*(_QWORD *)(a1 + 264) + 40LL) )
        {
          v11 = 0;
          v8 = *((_DWORD *)g_CpuInfo + 3);
          if ( !v8 )
            goto LABEL_14;
          while ( !**(_DWORD **)(*(_QWORD *)(a1 + 680) + 8LL * v11) )
          {
            if ( ++v11 >= v8 )
              goto LABEL_14;
          }
        }
        v5 = 1;
      }
    }
  }
LABEL_14:
  v12 = *(_QWORD *)(a1 + 128);
  if ( *(_BYTE *)v12
    || _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v12 + 24) + 8 * CurrentProcessorNumber)) != 1 )
  {
    goto LABEL_41;
  }
  if ( KeGetCurrentIrql() >= 2u || (*(_DWORD *)(*(_QWORD *)(a1 + 128) + 80LL) & 6) != 0 )
  {
    v13 = 1;
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
    v20 = *(_QWORD *)(v19 + 160);
    if ( *(_BYTE *)v20 == 1 )
    {
      PoFxActivateComponent(**(_QWORD **)(v20 + 8), 0LL, 2LL);
      v13 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 160) + 8LL) + 64LL) == 1;
    }
    v21 = *(_QWORD *)(a1 + 128);
    if ( !v21 )
      goto LABEL_38;
    if ( !*(_QWORD *)(v21 + 8) )
      goto LABEL_38;
    v22 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v21 + 40);
    if ( !v22 || !ExAcquireRundownProtectionCacheAware(v22) )
      goto LABEL_38;
    v18 = 2LL;
  }
  else
  {
    v13 = 1;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
    v15 = *(_QWORD *)(v14 + 160);
    if ( *(_BYTE *)v15 == 1 )
    {
      PoFxActivateComponent(**(_QWORD **)(v15 + 8), 0LL, 1LL);
      v13 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 160) + 8LL) + 64LL) == 1;
    }
    v16 = *(_QWORD *)(a1 + 128);
    if ( !v16 )
      goto LABEL_38;
    if ( !*(_QWORD *)(v16 + 8) )
      goto LABEL_38;
    v17 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v16 + 40);
    if ( !v17 || !ExAcquireRundownProtectionCacheAware(v17) )
      goto LABEL_38;
    v18 = 5LL;
    if ( !*(_DWORD *)(a1 + 272) )
      v18 = 1LL;
  }
  PoFxActivateComponent(**(_QWORD **)(*(_QWORD *)(a1 + 128) + 8LL), 0LL, v18);
  v23 = *(_QWORD *)(a1 + 128);
  v24 = *(_QWORD *)(v23 + 8);
  v13 = *(_BYTE *)(v24 + 64) == 1;
  if ( v23 )
  {
    if ( v24 )
    {
      v25 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v23 + 40);
      if ( v25 )
        ExReleaseRundownProtectionCacheAware(v25);
    }
  }
LABEL_38:
  if ( !v13 )
  {
    NvmeNamespaceProcessIoForDeviceIdle(a1, (__int64)a2, CurrentProcessorNumber);
    return v6;
  }
  CurrentStackLocation = v68;
LABEL_41:
  if ( v5 )
  {
    v26 = a2->Tail.Overlay.CurrentStackLocation;
    v68 = 0LL;
    v26->Control |= 1u;
    if ( (int)IoGetIoAttributionHandle(a2, &v68) >= 0 )
    {
      v27 = a2->Tail.Overlay.CurrentStackLocation;
      v28 = v68;
      v71 = 0LL;
      LODWORD(v71) = 1;
      v72 = 0LL;
      DWORD1(v71) = v27->MajorFunction | 0x300;
      *((_QWORD *)&v72 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v72 + 1);
      IoRecordIoAttribution(v28, &v71);
    }
    StorPushRequestToDeviceQueue(*(_QWORD *)(a1 + 264), (unsigned int)CurrentProcessorNumber);
    v29 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v29 + 1288) && **(_DWORD **)(v29 + 1288) || *(_DWORD *)(*(_QWORD *)(a1 + 16) + 948LL) )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 264) + 40LL), 0, 1);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 264) + 40LL), 1, 0) != 1 )
    {
      KeSetTimer(
        *(PKTIMER *)(*(_QWORD *)(a1 + 264) + 32LL),
        (LARGE_INTEGER)-120000LL,
        *(PKDPC *)(*(_QWORD *)(a1 + 264) + 24LL));
    }
    return v6;
  }
  LOBYTE(v8) = 1;
  if ( (unsigned __int8)StorAttemptInsertDeviceQueue(
                          *(_QWORD *)(a1 + 256),
                          (_DWORD)a2,
                          v8,
                          CurrentProcessorNumber,
                          *(_QWORD *)(a1 + 16)) )
    return v6;
  v30 = CurrentStackLocation->MajorFunction == 3;
  Length = CurrentStackLocation->Parameters.Read.Length;
  QuadPart = CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
  v33 = v30;
  if ( !(_DWORD)Length )
  {
    v6 = 0;
    goto LABEL_88;
  }
  v34 = *(unsigned int *)(a1 + 64);
  if ( !((unsigned int)Length % (unsigned int)v34) )
  {
    v35 = QuadPart / v34;
    if ( !(QuadPart % v34) )
    {
      v36 = *(_QWORD *)(a1 + 432);
      v66 = (unsigned int)Length / (unsigned int)v34;
      if ( v35 < v36 && v36 - v35 >= (unsigned int)Length / (unsigned int)v34 )
      {
        v37 = *(_QWORD **)(a1 + 16);
        v38 = *(_DWORD *)(v37[16] + 200LL);
        if ( (unsigned int)Length > v38
          || (v39 = *(_DWORD *)(a1 + 428)) != 0
          && ((unsigned int)Length > v39
           || ((v40 = *(_BYTE *)(a1 + 427)) == 0
             ? (v41 = Length / v39 + (Length % v39 + v39 + QuadPart % v39 - 1) / v39)
             : (v41 = (Length >> v40)
                    + ((((unsigned int)Length & (v39 - 1))
                      + ((unsigned int)QuadPart & (v39 - 1))
                      + (unsigned __int64)v39
                      - 1) >> v40)),
               v41 > 1)) )
        {
          v55 = NvmeSplitIoParallel(a1, (_DWORD)a2, v30, Length, QuadPart, v38, CurrentProcessorNumber, 0LL, 0LL, 0LL);
        }
        else
        {
          if ( (v37[17] & 0x100000000LL) == 0 )
          {
            NVMeSGLBufferContext = GetNVMeSGLBufferContext(*(_QWORD *)(a1 + 16), CurrentProcessorNumber);
            v43 = NVMeSGLBufferContext;
            if ( !NVMeSGLBufferContext )
            {
              v6 = -1073741670;
              goto LABEL_88;
            }
            v44 = v68;
            *(_QWORD *)(NVMeSGLBufferContext + 40) = a2;
            v45 = *(_BYTE *)(NVMeSGLBufferContext + 126) & 0xFE;
            *(_QWORD *)(v43 + 96) = QuadPart;
            *(_QWORD *)(v43 + 104) = v35;
            *(_BYTE *)(v43 + 126) = v33 | v45;
            *(_DWORD *)(v43 + 112) = v66;
            *(_QWORD *)(v43 + 64) = 0LL;
            *(_QWORD *)(v43 + 72) = 0LL;
            *(_QWORD *)(v43 + 32) = a1;
            *(_DWORD *)(v43 + 116) = Length;
            *(_QWORD *)(v43 + 56) = v44->Parameters.Read.ByteOffset.QuadPart;
            SecurityContext = v44->Parameters.Create.SecurityContext;
            v44->Parameters.Read.ByteOffset.QuadPart = v43;
            *(_QWORD *)(v43 + 48) = SecurityContext;
            *(_QWORD *)(v43 + 80) = (char *)a2->MdlAddress->StartVa + a2->MdlAddress->ByteOffset;
            v44->Parameters.WMI.ProviderId = 0xFEDCBA9000000000uLL;
            v47 = *(unsigned __int16 *)(v43 + 124);
            v48 = *(_QWORD *)(v43 + 16);
            MdlAddress = a2->MdlAddress;
            v69 = *(_QWORD *)(v43 + 80);
            v67 = *(_QWORD *)(a1 + 16);
            v49 = v33 ^ 1;
            v65 = KfRaiseIrql(2u);
            v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, __int64, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, char, __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v67 + 128) + 1144LL) + 8LL) + 112LL))(
                   *(_QWORD *)(*(_QWORD *)(v67 + 128) + 1144LL),
                   *(_QWORD *)(*(_QWORD *)(v67 + 128) + 8LL),
                   MdlAddress,
                   v69,
                   Length,
                   NvmeContinueScatterGatherProcessIO,
                   v43,
                   v49,
                   v48,
                   v47);
            if ( v6 == -1073741789 )
            {
              LOBYTE(v64) = v49;
              v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, __int64, _DWORD, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v67 + 128) + 1144LL) + 8LL) + 88LL))(
                     *(_QWORD *)(*(_QWORD *)(v67 + 128) + 1144LL),
                     *(_QWORD *)(*(_QWORD *)(v67 + 128) + 8LL),
                     MdlAddress,
                     v69,
                     Length,
                     NvmeContinueScatterGatherProcessIO,
                     v43,
                     v64);
            }
            if ( v65 < 2u )
              KeLowerIrql(v65);
            if ( (v6 & 0x80000000) == 0 )
              return 259;
            FreeNVMeSGLBufferContext(*(_QWORD *)(a1 + 16), v43, 1);
LABEL_84:
            if ( v6 != -2147483631 )
            {
              if ( v6 == 259 )
                return v6;
              goto LABEL_88;
            }
            return 259;
          }
          v50 = 0;
          if ( ((Length + ((LODWORD(a2->MdlAddress->StartVa) + a2->MdlAddress->ByteOffset) & 0xFFF) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x2000 )
          {
            v51 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(v37[110] + 8 * CurrentProcessorNumber));
            v50 = (int)v51;
            if ( !v51 )
            {
              NewNVMePrpListBufferEntry = AllocateNewNVMePrpListBufferEntry(
                                            *(_QWORD *)(a1 + 16),
                                            CurrentProcessorNumber);
              v50 = NewNVMePrpListBufferEntry;
              if ( !NewNVMePrpListBufferEntry )
              {
                NvmeNamespaceQueueIo(a1, (__int64)a2, CurrentProcessorNumber);
                return 259;
              }
            }
          }
          v53 = *(_QWORD *)(a1 + 16);
          if ( (*(_BYTE *)(v53 + 136) & 2) != 0 )
            v54 = *(_QWORD *)(v53 + 728) + 192 * CurrentProcessorNumber;
          else
            LODWORD(v54) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v53 + 872) + 2 * CurrentProcessorNumber)
                         + *(_DWORD *)(v53 + 728)
                         - 192;
          v55 = NvmeSubmitIoToSQ(
                  a1,
                  (_DWORD)a2,
                  v54,
                  v50,
                  CurrentProcessorNumber,
                  0,
                  Length,
                  QuadPart,
                  v35,
                  v66,
                  v33,
                  0LL);
        }
        v6 = v55;
        goto LABEL_84;
      }
    }
  }
  v6 = -1073741811;
LABEL_88:
  if ( FeatureFixFUAForReadIoPerf && IoGetIoPriorityHint(a2) > IoPriorityLow )
    _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 680) + 8 * CurrentProcessorNumber));
  v56 = *(_QWORD *)(a1 + 128);
  if ( !*(_BYTE *)v56
    && _InterlockedExchangeAdd(
         *(volatile signed __int32 **)(*(_QWORD *)(v56 + 24) + 8 * CurrentProcessorNumber),
         0xFFFFFFFF) == 1 )
  {
    v57 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
    v58 = *(_QWORD *)(a1 + 128);
    if ( v58 )
    {
      if ( *(_QWORD *)(v58 + 8) )
      {
        v59 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v58 + 40);
        if ( v59 )
        {
          if ( ExAcquireRundownProtectionCacheAware(v59) )
          {
            PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(a1 + 128) + 8LL), 0LL, 2LL);
            v60 = *(_QWORD *)(a1 + 128);
            if ( v60 )
            {
              if ( *(_QWORD *)(v60 + 8) )
              {
                v61 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v60 + 40);
                if ( v61 )
                  ExReleaseRundownProtectionCacheAware(v61);
              }
            }
          }
        }
      }
    }
    v62 = *(_QWORD *)(v57 + 160);
    if ( *(_BYTE *)v62 == 1 )
      PoFxIdleComponent(**(_QWORD **)(v62 + 8), 0LL, 2LL);
  }
  return v6;
}
