/*
 * XREFs of ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1403337AC
 * Callers:
 *     DxgkRender @ 0x140332650 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x14034DF70 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011084 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x140012FF8 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0ppqx_EtwWriteTransfer @ 0x140013310 (McTemplateK0ppqx_EtwWriteTransfer.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x14002B940 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x140031360 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1400338A0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?VidSchSubmitCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140035F04 (-VidSchSubmitCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?VidSchSubmitCommandToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x140037230 (-VidSchSubmitCommandToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@.c)
 *     ?DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ @ 0x14003E098 (-DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ.c)
 *     ?VidMmGetDmaPatchLocationList@VIDMM_EXPORT@@QEAAPEAU_D3DDDI_PATCHLOCATIONLIST@@PEAUVIDMM_DMA_BUFFER@@@Z @ 0x140040B64 (-VidMmGetDmaPatchLocationList@VIDMM_EXPORT@@QEAAPEAU_D3DDDI_PATCHLOCATIONLIST@@PEAUVIDMM_DMA_BUF.c)
 *     ?DisableReferenceDmaBuffer@DXGCONTEXT@@QEAAEXZ @ 0x140041C80 (-DisableReferenceDmaBuffer@DXGCONTEXT@@QEAAEXZ.c)
 *     ?VidMmAcquireDmaBuffer@VIDMM_EXPORT@@QEAAJPEAUVIDMM_DMA_POOL@@_N1PEAPEAUVIDMM_DMA_BUFFER@@@Z @ 0x140041EE0 (-VidMmAcquireDmaBuffer@VIDMM_EXPORT@@QEAAJPEAUVIDMM_DMA_POOL@@_N1PEAPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z @ 0x1400427E4 (-VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x14004C6F0 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004CEB0 (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     TraceDxgkPatchLocationList @ 0x14004F1BC (TraceDxgkPatchLocationList.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z @ 0x140056FA4 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x140063F84 (-VidMmUnreferenceDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     ?VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z @ 0x140077984 (-VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x14029E570 (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1402C3898 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x1402F9A10 (-EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140301EA0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1403679BC (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
 *     ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x140367A78 (-DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z.c)
 *     ?DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x140387910 (-DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1403B3FD4 (-DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
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
  int v75; // eax
  unsigned __int64 v76; // rax
  UINT64 v77; // rax
  int v78; // eax
  const char *v79; // rdx
  __int64 v80; // rbx
  struct DXGCONTEXT **v81; // r13
  __int64 v82; // rbx
  _DWORD *v83; // r15
  __int64 i; // rbx
  struct VIDMM_ALLOC *v85; // r9
  int v86; // r14d
  __int64 v87; // rbx
  __int64 v88; // rbx
  struct VIDMM_DMA_BUFFER **v89; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v90; // [rsp+28h] [rbp-F8h]
  struct DXGK_PRESENT_PARAMS *v91; // [rsp+30h] [rbp-F0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v92; // [rsp+38h] [rbp-E8h]
  char v93; // [rsp+A0h] [rbp-80h]
  char v94; // [rsp+A1h] [rbp-7Fh]
  char v95; // [rsp+A2h] [rbp-7Eh]
  char v96; // [rsp+A3h] [rbp-7Dh]
  struct VIDMM_DMA_BUFFER *v97; // [rsp+A8h] [rbp-78h] BYREF
  signed int v98; // [rsp+B0h] [rbp-70h]
  int v99; // [rsp+B4h] [rbp-6Ch]
  unsigned __int64 v100; // [rsp+B8h] [rbp-68h]
  int v101; // [rsp+C0h] [rbp-60h]
  _DWORD *v102; // [rsp+C8h] [rbp-58h]
  UINT v103; // [rsp+D0h] [rbp-50h] BYREF
  unsigned __int64 v104; // [rsp+D8h] [rbp-48h] BYREF
  void *v105; // [rsp+E0h] [rbp-40h] BYREF
  PVOID Entry; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v107; // [rsp+F0h] [rbp-30h]
  struct DXGHWQUEUE **v108; // [rsp+F8h] [rbp-28h]
  COREDEVICEACCESS *v109; // [rsp+100h] [rbp-20h]
  struct _DXGKARG_RENDER Src; // [rsp+110h] [rbp-10h] BYREF
  int v111; // [rsp+180h] [rbp+60h]
  int v112; // [rsp+184h] [rbp+64h]
  _QWORD *v113; // [rsp+188h] [rbp+68h] BYREF
  LARGE_INTEGER v114; // [rsp+190h] [rbp+70h] BYREF
  struct DXGALLOCATION **v115; // [rsp+198h] [rbp+78h]
  struct DXGCONTEXT **v116; // [rsp+1A0h] [rbp+80h]
  _DXGKARG_RENDERGDI v117; // [rsp+1B0h] [rbp+90h] BYREF
  struct DXGADAPTERSTOPRESETLOCKSHARED *v118; // [rsp+200h] [rbp+E0h]
  _DXGKARG_SIGNALMONITOREDFENCE v119; // [rsp+210h] [rbp+F0h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v120; // [rsp+260h] [rbp+140h] BYREF

  v116 = a5;
  v115 = a6;
  v9 = *((_DWORD *)this + 98);
  v118 = a4;
  v109 = a3;
  v108 = a7;
  if ( (v9 & 0x10) != 0 && !a7 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 470;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
  v94 = 1;
  v101 = v13;
  v100 = v13;
  v99 = v12;
  if ( (*(_BYTE *)&v11 & 0x10) != 0 )
  {
    LOBYTE(v13) = -96;
    v101 = ((*(_BYTE *)&v11 & 8) << 12) | 0x1A0;
    LODWORD(v100) = v101;
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
  v17 = v100;
  v105 = 0LL;
  v95 = 0;
  v93 = 1;
  while ( 1 )
  {
    v18 = 0LL;
    v97 = 0LL;
    if ( *((_BYTE *)this + 434) )
      goto LABEL_30;
    v19 = *((_DWORD *)this + 18);
    v20 = 3;
    v21 = *((unsigned int *)this + 26);
    v98 = *((_DWORD *)this + 26);
    if ( v19 > 3 )
      v20 = v19;
    if ( !*((_QWORD *)this + 29) )
      break;
LABEL_24:
    v26 = (struct VIDMM_DMA_POOL *)*((_QWORD *)this + 29);
    LOBYTE(v21) = 1;
    v27 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_POOL *, __int64, _QWORD, struct VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 464LL))(
            v26,
            v21,
            0LL,
            &v97);
    LODWORD(v23) = v27;
    if ( v27 == -1071775486 )
    {
      if ( v109 )
      {
        COREDEVICEACCESS::Release(v109);
        LODWORD(v23) = VIDMM_EXPORT::VidMmAcquireDmaBuffer(
                         *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                         v26,
                         0LL,
                         0,
                         &v97);
        v28 = COREDEVICEACCESS::AcquireShared(v109, 0LL);
        v29 = v28;
        if ( v28 < 0 )
        {
          WdLogSingleEntry2(4LL, this, v28);
          WdLogGlobalForLineNumber = 3748;
          COREDEVICEACCESS::AcquireSharedUncheck(v109, v79);
          LODWORD(v23) = v29;
          v25 = 0;
          goto LABEL_124;
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
        WdLogGlobalForLineNumber = 3758;
      }
    }
    if ( (int)v23 < 0 )
      goto LABEL_124;
    v18 = v97;
LABEL_30:
    if ( !bTracingEnabled )
      goto LABEL_42;
    v30 = *(D3DKMT_RENDERFLAGS *)(a2 + 68);
    if ( (*(_BYTE *)&v30 & 0x10) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
      {
        HIDWORD(v92) = 0;
        HIDWORD(v91) = 0;
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
LABEL_42:
    v32 = *((_QWORD *)this + 2);
    v103 = 0;
    v114.QuadPart = 0LL;
    v104 = 0LL;
    v113 = 0LL;
    v107 = *(_QWORD *)(v32 + 16);
    Entry = 0LL;
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)&Entry);
    v33 = Entry;
    if ( !Entry )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 590;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate VidSchSubmitData",
        590LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v25 = 0;
      LODWORD(v23) = -1073741801;
      goto LABEL_143;
    }
    if ( !DXGCONTEXT::DisableReferenceDmaBuffer(this) || (*(_DWORD *)(a2 + 68) & 0x20) != 0 )
    {
      v35 = *(_DWORD *)(a2 + 12);
      v36 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL);
      v37 = (unsigned __int64)&v104 & -(__int64)(*((_BYTE *)this + 430) != 0);
      v38 = *(D3DKMT_RENDERFLAGS *)(a2 + 68);
      v102 = v33 + 25;
      if ( (*(_BYTE *)&v38 & 0x20) != 0 )
        v39 = *(D3DDDI_ALLOCATIONLIST **)(a2 + 40);
      else
        v39 = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)this + 11);
      LOBYTE(v34) = v94;
      LODWORD(v89) = v99;
      v40 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *, D3DDDI_ALLOCATIONLIST *, _QWORD, __int64, struct VIDMM_DMA_BUFFER **, UINT *, LARGE_INTEGER *, unsigned __int64, _QWORD **, _QWORD *, struct DXGALLOCATION **))(*(_QWORD *)(v36 + 8) + 536LL))(
              v97,
              v39,
              v35,
              v34,
              v89,
              &v103,
              &v114,
              v37,
              &v113,
              v33 + 25,
              v115);
      LODWORD(v23) = v40;
      if ( v40 < 0 )
      {
        WdLogSingleEntry2(3LL, this, v40);
        WdLogGlobalForLineNumber = 619;
        ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v107 + 1424), v33);
        v25 = 0;
        goto LABEL_141;
      }
      v96 = 1;
    }
    else
    {
      LODWORD(v23) = 0;
      v96 = 0;
      v102 = 0LL;
    }
    (*(void (__fastcall **)(struct VIDMM_DMA_BUFFER *, void **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 760LL)
                                                                           + 8LL)
                                                               + 480LL))(
      v97,
      &v105);
    Src.pDmaBuffer = v105;
    Src.DmaSize = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                               + 760LL)
                                                                                   + 8LL)
                                                                       + 496LL))(v97);
    Src.pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL)
                                                                                             + 528LL))(v97);
    Src.DmaBufferPrivateDataSize = *((_DWORD *)this + 52);
    if ( v95 )
    {
      v41 = DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v108, v104);
      v23 = v41;
      if ( v41 == -1071775743 )
      {
        WdLogSingleEntry5(0LL, 275LL, 40LL, this, 0LL, 0LL);
        WdLogGlobalForLineNumber = 654;
LABEL_126:
        WdLogSingleEntry2(3LL, this, v23);
        WdLogGlobalForLineNumber = 661;
LABEL_127:
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
        goto LABEL_128;
      }
      if ( v41 < 0 )
        goto LABEL_126;
      v95 = 0;
    }
    if ( v93 )
    {
      if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) || (*(_DWORD *)(a2 + 68) & 0x20) != 0 )
      {
        Src.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 520LL))(v97);
        Src.AllocationListSize = *(_DWORD *)(a2 + 12);
        Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 15);
        Src.PatchLocationListInSize = *(_DWORD *)(a2 + 16);
        Src.pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 512LL))(v97);
        Src.PatchLocationListOutSize = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL)
                                                                                            + 504LL))(v97);
        Global = DXGGLOBAL::GetGlobal();
        if ( (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                                (struct DXGGLOBAL *)((char *)Global + 1652),
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
      Src.DmaBufferSegmentId = v103;
      Src.DmaBufferPhysicalAddress = v114;
      if ( (*(_DWORD *)(a2 + 68) & 0x20) != 0 )
      {
        if ( *((_BYTE *)this + 430) )
        {
          v117.pCommand = (const void *)(*(_QWORD *)(a2 + 24) + *(unsigned int *)(a2 + 4));
          v117.CommandLength = *(_DWORD *)(a2 + 8);
          *(&v117.CommandLength + 1) = 0;
          v117.pDmaBuffer = Src.pDmaBuffer;
          *(&v117.DmaSize + 1) = 0;
          v117.DmaSize = Src.DmaSize;
          v117.pDmaBufferPrivateData = Src.pDmaBufferPrivateData;
          *(&v117.DmaBufferPrivateDataSize + 1) = 0;
          v117.DmaBufferPrivateDataSize = Src.DmaBufferPrivateDataSize;
          v117.pAllocationList = Src.pAllocationList;
          v117.MultipassOffset = Src.MultipassOffset;
          v117.DmaBufferGpuVirtualAddress = v104;
          v117.AllocationListSize = AllocationListSize;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              LODWORD(v90) = AllocationListSize;
              McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &RenderGdi, v42, this, v104, v90);
              AllocationListSize = Src.AllocationListSize;
            }
            v48 = 0LL;
            if ( AllocationListSize )
            {
              v49 = v115;
              do
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                {
                  LODWORD(v90) = *(_DWORD *)&Src.pAllocationList[v48].8 & 1;
                  McTemplateK0ppqx_EtwWriteTransfer(
                    (REGHANDLE *)&DxgkControlGuid_Context,
                    (__int64)Src.pAllocationList,
                    3 * v48,
                    v49[v48],
                    Src.pAllocationList[v48].hDeviceSpecificAllocation,
                    v90,
                    Src.pAllocationList[v48].PhysicalAddress.QuadPart);
                  AllocationListSize = Src.AllocationListSize;
                }
                v48 = (unsigned int)(v48 + 1);
              }
              while ( (unsigned int)v48 < AllocationListSize );
              LOBYTE(v13) = v101;
            }
          }
          LODWORD(v23) = ADAPTER_RENDER::DdiRenderGdi(
                           *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                           *((void **)this + 23),
                           &v117);
          Src.pDmaBuffer = v117.pDmaBuffer;
          Src.pDmaBufferPrivateData = v117.pDmaBufferPrivateData;
          Src.MultipassOffset = v117.MultipassOffset;
          if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
          {
            Src.DmaBufferPrivateDataSize = v117.DmaBufferPrivateDataSize;
            Src.DmaSize = v117.DmaSize;
          }
LABEL_81:
          if ( (int)(v23 + 0x80000000) >= 0 && (_DWORD)v23 != -1071775743 )
          {
            WdLogSingleEntry2(3LL, this, (int)v23);
            WdLogGlobalForLineNumber = 781;
            goto LABEL_130;
          }
          v93 = (_DWORD)v23 == -1071775743;
          if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
          {
            LODWORD(v23) = DXGHWQUEUE::EnsureKmSubmissionProgressSyncObject(*v108);
            if ( (int)v23 < 0 )
              goto LABEL_127;
            v50 = v108;
            ++*((_QWORD *)*v108 + 12);
            if ( !*((_BYTE *)this + 296) )
            {
              v51 = *v50;
              v52 = *((_QWORD *)*v50 + 11);
              v53 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL);
              *((_DWORD *)&v119.KernelSubmissionType + 1) = 0;
              *(&v119.DmaSize + 1) = 0;
              v119.DmaBufferPrivateDataSize = Src.DmaBufferPrivateDataSize;
              v119.DmaSize = Src.DmaSize;
              v119.MultipassOffset = Src.MultipassOffset;
              v119.pDmaBuffer = Src.pDmaBuffer;
              v119.pDmaBufferPrivateData = Src.pDmaBufferPrivateData;
              v119.DmaBufferGpuVirtualAddress = v104;
              v119.MonitoredFenceGpuVa = *(_QWORD *)(v52 + 48);
              v119.MonitoredFenceCpuVa = *(void **)(v52 + 64);
              v119.MonitoredFenceValue = *((_QWORD *)v51 + 12);
              v54 = (void *)*((_QWORD *)v51 + 4);
              v55 = (void *)*((_QWORD *)this + 23);
              v119.hHwQueue = v54;
              v119.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_RENDERGDI;
              v23 = (int)ADAPTER_RENDER::DdiSignalMonitoredFence(v53, v55, &v119);
              Src.DmaBufferPrivateDataSize = v119.DmaBufferPrivateDataSize;
              Src.DmaSize = v119.DmaSize;
              Src.MultipassOffset = v119.MultipassOffset;
              Src.pDmaBuffer = v119.pDmaBuffer;
              Src.pDmaBufferPrivateData = v119.pDmaBufferPrivateData;
              if ( (_DWORD)v23 == -1071775743 )
              {
                v95 = 1;
              }
              else if ( (int)v23 < 0 )
              {
                WdLogSingleEntry2(3LL, this, v23);
                WdLogGlobalForLineNumber = 814;
LABEL_130:
                ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v107 + 1424), v33);
LABEL_128:
                v25 = v96;
LABEL_141:
                v83 = v102;
                goto LABEL_144;
              }
            }
          }
          goto LABEL_89;
        }
        v47 = ADAPTER_RENDER::DdiRenderKm(
                *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                *((void **)this + 23),
                &Src);
      }
      else
      {
        if ( (*((_DWORD *)this + 56) & 1) != 0
          && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3032LL) & 4) != 0 )
        {
          LODWORD(v23) = 0;
          goto LABEL_81;
        }
        v47 = ADAPTER_RENDER::DdiRender(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), *((void **)this + 23), &Src);
      }
      LODWORD(v23) = v47;
      goto LABEL_81;
    }
LABEL_89:
    v56 = *((_QWORD *)this + 2);
    v98 = 0;
    v100 = 0LL;
    v57 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 + 16) + 760LL)
                                                                           + 8LL)
                                                               + 528LL))(v97);
    v58 = LODWORD(Src.pDmaBufferPrivateData) - v57;
    v111 = LODWORD(Src.pDmaBuffer) - (_DWORD)v105;
    v59 = *((_QWORD *)this + 2);
    v112 = v58;
    (*(void (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v59 + 16) + 760LL) + 8LL)
                                                      + 488LL))(v97);
    v105 = 0LL;
    if ( DXGCONTEXT::DisableDdiRenderAllocationList(this) )
    {
      LODWORD(v63) = v100;
      v62 = v98;
    }
    else
    {
      v61 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 760LL)
                                                                             + 8LL)
                                                                 + 512LL))(v97);
      v62 = *(_DWORD *)(a2 + 12);
      v63 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)Src.pPatchLocationListOut - v61) >> 3);
      v100 = v63;
      v98 = v62;
      if ( (qword_14015E4B0 & 0x10) != 0 )
      {
        DmaPatchLocationList = VIDMM_EXPORT::VidMmGetDmaPatchLocationList(
                                 *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                                 v97);
        TraceDxgkPatchLocationList((int)this, (char)v97, v100, (__int64)DmaPatchLocationList);
        LODWORD(v63) = v100;
        v62 = v98;
      }
      v60 = 0LL;
    }
    *v33 = v17;
    if ( *((_BYTE *)this + 430) != (_BYTE)v60 )
    {
      *(_DWORD *)v33 |= 0x8000000u;
      v33[5] = v104;
    }
    if ( (v13 & 0x20) != 0 )
    {
      if ( v93 != (_BYTE)v60 || (v65 = (int)v60, v95 != (_BYTE)v60) )
        v65 = 64;
      v66 = v99;
      v67 = v65 | *(_DWORD *)v33 & 0xFFFFFFBF;
      v68 = 2048;
      v69 = v67 & 0xFFFFFBFF;
      if ( v99 > 1 )
        v68 = 3072;
      *(_DWORD *)v33 = v68 | v69;
      if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
        *((_DWORD *)v33 + 29) = (_DWORD)v60;
    }
    else
    {
      v66 = v99;
    }
    v33[1] = v97;
    *((_DWORD *)v33 + 13) = v111;
    *((_DWORD *)v33 + 19) = v112;
    *((_DWORD *)v33 + 12) = (_DWORD)v60;
    *((_DWORD *)v33 + 15) = v62;
    *((_DWORD *)v33 + 14) = (_DWORD)v60;
    *((_DWORD *)v33 + 17) = v63;
    *((_DWORD *)v33 + 16) = (_DWORD)v60;
    *((_DWORD *)v33 + 18) = (_DWORD)v60;
    if ( v113 == v60 )
    {
      v70 = (int)v60;
      v71 = v60;
    }
    else
    {
      v70 = 1;
      v71 = &v113;
    }
    v33[43] = v71;
    v72 = (int)v60;
    *((_DWORD *)v33 + 88) = v70;
    if ( v66 > 0 )
    {
      v73 = v116;
      v100 = (unsigned __int64)v116;
      while ( 1 )
      {
        if ( *((struct _KTHREAD **)*v73 + 56) != KeGetCurrentThread() )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 919;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
            919LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v60) = 0;
        }
        if ( (*(_DWORD *)(*(_QWORD *)v100 + 392LL) & 0x10) != 0 )
        {
          v74 = v108;
          v33[62] = *((_QWORD *)*v108 + 12);
          *((_DWORD *)v33 + 126) = (_DWORD)v60;
          v33[65] = *(_QWORD *)(*((_QWORD *)*v74 + 11) + 64LL);
          v33[64] = *(_QWORD *)(*((_QWORD *)*v74 + 11) + 48LL);
          v75 = VIDSCH_EXPORT::VidSchSubmitCommandToHwQueue(
                  *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                  *((struct VIDSCH_HW_QUEUE **)*v74 + 5),
                  (struct VIDSCH_SUBMIT_DATA2 *)v33);
        }
        else
        {
          v75 = VIDSCH_EXPORT::VidSchSubmitCommand(
                  *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                  *(struct _VIDSCH_CONTEXT **)(*(_QWORD *)v100 + 256LL),
                  (struct VIDSCH_SUBMIT_DATA_BASE *)v33);
        }
        LODWORD(v60) = 0;
        v98 = v75;
        if ( v75 < 0 )
          break;
        v76 = v100;
        ++v72;
        *(_DWORD *)v33 &= ~0x800u;
        v73 = (struct DXGCONTEXT **)(v76 + 8);
        v100 = (unsigned __int64)v73;
        if ( v72 >= v99 )
          goto LABEL_117;
      }
      if ( (*((_DWORD *)this + 98) & 0x10) == 0 )
      {
        v80 = v72;
        if ( v72 >= 0 )
        {
          v81 = v116;
          do
            VIDSCH_EXPORT::VidSchFlushPendingCommand(
              *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
              *((struct _VIDSCH_CONTEXT **)v81[v80--] + 32));
          while ( v80 >= 0 );
        }
      }
      if ( v72 < v99 )
      {
        v82 = (unsigned int)(v99 - v72);
        do
        {
          VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
            v97);
          VIDMM_EXPORT::VidMmReleaseDmaBuffer(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
            v97);
          --v82;
        }
        while ( v82 );
      }
      v25 = 0;
      v97 = 0LL;
      WdLogSingleEntry2(3LL, this, v98);
      WdLogGlobalForLineNumber = 982;
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
      goto LABEL_141;
    }
LABEL_117:
    v97 = 0LL;
    v94 = 0;
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
    LOBYTE(v13) = v101;
    if ( !v95 && !v93 )
    {
      if ( (*(_DWORD *)(a2 + 68) & 0x10) != 0 )
      {
        memset(&v120, 0, sizeof(v120));
        v77 = *(_QWORD *)(a2 + 72);
        v120.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
        v120.Token.Flip.FenceValue = v77;
        v78 = SubmitPresentHistoryToken(&v120, v109, v118, 0LL, 0, 0LL, 0LL, 0LL, this, 0LL, 0LL);
        LODWORD(v23) = v78;
        if ( (int)(v78 + 0x80000000) >= 0 && v78 != -1073741130 )
        {
          WdLogSingleEntry2(3LL, this, v78);
          WdLogGlobalForLineNumber = 1038;
          LODWORD(v23) = 0;
        }
      }
      return (unsigned int)v23;
    }
  }
  LODWORD(v92) = v21;
  LODWORD(v91) = v20;
  LOBYTE(v89) = 1;
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, _DWORD, _DWORD, struct DXGK_PRESENT_PARAMS *, struct VIDSCH_SUBMIT_DATA_BASE *, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 408LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
          *((unsigned int *)this + 97),
          *(_QWORD *)(*((_QWORD *)this + 2) + 792LL),
          this,
          (_DWORD)v89,
          *((_DWORD *)this + 50),
          v91,
          v92,
          *((_DWORD *)this + 51),
          *((_DWORD *)this + 52));
  *((_QWORD *)this + 29) = v22;
  if ( v22 )
  {
    LODWORD(v23) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 760LL)
                                                                  + 8LL)
                                                      + 416LL))(v22);
    if ( (int)v23 < 0 )
      goto LABEL_20;
    *((_DWORD *)this + 54) = v98;
    *((_DWORD *)this + 53) = v20;
    goto LABEL_24;
  }
  WdLogSingleEntry2(3LL, this, -1073741801LL);
  WdLogGlobalForLineNumber = 844;
  LODWORD(v23) = -1073741801;
LABEL_20:
  v24 = *((_QWORD *)this + 29);
  v25 = 0;
  if ( v24 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL)
                                   + 424LL))(*((_QWORD *)this + 29));
    *((_QWORD *)this + 29) = 0LL;
  }
  WdLogSingleEntry1(3LL, this);
  WdLogGlobalForLineNumber = 3729;
LABEL_124:
  WdLogSingleEntry2(4LL, this, (int)v23);
  WdLogGlobalForLineNumber = 546;
LABEL_143:
  v83 = 0LL;
LABEL_144:
  if ( !v97 )
    return (unsigned int)v23;
  if ( v105 )
    VIDMM_EXPORT::VidMmEndDmaBufferCPUAccess(*(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL), v97);
  if ( v83 )
  {
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      for ( i = 0LL; (unsigned int)i < *v83; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= 0x10 )
          break;
        v85 = *(struct VIDMM_ALLOC **)&v83[2 * i + 2];
        if ( v85 )
        {
          VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
            0,
            v85);
          *(_QWORD *)&v83[2 * i + 2] = 0LL;
        }
      }
    }
  }
  if ( v25 )
  {
    v86 = v99;
    if ( v99 <= 0 )
      return (unsigned int)v23;
    v87 = (unsigned int)v99;
    do
    {
      VIDMM_EXPORT::VidMmUnreferenceDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
        v97);
      --v87;
    }
    while ( v87 );
  }
  else
  {
    v86 = v99;
  }
  if ( v86 > 0 )
  {
    v88 = (unsigned int)v86;
    do
    {
      VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL), v97);
      --v88;
    }
    while ( v88 );
  }
  return (unsigned int)v23;
}
