/*
 * XREFs of ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14042303C
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x14034DF70 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011084 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x14002BA80 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1400338A0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?VidSchSubmitCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140035F04 (-VidSchSubmitCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?VidSchSubmitCommandToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x140037230 (-VidSchSubmitCommandToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@.c)
 *     ?VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAIPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAUVIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x14003DDDC (-VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IE.c)
 *     ?VidMmGetDmaBufferLength@VIDMM_EXPORT@@QEAAIPEBUVIDMM_DMA_BUFFER@@@Z @ 0x1400404C8 (-VidMmGetDmaBufferLength@VIDMM_EXPORT@@QEAAIPEBUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmGetDmaPrivateData@VIDMM_EXPORT@@QEAAPEAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x1400404EC (-VidMmGetDmaPrivateData@VIDMM_EXPORT@@QEAAPEAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmGetDmaAllocationList@VIDMM_EXPORT@@QEAAPEAU_DXGK_ALLOCATIONLIST@@PEAUVIDMM_DMA_BUFFER@@@Z @ 0x1400412F0 (-VidMmGetDmaAllocationList@VIDMM_EXPORT@@QEAAPEAU_DXGK_ALLOCATIONLIST@@PEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmBeginDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@PEAPEAX@Z @ 0x140042174 (-VidMmBeginDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@PEAPEAX@Z.c)
 *     ?VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z @ 0x1400427E4 (-VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004CEB0 (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x140063F84 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z @ 0x140077984 (-VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x14029E570 (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1402B6ED4 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x1402F9A10 (-EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1403679BC (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
 */

