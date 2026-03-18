/*
 * XREFs of VidSchiProcessIsrVSync @ 0x140005D2C
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x140006B60 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiProcessIsrVSyncMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x140005A14 (-VidSchiProcessIsrVSyncMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x140005BFC (McTemplateK0pqx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memset @ 0x140056340 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiProcessIsrVSync(
        union _SLIST_HEADER *a1,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2,
        int a3,
        struct _SLIST_ENTRY *a4)
{
  struct _SLIST_ENTRY *v4; // rbx
  bool v7; // r13
  unsigned int v8; // ebp
  UINT SubmissionFenceId; // r9d
  __int64 v10; // rdx
  signed __int64 v11; // r12
  __int64 v13; // rsi
  PSLIST_ENTRY v14; // rdi
  union _LARGE_INTEGER *v15; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v17; // rdx
  LARGE_INTEGER *v18; // r8
  LARGE_INTEGER v19; // rcx
  unsigned int v20; // eax
  char v21; // al
  ULONGLONG Region; // rcx
  int v23; // eax
  signed __int64 v24; // rcx
  PSLIST_ENTRY v25; // rax
  DXGK_INTERRUPT_TYPE InterruptType; // ecx
  unsigned int v27; // ecx
  DXGK_INTERRUPT_TYPE v28; // eax
  __int64 EngineOrdinal; // rcx
  __int64 v30; // rdx
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *pMultiPlaneOverlayVsyncInfo; // r9
  __int64 v35; // r10
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  UINT v39; // ecx
  ULONGLONG Alignment; // rax
  __int64 v41; // r9
  __int64 v42; // r10
  char v43; // dl
  char v44; // r11
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *v45; // rcx
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *v46; // r8
  __int64 v47; // rcx
  _DWORD *v48; // rdx
  int v49; // ecx
  unsigned int Rotation; // eax
  unsigned int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  DXGK_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE StereoFlipMode; // eax
  UINT64 v61; // r8
  __int64 v62; // rcx
  int v63; // ecx
  unsigned int v64; // eax
  unsigned int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  int v68; // ecx
  int v69; // ecx
  int v70; // ecx
  int v71; // ecx
  int v72; // ecx
  char *v73; // r8
  __int64 v74; // rcx
  int v75; // ecx
  unsigned int v76; // eax
  unsigned int v77; // ecx
  int v78; // ecx
  int v79; // ecx
  int v80; // ecx
  int v81; // ecx
  int v82; // ecx
  int v83; // ecx
  int v84; // ecx
  __int64 v85; // [rsp+28h] [rbp-B0h]
  char v86; // [rsp+50h] [rbp-88h]
  UINT v87; // [rsp+54h] [rbp-84h]
  __int128 v90; // [rsp+70h] [rbp-68h] BYREF
  __int64 v91; // [rsp+80h] [rbp-58h]
  int v92; // [rsp+88h] [rbp-50h]

  v4 = a4;
  v7 = 0;
  if ( a2->InterruptType == DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY2
    || a2->InterruptType == (DXGK_INTERRUPT_GPU_ENGINE_TIMEOUT|DXGK_INTERRUPT_DMA_PREEMPTED) )
  {
    v7 = (a2->Flags.Value & 2) != 0;
  }
  v8 = 0;
  SubmissionFenceId = a2->DmaCompleted.SubmissionFenceId;
  v87 = SubmissionFenceId;
  v10 = *(_QWORD *)(a1[1].Alignment + 3120);
  while ( 1 )
  {
    if ( v8 >= *(_DWORD *)(v10 + 96) )
    {
      LODWORD(v11) = -1;
      goto LABEL_9;
    }
    if ( *(_DWORD *)(4024LL * v8 + *(_QWORD *)(v10 + 128) + 1072) == SubmissionFenceId )
      break;
    ++v8;
  }
  LODWORD(v11) = v8;
  if ( v8 != -1 && v8 < *((_DWORD *)&a1[2].HeaderX64 + 2) )
  {
    _mm_lfence();
    v11 = 0LL;
    v13 = *(&a1[214].Region + v8);
    if ( v7 )
      goto LABEL_27;
    v14 = (PSLIST_ENTRY)(v13 + 44304);
    v15 = 0LL;
    if ( _InterlockedExchange((volatile __int32 *)(v13 + 44420), 0) )
      goto LABEL_31;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    LODWORD(v17) = 1;
    v18 = (LARGE_INTEGER *)(v13 + 44304);
    v19 = PerformanceCounter;
LABEL_18:
    *(_QWORD *)(v13 + 44312) += (unsigned int)v17;
    v20 = *(_DWORD *)(v13 + 44416) + 1;
    *(_DWORD *)(v13 + 44416) = v20;
    if ( v20 < *(_DWORD *)(v13 + 83092) )
    {
      v21 = 1;
    }
    else
    {
      *(_DWORD *)(v13 + 44328) += v17;
      v21 = v11;
      *(_DWORD *)(v13 + 44416) = v11;
      *(LARGE_INTEGER *)(v13 + 44320) = v19;
    }
    *(_BYTE *)(v13 + 44344) = v21;
    *v18 = v19;
    if ( *(_BYTE *)(v13 + 8) != (_BYTE)v11 && *((_BYTE *)&a1[9].HeaderX64 + 12) == (_BYTE)v11 )
    {
      Region = a1->Region;
      v91 = 0LL;
      v92 = 0;
      v90 = 0LL;
      v23 = ((__int64 (__fastcall *)(ULONGLONG, _QWORD, _QWORD, __int128 *))DxgCoreInterface[64])(
              Region,
              0LL,
              0LL,
              &v90);
      v24 = v11;
      if ( v23 >= 0 )
        v24 = *((_QWORD *)&v90 + 1);
      *(_QWORD *)(v13 + 44336) = v24;
    }
    while ( 1 )
    {
LABEL_27:
      v25 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v13 + 44848));
      v11 = v8;
      if ( !v25 )
        goto LABEL_9;
      InterruptType = a2->InterruptType;
      v14 = v25 - 1;
      *((_BYTE *)&v25[6].Next + 12) &= ~1u;
      LODWORD(v25->Next) = InterruptType;
      v27 = *(_DWORD *)(&v25[6].Next + 1) & 0xFFFFFC00;
      HIDWORD(v25[6].Next) = a3;
      *((_DWORD *)&v25[6].Next + 2) = v27;
      v25[2].Next = (struct _SLIST_ENTRY *)a1;
      *((_DWORD *)&v25[5].Next + 3) = v8;
      LODWORD(v25[6].Next) = v87;
      v28 = a2->InterruptType;
      if ( a2->InterruptType != DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY2 )
        break;
      EngineOrdinal = a2->DmaCompleted.EngineOrdinal;
      v30 = *((unsigned int *)&a1[9].HeaderX64 + 2);
      if ( (unsigned int)EngineOrdinal <= (unsigned int)v30 )
      {
        *(_QWORD *)(v13 + 44336) = a2->MiracastEncodeChunkCompleted.pPrivateDriverData;
        *((_BYTE *)&v14[7].Next + 12) ^= (*((_BYTE *)&v14[7].Next + 12) ^ (a2->Flags.Value >> 1)) & 1;
        memset(&v14[8], 0, 0xA0uLL);
        v33 = 0LL;
        while ( (unsigned int)v33 < a2->DmaCompleted.EngineOrdinal )
        {
          pMultiPlaneOverlayVsyncInfo = a2->CrtcVsyncWithMultiPlaneOverlay.pMultiPlaneOverlayVsyncInfo;
          v35 = *((unsigned int *)&a1[9].HeaderX64 + 2);
          v36 = *(&pMultiPlaneOverlayVsyncInfo->LayerIndex + 6 * v33);
          if ( (unsigned int)v36 >= (unsigned int)v35 )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 281LL, 14LL, a1, v36, v35);
            WdLogGlobalForLineNumber = 906;
LABEL_62:
            v61 = a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkId.Value + 96 * v41;
            if ( *(_DWORD *)(v61 + 4) != (_DWORD)v4 )
            {
              v62 = 5 * v42;
              *((_DWORD *)&v14[7].Next + 2) = *(_DWORD *)(&v14[7].Next + 1) & 0xFFFFFC00 ^ ((unsigned __int16)*((_DWORD *)&v14[7].Next + 2) | (unsigned __int16)(v8 << *(_DWORD *)v61)) & 0x3FF;
              *((_QWORD *)&v14[8].Next + v62) = *(_QWORD *)(v61 + 8);
              *((_WORD *)&v14[8].Next + 4 * v62 + 4) = *(_WORD *)(v61 + 20);
              *((_WORD *)&v14[8].Next + 4 * v62 + 6) = *(_WORD *)(v61 + 24);
              *((_WORD *)&v14[8].Next + 4 * v62 + 5) = *(_WORD *)(v61 + 28);
              *((_WORD *)&v14[8].Next + 4 * v62 + 7) = *(_WORD *)(v61 + 32);
              *((_WORD *)&v14[9].Next + 4 * v62) = *(_WORD *)(v61 + 36);
              *((_WORD *)&v14[9].Next + 4 * v62 + 2) = *(_WORD *)(v61 + 40);
              *((_WORD *)&v14[9].Next + 4 * v62 + 1) = *(_WORD *)(v61 + 44);
              *((_WORD *)&v14[9].Next + 4 * v62 + 3) = *(_WORD *)(v61 + 48);
              *((_WORD *)&v14[9].Next + 4 * v62 + 4) = *(_WORD *)(v61 + 36);
              *((_WORD *)&v14[9].Next + 4 * v62 + 6) = *(_WORD *)(v61 + 40);
              *((_WORD *)&v14[9].Next + 4 * v62 + 5) = *(_WORD *)(v61 + 44);
              *((_WORD *)&v14[9].Next + 4 * v62 + 7) = *(_WORD *)(v61 + 48);
              v48 = (_DWORD *)&v14[10] + 10 * (unsigned int)v42;
              LODWORD(v62) = *v48 ^ v8 & (*(_DWORD *)(v61 + 16) ^ *v48);
              *v48 = v62;
              v63 = (*(_DWORD *)(v61 + 16) ^ v62) & 2 ^ v62;
              *v48 = v63;
              v64 = *(_DWORD *)(v61 + 52);
              if ( v64 > v8 )
                v65 = ((unsigned __int8)v63 ^ (unsigned __int8)(8 * v64 - 8)) & 0x18 ^ v63;
              else
                v65 = v63 & 0xFFFFFFE7;
              *v48 = v65;
              v66 = ((unsigned __int8)v65 ^ (unsigned __int8)(4 * *(_DWORD *)(v61 + 56))) & 4 ^ v65;
              *v48 = v66;
              v67 = ((unsigned __int8)v66 ^ (unsigned __int8)(32 * *(_DWORD *)(v61 + 72))) & 0x60 ^ v66;
              *v48 = v67;
              v68 = ((unsigned __int8)v67 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v61 + 76) << 7)) & 0x80 ^ v67;
              *v48 = v68;
              v69 = ((unsigned __int16)v68 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v61 + 76) << 7)) & 0x100 ^ v68;
              *v48 = v69;
              v70 = ((unsigned __int16)v69 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v61 + 76) << 7)) & 0x200 ^ v69;
              *v48 = v70;
              v71 = ((unsigned __int16)v70 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v61 + 80) << 10)) & 0x1C00 ^ v70;
              *v48 = v71;
              v72 = ((unsigned __int16)v71 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v61 + 84) << 13)) & 0x2000 ^ v71;
              *v48 = v72;
              v59 = ((unsigned __int16)v72 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v61 + 88) << 14)) & 0x4000 ^ v72;
              *v48 = v59;
              StereoFlipMode = *(_DWORD *)(v61 + 92);
              goto LABEL_56;
            }
            while ( 1 )
            {
              v41 = v8 + (unsigned int)v41;
              if ( (unsigned int)v41 >= a2->DmaCompleted.EngineOrdinal )
                break;
LABEL_50:
              if ( v44 )
                goto LABEL_62;
              v45 = a2->CrtcVsyncWithMultiPlaneOverlay.pMultiPlaneOverlayVsyncInfo;
              if ( v43 )
              {
                v73 = (char *)v45 + 112 * (unsigned int)v41;
                if ( *((_DWORD *)v73 + 1) != (_DWORD)v4 )
                {
                  v74 = 5 * v42;
                  *((_DWORD *)&v14[7].Next + 2) = *(_DWORD *)(&v14[7].Next + 1) & 0xFFFFFC00 ^ ((unsigned __int16)*((_DWORD *)&v14[7].Next + 2) | (unsigned __int16)(v8 << *(_DWORD *)v73)) & 0x3FF;
                  *((_QWORD *)&v14[8].Next + v74) = *((_QWORD *)v73 + 1);
                  *((_WORD *)&v14[8].Next + 4 * v74 + 4) = *((_WORD *)v73 + 10);
                  *((_WORD *)&v14[8].Next + 4 * v74 + 6) = *((_WORD *)v73 + 12);
                  *((_WORD *)&v14[8].Next + 4 * v74 + 5) = *((_WORD *)v73 + 14);
                  *((_WORD *)&v14[8].Next + 4 * v74 + 7) = *((_WORD *)v73 + 16);
                  *((_WORD *)&v14[9].Next + 4 * v74) = *((_WORD *)v73 + 18);
                  *((_WORD *)&v14[9].Next + 4 * v74 + 2) = *((_WORD *)v73 + 20);
                  *((_WORD *)&v14[9].Next + 4 * v74 + 1) = *((_WORD *)v73 + 22);
                  *((_WORD *)&v14[9].Next + 4 * v74 + 3) = *((_WORD *)v73 + 24);
                  *((_WORD *)&v14[9].Next + 4 * v74 + 4) = *((_WORD *)v73 + 26);
                  *((_WORD *)&v14[9].Next + 4 * v74 + 6) = *((_WORD *)v73 + 28);
                  *((_WORD *)&v14[9].Next + 4 * v74 + 5) = *((_WORD *)v73 + 30);
                  *((_WORD *)&v14[9].Next + 4 * v74 + 7) = *((_WORD *)v73 + 32);
                  v48 = (_DWORD *)&v14[10] + 10 * (unsigned int)v42;
                  LODWORD(v74) = *v48 ^ v8 & (*((_DWORD *)v73 + 4) ^ *v48);
                  *v48 = v74;
                  v75 = (*((_DWORD *)v73 + 4) ^ v74) & 2 ^ v74;
                  *v48 = v75;
                  v76 = *((_DWORD *)v73 + 17);
                  if ( v76 > v8 )
                    v77 = ((unsigned __int8)v75 ^ (unsigned __int8)(8 * v76 - 8)) & 0x18 ^ v75;
                  else
                    v77 = v75 & 0xFFFFFFE7;
                  *v48 = v77;
                  v78 = ((unsigned __int8)v77 ^ (unsigned __int8)(4 * *((_DWORD *)v73 + 18))) & 4 ^ v77;
                  *v48 = v78;
                  v79 = ((unsigned __int8)v78 ^ (unsigned __int8)(32 * *((_DWORD *)v73 + 22))) & 0x60 ^ v78;
                  *v48 = v79;
                  v80 = ((unsigned __int8)v79 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)v73 + 23) << 7)) & 0x80 ^ v79;
                  *v48 = v80;
                  v81 = ((unsigned __int16)v80 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v73 + 23) << 7)) & 0x100 ^ v80;
                  *v48 = v81;
                  v82 = ((unsigned __int16)v81 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v73 + 23) << 7)) & 0x200 ^ v81;
                  *v48 = v82;
                  v83 = ((unsigned __int16)v82 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v73 + 24) << 10)) & 0x1C00 ^ v82;
                  *v48 = v83;
                  v84 = ((unsigned __int16)v83 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v73 + 25) << 13)) & 0x2000 ^ v83;
                  *v48 = v84;
                  v59 = ((unsigned __int16)v84 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v73 + 26) << 14)) & 0x4000 ^ v84;
                  *v48 = v59;
                  StereoFlipMode = *((_DWORD *)v73 + 27);
                  goto LABEL_56;
                }
              }
              else
              {
                v46 = &v45[(unsigned int)v41];
                if ( v46->Enabled != (_DWORD)v4 )
                {
                  v47 = 5 * v42;
                  *((_DWORD *)&v14[7].Next + 2) = *(_DWORD *)(&v14[7].Next + 1) & 0xFFFFFC00 ^ ((unsigned __int16)*((_DWORD *)&v14[7].Next + 2) | (unsigned __int16)(v8 << v46->LayerIndex)) & 0x3FF;
                  *((_QWORD *)&v14[8].Next + v47) = v46->PhysicalAddress.QuadPart;
                  *((_WORD *)&v14[8].Next + 4 * v47 + 4) = v46->PlaneAttributes.SrcRect.left;
                  *((_WORD *)&v14[8].Next + 4 * v47 + 6) = v46->PlaneAttributes.SrcRect.top;
                  *((_WORD *)&v14[8].Next + 4 * v47 + 5) = v46->PlaneAttributes.SrcRect.right;
                  *((_WORD *)&v14[8].Next + 4 * v47 + 7) = v46->PlaneAttributes.SrcRect.bottom;
                  *((_WORD *)&v14[9].Next + 4 * v47) = v46->PlaneAttributes.DstRect.left;
                  *((_WORD *)&v14[9].Next + 4 * v47 + 2) = v46->PlaneAttributes.DstRect.top;
                  *((_WORD *)&v14[9].Next + 4 * v47 + 1) = v46->PlaneAttributes.DstRect.right;
                  *((_WORD *)&v14[9].Next + 4 * v47 + 3) = v46->PlaneAttributes.DstRect.bottom;
                  *((_WORD *)&v14[9].Next + 4 * v47 + 4) = v46->PlaneAttributes.ClipRect.left;
                  *((_WORD *)&v14[9].Next + 4 * v47 + 6) = v46->PlaneAttributes.ClipRect.top;
                  *((_WORD *)&v14[9].Next + 4 * v47 + 5) = v46->PlaneAttributes.ClipRect.right;
                  *((_WORD *)&v14[9].Next + 4 * v47 + 7) = v46->PlaneAttributes.ClipRect.bottom;
                  v48 = (_DWORD *)&v14[10] + 10 * (unsigned int)v42;
                  LODWORD(v47) = *v48 ^ v8 & (v46->PlaneAttributes.Flags.Value ^ *v48);
                  *v48 = v47;
                  v49 = (v46->PlaneAttributes.Flags.Value ^ v47) & 2 ^ v47;
                  *v48 = v49;
                  Rotation = v46->PlaneAttributes.Rotation;
                  if ( Rotation > v8 )
                    v51 = ((unsigned __int8)v49 ^ (unsigned __int8)(8 * Rotation - 8)) & 0x18 ^ v49;
                  else
                    v51 = v49 & 0xFFFFFFE7;
                  *v48 = v51;
                  v52 = ((unsigned __int8)v51 ^ (unsigned __int8)(4 * v46->PlaneAttributes.Blend.Value)) & 4 ^ v51;
                  *v48 = v52;
                  v53 = ((unsigned __int8)v52 ^ (unsigned __int8)(32 * v46->PlaneAttributes.VideoFrameFormat)) & 0x60 ^ v52;
                  *v48 = v53;
                  v54 = ((unsigned __int8)v53 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)&v46->PlaneAttributes.YCbCrFlags.0 << 7)) & 0x80 ^ v53;
                  *v48 = v54;
                  v55 = ((unsigned __int16)v54 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v46->PlaneAttributes.YCbCrFlags.0 << 7)) & 0x100 ^ v54;
                  *v48 = v55;
                  v56 = ((unsigned __int16)v55 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v46->PlaneAttributes.YCbCrFlags.0 << 7)) & 0x200 ^ v55;
                  *v48 = v56;
                  v57 = ((unsigned __int16)v56 ^ (unsigned __int16)((unsigned __int16)v46->PlaneAttributes.StereoFormat << 10)) & 0x1C00 ^ v56;
                  *v48 = v57;
                  v58 = ((unsigned __int16)v57 ^ (v46->PlaneAttributes.StereoLeftViewFrame0 << 13)) & 0x2000 ^ v57;
                  *v48 = v58;
                  v59 = ((unsigned __int16)v58 ^ (v46->PlaneAttributes.StereoBaseViewFrame0 << 14)) & 0x4000 ^ v58;
                  *v48 = v59;
                  StereoFlipMode = v46->PlaneAttributes.StereoFlipMode;
LABEL_56:
                  *v48 = v59 ^ (v59 ^ (StereoFlipMode << 15)) & 0x18000;
                  v42 = v8 + (unsigned int)v42;
                  v43 = v86;
                  continue;
                }
              }
            }
            v4 = a4;
            goto LABEL_38;
          }
          v14[v36 + 8].Next = (struct _SLIST_ENTRY *)*(&pMultiPlaneOverlayVsyncInfo->PhysicalAddress.QuadPart + 3 * v33);
          v37 = *(&pMultiPlaneOverlayVsyncInfo->LayerIndex + 6 * v33);
          v38 = *(&pMultiPlaneOverlayVsyncInfo->PlaneAttributes.Flags.Value + 6 * v33);
          v33 = (unsigned int)(v33 + 1);
          *((_DWORD *)&v14[v37 + 8].Next + 2) = v38;
        }
        goto LABEL_38;
      }
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 14LL, a1, EngineOrdinal, v30);
      WdLogGlobalForLineNumber = 906;
LABEL_31:
      v19 = KeQueryPerformanceCounter(v15);
      v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 44432), v11, 0LL);
      LODWORD(v17) = 1;
      v18 = (LARGE_INTEGER *)v14;
      v32 = v19.QuadPart - (unsigned __int64)v14->Next;
      if ( v31 )
      {
        if ( v32 > v31 )
        {
          v17 = v32 / v31;
          if ( !(unsigned int)(v32 / v31) )
            continue;
        }
      }
      goto LABEL_18;
    }
    if ( v28 == (DXGK_INTERRUPT_GPU_ENGINE_TIMEOUT|DXGK_INTERRUPT_DMA_PREEMPTED) )
    {
      VidSchiProcessIsrVSyncMultiPlaneOverlay3(
        (struct _VIDSCH_GLOBAL *)a1,
        (struct _VIDSCH_PRESENT_INFO *)v13,
        a2,
        (struct _VIDSCH_VSYNC_COOKIE *)v14);
    }
    else if ( v28 == DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY )
    {
      v39 = a2->DmaCompleted.EngineOrdinal;
      if ( v39 >= 0xA )
      {
        WdLogSingleEntry3(1LL, a1, a2->DmaCompleted.SubmissionFenceId, a2->DmaCompleted.EngineOrdinal);
        v85 = a2->DmaCompleted.SubmissionFenceId;
        WdLogGlobalForLineNumber = 8622;
        DxgkLogInternalTriageEvent(v85, 0x40000LL);
      }
      else
      {
        Alignment = a1[1].Alignment;
        v41 = 0LL;
        v42 = 0LL;
        v43 = *(_BYTE *)(Alignment + 3019);
        v44 = *(_BYTE *)(Alignment + 3018);
        v86 = v43;
        if ( v39 )
        {
          LODWORD(v4) = 0;
          v8 = 1;
          goto LABEL_50;
        }
      }
    }
    else
    {
      *((_DWORD *)&v14[7].Next + 2) = v27 | 1;
      v14[8].Next = (struct _SLIST_ENTRY *)a2->CrtcVsync.PhysicalAddress.QuadPart;
    }
LABEL_38:
    if ( !v7 )
    {
      *((_QWORD *)&v14[5].Next + 1) = *(_QWORD *)(v13 + 44312);
      v14[6].Next = (struct _SLIST_ENTRY *)*(unsigned int *)(v13 + 44328);
      *((_BYTE *)&v14[6].Next + 8) = *(_BYTE *)(v13 + 44344);
      *((_QWORD *)&v14[3].Next + 1) = *(_QWORD *)(v13 + 44304);
      v14[4].Next = *(struct _SLIST_ENTRY **)(v13 + 44320);
      *((_QWORD *)&v14[4].Next + 1) = *(_QWORD *)(v13 + 44336);
    }
    v14[5].Next = v4;
    ExpInterlockedPushEntrySList(a1 + 127, v14 + 2);
  }
LABEL_9:
  if ( bTracingEnabled )
  {
    if ( v7 )
    {
      if ( (byte_140081241 & 1) == 0 )
        return (unsigned int)v11;
    }
    else if ( (byte_140081241 & 1) == 0 )
    {
      return (unsigned int)v11;
    }
    McTemplateK0pqx_EtwWriteTransfer();
  }
  return (unsigned int)v11;
}
