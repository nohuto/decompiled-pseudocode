/*
 * XREFs of ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x140357D98
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034E19C (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidSchSubmitCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140035F70 (-VidSchSubmitCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?VidSchSubmitCommandToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x140037990 (-VidSchSubmitCommandToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x14003BC5C (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MUL.c)
 *     ?VidMmGetDmaPatchLocationList@VIDMM_EXPORT@@QEAAPEAU_D3DDDI_PATCHLOCATIONLIST@@PEAUVIDMM_DMA_BUFFER@@@Z @ 0x1400410B4 (-VidMmGetDmaPatchLocationList@VIDMM_EXPORT@@QEAAPEAU_D3DDDI_PATCHLOCATIONLIST@@PEAUVIDMM_DMA_BUF.c)
 *     ?VidMmGetDmaAllocationList@VIDMM_EXPORT@@QEAAPEAU_DXGK_ALLOCATIONLIST@@PEAUVIDMM_DMA_BUFFER@@@Z @ 0x140041840 (-VidMmGetDmaAllocationList@VIDMM_EXPORT@@QEAAPEAU_DXGK_ALLOCATIONLIST@@PEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z @ 0x140042D24 (-VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004D530 (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004F5A4 (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     TraceDxgkPatchLocationList @ 0x14004F73C (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z @ 0x140057794 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x140064364 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z @ 0x140076F44 (-VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x140300250 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x14032EA88 (-EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ.c)
 *     ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x14032F100 (-DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x140330F00 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1403877B8 (-DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentWithDmaBuffer(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        struct DXGHWQUEUE *a3,
        struct DXGALLOCATION *a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct VIDMM_DMA_BUFFER *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct COREDEVICEACCESS *a9)
{
  struct VIDMM_DMA_BUFFER *v9; // rbx
  struct DXGALLOCATION *v11; // rcx
  char v12; // si
  struct COREDEVICEACCESS *v13; // rdx
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF Value; // eax
  __int64 v15; // rax
  const wchar_t *v16; // r9
  __int64 v17; // r12
  char v18; // si
  __int64 v19; // rdx
  struct VIDMM_ALLOC *v20; // r9
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  char v28; // cl
  int v29; // eax
  void *v30; // rdx
  UINT v31; // ecx
  DXGHWQUEUE *v32; // rsi
  UINT v33; // eax
  __int64 v34; // rcx
  void *v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rbx
  __int64 v39; // rax
  struct DXGALLOCATION *v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  bool v47; // zf
  __int64 v48; // r8
  UINT v49; // eax
  DXGK_ALLOCATIONLIST *DmaAllocationList; // rax
  struct VIDMM_DMA_BUFFER *v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  ADAPTER_RENDER *v54; // rcx
  void *v55; // rdx
  ADAPTER_RENDER *v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rax
  const wchar_t *v59; // r9
  DXGHWQUEUE *v60; // rsi
  UINT64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  void *v64; // rdx
  int v65; // eax
  __int64 v66; // rcx
  int v67; // eax
  unsigned int v68; // ebx
  __int64 v69; // rax
  int v70; // ecx
  __int64 v71; // rax
  unsigned __int64 v72; // rbx
  __int64 v73; // r8
  struct VIDMM_DMA_BUFFER *v74; // rdi
  VIDMM_EXPORT *v75; // rsi
  __int64 v76; // rbx
  struct _D3DDDI_PATCHLOCATIONLIST *DmaPatchLocationList; // rax
  unsigned int v78; // esi
  int v79; // eax
  __int64 v80; // rcx
  int v81; // edx
  int v82; // eax
  char *v83; // rbx
  struct VIDMM_ALLOC **v84; // rsi
  __int64 v85; // rax
  union _LARGE_INTEGER *v86; // rcx
  struct DXGALLOCATION *v87; // rsi
  char v88; // dl
  __int64 v89; // rcx
  __int64 v90; // rcx
  char *v91; // rcx
  char *v92; // rcx
  DXGHWQUEUE *v93; // rdx
  int v94; // eax
  int v95; // esi
  union _LARGE_INTEGER *v96; // [rsp+20h] [rbp-E0h]
  char v97; // [rsp+60h] [rbp-A0h]
  bool v98; // [rsp+61h] [rbp-9Fh]
  char v99; // [rsp+62h] [rbp-9Eh]
  struct VIDMM_DMA_BUFFER *v100; // [rsp+68h] [rbp-98h] BYREF
  struct DXGALLOCATION *v101; // [rsp+70h] [rbp-90h]
  unsigned int v102; // [rsp+7Ch] [rbp-84h] BYREF
  char *v103; // [rsp+80h] [rbp-80h] BYREF
  UINT v104; // [rsp+88h] [rbp-78h] BYREF
  int v105; // [rsp+8Ch] [rbp-74h] BYREF
  struct DXGALLOCATION *v106; // [rsp+90h] [rbp-70h]
  struct VIDMM_ALLOC **v107; // [rsp+98h] [rbp-68h]
  D3DGPU_VIRTUAL_ADDRESS v108; // [rsp+A0h] [rbp-60h] BYREF
  DXGHWQUEUE *v109; // [rsp+A8h] [rbp-58h]
  unsigned int v110; // [rsp+B0h] [rbp-50h]
  LARGE_INTEGER v111; // [rsp+B8h] [rbp-48h] BYREF
  struct COREDEVICEACCESS *v112; // [rsp+C0h] [rbp-40h]
  __int64 v113; // [rsp+C8h] [rbp-38h] BYREF
  struct _DXGKARG_SIGNALMONITOREDFENCE v114; // [rsp+D0h] [rbp-30h] BYREF
  struct _DXGKARG_SIGNALMONITOREDFENCE v115; // [rsp+120h] [rbp+20h] BYREF
  int v116; // [rsp+170h] [rbp+70h] BYREF
  int v117; // [rsp+174h] [rbp+74h]
  int v118; // [rsp+178h] [rbp+78h]
  int v119; // [rsp+17Ch] [rbp+7Ch]
  int v120; // [rsp+180h] [rbp+80h]
  __int64 v121; // [rsp+184h] [rbp+84h] BYREF
  int v122; // [rsp+18Ch] [rbp+8Ch]
  struct DXGALLOCATION *v123; // [rsp+190h] [rbp+90h]
  struct DXGALLOCATION *v124; // [rsp+198h] [rbp+98h]
  _QWORD v125[12]; // [rsp+1A0h] [rbp+A0h] BYREF

  v9 = a7;
  v11 = a5;
  v12 = 1;
  v13 = a9;
  Value = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)a6->Flags.Value;
  v101 = a4;
  v109 = a3;
  v106 = a5;
  v100 = a7;
  v112 = a9;
  v97 = 0;
  v103 = 0LL;
  v99 = 0;
  v98 = 1;
  a6->MultipassOffset = 0;
  if ( (*(_BYTE *)&Value & 4) != 0 && !a4 )
  {
    WdLogSingleEntry0(2LL);
    v15 = 8981LL;
    v16 = L"Source allocation cannot be NULL for Flip present";
LABEL_4:
    WdLogGlobalForLineNumber = v15;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v16, v15, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v17) = -1073741823;
LABEL_5:
    LODWORD(v9) = 0;
    goto LABEL_6;
  }
  if ( (*((_DWORD *)this + 98) & 0x10) != 0 && !a3 )
  {
    WdLogSingleEntry0(2LL);
    v15 = 8991LL;
    v16 = L"Hardware context present is not provided with hardware queue array";
    goto LABEL_4;
  }
  while ( 1 )
  {
    if ( !v9 )
    {
      LODWORD(v17) = DXGCONTEXT::AcquireDmaBuffer(this, &v100, v13, 0);
      if ( (int)v17 < 0 )
      {
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 9006;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to acquire DMA buffer for Present. Context: 0x%I64x",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_160;
      }
      v9 = v100;
      if ( !v100 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9011;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pVidMmDmaBuffer", 9011LL, 0LL, 0LL, 0LL, 0LL);
        v9 = v100;
      }
      v11 = v106;
      a4 = v101;
    }
    v117 &= 2u;
    v116 = 0;
    if ( a4 )
      v22 = *((_DWORD *)a4 + 4);
    else
      v22 = 0;
    v119 &= 2u;
    v118 = v22;
    if ( v11 )
      v23 = *((_DWORD *)v11 + 4);
    else
      v23 = 0;
    v120 = v23;
    v122 = 0;
    v123 = a4;
    v121 = v121 & 2 | 1;
    v24 = *((_QWORD *)this + 2);
    v124 = v11;
    v104 = 0;
    v111.QuadPart = 0LL;
    v108 = 0LL;
    v113 = 0LL;
    v25 = *(_QWORD *)(v24 + 16);
    v26 = *(_QWORD *)(v25 + 16);
    v27 = *(_QWORD *)(v25 + 760);
    if ( *(int *)(v26 + 2736) >= 0x2000 || (v28 = 0, *(_BYTE *)(v26 + 3036)) )
      v28 = 1;
    LOBYTE(a4) = v12;
    LODWORD(v96) = 1;
    v29 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *, int *, __int64, struct DXGALLOCATION *, union _LARGE_INTEGER *, UINT *, LARGE_INTEGER *, unsigned __int64, __int64 *, char *, unsigned __int64))(*(_QWORD *)(v27 + 8) + 536LL))(
            v9,
            &v116,
            3LL,
            a4,
            v96,
            &v104,
            &v111,
            (unsigned __int64)&v108 & -(__int64)(*((_BYTE *)this + 430) != 0),
            &v113,
            (char *)a8 + 200,
            ((unsigned __int64)&v121 + 4) & -(__int64)(v28 != 0));
    LODWORD(v9) = 0;
    LODWORD(v17) = v29;
    if ( v29 < 0 )
    {
      WdLogSingleEntry2(3LL, this, v29);
      WdLogGlobalForLineNumber = 9065;
LABEL_160:
      v18 = 0;
      goto LABEL_7;
    }
    v97 = 1;
    (*(void (__fastcall **)(struct VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 760LL)
                                                                           + 8LL)
                                                               + 480LL))(
      v100,
      &v103);
    a6->pDmaBuffer = v103;
    a6->DmaSize = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                               + 760LL)
                                                                                   + 8LL)
                                                                       + 496LL))(v100);
    v30 = (void *)(*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                               + 760LL)
                                                                                   + 8LL)
                                                                       + 528LL))(v100);
    v31 = v104;
    v32 = v109;
    a6->pDmaBufferPrivateData = v30;
    v33 = *((_DWORD *)this + 52);
    a6->DmaBufferSegmentId = v31;
    a6->DmaBufferPhysicalAddress = v111;
    a6->DmaBufferPrivateDataSize = v33;
    if ( v99 )
      break;
LABEL_43:
    *(_DWORD *)a8 ^= (*(_DWORD *)a8 ^ (*((unsigned __int8 *)this + 430) << 27)) & 0x8000000;
    if ( !v98 )
      goto LABEL_85;
    v38 = *((_QWORD *)this + 2);
    if ( *((_BYTE *)this + 430) )
    {
      memset(v125, 0, sizeof(v125));
      v39 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 760LL)
                                                                             + 8LL)
                                                                 + 520LL))(v100);
      v40 = v101;
      v9 = (struct VIDMM_DMA_BUFFER *)v39;
      v125[4] = *(_QWORD *)(v39 + 24);
      if ( v101 )
      {
        v41 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL);
        v42 = *(_QWORD *)(v41 + 8);
        LOBYTE(v41) = *((_BYTE *)this + 431) != 0;
        v43 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v42 + 224))(
                *((_QWORD *)v101 + 3),
                v41,
                *((unsigned int *)this + 97));
        v40 = v101;
        v125[5] = v43;
      }
      if ( (a6->Flags.Value & 4) != 0 )
      {
        v44 = *((_QWORD *)this + 2);
        v45 = *((_QWORD *)v40 + 6);
        v105 = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, int *, _QWORD *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 16)
                                                                                                + 760LL)
                                                                                    + 8LL)
                                                                        + 192LL))(
          *(_QWORD *)(*(_QWORD *)(v44 + 16) + 768LL),
          *(_QWORD *)(v45 + 8),
          &v105,
          &v125[6],
          0LL);
        LOWORD(v125[7]) = v105;
      }
      else if ( v106 )
      {
        v46 = *((_QWORD *)v9 + 6);
        LODWORD(v9) = 0;
        v47 = *((_BYTE *)this + 431) == 0;
        v48 = *((unsigned int *)this + 97);
        v125[8] = v46;
        LOBYTE(v40) = !v47;
        v125[9] = (*(__int64 (__fastcall **)(_QWORD, struct DXGALLOCATION *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL)
                                                                                                 + 8LL)
                                                                                     + 224LL))(
                    *((_QWORD *)v106 + 3),
                    v40,
                    v48);
        if ( !v125[9] )
        {
          LODWORD(v17) = -1073741811;
          WdLogSingleEntry2(2LL, this, -1073741811LL);
          WdLogGlobalForLineNumber = 9207;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"0x%I64x Rejecting Present because the virtual address is not assigned to the destination allocation, ntStatus 0x%I64x",
            (__int64)this,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_6;
        }
      }
      a6->DmaBufferGpuVirtualAddress = v108;
      a6->pAllocationList = (DXGK_ALLOCATIONLIST *)v125;
      v49 = 0;
      a6->pPatchLocationListOut = 0LL;
    }
    else
    {
      DmaAllocationList = VIDMM_EXPORT::VidMmGetDmaAllocationList(
                            *(VIDMM_EXPORT **)(*(_QWORD *)(v38 + 16) + 760LL),
                            v100);
      v51 = v100;
      a6->pAllocationList = DmaAllocationList;
      a6->pPatchLocationListOut = VIDMM_EXPORT::VidMmGetDmaPatchLocationList(
                                    *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                                    v51);
      v49 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 760LL)
                                                                             + 8LL)
                                                                 + 504LL))(v100);
    }
    a6->PatchLocationListOutSize = v49;
    v52 = *((_QWORD *)this + 2);
    v53 = v52;
    if ( (*((_DWORD *)this + 98) & 0x10) == 0
      || (v54 = *(ADAPTER_RENDER **)(v52 + 16),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v54 + 2) + 216LL) + 64LL) + 40LL) + 28LL) < 0xA002u) )
    {
      v55 = 0LL;
      if ( (a6->Flags.Value & 1) != 0
        || (v53 = *((_QWORD *)this + 2), !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v52 + 16) + 16LL) + 3057LL)) )
      {
        v55 = (void *)*((_QWORD *)this + 23);
        v52 = v53;
      }
      v56 = *(ADAPTER_RENDER **)(v52 + 16);
      goto LABEL_62;
    }
    LODWORD(v17) = ADAPTER_RENDER::DdiPresentToHwQueue(v54, *((void **)v32 + 4), a6);
    if ( (_DWORD)v17 == -1073741822 )
    {
      v55 = (void *)*((_QWORD *)this + 23);
      v56 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL);
LABEL_62:
      LODWORD(v17) = ADAPTER_RENDER::DdiPresent(v56, v55, a6);
    }
    if ( *((_BYTE *)this + 430) && (a6->pPatchLocationListOut || a6->PatchLocationListOutSize) )
    {
      WdLogSingleEntry5(0LL, 275LL, 9LL, a6, 0LL, 0LL);
      WdLogGlobalForLineNumber = 9294;
    }
    if ( (_DWORD)v17 == -1071775743 )
    {
      if ( (a6->Flags.Value & 4) != 0 )
      {
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 9304;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"0x%I64x Driver must not return STATUS_GRAPHICS_INSUFFICIENT_DMA_BUFFER for Flip",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        v57 = -1073741823LL;
        LODWORD(v17) = -1073741823;
        goto LABEL_70;
      }
    }
    else if ( (int)v17 < 0 )
    {
      v57 = (int)v17;
      if ( (_DWORD)v17 == -1071775736 )
      {
        WdLogSingleEntry2(4LL, this, -1071775736LL);
        WdLogGlobalForLineNumber = 9315;
        goto LABEL_5;
      }
LABEL_70:
      WdLogSingleEntry2(2LL, this, v57);
      WdLogGlobalForLineNumber = 9319;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x Driver failed Present 0x%I64x",
        (__int64)this,
        v57,
        0LL,
        0LL,
        0LL);
      goto LABEL_5;
    }
    if ( *((_BYTE *)this + 430) )
    {
      if ( a6->pAllocationList != (DXGK_ALLOCATIONLIST *)v125 )
      {
        WdLogSingleEntry0(1LL);
        v58 = 9330LL;
        v59 = L"pPresentDdiArg->pAllocationInfo == AllocationInfo";
LABEL_77:
        WdLogGlobalForLineNumber = v58;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, v59, v58, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else if ( a6->pAllocationList != (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 520LL))(v100) )
    {
      WdLogSingleEntry0(1LL);
      v58 = 9334LL;
      v59 = L"pPresentDdiArg->pAllocationList == GetVidMmExport()->VidMmGetDmaAllocationList(pVidMmDmaBuffer)";
      goto LABEL_77;
    }
    v98 = (_DWORD)v17 == -1071775743;
    if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
    {
      v60 = v109;
      LODWORD(v17) = DXGHWQUEUE::EnsureKmSubmissionProgressSyncObject(v109);
      if ( (int)v17 < 0 )
        goto LABEL_5;
      v61 = *((_QWORD *)v60 + 12) + 1LL;
      *((_QWORD *)v60 + 12) = v61;
      if ( !*((_BYTE *)this + 296) )
      {
        v115.DmaBufferPrivateDataSize = a6->DmaBufferPrivateDataSize;
        v115.DmaSize = a6->DmaSize;
        v115.MultipassOffset = a6->MultipassOffset;
        v115.pDmaBuffer = a6->pDmaBuffer;
        v115.pDmaBufferPrivateData = a6->pDmaBufferPrivateData;
        v115.DmaBufferGpuVirtualAddress = v108;
        *((_DWORD *)&v115.KernelSubmissionType + 1) = 0;
        *(&v115.DmaSize + 1) = 0;
        v62 = *((_QWORD *)v60 + 11);
        v115.MonitoredFenceGpuVa = *(_QWORD *)(v62 + 48);
        v115.MonitoredFenceCpuVa = *(void **)(v62 + 64);
        v115.hHwQueue = (HANDLE)*((_QWORD *)v60 + 4);
        v63 = *((_QWORD *)this + 2);
        v115.MonitoredFenceValue = v61;
        v64 = (void *)*((_QWORD *)this + 23);
        v115.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_PRESENTBLT;
        v65 = ADAPTER_RENDER::DdiSignalMonitoredFence(*(ADAPTER_RENDER **)(v63 + 16), v64, &v115);
        LODWORD(v17) = v65;
        a6->DmaBufferPrivateDataSize = v115.DmaBufferPrivateDataSize;
        a6->DmaSize = v115.DmaSize;
        a6->MultipassOffset = v115.MultipassOffset;
        LODWORD(v9) = 0;
        a6->pDmaBuffer = v115.pDmaBuffer;
        a6->pDmaBufferPrivateData = v115.pDmaBufferPrivateData;
        if ( v65 == -1071775743 )
        {
          v99 = 1;
        }
        else if ( v65 < 0 )
        {
          WdLogSingleEntry2(3LL, this, v65);
          WdLogGlobalForLineNumber = 9391;
          goto LABEL_6;
        }
      }
    }
LABEL_85:
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 736LL)
                                                                + 8LL)
                                                    + 576LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 744LL))
      && a6->pDmaBuffer <= v103 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9409;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"GetVidSchExport()->VidSchIsTDRPending(GetRenderCore()->GetVidSchGlobal()) || static_cast<BYTE*>(pPresentDdiArg->"
         "pDmaBuffer) > static_cast<BYTE*>(pDmaBuffer)",
        9409LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v66 = (*(unsigned int (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 760LL)
                                                                                + 8LL)
                                                                    + 496LL))(v100);
    v67 = (int)v103;
    if ( a6->pDmaBuffer > &v103[v66] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9410;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"static_cast<BYTE*>(pPresentDdiArg->pDmaBuffer) <= static_cast<BYTE*>(pDmaBuffer)+GetVidMmExport()->VidMmGetDmaBu"
         "fferLength(pVidMmDmaBuffer)",
        9410LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v67 = (int)v103;
    }
    v68 = LODWORD(a6->pDmaBuffer) - v67;
    v69 = *((_QWORD *)this + 2);
    v110 = v68;
    v70 = LODWORD(a6->pDmaBufferPrivateData)
        - (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v69 + 16) + 760LL)
                                                                           + 8LL)
                                                               + 528LL))(v100);
    v71 = *((_QWORD *)this + 2);
    LODWORD(v107) = v70;
    if ( (*(unsigned int (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v71 + 16)
                                                                                           + 760LL)
                                                                               + 8LL)
                                                                   + 496LL))(v100) >= v68 )
    {
      LODWORD(v72) = 0;
    }
    else
    {
      WdLogSingleEntry0(1LL);
      LODWORD(v72) = 0;
      WdLogGlobalForLineNumber = 9417;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"GetVidMmExport()->VidMmGetDmaBufferLength(pVidMmDmaBuffer) >= DMABufferLength",
        9417LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    (*(void (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 760LL)
                                                                  + 8LL)
                                                      + 488LL))(v100);
    v103 = 0LL;
    if ( !*((_BYTE *)this + 430) )
    {
      if ( a6->pPatchLocationListOut < VIDMM_EXPORT::VidMmGetDmaPatchLocationList(
                                         *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                                         v100) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9432;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pPresentDdiArg->pPatchLocationListOut >= GetVidMmExport()->VidMmGetDmaPatchLocationList(pVidMmDmaBuffer)",
          9432LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v74 = v100;
      v75 = *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL);
      v76 = (*(unsigned int (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*((_QWORD *)v75 + 1) + 504LL))(v100);
      if ( a6->pPatchLocationListOut > &VIDMM_EXPORT::VidMmGetDmaPatchLocationList(v75, v74)[v76] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9433;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pPresentDdiArg->pPatchLocationListOut <= GetVidMmExport()->VidMmGetDmaPatchLocationList(pVidMmDmaBuffer) + Get"
           "VidMmExport()->VidMmGetDmaPatchLocationListLength(pVidMmDmaBuffer)",
          9433LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v72 = 0xAAAAAAAAAAAAAAABuLL
          * (((char *)a6->pPatchLocationListOut
            - (char *)VIDMM_EXPORT::VidMmGetDmaPatchLocationList(
                        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                        v100)) >> 3);
      if ( (*(unsigned int (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 760LL)
                                                                                 + 8LL)
                                                                     + 504LL))(v100) < (unsigned int)v72 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9443;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"GetVidMmExport()->VidMmGetDmaPatchLocationListLength(pVidMmDmaBuffer) >= PatchLocationTableLength",
          9443LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (qword_14015B4C0 & 0x10) != 0 )
      {
        DmaPatchLocationList = VIDMM_EXPORT::VidMmGetDmaPatchLocationList(
                                 *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                                 v100);
        TraceDxgkPatchLocationList((int)this, (char)v100, v72, (__int64)DmaPatchLocationList);
      }
    }
    v78 = v110;
    if ( !v110
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 736LL)
                                                                + 8LL)
                                                    + 576LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 744LL)) )
    {
      WdLogSingleEntry0(v78 + 1);
      WdLogGlobalForLineNumber = 9458;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"DMABufferLength > 0 || GetVidSchExport()->VidSchIsTDRPending(GetRenderCore()->GetVidSchGlobal())",
        9458LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v79 = *(_DWORD *)a8;
    if ( (*(_DWORD *)a8 & 0x20) != 0 )
    {
      if ( v98 || v99 )
      {
        v80 = 1LL;
        v81 = 64;
      }
      else
      {
        v80 = 0LL;
        v81 = 0;
      }
      *(_DWORD *)a8 = v81 | v79 & 0xFFFFFFBF;
      if ( (_DWORD)v80 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v80, (__int64)"h", v73, 1);
    }
    else
    {
      *(_DWORD *)a8 = v79 & 0xFFFFFFBF;
    }
    *((_QWORD *)a8 + 1) = v100;
    v82 = (int)v107;
    *((_DWORD *)a8 + 19) = (_DWORD)v107;
    *((_DWORD *)a8 + 13) = v78;
    *((_DWORD *)a8 + 12) = 0;
    *((_DWORD *)a8 + 15) = 3;
    *((_DWORD *)a8 + 14) = 0;
    *((_DWORD *)a8 + 17) = v72;
    *((_DWORD *)a8 + 16) = 0;
    *((_DWORD *)a8 + 18) = 0;
    if ( *((_BYTE *)this + 430) )
    {
      *((_DWORD *)a8 + 20) = v82;
      *((_DWORD *)a8 + 19) = a6->DmaBufferPrivateDataSize;
    }
    if ( *((_BYTE *)a8 + 356) )
    {
      v83 = (char *)a8 + 600;
      v84 = (struct VIDMM_ALLOC **)((char *)a8
                                  + *((_DWORD *)a8 + 151) * ((8 * *((_DWORD *)a8 + 152) + 231) & 0xFFFFFFF8)
                                  + 648);
    }
    else
    {
      v83 = (char *)a8 + 496;
      v84 = (struct VIDMM_ALLOC **)((char *)a8 + 504);
    }
    v47 = *((_DWORD *)a8 + 30) == 4;
    v107 = v84;
    if ( v47 )
    {
      if ( !v101 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9496;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pSrcAllocation", 9496LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( (*(_DWORD *)a8 & 0x40) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9497;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pVidSchSubmitData->SubmitFlags.SplitedPresent == FALSE",
          9497LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)v83 = *(_DWORD *)v83 & 0xFFFFFC00 | 1;
      if ( (int)VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                  *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 792LL),
                  *((struct VIDMM_MULTI_ALLOC **)v101 + 3),
                  v84) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9516;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(RefStatus)", 9516LL, 0LL, 0LL, 0LL, 0LL);
      }
      v85 = *((_QWORD *)this + 2);
      v102 = 0;
      if ( *((_BYTE *)a8 + 356) )
        v86 = (union _LARGE_INTEGER *)((char *)a8
                                     + *((_DWORD *)a8 + 151) * ((8 * *((_DWORD *)a8 + 152) + 231) & 0xFFFFFFF8)
                                     + 640);
      else
        v86 = (union _LARGE_INTEGER *)((char *)a8 + 520);
      v87 = v101;
      VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
        *(VIDMM_EXPORT **)(*(_QWORD *)(v85 + 16) + 760LL),
        *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v85 + 16) + 768LL),
        *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(*((_QWORD *)v101 + 6) + 8LL),
        &v102,
        v86,
        0LL);
      v88 = *((_BYTE *)a8 + 356);
      if ( v88 )
      {
        *(_WORD *)((char *)a8 + *((_DWORD *)a8 + 151) * ((8 * *((_DWORD *)a8 + 152) + 231) & 0xFFFFFFF8) + 632) = v102;
        v88 = *((_BYTE *)a8 + 356);
      }
      else
      {
        *((_DWORD *)a8 + 139) ^= (*((_DWORD *)a8 + 139) ^ (v102 << 17)) & 0x3E0000;
      }
      v89 = *((_QWORD *)v87 + 5);
      if ( v89 && (*(_DWORD *)(v89 + 4) & 8) != 0 )
        v90 = *(_QWORD *)(*(_QWORD *)(v89 + 56) + 184LL);
      else
        v90 = 0LL;
      if ( v88 )
        *(_QWORD *)((char *)a8 + *((_DWORD *)a8 + 151) * ((8 * *((_DWORD *)a8 + 152) + 231) & 0xFFFFFFF8) + 656) = v90;
      else
        *((_QWORD *)a8 + 72) = v90;
      if ( *((_BYTE *)a8 + 356) )
        v91 = (char *)a8 + *((_DWORD *)a8 + 151) * ((8 * *((_DWORD *)a8 + 152) + 231) & 0xFFFFFFF8) + 624;
      else
        v91 = (char *)a8 + 512;
      *(_QWORD *)v91 = *(_QWORD *)(*((_QWORD *)v87 + 6) + 16LL);
      if ( *((_BYTE *)a8 + 356) )
        v92 = (char *)a8 + *((_DWORD *)a8 + 151) * ((8 * *((_DWORD *)a8 + 152) + 231) & 0xFFFFFFF8) + 616;
      else
        v92 = (char *)a8 + 568;
      *(_QWORD *)v92 = *((_QWORD *)this + 23);
      if ( *((_BYTE *)a8 + 356) )
        *((_DWORD *)a8 + 160) = -1;
    }
    else if ( (*(_DWORD *)v83 & 0x3FF) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9555;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pVidSchFlipMultiplaneOverlay->ToLayers == 0",
        9555LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( *((struct _KTHREAD **)this + 56) != KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9558;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"GetContextLock()->IsExclusiveOwner()",
        9558LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
    {
      v93 = v109;
      *((_QWORD *)a8 + 62) = *((_QWORD *)v109 + 12);
      *((_DWORD *)a8 + 126) = 0;
      *((_QWORD *)a8 + 65) = *(_QWORD *)(*((_QWORD *)v93 + 11) + 64LL);
      *((_QWORD *)a8 + 64) = *(_QWORD *)(*((_QWORD *)v93 + 11) + 48LL);
      v94 = VIDSCH_EXPORT::VidSchSubmitCommandToHwQueue(
              *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
              *((struct VIDSCH_HW_QUEUE **)v93 + 5),
              a8);
    }
    else
    {
      v94 = VIDSCH_EXPORT::VidSchSubmitCommand(
              *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
              *((struct _VIDSCH_CONTEXT **)this + 32),
              a8);
    }
    v95 = v94;
    if ( v94 < 0 )
    {
      VIDSCH_EXPORT::VidSchFlushPendingCommand(
        *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
        *((struct _VIDSCH_CONTEXT **)this + 32));
      if ( (*(_DWORD *)v83 & 0x3FF) != 0 )
      {
        LODWORD(v9) = 0;
        if ( *v107 )
          VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
            *((_DWORD *)a8 + 34),
            *v107);
      }
      else
      {
        LODWORD(v9) = 0;
      }
      LODWORD(v17) = v95;
      goto LABEL_6;
    }
    a4 = v101;
    v9 = 0LL;
    v11 = v106;
    v12 = 0;
    v13 = v112;
    v100 = 0LL;
    if ( !v99 && !v98 )
      return (unsigned int)v17;
  }
  v34 = *((_QWORD *)v32 + 11);
  v114.DmaBufferPrivateDataSize = v33;
  v114.DmaSize = a6->DmaSize;
  v114.MultipassOffset = a6->MultipassOffset;
  v114.pDmaBuffer = a6->pDmaBuffer;
  v114.DmaBufferGpuVirtualAddress = v108;
  v114.pDmaBufferPrivateData = v30;
  v35 = (void *)*((_QWORD *)this + 23);
  *((_DWORD *)&v114.KernelSubmissionType + 1) = 0;
  *(&v114.DmaSize + 1) = 0;
  v114.MonitoredFenceGpuVa = *(_QWORD *)(v34 + 48);
  v114.MonitoredFenceCpuVa = *(void **)(v34 + 64);
  v114.MonitoredFenceValue = *((_QWORD *)v32 + 12);
  v114.hHwQueue = (HANDLE)*((_QWORD *)v32 + 4);
  v36 = *((_QWORD *)this + 2);
  v114.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_PRESENTBLT;
  v37 = ADAPTER_RENDER::DdiSignalMonitoredFence(*(ADAPTER_RENDER **)(v36 + 16), v35, &v114);
  v17 = v37;
  a6->DmaBufferPrivateDataSize = v114.DmaBufferPrivateDataSize;
  a6->DmaSize = v114.DmaSize;
  a6->MultipassOffset = v114.MultipassOffset;
  a6->pDmaBuffer = v114.pDmaBuffer;
  a6->pDmaBufferPrivateData = v114.pDmaBufferPrivateData;
  if ( v37 != -1071775743 )
  {
    if ( v37 < 0 )
      goto LABEL_162;
    v99 = 0;
    goto LABEL_43;
  }
  WdLogSingleEntry5(0LL, 275LL, 40LL, this, 0LL, 0LL);
  WdLogGlobalForLineNumber = 9126;
LABEL_162:
  WdLogSingleEntry2(3LL, this, v17);
  WdLogGlobalForLineNumber = 9133;
LABEL_6:
  v18 = v97;
LABEL_7:
  if ( v100 )
  {
    if ( v103 )
    {
      VIDMM_EXPORT::VidMmEndDmaBufferCPUAccess(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
        v100);
      if ( (*((_DWORD *)this + 98) & 0x10) == 0 )
        VIDSCH_EXPORT::VidSchFlushPendingCommand(
          *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
          *((struct _VIDSCH_CONTEXT **)this + 32));
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
      && *((_DWORD *)a8 + 50) )
    {
      do
      {
        v20 = (struct VIDMM_ALLOC *)*((_QWORD *)a8 + (unsigned int)v9 + 26);
        if ( v20 )
        {
          VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
            0,
            v20);
          *((_QWORD *)a8 + (unsigned int)v9 + 26) = 0LL;
        }
        LODWORD(v9) = (_DWORD)v9 + 1;
      }
      while ( (unsigned int)v9 < *((_DWORD *)a8 + 50) );
      v19 = *((_QWORD *)this + 2);
    }
    if ( v18 )
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(v19 + 16) + 760LL), v100);
    VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL), v100);
  }
  return (unsigned int)v17;
}
