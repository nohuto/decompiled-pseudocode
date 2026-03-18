/*
 * XREFs of ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14032DC44
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x14035A2D0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14001428C (McTemplateK0p_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x14002B2E0 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1400339D0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?VidSchSubmitCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140035F70 (-VidSchSubmitCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?VidSchSubmitCommandToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x140037990 (-VidSchSubmitCommandToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@.c)
 *     ?VidMmGetDmaBufferLength@VIDMM_EXPORT@@QEAAIPEBUVIDMM_DMA_BUFFER@@@Z @ 0x140040AD8 (-VidMmGetDmaBufferLength@VIDMM_EXPORT@@QEAAIPEBUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmGetDmaPrivateData@VIDMM_EXPORT@@QEAAPEAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x140040AFC (-VidMmGetDmaPrivateData@VIDMM_EXPORT@@QEAAPEAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmGetDmaAllocationList@VIDMM_EXPORT@@QEAAPEAU_DXGK_ALLOCATIONLIST@@PEAUVIDMM_DMA_BUFFER@@@Z @ 0x140041840 (-VidMmGetDmaAllocationList@VIDMM_EXPORT@@QEAAPEAU_DXGK_ALLOCATIONLIST@@PEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z @ 0x140042D24 (-VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004D530 (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x140064364 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     ?VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z @ 0x140076F44 (-VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x140300250 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x14032EA88 (-EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x14032EC24 (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x14032F044 (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
 */

