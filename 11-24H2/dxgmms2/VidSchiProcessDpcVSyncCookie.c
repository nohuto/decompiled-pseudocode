/*
 * XREFs of VidSchiProcessDpcVSyncCookie @ 0x1400080A0
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x14000779C (VidSchDdiNotifyDpcWorker.c)
 *     VidSchDdiNotifyDpc @ 0x1400079E0 (VidSchDdiNotifyDpc.c)
 * Callees:
 *     ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14000A8F8 (-VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x140015574 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x14001C0D8 (VidSchiCompletePendingFlipOnPlane.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x14002A7D4 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14002D1D0 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z @ 0x140036C4C (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z.c)
 *     ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1400379A4 (-VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP.c)
 *     McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer @ 0x14003A540 (McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer.c)
 *     McTemplateK0pqxqqipqx_EtwWriteTransfer @ 0x14003AF88 (McTemplateK0pqxqqipqx_EtwWriteTransfer.c)
 *     McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer @ 0x14003E11C (McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiProcessDpcVSyncCookie(struct _VIDSCH_VSYNC_COOKIE *a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  unsigned int v3; // r15d
  __int64 v5; // r13
  bool v6; // di
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 i; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rsi
  struct VIDSCH_FLIP_QUEUE *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r15
  unsigned int v17; // edi
  __int64 v18; // r15
  unsigned int v19; // eax
  unsigned int v20; // edx
  __int64 v21; // r8
  unsigned __int64 v22; // rdx
  int v23; // esi
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r10
  unsigned int v27; // eax
  bool v28; // zf
  int v29; // eax
  char v30; // r9
  int v31; // eax
  int v32; // eax
  int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // eax
  __int64 v36; // rdx
  unsigned int v37; // ecx
  __int64 v38; // rdx
  int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // eax
  unsigned __int64 v42; // rdx
  unsigned int v43; // edi
  void (__fastcall *v44)(_QWORD, _QWORD); // rax
  bool v45[4]; // [rsp+78h] [rbp-90h] BYREF
  int v46; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v47; // [rsp+80h] [rbp-88h]
  int v48; // [rsp+84h] [rbp-84h]
  unsigned int v49; // [rsp+88h] [rbp-80h]
  int v50; // [rsp+8Ch] [rbp-7Ch]
  int v51; // [rsp+90h] [rbp-78h]
  __int64 v52; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v53[2]; // [rsp+A0h] [rbp-68h] BYREF
  char v54; // [rsp+B0h] [rbp-58h]
  int v55; // [rsp+B4h] [rbp-54h]
  __int64 v56; // [rsp+B8h] [rbp-50h]
  __int64 v57; // [rsp+C0h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-20h]
  __int64 v60; // [rsp+F0h] [rbp-18h]
  int v61; // [rsp+F8h] [rbp-10h]
  int v62; // [rsp+FCh] [rbp-Ch]
  struct VIDSCH_FLIP_QUEUE *v63; // [rsp+100h] [rbp-8h]
  unsigned int v64; // [rsp+108h] [rbp+0h]
  int v65; // [rsp+10Ch] [rbp+4h]
  __int64 v66; // [rsp+110h] [rbp+8h]
  __int64 v67; // [rsp+118h] [rbp+10h]
  __int64 v68; // [rsp+120h] [rbp+18h]
  __int64 v69; // [rsp+128h] [rbp+20h]
  __int64 v70; // [rsp+130h] [rbp+28h]
  _OWORD v71[2]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v72; // [rsp+158h] [rbp+50h]
  int v73; // [rsp+160h] [rbp+58h]
  _OWORD v74[5]; // [rsp+168h] [rbp+60h] BYREF
  _OWORD v75[5]; // [rsp+1B8h] [rbp+B0h] BYREF
  _OWORD v76[5]; // [rsp+208h] [rbp+100h] BYREF

  v1 = *((unsigned int *)a1 + 27);
  v2 = *((_QWORD *)a1 + 6);
  v3 = 0;
  v48 = 0;
  v72 = 0LL;
  v73 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v75, 0, sizeof(v75));
  memset(v71, 0, sizeof(v71));
  if ( (_DWORD)v1 == -1 || (unsigned int)v1 >= *(_DWORD *)(v2 + 40) )
    return;
  _mm_lfence();
  v6 = 0;
  v57 = *(_QWORD *)(v2 + 8 * v1 + 3432);
  v5 = v57;
  v45[1] = 0;
  v7 = (unsigned int)v1;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 1984), &LockHandle);
  v52 = v2;
  v54 = 0;
  v53[1] = v53;
  v55 = 2;
  v53[0] = v53;
  VidSchiRecordVSyncTiming(a1);
  v9 = 3LL;
  i = 1LL;
  if ( *(int *)(v5 + 4) >= 4 || *(_BYTE *)(v2 + 156) )
  {
    v11 = -1;
    v12 = 4673LL;
    while ( 1 )
    {
      v47 = v11;
      if ( v11 == *(_DWORD *)(v2 + 152) )
      {
        v6 = v45[1];
        goto LABEL_45;
      }
      v13 = *(_QWORD *)(v2 + 8 * v7 + 3432);
      v45[0] = 0;
      if ( v11 == -1 )
      {
        v14 = *(struct VIDSCH_FLIP_QUEUE **)(v13 + 32);
      }
      else
      {
        v14 = *(struct VIDSCH_FLIP_QUEUE **)(v13 + 8LL * v11 + 40);
        v11 = v47;
      }
      if ( v14 )
        break;
LABEL_43:
      ++v11;
      v7 = v1;
    }
    LODWORD(v8) = *((_DWORD *)v14 + 28);
    if ( (_DWORD)v8 )
    {
      LODWORD(v8) = v8 - 1;
      *((_DWORD *)v14 + 28) = v8;
    }
    v15 = v3;
    v49 = v3 + 1;
    v16 = 0LL;
    v46 = 0;
    v56 = 0LL;
    *((_DWORD *)v71 + v15) = v8;
    v17 = *((_DWORD *)v14 + 18);
    if ( v17 != (((unsigned __int8)*((_DWORD *)v14 + 17) - 1) & 0x3F) )
    {
      while ( 1 )
      {
        v18 = 1400LL * v17;
        v19 = *(_DWORD *)((char *)v14 + v18 + 1172);
        if ( v19 > 0xC || !_bittest((const int *)&v12, v19) )
        {
          if ( v19 != 5 && v19 != 15 )
          {
LABEL_26:
            v16 = v56;
            break;
          }
          if ( !*(_BYTE *)(v2 + 156)
            && !*((_QWORD *)a1 + 16)
            && _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 78944), 3, 2) == 2
            && !_InterlockedExchange((volatile __int32 *)(v2 + 2712), 1) )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v2 + 16) + 24LL));
            *(_QWORD *)(v2 + 2672) = -1LL;
            ExQueueWorkItem((PWORK_QUEUE_ITEM)(v2 + 2680), CriticalWorkQueue);
          }
          if ( (unsigned int)VidSchiIsExpectedVSyncCookie(
                               (struct _VIDSCH_GLOBAL *)v2,
                               (struct _VIDSCH_PRESENT_INFO *)v12,
                               (struct VIDSCH_FLIP_QUEUE *)((char *)v14 + v18 + 120),
                               a1) )
          {
            v16 = *(_QWORD *)((char *)v14 + v18 + 1160);
            if ( v16 )
            {
              v59 = v2;
              v62 = 0;
              v65 = 0;
              v66 = *(_QWORD *)(v5 + 44352);
              v67 = *(_QWORD *)(v5 + 44368);
              v70 = *(_QWORD *)(v5 + 44384);
              v68 = *(_QWORD *)(v5 + 44360);
              v69 = *(_QWORD *)(v5 + 44376);
              v60 = v16;
              v61 = v1;
              v63 = v14;
              v64 = v17;
              VidSchiProcessVsyncCompletedFlipEntry((struct HwQueueStagingList *)&v52, (__int64)&v46, (__int64)&v45[1]);
            }
            break;
          }
          v12 = 4673LL;
          i = 1LL;
          v9 = 3LL;
        }
        v17 = ((_BYTE)v17 - 1) & 0x3F;
        if ( v17 == (((unsigned __int8)*((_DWORD *)v14 + 17) - 1) & 0x3F) )
          goto LABEL_26;
      }
    }
    if ( !*(_DWORD *)(v5 + 3236) )
      goto LABEL_38;
    if ( *(_BYTE *)(v2 + 7072) )
    {
      if ( !*(_BYTE *)(v5 + 78948) )
      {
        v12 = ((unsigned __int8)*((_DWORD *)v14 + 19) + 1) & 0x3F;
        for ( i = ((unsigned __int8)*((_DWORD *)v14 + 14) + 1) & 0x3F;
              (_DWORD)v12 != (_DWORD)i;
              v12 = ((_BYTE)v12 + 1) & 0x3F )
        {
          v8 = 1400LL * (unsigned int)v12;
          if ( *(_DWORD *)((char *)v14 + v8 + 1172) == 14 )
            goto LABEL_37;
        }
LABEL_38:
        if ( v16 )
        {
          VidSchiCheckPendingDeviceCommand(v16, v12, i, v9);
          v20 = -v46;
          v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 40) + 32LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(v16 + 32) + 4LL))
                          + 8 * v1
                          + 88);
          _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 8 * v1 + 6712) + 8LL), -v46);
          v8 = *(_QWORD *)(v2 + 8 * v1 + 6712);
          *(_DWORD *)v8 += v46;
          _InterlockedAdd((volatile signed __int32 *)(v21 + 8), v20);
          *(_DWORD *)v21 += v46;
        }
        if ( v45[0] )
          VidSchiCompletePendingFlipOnPlane((unsigned int)&v52, v2, v1, (_DWORD)v14, 9);
        v3 = v49;
        v9 = 3LL;
        v11 = v47;
        v12 = 4673LL;
        i = 1LL;
        goto LABEL_43;
      }
    }
    else if ( !*(_BYTE *)(v5 + 78948) )
    {
      goto LABEL_38;
    }
LABEL_37:
    VidSchiExecuteNextFlipQueueEntry((struct HwQueueStagingList *)&v52, (struct _VIDSCH_GLOBAL *)v2, v45, v1, v14);
    goto LABEL_38;
  }
LABEL_45:
  if ( bTracingEnabled )
  {
    v22 = *((_QWORD *)a1 + 11);
    if ( v22 > 0xFFFFFFFF )
    {
      WdLogSingleEntry1(3LL, v22);
      WdLogGlobalForLineNumber = 7016;
    }
    v23 = *((_DWORD *)a1 + 22);
    if ( (*((_BYTE *)a1 + 124) & 1) == 0 && Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0pqxqqipqx_EtwWriteTransfer(
        v8,
        v22,
        i,
        *(_QWORD *)(v2 + 16),
        *((_DWORD *)a1 + 28),
        *((_QWORD *)a1 + 16),
        *((_DWORD *)a1 + 27),
        v23,
        *((_QWORD *)a1 + 7),
        0,
        0,
        v75[0]);
    v24 = *((_DWORD *)a1 + 4);
    memset(v74, 0, sizeof(v74));
    memset(v76, 0, sizeof(v76));
    switch ( v24 )
    {
      case 10:
        LODWORD(i) = 0;
        if ( *(_DWORD *)(v2 + 152) )
        {
          do
          {
            LODWORD(v8) = i;
            v25 = *((_QWORD *)a1 + 2 * (unsigned int)i + 16);
            *((_QWORD *)v74 + (unsigned int)i) = v25;
            if ( v25 )
            {
              v8 = v5 + 304LL * (unsigned int)i;
              v26 = *(_QWORD *)(v8 + 432);
              if ( v26 )
              {
                v27 = ((unsigned __int8)*(_DWORD *)(v8 + 440) + 1) & 0x3F;
                *(_DWORD *)(v8 + 440) = v27;
                v22 = 2LL * v27;
                *(_QWORD *)(v26 + 8 * v22) = *((_QWORD *)a1 + 2 * (unsigned int)i + 16);
                v8 = *(_QWORD *)(v8 + 432);
                *(_QWORD *)(v8 + 8 * v22 + 8) = *(_QWORD *)(v5 + 44368);
              }
            }
            LODWORD(i) = i + 1;
          }
          while ( (unsigned int)i < *(_DWORD *)(v2 + 152) );
        }
        break;
      case 3:
        *(_QWORD *)&v74[0] = *((_QWORD *)a1 + 16);
        break;
      case 7:
        LODWORD(v22) = *((_DWORD *)a1 + 30) & 0x3FF;
        LODWORD(i) = -1;
        v28 = !_BitScanForward((unsigned int *)&v29, v22);
        v50 = v29;
        if ( !v28 )
          LODWORD(i) = (unsigned __int8)v29;
        v30 = 0;
        if ( (_DWORD)v22 )
        {
          do
          {
            *((_QWORD *)v74 + (char)i) = *((_QWORD *)a1 + 5 * v30 + 16);
            LODWORD(v8) = (unsigned __int8)i;
            LODWORD(i) = -1;
            LODWORD(v22) = ~(1 << v8) & v22;
            v28 = !_BitScanForward((unsigned int *)&v31, v22);
            v51 = v31;
            if ( !v28 )
              LODWORD(i) = (unsigned __int8)v31;
            ++v30;
          }
          while ( (_DWORD)v22 );
          v5 = v57;
        }
        break;
    }
    if ( (*((_BYTE *)a1 + 124) & 1) != 0 )
    {
      if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
        McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer(
          v8,
          v22,
          i,
          *(_QWORD *)(v2 + 16),
          *(_DWORD *)(v2 + 152),
          (__int64)v74,
          *((_DWORD *)a1 + 27),
          v23,
          v48,
          (__int64)v75,
          (__int64)v76);
    }
    else if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
    {
      McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer(
        (unsigned int)v76,
        v22,
        i,
        *(_QWORD *)(v2 + 16),
        *(_DWORD *)(v2 + 152),
        (__int64)v74,
        *((_DWORD *)a1 + 27),
        v23,
        v48,
        (__int64)v75,
        v3,
        (__int64)v71,
        *((_BYTE *)a1 + 104) == 0,
        (__int64)v76);
    }
    LODWORD(i) = 1;
  }
  if ( *(_BYTE *)(v2 + 2468) )
  {
    if ( v6 )
      goto LABEL_112;
    if ( *(_BYTE *)(v2 + 45) != 1 || !*(_DWORD *)(v2 + 2660) )
      goto LABEL_113;
    if ( _InterlockedExchange((volatile __int32 *)(v2 + 4 * v1 + 2528), 0) )
      goto LABEL_112;
    v36 = *(_QWORD *)(v2 + 16);
    v37 = v1;
    if ( (*(_DWORD *)(v36 + 2976) & 0x10) != 0 )
    {
      if ( (unsigned int)v1 >= 0x10 )
      {
LABEL_102:
        if ( !*(_DWORD *)(v2 + 4 * v1 + 796) && !*(_DWORD *)(v2 + 868) && !*(_DWORD *)(v2 + 20 * v1 + 2156) )
        {
          if ( (*((_BYTE *)a1 + 124) & 1) == 0 )
          {
            v38 = v2 + 4 * v1;
            v39 = *(_DWORD *)(v38 + 2592);
            if ( v39 != -1 )
            {
              v40 = v39 + 1;
              *(_DWORD *)(v38 + 2592) = v40;
              v41 = *(_DWORD *)(v2 + 2660);
              if ( v40 == v41 )
              {
                *(_DWORD *)(v2 + 2524) |= (_DWORD)i << v1;
                if ( *(_DWORD *)(v2 + 2520) != 1 )
                {
                  ExQueueWorkItem((PWORK_QUEUE_ITEM)(v2 + 2488), CriticalWorkQueue);
                  *(_DWORD *)(v2 + 2520) = 1;
                }
              }
              else if ( v40 > v41 )
              {
                *(_DWORD *)(v38 + 2592) = v41 + 1;
              }
            }
            goto LABEL_113;
          }
          goto LABEL_117;
        }
LABEL_112:
        *(_DWORD *)(v2 + 4 * v1 + 2592) = 0;
        goto LABEL_113;
      }
    }
    else
    {
      v37 = 0;
    }
    if ( *(_DWORD *)(v36 + 4LL * v37 + 3152) )
      goto LABEL_112;
    goto LABEL_102;
  }
  if ( v6 )
    goto LABEL_93;
  if ( *(_BYTE *)(v2 + 45) != 1 || !*(_DWORD *)(v2 + 2660) )
    goto LABEL_113;
  if ( _InterlockedExchange((volatile __int32 *)(v2 + 2528), 0)
    || *(_DWORD *)(*(_QWORD *)(v2 + 16) + 3152LL)
    || *(_DWORD *)(v2 + 796)
    || *(_DWORD *)(v2 + 868)
    || *(_DWORD *)(v2 + 2156) )
  {
LABEL_93:
    *(_DWORD *)(v2 + 2656) = -1;
    *(_DWORD *)(v2 + 2592) = 0;
    goto LABEL_113;
  }
  if ( (*((_BYTE *)a1 + 124) & 1) == 0 )
  {
    v32 = *(_DWORD *)(v2 + 2656);
    if ( v32 == -1 )
    {
      *(_DWORD *)(v2 + 2656) = v1;
      goto LABEL_87;
    }
    if ( v32 == (_DWORD)v1 )
    {
LABEL_87:
      v33 = *(_DWORD *)(v2 + 2592);
      if ( v33 != -1 )
      {
        v34 = v33 + 1;
        *(_DWORD *)(v2 + 2592) = v34;
        v35 = *(_DWORD *)(v2 + 2660);
        if ( v34 == v35 )
        {
          if ( !_InterlockedExchange((volatile __int32 *)(v2 + 2520), i) )
            ExQueueWorkItem((PWORK_QUEUE_ITEM)(v2 + 2488), CriticalWorkQueue);
        }
        else if ( v34 > v35 )
        {
          *(_DWORD *)(v2 + 2592) = v35 + 1;
        }
      }
    }
LABEL_113:
    if ( (*((_BYTE *)a1 + 124) & 1) == 0 )
    {
      ADAPTER_DISPLAY::SignalVerticalBlankEvent(
        *(ADAPTER_DISPLAY **)(*(_QWORD *)(v2 + 16) + 3120LL),
        *(struct DXGADAPTER **)(v2 + 16),
        v1,
        *(_QWORD *)(v5 + 44352),
        *((_BYTE *)a1 + 104) == 0);
      v42 = *(_QWORD *)(v5 + 44352);
      if ( v42 > 0xFFFFFFFF )
      {
        WdLogSingleEntry1(3LL, v42);
        WdLogGlobalForLineNumber = 7016;
      }
      v43 = *(_DWORD *)(v5 + 44352);
      ((void (*)(void))DxgCoreInterface[3])();
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        *(_QWORD *)(*(_QWORD *)(v2 + 16) + 412LL),
        *((unsigned int *)a1 + 28),
        v43,
        *(_QWORD *)(v5 + 44368));
    }
  }
LABEL_117:
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v52, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (*((_BYTE *)a1 + 124) & 1) == 0 )
  {
    v44 = *(void (__fastcall **)(_QWORD, _QWORD))(v2 + 3336);
    if ( v44 )
      v44(*(_QWORD *)(v2 + 3352), (unsigned int)v1);
  }
  if ( v55 && !v54 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v52, 0LL);
}