__int64 __fastcall DXGCONTEXT::RenderKmLda(
        struct _D3DKMT_RENDER *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGCONTEXT **a3,
        struct DXGALLOCATION **a4,
        struct DXGHWQUEUE **a5)
{
  struct _D3DKMT_RENDER *v5; // r13
  struct DXGCONTEXT *v7; // rax
  __int64 v8; // r10
  struct DXGPROCESS *Current; // rax
  ULONG BroadcastContextCount; // edi
  struct _D3DDDI_ALLOCATIONLIST *Pool2; // rcx
  char v12; // r12
  unsigned __int64 AllocationCount; // rbx
  int v14; // edi
  unsigned __int64 v15; // rbx
  _BYTE *v16; // rsi
  struct DXGPROCESS *v18; // r14
  char *v19; // rdi
  struct DXGHWQUEUE **v20; // rbx
  __int64 v21; // r15
  UINT v22; // eax
  __int64 v23; // rdi
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v25; // eax
  __int64 v26; // r8
  int v27; // ecx
  struct _EX_RUNDOWN_REF *v28; // rdx
  ULONG_PTR Count; // rbx
  __int64 v30; // rcx
  char v31; // di
  __int64 v32; // rbx
  int v33; // eax
  __int64 v34; // r8
  void *v35; // rdx
  struct VIDSCH_SUBMIT_DATA_BASE *v36; // r13
  struct _D3DKMT_RENDER *v37; // rsi
  int v38; // eax
  void *DmaPrivateData; // r8
  UINT DmaBufferPrivateDataSize; // r9d
  int v41; // eax
  UINT AllocationListSize; // edx
  void *pDmaBuffer; // rcx
  void *v44; // rdx
  int v45; // eax
  struct DXGHWQUEUE **v46; // rsi
  int v47; // eax
  int v48; // eax
  int v49; // esi
  int v50; // edi
  int v51; // eax
  struct VIDMM_ALLOC **v52; // rcx
  struct DXGHWQUEUE **v53; // rdx
  struct VIDSCH_SUBMIT_DATA2 *v54; // r8
  VIDSCH_EXPORT *v55; // r13
  int v56; // eax
  struct VIDSCH_SUBMIT_DATA_BASE *v57; // r8
  int v58; // edi
  struct DXGPROCESS *v59; // rdi
  PVOID v60; // rcx
  bool v61; // zf
  int v62; // esi
  struct DXGCONTEXT **v63; // rbx
  struct VIDMM_DMA_BUFFER *v64; // rdx
  VIDMM_EXPORT *v65; // rbx
  __int64 v66; // [rsp+20h] [rbp-E0h]
  struct DXGALLOCATION **v67; // [rsp+58h] [rbp-A8h]
  bool v68; // [rsp+60h] [rbp-A0h]
  char v69; // [rsp+61h] [rbp-9Fh]
  struct VIDMM_DMA_BUFFER *v70; // [rsp+68h] [rbp-98h] BYREF
  VIDMM_EXPORT *v71; // [rsp+70h] [rbp-90h]
  int v72; // [rsp+78h] [rbp-88h]
  UINT v73; // [rsp+7Ch] [rbp-84h]
  _BYTE *v74; // [rsp+80h] [rbp-80h]
  UINT v75; // [rsp+88h] [rbp-78h]
  unsigned int v76; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned __int64 v77; // [rsp+90h] [rbp-70h] BYREF
  struct DXGHWQUEUE **v78; // [rsp+98h] [rbp-68h]
  struct _EX_RUNDOWN_REF *v79; // [rsp+A0h] [rbp-60h] BYREF
  void *v80; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGPROCESS *v81; // [rsp+B0h] [rbp-50h]
  struct _D3DKMT_RENDER *v82; // [rsp+B8h] [rbp-48h]
  __int64 v83; // [rsp+C0h] [rbp-40h]
  struct VIDSCH_SUBMIT_DATA_BASE *v84[2]; // [rsp+C8h] [rbp-38h] BYREF
  struct VIDMM_ALLOC *v85; // [rsp+D8h] [rbp-28h] BYREF
  int IsEnabledDeviceUsageNoInline; // [rsp+E0h] [rbp-20h]
  struct _D3DDDI_ALLOCATIONLIST *v87; // [rsp+E8h] [rbp-18h]
  struct DXGHWQUEUE **v88; // [rsp+F0h] [rbp-10h]
  union _LARGE_INTEGER v89; // [rsp+F8h] [rbp-8h] BYREF
  struct ADAPTER_RENDER *v90; // [rsp+100h] [rbp+0h]
  VIDSCH_EXPORT *v91; // [rsp+108h] [rbp+8h]
  struct DXGPROCESS *v92; // [rsp+110h] [rbp+10h]
  struct _DXGKARG_RENDERGDI v93; // [rsp+120h] [rbp+20h] BYREF
  struct DXGALLOCATION **v94; // [rsp+170h] [rbp+70h]
  struct COREDEVICEACCESS *v95; // [rsp+178h] [rbp+78h]
  __int64 v96; // [rsp+180h] [rbp+80h]
  char *v97; // [rsp+188h] [rbp+88h]
  struct DXGCONTEXT **v98; // [rsp+190h] [rbp+90h]
  _DXGKARG_RENDER v99; // [rsp+1A0h] [rbp+A0h] BYREF
  PVOID v100; // [rsp+210h] [rbp+110h]
  _BYTE v101[128]; // [rsp+218h] [rbp+118h] BYREF
  int v102; // [rsp+298h] [rbp+198h]
  _BYTE v103[16]; // [rsp+2A0h] [rbp+1A0h] BYREF
  PVOID P; // [rsp+2B0h] [rbp+1B0h]
  _BYTE v105[128]; // [rsp+2B8h] [rbp+1B8h] BYREF
  int v106; // [rsp+338h] [rbp+238h]