__int64 __fastcall DXGCONTEXT::RenderKmLda(
        struct _D3DKMT_RENDER *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGCONTEXT **a3,
        struct DXGALLOCATION **a4,
        struct DXGHWQUEUE **a5)
{
  struct _D3DKMT_RENDER *v5; // r12
  struct DXGCONTEXT *v7; // rax
  __int64 v8; // r10
  struct DXGPROCESS *Current; // rax
  __int64 v10; // r9
  ULONG BroadcastContextCount; // edi
  _BYTE *Pool2; // rcx
  char v13; // r13
  unsigned __int64 AllocationCount; // rbx
  signed int v15; // edi
  unsigned __int64 v16; // rbx
  _BYTE *v17; // rsi
  DXGHWQUEUE **v18; // rbx
  struct DXGPROCESS *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  char *v22; // rdi
  __int64 v23; // r15
  UINT i; // eax
  char v25; // di
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // r12
  struct VIDMM_DMA_BUFFER *v31; // rdx
  PVOID v32; // rcx
  bool v33; // zf
  __int64 v35; // rdi
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v37; // eax
  __int64 v38; // r8
  int v39; // ecx
  struct _EX_RUNDOWN_REF *v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  VIDMM_EXPORT *v43; // rsi
  DXGK_ALLOCATIONLIST *DmaAllocationList; // rax
  struct _D3DKMT_RENDER *v45; // rsi
  void *DmaPrivateData; // r8
  UINT DmaBufferPrivateDataSize; // r9d
  void *pDmaBuffer; // rcx
  UINT AllocationListSize; // edx
  void *v50; // rdx
  int v51; // eax
  struct DXGHWQUEUE **v52; // rsi
  int v53; // eax
  int v54; // eax
  int v55; // esi
  int v56; // edi
  int v57; // eax
  __int64 *v58; // rcx
  DXGHWQUEUE **v59; // rdx
  VIDSCH_EXPORT *v60; // rcx
  int v61; // eax
  int v62; // edi
  void *v63; // rdx
  int v64; // eax
  int v65; // esi
  VIDSCH_EXPORT *v66; // r15
  struct DXGCONTEXT **v67; // rbx
  VIDMM_EXPORT *v68; // rbx
  __int64 v69; // [rsp+20h] [rbp-E0h]
  bool v70; // [rsp+60h] [rbp-A0h]
  char v71; // [rsp+61h] [rbp-9Fh]
  struct VIDMM_DMA_BUFFER *v72; // [rsp+68h] [rbp-98h] BYREF
  int v73; // [rsp+70h] [rbp-90h]
  UINT v74; // [rsp+74h] [rbp-8Ch]
  VIDMM_EXPORT *v75; // [rsp+78h] [rbp-88h]
  _BYTE *v76; // [rsp+80h] [rbp-80h]
  UINT v77; // [rsp+88h] [rbp-78h]
  UINT v78; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned __int64 v79; // [rsp+90h] [rbp-70h] BYREF
  DXGHWQUEUE **v80; // [rsp+98h] [rbp-68h]
  struct _D3DKMT_RENDER *v81; // [rsp+A0h] [rbp-60h]
  struct _EX_RUNDOWN_REF *v82; // [rsp+A8h] [rbp-58h] BYREF
  void *v83; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v84; // [rsp+B8h] [rbp-48h]
  PVOID Entry; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v86; // [rsp+C8h] [rbp-38h]
  __int64 v87; // [rsp+D0h] [rbp-30h]
  VIDSCH_EXPORT *v88; // [rsp+D8h] [rbp-28h]
  _BYTE *v89; // [rsp+E0h] [rbp-20h]
  __int64 v90; // [rsp+E8h] [rbp-18h] BYREF
  struct DXGHWQUEUE **v91; // [rsp+F0h] [rbp-10h]
  LARGE_INTEGER v92; // [rsp+F8h] [rbp-8h] BYREF
  struct ADAPTER_RENDER *v93; // [rsp+100h] [rbp+0h]
  struct DXGPROCESS *v94; // [rsp+108h] [rbp+8h]
  _DXGKARG_RENDERGDI v95; // [rsp+110h] [rbp+10h] BYREF
  struct DXGALLOCATION **v96; // [rsp+160h] [rbp+60h]
  struct COREDEVICEACCESS *v97; // [rsp+168h] [rbp+68h]
  char *v98; // [rsp+170h] [rbp+70h]
  __int64 v99; // [rsp+178h] [rbp+78h]
  struct DXGCONTEXT **v100; // [rsp+180h] [rbp+80h]
  __int64 v101; // [rsp+188h] [rbp+88h]
  _DXGKARG_RENDER v102; // [rsp+190h] [rbp+90h] BYREF
  PVOID v103; // [rsp+200h] [rbp+100h]
  _BYTE v104[128]; // [rsp+208h] [rbp+108h] BYREF
  int v105; // [rsp+288h] [rbp+188h]
  PVOID P; // [rsp+290h] [rbp+190h]
  _BYTE v107[128]; // [rsp+298h] [rbp+198h] BYREF
  int v108; // [rsp+318h] [rbp+218h]

  v5 = a1;
  v91 = a5;
  v7 = *a3;
  v81 = a1;
  v96 = a4;
  v100 = a3;
  v8 = *((_QWORD *)v7 + 2);
  v97 = a2;
  v93 = *(struct ADAPTER_RENDER **)(v8 + 16);
  v75 = (VIDMM_EXPORT *)*((_QWORD *)v93 + 95);
  v88 = (VIDSCH_EXPORT *)*((_QWORD *)v93 + 92);
  Current = DXGPROCESS::GetCurrent((__int64)v93);
  BroadcastContextCount = v5->BroadcastContextCount;
  Pool2 = 0LL;
  v108 = 0;
  v13 = 1;
  AllocationCount = v5->AllocationCount;
  v15 = BroadcastContextCount + 1;
  v94 = Current;
  P = 0LL;
  if ( (unsigned int)AllocationCount <= 0x10 )
  {
    Pool2 = v107;
    P = v107;
    if ( (_DWORD)AllocationCount )
    {
      memset(v107, 0, 8 * AllocationCount);
      Pool2 = P;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
      goto LABEL_3;
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * AllocationCount, 1265072196LL, v10);
    P = Pool2;
  }
  v108 = AllocationCount;
LABEL_3:
  v89 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v16 = v5->AllocationCount;
  v17 = 0LL;
  v105 = 0;
  v76 = 0LL;
  v103 = 0LL;
  if ( (unsigned int)v16 > 0x10 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v16 < 8 )
      goto LABEL_6;
    v17 = (_BYTE *)ExAllocatePool2(256LL, 8 * v16, 1265072196LL, v10);
    v103 = v17;
    goto LABEL_85;
  }
  v17 = v104;
  v76 = v104;
  v103 = v104;
  if ( (_DWORD)v16 )
  {
    memset(v104, 0, 8 * v16);
    v17 = v103;
LABEL_85:
    Pool2 = P;
    v76 = v17;
  }
  v105 = v16;
