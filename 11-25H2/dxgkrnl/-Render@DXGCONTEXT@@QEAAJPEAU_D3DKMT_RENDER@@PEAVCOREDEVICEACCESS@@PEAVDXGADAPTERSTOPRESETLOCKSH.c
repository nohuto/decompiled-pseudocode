/*
 * XREFs of ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14034562C
 * Callers:
 *     DxgkRender @ 0x1403444D0 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x14035A2D0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14001428C (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1400161F8 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0ppqx_EtwWriteTransfer @ 0x140016510 (McTemplateK0ppqx_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x14002B1A0 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x140031440 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1400339D0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?VidSchSubmitCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140035F70 (-VidSchSubmitCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?VidSchSubmitCommandToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x140037990 (-VidSchSubmitCommandToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@.c)
 *     ?DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ @ 0x14003EAD8 (-DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ.c)
 *     ?VidMmGetDmaPatchLocationList@VIDMM_EXPORT@@QEAAPEAU_D3DDDI_PATCHLOCATIONLIST@@PEAUVIDMM_DMA_BUFFER@@@Z @ 0x1400410B4 (-VidMmGetDmaPatchLocationList@VIDMM_EXPORT@@QEAAPEAU_D3DDDI_PATCHLOCATIONLIST@@PEAUVIDMM_DMA_BUF.c)
 *     ?DisableReferenceDmaBuffer@DXGCONTEXT@@QEAAEXZ @ 0x1400422F0 (-DisableReferenceDmaBuffer@DXGCONTEXT@@QEAAEXZ.c)
 *     ?VidMmAcquireDmaBuffer@VIDMM_EXPORT@@QEAAJPEAUVIDMM_DMA_POOL@@_N1PEAPEAUVIDMM_DMA_BUFFER@@@Z @ 0x140042450 (-VidMmAcquireDmaBuffer@VIDMM_EXPORT@@QEAAJPEAUVIDMM_DMA_POOL@@_N1PEAPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z @ 0x140042D24 (-VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x14004CC40 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004D530 (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     TraceDxgkPatchLocationList @ 0x14004F73C (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z @ 0x140057794 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x140064364 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z @ 0x140076F44 (-VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1402B6018 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140317D20 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x14032EA88 (-EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x14032EC24 (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x14032F044 (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
 *     ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x14032F100 (-DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z.c)
 *     ?DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x140393C9C (-DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1403C0158 (-DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Render(
        DXGCONTEXT *this,
        __int64 a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct DXGALLOCATION **a6,
        struct DXGHWQUEUE **a7)
{
  int v9; // eax
  __int64 result; // rax
  D3DKMT_RENDERFLAGS v11; // eax
  ULONG v12; // ecx
  unsigned int v13; // r12d
  int v14; // eax
  unsigned int v15; // ebx
  char *v16; // rcx
  unsigned __int64 v17; // rbx
  struct VIDMM_DMA_BUFFER *v18; // r9
  unsigned int v19; // eax
  int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  char v25; // r14
  struct VIDMM_DMA_POOL *v26; // r14
  int v27; // eax
  int v28; // eax
  int v29; // r14d
  D3DKMT_RENDERFLAGS v30; // eax
  void *v31; // rdx
  __int64 v32; // rax
  _QWORD *v33; // r14
  __int64 v34; // r9
  UINT v35; // r11d
  __int64 v36; // r8
  unsigned __int64 v37; // rdx
  D3DKMT_RENDERFLAGS v38; // eax
  D3DDDI_ALLOCATIONLIST *v39; // r10
  int v40; // eax
  int v41; // eax
  __int64 v42; // r8
  unsigned int AllocationListSize; // ecx
  struct DXGGLOBAL *Global; // rax
  size_t v45; // r8
  void *v46; // rcx
  int v47; // eax
  __int64 v48; // rsi
  struct DXGALLOCATION **v49; // r12
  struct DXGHWQUEUE **v50; // rcx
  struct DXGHWQUEUE *v51; // rdx
  __int64 v52; // rcx
  ADAPTER_RENDER *v53; // r9
  void *v54; // rax
  void *v55; // rdx
  __int64 v56; // rax
  int v57; // eax
  int v58; // ecx
  __int64 v59; // rax
  _QWORD *v60; // r11
  __int64 v61; // rax
  UINT v62; // r10d
  unsigned __int64 v63; // r8
  struct _D3DDDI_PATCHLOCATIONLIST *DmaPatchLocationList; // rax
  int v65; // eax
  int v66; // r9d
  unsigned int v67; // ecx
  int v68; // eax
  unsigned int v69; // ecx
  int v70; // eax
  _QWORD *v71; // rcx
  int v72; // r12d
  struct DXGCONTEXT **v73; // rax
  struct DXGHWQUEUE **v74; // rdx
  __int64 v75; // rcx
  int v76; // eax
  unsigned __int64 v77; // rax
  UINT64 v78; // rax
  int v79; // eax
  const char *v80; // rdx
  __int64 v81; // rbx
  struct DXGCONTEXT **v82; // r13
  __int64 v83; // rbx
  _DWORD *v84; // r15
  __int64 i; // rbx
  struct VIDMM_ALLOC *v86; // r9
  int v87; // r14d
  __int64 v88; // rbx
  __int64 v89; // rbx
  struct VIDMM_DMA_BUFFER **v90; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v91; // [rsp+28h] [rbp-F8h]
  struct DXGK_PRESENT_PARAMS *v92; // [rsp+30h] [rbp-F0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v93; // [rsp+38h] [rbp-E8h]
  char v94; // [rsp+A0h] [rbp-80h]
  char v95; // [rsp+A1h] [rbp-7Fh]
  char v96; // [rsp+A2h] [rbp-7Eh]
  char v97; // [rsp+A3h] [rbp-7Dh]
  struct VIDMM_DMA_BUFFER *v98; // [rsp+A8h] [rbp-78h] BYREF
  signed int v99; // [rsp+B0h] [rbp-70h]
  int v100; // [rsp+B4h] [rbp-6Ch]
  unsigned __int64 v101; // [rsp+B8h] [rbp-68h]
  int v102; // [rsp+C0h] [rbp-60h]
  _DWORD *v103; // [rsp+C8h] [rbp-58h]
  UINT v104; // [rsp+D0h] [rbp-50h] BYREF
  unsigned __int64 v105; // [rsp+D8h] [rbp-48h] BYREF
  void *v106; // [rsp+E0h] [rbp-40h] BYREF
  PVOID Entry; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v108; // [rsp+F0h] [rbp-30h]
  struct DXGCONTEXT *v109; // [rsp+F8h] [rbp-28h]
  struct DXGHWQUEUE **v110; // [rsp+100h] [rbp-20h]
  COREDEVICEACCESS *v111; // [rsp+108h] [rbp-18h]
  struct _DXGKARG_RENDER Src; // [rsp+110h] [rbp-10h] BYREF
  int v113; // [rsp+180h] [rbp+60h]
  _QWORD *v114; // [rsp+188h] [rbp+68h] BYREF
  LARGE_INTEGER v115; // [rsp+190h] [rbp+70h] BYREF
  struct DXGALLOCATION **v116; // [rsp+198h] [rbp+78h]
  struct DXGCONTEXT **v117; // [rsp+1A0h] [rbp+80h]
  struct _DXGKARG_RENDERGDI v118; // [rsp+1B0h] [rbp+90h] BYREF
  struct DXGADAPTERSTOPRESETLOCKSHARED *v119; // [rsp+200h] [rbp+E0h]
  struct _DXGKARG_SIGNALMONITOREDFENCE v120; // [rsp+210h] [rbp+F0h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v121; // [rsp+260h] [rbp+140h] BYREF

  v117 = a5;
  v116 = a6;
  v9 = *((_DWORD *)this + 98);
  v119 = a4;
  v111 = a3;
  v110 = a7;
  if ( (v9 & 0x10) != 0 && !a7 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 470;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Hardware context render is not provided with hardware queue array",
      470LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  if ( (v9 & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 477;
    return result;
  }
  v11 = *(D3DKMT_RENDERFLAGS *)(a2 + 68);
  v12 = *(_DWORD *)(a2 + 80) + 1;
  v13 = ((*(_BYTE *)&v11 & 8) << 12) | 0x100;
  v95 = 1;
  v102 = v13;
  v101 = v13;
  v100 = v12;
  if ( (*(_BYTE *)&v11 & 0x10) != 0 )
  {
    LOBYTE(v13) = -96;
    v102 = ((*(_BYTE *)&v11 & 8) << 12) | 0x1A0;
    LODWORD(v101) = v102;
    v14 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1, a3);
    v15 = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry2(4LL, this, v14);
      result = v15;
      WdLogGlobalForLineNumber = 509;
      return result;
    }
  }
  if ( (*(_DWORD *)(a2 + 68) & 0x20) != 0 )
    v16 = *(char **)(a2 + 24);
  else
    v16 = (char *)*((_QWORD *)this + 7);
  Src.pCommand = &v16[*(unsigned int *)(a2 + 4)];
  Src.CommandLength = *(_DWORD *)(a2 + 8);
  memset(&Src.CommandLength + 1, 0, 100);
  v17 = v101;
  v106 = 0LL;
  v96 = 0;
  v94 = 1;
  while ( 1 )
  {
    v18 = 0LL;
    v98 = 0LL;
    if ( !*((_BYTE *)this + 434) )
    {
      v19 = *((_DWORD *)this + 18);
      v20 = 3;
      v21 = *((unsigned int *)this + 26);
      v99 = *((_DWORD *)this + 26);
      if ( v19 > 3 )
        v20 = v19;
      if ( !*((_QWORD *)this + 29) )
      {
        LODWORD(v93) = v21;
        LODWORD(v92) = v20;
        LOBYTE(v90) = 1;
        v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, _DWORD, _DWORD, struct DXGK_PRESENT_PARAMS *, struct VIDSCH_SUBMIT_DATA_BASE *, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 408LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                *((unsigned int *)this + 97),
                *(_QWORD *)(*((_QWORD *)this + 2) + 792LL),
                this,
                (_DWORD)v90,
                *((_DWORD *)this + 50),
                v92,
                v93,
                *((_DWORD *)this + 51),
                *((_DWORD *)this + 52));
        *((_QWORD *)this + 29) = v22;
        if ( !v22 )
        {
          WdLogSingleEntry2(3LL, this, -1073741801LL);
          WdLogGlobalForLineNumber = 844;
          LODWORD(v23) = -1073741801;
LABEL_20:
          v24 = *((_QWORD *)this + 29);
          v25 = 0;
          if ( v24 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL)
                                                       + 8LL)
                                           + 424LL))(*((_QWORD *)this + 29));
            *((_QWORD *)this + 29) = 0LL;
          }
          WdLogSingleEntry1(3LL, this);
          WdLogGlobalForLineNumber = 3694;
          goto LABEL_127;
        }
        LODWORD(v23) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 16LL)
                                                                                  + 760LL)
                                                                      + 8LL)
                                                          + 416LL))(v22);
        if ( (int)v23 < 0 )
          goto LABEL_20;
        *((_DWORD *)this + 54) = v99;
        *((_DWORD *)this + 53) = v20;
      }
      v26 = (struct VIDMM_DMA_POOL *)*((_QWORD *)this + 29);
      LOBYTE(v21) = 1;
      v27 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_POOL *, __int64, _QWORD, struct VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 464LL))(
              v26,
              v21,
              0LL,
              &v98);
      LODWORD(v23) = v27;
      if ( v27 == -1071775486 )
      {
        if ( v111 )
        {
          COREDEVICEACCESS::Release(v111);
          LODWORD(v23) = VIDMM_EXPORT::VidMmAcquireDmaBuffer(
                           *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                           v26,
                           0LL,
                           0,
                           &v98);
          v28 = COREDEVICEACCESS::AcquireShared(v111, 0LL);
          v29 = v28;
          if ( v28 < 0 )
          {
            WdLogSingleEntry2(4LL, this, v28);
            WdLogGlobalForLineNumber = 3713;
            COREDEVICEACCESS::AcquireSharedUncheck(v111, v80);
            LODWORD(v23) = v29;
            v25 = 0;
LABEL_127:
            WdLogSingleEntry2(4LL, this, (int)v23);
            WdLogGlobalForLineNumber = 546;
LABEL_146:
            v84 = 0LL;
            goto LABEL_147;
          }
        }
        v25 = 0;
      }
      else
      {
        v25 = 0;
        if ( v27 < 0 )
        {
          WdLogSingleEntry2(4LL, this, v27);
          WdLogGlobalForLineNumber = 3723;
        }
      }
      if ( (int)v23 < 0 )
        goto LABEL_127;
      v18 = v98;
    }
    if ( bTracingEnabled )
    {
      v30 = *(D3DKMT_RENDERFLAGS *)(a2 + 68);
      if ( (*(_BYTE *)&v30 & 0x10) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
        {
          HIDWORD(v93) = 0;
          HIDWORD(v92) = 0;
          McTemplateK0ppxppttqddddddddq_EtwWriteTransfer((__int64)v16, a2, (__int64)a3, 0LL, v18);
        }
      }
      else
      {
        if ( (*(_BYTE *)&v30 & 0x20) != 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
            goto LABEL_42;
          v31 = &EventRenderKm;
        }
        else
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
            goto LABEL_42;
          v31 = &EventRender;
        }
        McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)v31, (__int64)a3, v18);
      }
    }
LABEL_42:
    v32 = *((_QWORD *)this + 2);
    v104 = 0;
    v115.QuadPart = 0LL;
    v105 = 0LL;
    v114 = 0LL;
    v108 = *(_QWORD *)(v32 + 16);
    Entry = 0LL;
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)&Entry);
    v33 = Entry;
    if ( !Entry )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 590;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate VidSchSubmitData",
        590LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v25 = 0;
      LODWORD(v23) = -1073741801;
      goto LABEL_146;
    }
    if ( !DXGCONTEXT::DisableReferenceDmaBuffer(this) || (*(_DWORD *)(a2 + 68) & 0x20) != 0 )
    {
      v35 = *(_DWORD *)(a2 + 12);
      v36 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL);
      v37 = (unsigned __int64)&v105 & -(__int64)(*((_BYTE *)this + 430) != 0);
      v38 = *(D3DKMT_RENDERFLAGS *)(a2 + 68);
      v103 = v33 + 25;
      if ( (*(_BYTE *)&v38 & 0x20) != 0 )
        v39 = *(D3DDDI_ALLOCATIONLIST **)(a2 + 40);
      else
        v39 = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)this + 11);
      LOBYTE(v34) = v95;
      LODWORD(v90) = v100;
      v40 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *, D3DDDI_ALLOCATIONLIST *, _QWORD, __int64, struct VIDMM_DMA_BUFFER **, UINT *, LARGE_INTEGER *, unsigned __int64, _QWORD **, _QWORD *, struct DXGALLOCATION **))(*(_QWORD *)(v36 + 8) + 536LL))(
              v98,
              v39,
              v35,
              v34,
              v90,
              &v104,
              &v115,
              v37,
              &v114,
              v33 + 25,
              v116);
      LODWORD(v23) = v40;
      if ( v40 < 0 )
      {
        WdLogSingleEntry2(3LL, this, v40);
        WdLogGlobalForLineNumber = 619;
        ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v108 + 1424), v33);
        v25 = 0;
        goto LABEL_144;
      }
      v97 = 1;
    }
    else
    {
      LODWORD(v23) = 0;
      v97 = 0;
      v103 = 0LL;
    }
    (*(void (__fastcall **)(struct VIDMM_DMA_BUFFER *, void **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 760LL)
                                                                           + 8LL)
                                                               + 480LL))(
      v98,
      &v106);
    Src.pDmaBuffer = v106;
    Src.DmaSize = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                               + 760LL)
                                                                                   + 8LL)
                                                                       + 496LL))(v98);
    Src.pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL)
                                                                                             + 528LL))(v98);
    Src.DmaBufferPrivateDataSize = *((_DWORD *)this + 52);
    if ( v96 )
    {
      v41 = DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v110, v105);
      v23 = v41;
      if ( v41 == -1071775743 )
      {
        WdLogSingleEntry5(0LL, 275LL, 40LL, this, 0LL, 0LL);
        WdLogGlobalForLineNumber = 654;
LABEL_129:
        WdLogSingleEntry2(3LL, this, v23);
        WdLogGlobalForLineNumber = 661;
LABEL_130:
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
        goto LABEL_131;
      }
      if ( v41 < 0 )
        goto LABEL_129;
      v96 = 0;
    }
    if ( !v94 )
      goto LABEL_89;
    if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) || (*(_DWORD *)(a2 + 68) & 0x20) != 0 )
    {
      Src.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 520LL))(v98);
      Src.AllocationListSize = *(_DWORD *)(a2 + 12);
      Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 15);
      Src.PatchLocationListInSize = *(_DWORD *)(a2 + 16);
      Src.pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 512LL))(v98);
      Src.PatchLocationListOutSize = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL)
                                                                                          + 504LL))(v98);
      Global = DXGGLOBAL::GetGlobal();
      if ( (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                              (struct DXGGLOBAL *)((char *)Global + 1620),
                              *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
      {
        memmove(*((void **)this + 8), Src.pCommand, *((_QWORD *)this + 6));
        v45 = *((_QWORD *)this + 14);
        v46 = (void *)*((_QWORD *)this + 16);
        Src.pCommand = (const void *)*((_QWORD *)this + 8);
        memmove(v46, Src.pPatchLocationListIn, v45);
        Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 16);
      }
      AllocationListSize = Src.AllocationListSize;
    }
    else
    {
      Src.pAllocationList = 0LL;
      AllocationListSize = 0;
      Src.pPatchLocationListIn = 0LL;
      Src.PatchLocationListInSize = 0;
      Src.pPatchLocationListOut = 0LL;
      Src.PatchLocationListOutSize = 0;
      Src.AllocationListSize = 0;
    }
    Src.DmaBufferSegmentId = v104;
    Src.DmaBufferPhysicalAddress = v115;
    if ( (*(_DWORD *)(a2 + 68) & 0x20) == 0 )
    {
      if ( (*((_DWORD *)this + 56) & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3032LL) & 4) != 0 )
      {
        LODWORD(v23) = 0;
        goto LABEL_81;
      }
      v47 = ADAPTER_RENDER::DdiRender(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), *((void **)this + 23), &Src);
LABEL_80:
      LODWORD(v23) = v47;
      goto LABEL_81;
    }
    if ( !*((_BYTE *)this + 430) )
    {
      v47 = ADAPTER_RENDER::DdiRenderKm(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), *((void **)this + 23), &Src);
      goto LABEL_80;
    }
    v118.pCommand = (const void *)(*(_QWORD *)(a2 + 24) + *(unsigned int *)(a2 + 4));
    v118.CommandLength = *(_DWORD *)(a2 + 8);
    *(&v118.CommandLength + 1) = 0;
    v118.pDmaBuffer = Src.pDmaBuffer;
    *(&v118.DmaSize + 1) = 0;
    v118.DmaSize = Src.DmaSize;
    v118.pDmaBufferPrivateData = Src.pDmaBufferPrivateData;
    *(&v118.DmaBufferPrivateDataSize + 1) = 0;
    v118.DmaBufferPrivateDataSize = Src.DmaBufferPrivateDataSize;
    v118.pAllocationList = Src.pAllocationList;
    v118.MultipassOffset = Src.MultipassOffset;
    v118.DmaBufferGpuVirtualAddress = v105;
    v118.AllocationListSize = AllocationListSize;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v91) = AllocationListSize;
        McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &RenderGdi, v42, this, v105, v91);
        AllocationListSize = Src.AllocationListSize;
      }
      v48 = 0LL;
      if ( AllocationListSize )
      {
        v49 = v116;
        do
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            LODWORD(v91) = *(_DWORD *)&Src.pAllocationList[v48].8 & 1;
            McTemplateK0ppqx_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              (__int64)Src.pAllocationList,
              3 * v48,
              v49[v48],
              Src.pAllocationList[v48].hDeviceSpecificAllocation,
              v91,
              Src.pAllocationList[v48].PhysicalAddress.QuadPart);
            AllocationListSize = Src.AllocationListSize;
          }
          v48 = (unsigned int)(v48 + 1);
        }
        while ( (unsigned int)v48 < AllocationListSize );
        LOBYTE(v13) = v102;
      }
    }
    LODWORD(v23) = ADAPTER_RENDER::DdiRenderGdi(
                     *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                     *((void **)this + 23),
                     &v118);
    Src.pDmaBuffer = v118.pDmaBuffer;
    Src.pDmaBufferPrivateData = v118.pDmaBufferPrivateData;
    Src.MultipassOffset = v118.MultipassOffset;
    if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
    {
      Src.DmaBufferPrivateDataSize = v118.DmaBufferPrivateDataSize;
      Src.DmaSize = v118.DmaSize;
    }
LABEL_81:
    if ( (int)(v23 + 0x80000000) >= 0 && (_DWORD)v23 != -1071775743 )
    {
      WdLogSingleEntry2(3LL, this, (int)v23);
      WdLogGlobalForLineNumber = 781;
      goto LABEL_133;
    }
    v94 = (_DWORD)v23 == -1071775743;
    if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
    {
      LODWORD(v23) = DXGHWQUEUE::EnsureKmSubmissionProgressSyncObject(*v110);
      if ( (int)v23 < 0 )
        goto LABEL_130;
      v50 = v110;
      ++*((_QWORD *)*v110 + 12);
      if ( !*((_BYTE *)this + 296) )
      {
        v51 = *v50;
        v52 = *((_QWORD *)*v50 + 11);
        v53 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL);
        *((_DWORD *)&v120.KernelSubmissionType + 1) = 0;
        *(&v120.DmaSize + 1) = 0;
        v120.DmaBufferPrivateDataSize = Src.DmaBufferPrivateDataSize;
        v120.DmaSize = Src.DmaSize;
        v120.MultipassOffset = Src.MultipassOffset;
        v120.pDmaBuffer = Src.pDmaBuffer;
        v120.pDmaBufferPrivateData = Src.pDmaBufferPrivateData;
        v120.DmaBufferGpuVirtualAddress = v105;
        v120.MonitoredFenceGpuVa = *(_QWORD *)(v52 + 48);
        v120.MonitoredFenceCpuVa = *(void **)(v52 + 64);
        v120.MonitoredFenceValue = *((_QWORD *)v51 + 12);
        v54 = (void *)*((_QWORD *)v51 + 4);
        v55 = (void *)*((_QWORD *)this + 23);
        v120.hHwQueue = v54;
        v120.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_RENDERGDI;
        v23 = (int)ADAPTER_RENDER::DdiSignalMonitoredFence(v53, v55, &v120);
        Src.DmaBufferPrivateDataSize = v120.DmaBufferPrivateDataSize;
        Src.DmaSize = v120.DmaSize;
        Src.MultipassOffset = v120.MultipassOffset;
        Src.pDmaBuffer = v120.pDmaBuffer;
        Src.pDmaBufferPrivateData = v120.pDmaBufferPrivateData;
        if ( (_DWORD)v23 == -1071775743 )
        {
          v96 = 1;
          goto LABEL_89;
        }
        if ( (int)v23 < 0 )
        {
          WdLogSingleEntry2(3LL, this, v23);
          WdLogGlobalForLineNumber = 814;
LABEL_133:
          ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v108 + 1424), v33);
LABEL_131:
          v25 = v97;
          goto LABEL_144;
        }
      }
    }
LABEL_89:
    v56 = *((_QWORD *)this + 2);
    v99 = 0;
    v101 = 0LL;
    v57 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 + 16) + 760LL)
                                                                           + 8LL)
                                                               + 528LL))(v98);
    v58 = LODWORD(Src.pDmaBufferPrivateData) - v57;
    v113 = LODWORD(Src.pDmaBuffer) - (_DWORD)v106;
    v59 = *((_QWORD *)this + 2);
    LODWORD(v109) = v58;
    (*(void (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v59 + 16) + 760LL) + 8LL)
                                                      + 488LL))(v98);
    v106 = 0LL;
    if ( DXGCONTEXT::DisableDdiRenderAllocationList(this) )
    {
      LODWORD(v63) = v101;
      v62 = v99;
    }
    else
    {
      v61 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 760LL)
                                                                             + 8LL)
                                                                 + 512LL))(v98);
      v62 = *(_DWORD *)(a2 + 12);
      v63 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)Src.pPatchLocationListOut - v61) >> 3);
      v101 = v63;
      v99 = v62;
      if ( (qword_14015B4C0 & 0x10) != 0 )
      {
        DmaPatchLocationList = VIDMM_EXPORT::VidMmGetDmaPatchLocationList(
                                 *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                                 v98);
        TraceDxgkPatchLocationList((int)this, (char)v98, v101, (__int64)DmaPatchLocationList);
        LODWORD(v63) = v101;
        v62 = v99;
      }
      v60 = 0LL;
    }
    *v33 = v17;
    if ( *((_BYTE *)this + 430) != (_BYTE)v60 )
    {
      *(_DWORD *)v33 |= 0x8000000u;
      v33[5] = v105;
    }
    if ( (v13 & 0x20) != 0 )
    {
      if ( v94 != (_BYTE)v60 || (v65 = (int)v60, v96 != (_BYTE)v60) )
        v65 = 64;
      v66 = v100;
      v67 = v65 | *(_DWORD *)v33 & 0xFFFFFFBF;
      v68 = 2048;
      v69 = v67 & 0xFFFFFBFF;
      if ( v100 > 1 )
        v68 = 3072;
      *(_DWORD *)v33 = v68 | v69;
      if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
        *((_DWORD *)v33 + 29) = (_DWORD)v60;
    }
    else
    {
      v66 = v100;
    }
    v33[1] = v98;
    *((_DWORD *)v33 + 13) = v113;
    *((_DWORD *)v33 + 19) = (_DWORD)v109;
    *((_DWORD *)v33 + 12) = (_DWORD)v60;
    *((_DWORD *)v33 + 15) = v62;
    *((_DWORD *)v33 + 14) = (_DWORD)v60;
    *((_DWORD *)v33 + 17) = v63;
    *((_DWORD *)v33 + 16) = (_DWORD)v60;
    *((_DWORD *)v33 + 18) = (_DWORD)v60;
    if ( v114 == v60 )
    {
      v70 = (int)v60;
      v71 = v60;
    }
    else
    {
      v70 = 1;
      v71 = &v114;
    }
    v33[43] = v71;
    v72 = (int)v60;
    *((_DWORD *)v33 + 88) = v70;
    if ( v66 > 0 )
      break;
LABEL_120:
    v98 = 0LL;
    v95 = 0;
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
    LOBYTE(v13) = v102;
    if ( !v96 && !v94 )
    {
      if ( (*(_DWORD *)(a2 + 68) & 0x10) != 0 )
      {
        memset(&v121, 0, sizeof(v121));
        v78 = *(_QWORD *)(a2 + 72);
        v121.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
        v121.Token.Flip.FenceValue = v78;
        v79 = SubmitPresentHistoryToken(&v121, v111, v119, 0LL, 0, 0LL, 0LL, 0LL, this, 0LL, 0LL);
        LODWORD(v23) = v79;
        if ( (int)(v79 + 0x80000000) >= 0 && v79 != -1073741130 )
        {
          WdLogSingleEntry2(3LL, this, v79);
          WdLogGlobalForLineNumber = 1038;
          LODWORD(v23) = 0;
        }
      }
      return (unsigned int)v23;
    }
  }
  v73 = v117;
  v101 = (unsigned __int64)v117;
  while ( 1 )
  {
    v109 = *v73;
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *((struct _KTHREAD **)v109 + 56) == KeGetCurrentThread() )
        goto LABEL_115;
LABEL_114:
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 919;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
        919LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_115;
    }
    if ( *((struct _KTHREAD **)v109 + 56) != KeGetCurrentThread() )
      goto LABEL_114;
LABEL_115:
    if ( (*(_DWORD *)(*(_QWORD *)v101 + 392LL) & 0x10) != 0 )
    {
      v74 = v110;
      v75 = *((_QWORD *)*v110 + 12);
      *((_DWORD *)v33 + 126) = 0;
      v33[62] = v75;
      v33[65] = *(_QWORD *)(*((_QWORD *)*v74 + 11) + 64LL);
      v33[64] = *(_QWORD *)(*((_QWORD *)*v74 + 11) + 48LL);
      v76 = VIDSCH_EXPORT::VidSchSubmitCommandToHwQueue(
              *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
              *((struct VIDSCH_HW_QUEUE **)*v74 + 5),
              (struct VIDSCH_SUBMIT_DATA2 *)v33);
    }
    else
    {
      v76 = VIDSCH_EXPORT::VidSchSubmitCommand(
              *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
              *(struct _VIDSCH_CONTEXT **)(*(_QWORD *)v101 + 256LL),
              (struct VIDSCH_SUBMIT_DATA_BASE *)v33);
    }
    v99 = v76;
    if ( v76 < 0 )
      break;
    v77 = v101;
    ++v72;
    *(_DWORD *)v33 &= ~0x800u;
    v73 = (struct DXGCONTEXT **)(v77 + 8);
    v101 = (unsigned __int64)v73;
    if ( v72 >= v100 )
      goto LABEL_120;
  }
  if ( (*((_DWORD *)this + 98) & 0x10) == 0 )
  {
    v81 = v72;
    if ( v72 >= 0 )
    {
      v82 = v117;
      do
        VIDSCH_EXPORT::VidSchFlushPendingCommand(
          *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
          *((struct _VIDSCH_CONTEXT **)v82[v81--] + 32));
      while ( v81 >= 0 );
    }
  }
  if ( v72 < v100 )
  {
    v83 = (unsigned int)(v100 - v72);
    do
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
        v98);
      VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL), v98);
      --v83;
    }
    while ( v83 );
  }
  v25 = 0;
  v98 = 0LL;
  WdLogSingleEntry2(3LL, this, v99);
  WdLogGlobalForLineNumber = 982;
  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
LABEL_144:
  v84 = v103;
LABEL_147:
  if ( v98 )
  {
    if ( v106 )
      VIDMM_EXPORT::VidMmEndDmaBufferCPUAccess(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
        v98);
    if ( v84 )
    {
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
      {
        for ( i = 0LL; (unsigned int)i < *v84; i = (unsigned int)(i + 1) )
        {
          if ( (unsigned int)i >= 0x10 )
            break;
          v86 = *(struct VIDMM_ALLOC **)&v84[2 * i + 2];
          if ( v86 )
          {
            VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
              *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
              0,
              v86);
            *(_QWORD *)&v84[2 * i + 2] = 0LL;
          }
        }
      }
    }
    if ( v25 )
    {
      v87 = v100;
      if ( v100 > 0 )
      {
        v88 = (unsigned int)v100;
        do
        {
          VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
            v98);
          --v88;
        }
        while ( v88 );
        goto LABEL_163;
      }
    }
    else
    {
      v87 = v100;
LABEL_163:
      if ( v87 > 0 )
      {
        v89 = (unsigned int)v87;
        do
        {
          VIDMM_EXPORT::VidMmReleaseDmaBuffer(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
            v98);
          --v89;
        }
        while ( v89 );
      }
    }
  }
  return (unsigned int)v23;
}