  v5 = a1;
  v88 = a5;
  v7 = *a3;
  v82 = a1;
  v94 = a4;
  v98 = a3;
  v8 = *((_QWORD *)v7 + 2);
  v95 = a2;
  v90 = *(struct ADAPTER_RENDER **)(v8 + 16);
  v71 = (VIDMM_EXPORT *)*((_QWORD *)v90 + 95);
  v91 = (VIDSCH_EXPORT *)*((_QWORD *)v90 + 92);
  Current = DXGPROCESS::GetCurrent((__int64)v90);
  BroadcastContextCount = v5->BroadcastContextCount;
  Pool2 = 0LL;
  v106 = 0;
  v12 = 1;
  AllocationCount = v5->AllocationCount;
  v14 = BroadcastContextCount + 1;
  v92 = Current;
  P = 0LL;
  if ( (unsigned int)AllocationCount <= 0x10 )
  {
    Pool2 = (struct _D3DDDI_ALLOCATIONLIST *)v105;
    P = v105;
    if ( (_DWORD)AllocationCount )
    {
      memset(v105, 0, 8 * AllocationCount);
      Pool2 = (struct _D3DDDI_ALLOCATIONLIST *)P;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
      goto LABEL_7;
    Pool2 = (struct _D3DDDI_ALLOCATIONLIST *)ExAllocatePool2(256LL, 8 * AllocationCount, 1265072196LL);
    P = Pool2;
  }
  v106 = AllocationCount;
LABEL_7:
  v87 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v15 = v5->AllocationCount;
  v16 = 0LL;
  v102 = 0;
  v74 = 0LL;
  v100 = 0LL;
  if ( (unsigned int)v15 > 0x10 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v15 < 8 )
      goto LABEL_15;
    v16 = (_BYTE *)ExAllocatePool2(256LL, 8 * v15, 1265072196LL);
    v100 = v16;
    goto LABEL_13;
  }
  v16 = v101;
  v74 = v101;
  v100 = v101;
  if ( (_DWORD)v15 )
  {
    memset(v101, 0, 8 * v15);
    v16 = v100;
LABEL_13:
    Pool2 = (struct _D3DDDI_ALLOCATIONLIST *)P;
    v74 = v16;
  }
  v102 = v15;
LABEL_15:
  if ( !v16 )
  {
    v100 = 0LL;
    v102 = 0;
    if ( Pool2 != (struct _D3DDDI_ALLOCATIONLIST *)v105 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
    }
    return 3221225495LL;
  }
  v18 = 0LL;
  v72 = 0;
  IsEnabledDeviceUsageNoInline = Feature_4078915896__private_IsEnabledDeviceUsageNoInline();
  v96 = v14;
  if ( v14 <= 0 )
  {
LABEL_123:
    if ( v100 != v101 && v100 )
      ExFreePoolWithTag(v100, 0);
    v100 = 0LL;
    v102 = 0;
    v60 = P;
    v61 = P == v105;
    goto LABEL_97;
  }
  v19 = (char *)((char *)a3 - (char *)v88);
  v81 = 0LL;
  v97 = (char *)((char *)a3 - (char *)v88);
  v20 = v88;
  v78 = v88;
LABEL_22:
  v83 = ((*(_DWORD *)&v5->Flags & 8u) << 12) | 0x100LL;
  v99.pCommand = (char *)v5->pNewCommandBuffer + v5->CommandOffset;
  v99.CommandLength = v5->CommandLength;
  memset(&v99.CommandLength + 1, 0, 100);
  v21 = *(__int64 *)((char *)v20 + (_QWORD)v19);
  if ( (*(_DWORD *)(v21 + 392) & 0x10) != 0 && !v88 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1215;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Hardware context LDA render is not provided with hardware queue array",
      1215LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v100 != v101 && v100 )
      ExFreePoolWithTag(v100, 0);
    v100 = 0LL;
    v102 = 0;
    if ( P != v105 && P )
      ExFreePoolWithTag(P, 0);
    return 3221225473LL;
  }
  v73 = *(_DWORD *)(v21 + 388);
  v22 = 0;
  v75 = 0;
  if ( !v5->AllocationCount )
  {
LABEL_45:
    v80 = 0LL;
    v31 = 1;
    v69 = 0;
    v70 = 0LL;
    v32 = v83;
    v68 = 1;
    while ( 1 )
    {
      v33 = DXGCONTEXT::AcquireDmaBuffer((DXGCONTEXT *)v21, &v70, v95, 0);
      LODWORD(v18) = v33;
      if ( v33 < 0 )
      {
        WdLogSingleEntry2(4LL, v21, v33);
        WdLogGlobalForLineNumber = 1299;
        goto LABEL_116;
      }
      if ( bTracingEnabled )
      {
        if ( (*(_DWORD *)&v5->Flags & 0x20) != 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
            goto LABEL_54;
          v35 = &EventRenderKm;
        }
        else
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
            goto LABEL_54;
          v35 = &EventRender;
        }
        McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)v35, v34, v70);
      }