LABEL_6:
  if ( !v17 )
  {
    v103 = 0LL;
    v105 = 0;
    if ( Pool2 != v107 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    return 3221225495LL;
  }
  v18 = v91;
  LODWORD(v19) = 0;
  v73 = 0;
  v20 = 0LL;
  v21 = v15;
  v22 = (char *)((char *)a3 - (char *)v91);
  v99 = v21;
  v98 = (char *)((char *)a3 - (char *)v91);
LABEL_8:
  v80 = v18;
  v87 = v20;
  if ( v20 >= v21 )
    goto LABEL_20;
  v84 = ((*(_DWORD *)&v5->Flags & 8u) << 12) | 0x100LL;
  v102.pCommand = (char *)v5->pNewCommandBuffer + v5->CommandOffset;
  v102.CommandLength = v5->CommandLength;
  memset(&v102.CommandLength + 1, 0, 100);
  v23 = *(__int64 *)((char *)v18 + (_QWORD)v22);
  v101 = v23;
  if ( (*(_DWORD *)(v23 + 392) & 0x10) != 0 && !v91 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1214;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Hardware context LDA render is not provided with hardware queue array",
      1214LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v103 != v104 && v103 )
      ExFreePoolWithTag(v103, 0);
    v103 = 0LL;
    v105 = 0;
    if ( P != v107 && P )
      ExFreePoolWithTag(P, 0);
    return 3221225473LL;
  }
  v74 = *(_DWORD *)(v23 + 388);
  for ( i = 0; ; i = v77 + 1 )
  {
    v77 = i;
    if ( i >= v5->AllocationCount )
      break;
    v35 = i;
    *(D3DDDI_ALLOCATIONLIST *)&v89[8 * i] = v5->pNewAllocationList[i];
    *(_QWORD *)&v17[8 * i] = v96[i];
    if ( !v87 )
      continue;
    v19 = v94;
    hAllocation = v5->pNewAllocationList[i].hAllocation;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v94 + 248));
    v37 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v37 >= *((_DWORD *)v19 + 74) )
      goto LABEL_74;
    v38 = *((_QWORD *)v19 + 35);
    if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v38 + 16LL * v37 + 8) & 0x60) )
      goto LABEL_74;
    if ( (*(_DWORD *)(v38 + 16LL * v37 + 8) & 0x2000) != 0 )
      goto LABEL_74;
    v39 = *(_DWORD *)(v38 + 16LL * v37 + 8) & 0x1F;
    if ( !v39 )
      goto LABEL_74;
    if ( v39 != 5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_74:
      v40 = 0LL;
      goto LABEL_33;
    }
    v40 = *(struct _EX_RUNDOWN_REF **)(v38 + 16LL * v37);