LABEL_54:
      v76 = 0;
      v89.QuadPart = 0LL;
      v77 = 0LL;
      v85 = 0LL;
      CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)v84, v90, 1);
      v36 = v84[0];
      if ( !v84[0] )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 1324;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Failed to allocate VidSchSubmitData",
          1324LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v18) = -1073741801;
LABEL_113:
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v84);
LABEL_116:
        v12 = 0;
        goto LABEL_117;
      }
      v67 = (struct DXGALLOCATION **)v16;
      v37 = v82;
      v38 = VIDMM_EXPORT::VidMmReferenceDmaBuffer(
              v71,
              v70,
              v87,
              v82->AllocationCount,
              1,
              1,
              &v76,
              &v89,
              &v77,
              &v85,
              (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)v84[0] + 200),
              v67);
      LODWORD(v18) = v38;
      if ( v38 < 0 )
      {
        WdLogSingleEntry2(3LL, v21, v38);
        WdLogGlobalForLineNumber = 1347;
        goto LABEL_113;
      }
      VIDMM_EXPORT::VidMmBeginDmaBufferCPUAccess(v71, v70, &v80);
      v83 = (__int64)v80;
      v99.pDmaBuffer = v80;
      v99.DmaSize = VIDMM_EXPORT::VidMmGetDmaBufferLength(v71, v70);
      v99.pAllocationList = VIDMM_EXPORT::VidMmGetDmaAllocationList(v71, v70);
      v73 = v37->AllocationCount;
      v99.AllocationListSize = v73;
      DmaPrivateData = (void *)VIDMM_EXPORT::VidMmGetDmaPrivateData(v71, v70);
      DmaBufferPrivateDataSize = *(_DWORD *)(v21 + 208);
      v99.DmaBufferSegmentId = v76;
      v99.DmaBufferPhysicalAddress = v89;
      v99.pDmaBufferPrivateData = DmaPrivateData;
      v99.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
      if ( v69 )
      {
        v41 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v99, (struct DXGCONTEXT *)v21, *v78, v77);
        v18 = (struct DXGPROCESS *)v41;
        if ( v41 == -1071775743 )
        {
          WdLogSingleEntry5(0LL, 275LL, 40LL, v21, 0LL, 0LL);
          WdLogGlobalForLineNumber = 1384;
LABEL_102:
          WdLogSingleEntry2(3LL, v21, v18);
          WdLogGlobalForLineNumber = 1391;
LABEL_103:
          CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v84);
LABEL_117:
          v64 = v70;
          if ( v70 )
          {
            v65 = v71;
            if ( v80 )
            {
              VIDMM_EXPORT::VidMmEndDmaBufferCPUAccess(v71, v70);
              v64 = v70;
            }
            if ( v12 )
            {
              VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(v65, v64);
              v64 = v70;
            }
            VIDMM_EXPORT::VidMmReleaseDmaBuffer(v65, v64);
          }
          goto LABEL_123;
        }
        if ( v41 < 0 )
          goto LABEL_102;
        AllocationListSize = v99.AllocationListSize;
        DmaBufferPrivateDataSize = v99.DmaBufferPrivateDataSize;
        DmaPrivateData = v99.pDmaBufferPrivateData;
        pDmaBuffer = v99.pDmaBuffer;
        v69 = 0;
      }
      else
      {
        pDmaBuffer = (void *)v83;
        AllocationListSize = v73;
      }
      if ( v31 )
      {
        v93.pCommand = (char *)v37->pNewCommandBuffer + v37->CommandOffset;
        v93.CommandLength = v37->CommandLength;
        v93.MultipassOffset = 0;
        *(&v93.CommandLength + 1) = 0;
        v93.DmaBufferGpuVirtualAddress = v77;
        *(&v93.DmaSize + 1) = 0;
        v93.DmaSize = v99.DmaSize;
        *(_QWORD *)&v93.DmaBufferPrivateDataSize = 0LL;
        v93.pAllocationList = v99.pAllocationList;
        v93.pDmaBuffer = pDmaBuffer;
        v93.pDmaBufferPrivateData = DmaPrivateData;
        v93.AllocationListSize = AllocationListSize;
        v44 = *(void **)(v21 + 184);
        v93.MultipassOffset = v99.MultipassOffset;
        v93.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
        v45 = ADAPTER_RENDER::DdiRenderGdi(v90, v44, &v93);
        LODWORD(v18) = v45;
        if ( (int)(v45 + 0x80000000) >= 0 && v45 != -1071775743 )
        {
          WdLogSingleEntry2(3LL, v21, v45);
          WdLogGlobalForLineNumber = 1424;
          goto LABEL_103;
        }
        v68 = v45 == -1071775743;
        v99.pDmaBuffer = v93.pDmaBuffer;
        v99.pDmaBufferPrivateData = v93.pDmaBufferPrivateData;
        v99.MultipassOffset = v93.MultipassOffset;
        if ( (*(_DWORD *)(v21 + 392) & 0x10) != 0 )
        {
          v46 = v78;
          v99.DmaBufferPrivateDataSize = v93.DmaBufferPrivateDataSize;
          v99.DmaSize = v93.DmaSize;
          LODWORD(v18) = DXGHWQUEUE::EnsureKmSubmissionProgressSyncObject(*v78);
          if ( (int)v18 < 0 )
            goto LABEL_103;
          ++*((_QWORD *)*v46 + 12);
          if ( !*(_BYTE *)(v21 + 296) )
          {
            v47 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v99, (struct DXGCONTEXT *)v21, *v46, v77);
            LODWORD(v18) = v47;
            if ( v47 == -1071775743 )
            {
              v69 = 1;
            }
            else if ( v47 < 0 )
            {
              WdLogSingleEntry2(3LL, v21, v47);
              WdLogGlobalForLineNumber = 1464;
              goto LABEL_103;
            }
          }
        }
      }
      v48 = VIDMM_EXPORT::VidMmGetDmaPrivateData(v71, v70);
      v49 = LODWORD(v99.pDmaBufferPrivateData) - v48;
      v50 = LODWORD(v99.pDmaBuffer) - (_DWORD)v80;
      VIDMM_EXPORT::VidMmEndDmaBufferCPUAccess(v71, v70);
      v80 = 0LL;
      *(_QWORD *)v36 = v32;
      *(_DWORD *)v36 |= 0x8000000u;
      *((_QWORD *)v36 + 5) = v77;
      *((_QWORD *)v36 + 1) = v70;
      *((_DWORD *)v36 + 13) = v50;
      *((_DWORD *)v36 + 12) = 0;
      *((_QWORD *)v36 + 7) = 0LL;
      *((_QWORD *)v36 + 8) = 0LL;
      *((_DWORD *)v36 + 19) = v49;
      *((_DWORD *)v36 + 18) = 0;
      if ( v85 )
      {
        v51 = 1;
        v52 = &v85;
      }
      else
      {
        v51 = 0;
        v52 = 0LL;
      }
      *((_QWORD *)v36 + 43) = v52;
      *((_DWORD *)v36 + 88) = v51;
      if ( (*(_DWORD *)(v21 + 392) & 0x10) != 0 )
      {
        v53 = v78;
        *((_QWORD *)v36 + 62) = *((_QWORD *)*v78 + 12);
        *((_DWORD *)v36 + 126) = 0;
        v54 = v36;
        *((_QWORD *)v36 + 65) = *(_QWORD *)(*((_QWORD *)*v53 + 11) + 64LL);
        *((_QWORD *)v36 + 64) = *(_QWORD *)(*((_QWORD *)*v53 + 11) + 48LL);
        v55 = v91;
        v56 = VIDSCH_EXPORT::VidSchSubmitCommandToHwQueue(v91, *((struct VIDSCH_HW_QUEUE **)*v53 + 5), v54);
      }
      else
      {
        v57 = v36;
        v55 = v91;
        v56 = VIDSCH_EXPORT::VidSchSubmitCommand(v91, *(struct _VIDSCH_CONTEXT **)(v21 + 256), v57);
      }
      v58 = v56;
      if ( v56 < 0 )
      {
        v62 = v72;
        if ( v72 >= 0 )
        {
          v63 = &v98[v72];
          do
          {
            if ( (*((_DWORD *)*v63 + 98) & 0x10) == 0 )
              VIDSCH_EXPORT::VidSchFlushPendingCommand(v55, *((struct _VIDSCH_CONTEXT **)*v63 + 32));
            --v63;
            --v62;
          }
          while ( v62 >= 0 );
        }
        WdLogSingleEntry2(3LL, v21, v58);
        WdLogGlobalForLineNumber = 1565;
        LODWORD(v18) = v58;
        goto LABEL_103;
      }
      v70 = 0LL;
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v84);
      v16 = v74;
      v31 = v68;
      v5 = v82;
      if ( !v69 && !v68 )
      {
        v59 = (struct DXGPROCESS *)((char *)v81 + 1);
        ++v72;
        v20 = v78 + 1;
        v81 = v59;
        ++v78;
        if ( (__int64)v59 >= v96 )
          goto LABEL_123;
        v18 = v59;
        v19 = v97;
        goto LABEL_22;
      }
    }
  }
  while ( 1 )
  {
    v23 = v22;
    v87[v22] = v5->pNewAllocationList[v22];
    *(_QWORD *)&v16[8 * v22] = v94[v22];
    if ( !v18 )
      goto LABEL_44;
    v18 = v92;
    hAllocation = v5->pNewAllocationList[v22].hAllocation;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v92 + 248));
    v25 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v25 < *((_DWORD *)v18 + 74) )
    {
      v26 = *((_QWORD *)v18 + 35);
      if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v26 + 16LL * v25 + 8) & 0x60)
        && (*(_DWORD *)(v26 + 16LL * v25 + 8) & 0x2000) == 0 )
      {
        v27 = *(_DWORD *)(v26 + 16LL * v25 + 8) & 0x1F;
        if ( v27 )
        {
          if ( v27 == 5 )
          {
            v28 = *(struct _EX_RUNDOWN_REF **)(v26 + 16LL * v25);
            goto LABEL_34;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v28 = 0LL;
LABEL_34:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79, v28);
    _InterlockedDecrement((volatile signed __int32 *)v18 + 66);
    ExReleasePushLockSharedEx((char *)v18 + 248, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v18) = -1073741811;
    if ( !v79 )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(v79[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL)
                                                                         + 16LL) )
    {
      WdLogSingleEntry3(2LL, *(_QWORD *)(v21 + 16), v79, -1073741811LL);
      v66 = *(_QWORD *)(v21 + 16);
      WdLogGlobalForLineNumber = 1247;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        v66,
        (__int64)v79,
        -1073741811LL,
        0LL,
        0LL);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v79);
      if ( v100 != v101 && v100 )
        ExFreePoolWithTag(v100, 0);
      v60 = P;
      v61 = P == v105;
      goto LABEL_96;
    }
    Count = v79[5].Count;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v103, (struct DXGFASTMUTEX *const)(Count + 80), 0);
    if ( IsEnabledDeviceUsageNoInline )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v103);
    v30 = *(_QWORD *)(Count + 24);
    if ( v30 )
    {
      while ( ((*(_DWORD *)(v30 + 72) >> 12) & 0x3F) != v73 )
      {
        v30 = *(_QWORD *)(v30 + 64);
        if ( !v30 )
          goto LABEL_43;
      }
      v87[v23].hAllocation = *(_DWORD *)(v30 + 16);
      *(_QWORD *)&v16[8 * v23] = v30;
    }
LABEL_43:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v103);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v79);
    v18 = v81;
LABEL_44:
    v22 = v75 + 1;
    v75 = v22;
    if ( v22 >= v5->AllocationCount )
      goto LABEL_45;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 1238;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"The allocation handle is invalid",
    1238LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v79);
  if ( v100 != v101 && v100 )
    ExFreePoolWithTag(v100, 0);
  v60 = P;
  v61 = P == v105;
LABEL_96:
  v102 = 0;
  v100 = 0LL;
LABEL_97:
  if ( !v61 && v60 )
    ExFreePoolWithTag(v60, 0);
  return (unsigned int)v18;
}