LABEL_33:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v82, v40);
    _InterlockedDecrement((volatile signed __int32 *)v19 + 66);
    ExReleasePushLockSharedEx((char *)v19 + 248, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v19) = -1073741811;
    if ( !v82 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1237;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"The allocation handle is invalid",
        1237LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v82);
      if ( v103 != v104 && v103 )
        ExFreePoolWithTag(v103, 0);
      v32 = P;
      v33 = P == v107;
      goto LABEL_110;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v82[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL)
                                                                         + 16LL) )
    {
      WdLogSingleEntry3(2LL, *(_QWORD *)(v23 + 16), v82, -1073741811LL);
      v69 = *(_QWORD *)(v23 + 16);
      WdLogGlobalForLineNumber = 1246;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        v69,
        (__int64)v82,
        -1073741811LL,
        0LL,
        0LL);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v82);
      if ( v103 != v104 && v103 )
        ExFreePoolWithTag(v103, 0);
      v32 = P;
      v33 = P == v107;
LABEL_110:
      v105 = 0;
      v103 = 0LL;
      goto LABEL_22;
    }
    v41 = *(_QWORD *)(v82[5].Count + 24);
    if ( v41 )
    {
      while ( ((*(_DWORD *)(v41 + 72) >> 12) & 0x3F) != v74 )
      {
        v41 = *(_QWORD *)(v41 + 64);
        if ( !v41 )
          goto LABEL_38;
      }
      *(_DWORD *)&v89[8 * v35] = *(_DWORD *)(v41 + 16);
      *(_QWORD *)&v17[8 * v35] = v41;
    }
LABEL_38:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v82);
  }
  v83 = 0LL;
  v25 = 1;
  v71 = 0;
  v72 = 0LL;
  v26 = v84;
  v70 = 1;
  while ( 1 )
  {
    v27 = DXGCONTEXT::AcquireDmaBuffer((DXGCONTEXT *)v23, &v72, v97, 0);
    LODWORD(v19) = v27;
    if ( v27 < 0 )
    {
      WdLogSingleEntry2(4LL, v23, v27);
      WdLogGlobalForLineNumber = 1290;
      goto LABEL_18;
    }
    if ( bTracingEnabled )
    {
      if ( (*(_DWORD *)&v5->Flags & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
          goto LABEL_15;
        v63 = &EventRenderKm;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
          goto LABEL_15;
        v63 = &EventRender;
      }
      McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)v63, v28, v72);
    }
LABEL_15:
    v78 = 0;
    v92.QuadPart = 0LL;
    v79 = 0LL;
    v90 = 0LL;
    CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)&Entry, v93, 1);
    v30 = Entry;
    if ( !Entry )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1315;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate VidSchSubmitData",
        1315LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v19) = -1073741801;
LABEL_17:
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
LABEL_18:
      v13 = 0;
      goto LABEL_19;
    }
    LOBYTE(v29) = 1;
    v42 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *, _BYTE *, _QWORD, __int64, int, UINT *, LARGE_INTEGER *, unsigned __int64 *, __int64 *, char *, _BYTE *))(*((_QWORD *)v75 + 1) + 536LL))(
            v72,
            v89,
            v81->AllocationCount,
            v29,
            1,
            &v78,
            &v92,
            &v79,
            &v90,
            (char *)Entry + 200,
            v17);
    LODWORD(v19) = v42;
    if ( v42 < 0 )
    {
      WdLogSingleEntry2(3LL, v23, v42);
      WdLogGlobalForLineNumber = 1338;
      goto LABEL_17;
    }
    v43 = v75;
    (*(void (__fastcall **)(struct VIDMM_DMA_BUFFER *, void **))(*((_QWORD *)v75 + 1) + 480LL))(v72, &v83);
    v84 = (__int64)v83;
    v102.pDmaBuffer = v83;
    v102.DmaSize = VIDMM_EXPORT::VidMmGetDmaBufferLength(v43, v72);
    DmaAllocationList = VIDMM_EXPORT::VidMmGetDmaAllocationList(v43, v72);
    v45 = v81;
    v102.pAllocationList = DmaAllocationList;
    v74 = v81->AllocationCount;
    v102.AllocationListSize = v74;
    DmaPrivateData = (void *)VIDMM_EXPORT::VidMmGetDmaPrivateData(v75, v72);
    DmaBufferPrivateDataSize = *(_DWORD *)(v23 + 208);
    v102.DmaBufferSegmentId = v78;
    v102.DmaBufferPhysicalAddress = v92;
    v102.pDmaBufferPrivateData = DmaPrivateData;
    v102.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
    if ( v71 )
      break;
    pDmaBuffer = (void *)v84;
    AllocationListSize = v74;
LABEL_43:
    if ( v25 )
    {
      v95.pCommand = (char *)v45->pNewCommandBuffer + v45->CommandOffset;
      v95.CommandLength = v45->CommandLength;
      v95.MultipassOffset = 0;
      *(&v95.CommandLength + 1) = 0;
      v95.DmaBufferGpuVirtualAddress = v79;
      *(&v95.DmaSize + 1) = 0;
      v95.DmaSize = v102.DmaSize;
      *(_QWORD *)&v95.DmaBufferPrivateDataSize = 0LL;
      v95.pAllocationList = v102.pAllocationList;
      v95.pDmaBuffer = pDmaBuffer;
      v95.pDmaBufferPrivateData = DmaPrivateData;
      v95.AllocationListSize = AllocationListSize;
      v50 = *(void **)(v23 + 184);
      v95.MultipassOffset = v102.MultipassOffset;
      v95.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
      v51 = ADAPTER_RENDER::DdiRenderGdi(v93, v50, &v95);
      LODWORD(v19) = v51;
      if ( (int)(v51 + 0x80000000) >= 0 && v51 != -1071775743 )
      {
        WdLogSingleEntry2(3LL, v23, v51);
        WdLogGlobalForLineNumber = 1415;
        goto LABEL_114;
      }
      v70 = v51 == -1071775743;
      v102.pDmaBuffer = v95.pDmaBuffer;
      v102.pDmaBufferPrivateData = v95.pDmaBufferPrivateData;
      v102.MultipassOffset = v95.MultipassOffset;
      if ( (*(_DWORD *)(v23 + 392) & 0x10) != 0 )
      {
        v52 = v80;
        v102.DmaBufferPrivateDataSize = v95.DmaBufferPrivateDataSize;
        v102.DmaSize = v95.DmaSize;
        LODWORD(v19) = DXGHWQUEUE::EnsureKmSubmissionProgressSyncObject(*v80);
        if ( (int)v19 < 0 )
          goto LABEL_69;
        ++*((_QWORD *)*v52 + 12);
        if ( !*(_BYTE *)(v23 + 296) )
        {
          v53 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v102, (struct DXGCONTEXT *)v23, *v52, v79);
          LODWORD(v19) = v53;
          if ( v53 == -1071775743 )
          {
            v71 = 1;
          }
          else if ( v53 < 0 )
          {
            WdLogSingleEntry2(3LL, v23, v53);
            WdLogGlobalForLineNumber = 1455;
LABEL_69:
            ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v86 + 1424), v30);
            goto LABEL_19;
          }
        }
      }
    }
    v54 = VIDMM_EXPORT::VidMmGetDmaPrivateData(v75, v72);
    v55 = LODWORD(v102.pDmaBufferPrivateData) - v54;
    v56 = LODWORD(v102.pDmaBuffer) - (_DWORD)v83;
    VIDMM_EXPORT::VidMmEndDmaBufferCPUAccess(v75, v72);
    v83 = 0LL;
    *v30 = v26;
    *(_DWORD *)v30 |= 0x8000000u;
    v30[5] = v79;
    v30[1] = v72;
    *((_DWORD *)v30 + 13) = v56;
    *((_DWORD *)v30 + 12) = 0;
    v30[7] = 0LL;
    v30[8] = 0LL;
    *((_DWORD *)v30 + 19) = v55;
    *((_DWORD *)v30 + 18) = 0;
    if ( v90 )
    {
      v57 = 1;
      v58 = &v90;
    }
    else
    {
      v57 = 0;
      v58 = 0LL;
    }
    v30[43] = v58;
    *((_DWORD *)v30 + 88) = v57;
    if ( (*(_DWORD *)(v23 + 392) & 0x10) != 0 )
    {
      v59 = v80;
      v30[62] = *((_QWORD *)*v80 + 12);
      *((_DWORD *)v30 + 126) = 0;
      v30[65] = *(_QWORD *)(*((_QWORD *)*v59 + 11) + 64LL);
      v60 = v88;
      v30[64] = *(_QWORD *)(*((_QWORD *)*v59 + 11) + 48LL);
      v61 = VIDSCH_EXPORT::VidSchSubmitCommandToHwQueue(
              v60,
              *((struct VIDSCH_HW_QUEUE **)*v59 + 5),
              (struct VIDSCH_SUBMIT_DATA2 *)v30);
    }
    else
    {
      v61 = VIDSCH_EXPORT::VidSchSubmitCommand(
              v88,
              *(struct _VIDSCH_CONTEXT **)(v23 + 256),
              (struct VIDSCH_SUBMIT_DATA_BASE *)v30);
    }
    v62 = v61;
    if ( v61 < 0 )
    {
      v65 = v73;
      if ( v73 >= 0 )
      {
        v66 = v88;
        v67 = &v100[v73];
        do
        {
          if ( (*((_DWORD *)*v67 + 98) & 0x10) == 0 )
            VIDSCH_EXPORT::VidSchFlushPendingCommand(v66, *((struct _VIDSCH_CONTEXT **)*v67 + 32));
          --v67;
          --v65;
        }
        while ( v65 >= 0 );
        v23 = v101;
      }
      WdLogSingleEntry2(3LL, v23, v62);
      WdLogGlobalForLineNumber = 1556;
      LODWORD(v19) = v62;
      goto LABEL_114;
    }
    v72 = 0LL;
    if ( v30 )
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v86 + 1424), v30);
    v17 = v76;
    v25 = v70;
    v5 = v81;
    if ( !v71 && !v70 )
    {
      ++v73;
      v20 = v87 + 1;
      v22 = v98;
      v18 = v80 + 1;
      v21 = v99;
      goto LABEL_8;
    }
  }
  v64 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v102, (struct DXGCONTEXT *)v23, *v80, v79);
  v19 = (struct DXGPROCESS *)v64;
  if ( v64 != -1071775743 )
  {
    if ( v64 < 0 )
      goto LABEL_112;
    AllocationListSize = v102.AllocationListSize;
    DmaBufferPrivateDataSize = v102.DmaBufferPrivateDataSize;
    DmaPrivateData = v102.pDmaBufferPrivateData;
    pDmaBuffer = v102.pDmaBuffer;
    v71 = 0;
    goto LABEL_43;
  }
  WdLogSingleEntry5(0LL, 275LL, 40LL, v23, 0LL, 0LL);
  WdLogGlobalForLineNumber = 1375;
LABEL_112:
  WdLogSingleEntry2(3LL, v23, v19);
  WdLogGlobalForLineNumber = 1382;
LABEL_114:
  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
LABEL_19:
  v31 = v72;
  if ( v72 )
  {
    v68 = v75;
    if ( v83 )
    {
      VIDMM_EXPORT::VidMmEndDmaBufferCPUAccess(v75, v72);
      v31 = v72;
    }
    if ( v13 )
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(v68, v31);
      v31 = v72;
    }
    VIDMM_EXPORT::VidMmReleaseDmaBuffer(v68, v31);
  }
LABEL_20:
  if ( v103 != v104 && v103 )
    ExFreePoolWithTag(v103, 0);
  v103 = 0LL;
  v105 = 0;
  v32 = P;
  v33 = P == v107;
LABEL_22:
  if ( !v33 )
  {
    if ( v32 )
      ExFreePoolWithTag(v32, 0);
  }
  return (unsigned int)v19;
}
