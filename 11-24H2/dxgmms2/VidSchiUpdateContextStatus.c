/*
 * XREFs of VidSchiUpdateContextStatus @ 0x14001AC80
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x140008BD0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x140009610 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1400124E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x140013940 (VidSchiSubmitWaitCommand.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x140013C80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiReadCommandFromContextQueue @ 0x140015810 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiSendToExecutionQueue @ 0x140017660 (VidSchiSendToExecutionQueue.c)
 *     VidSchiScheduleCommandToRun @ 0x140018790 (VidSchiScheduleCommandToRun.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x140018F34 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiSwitchContextWithCheck @ 0x1400193A0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x14001A970 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiCompleteRewindPacket @ 0x14001B590 (VidSchiCompleteRewindPacket.c)
 *     VidSchiUnwaitContext @ 0x14001B8CC (VidSchiUnwaitContext.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x14001BA54 (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchSuspendResumeDevice @ 0x140020380 (VidSchSuspendResumeDevice.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x140034B10 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchSetNodePowerState @ 0x140048AD0 (VidSchSetNodePowerState.c)
 * Callees:
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x14000D3D0 (McTemplateK0piixqq_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000DBE8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiUpdateContextStatus(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  unsigned int v5; // r14d
  int v6; // r15d
  __int64 v9; // r13
  __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rsi
  _QWORD *v15; // rcx
  unsigned int v16; // ecx
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  signed __int32 v19; // eax
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  unsigned int v28; // ecx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  _QWORD *v32; // rcx
  _QWORD *v34; // rcx
  _QWORD *v35; // rcx
  int v36; // eax
  __int64 v37; // rax
  __int64 *v38; // rax
  __int64 v39; // rcx
  void (__fastcall *v40)(_QWORD); // rax
  void (__fastcall *v41)(_QWORD); // rax
  _QWORD *v42; // rcx
  __int64 v43; // rcx
  unsigned int v44; // r12d
  __int64 *v45; // rsi
  _QWORD *v46; // rcx
  void (__fastcall *v47)(_QWORD, _QWORD); // rax
  int v48; // [rsp+90h] [rbp+18h]

  v48 = a3;
  v4 = *(_QWORD *)(a1 + 96);
  v5 = 0;
  v6 = a3;
  v9 = *(_QWORD *)(v4 + 24);
  if ( (byte_140081241 & 4) != 0 )
    McTemplateK0pqq_EtwWriteTransfer();
  if ( a2 == 5 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 8) == 0
      && (*(_DWORD *)(a1 + 184) & 4) == 0
      && (*(_DWORD *)(a1 + 184) & 0x10) == 0
      && (*(_DWORD *)(a1 + 184) & 0x40) == 0
      && (*(_DWORD *)(a1 + 184) & 0x200) == 0
      && (*(_DWORD *)(a1 + 184) & 0x100) == 0
      && (*(_DWORD *)(a1 + 184) & 0x80u) == 0
      && (*(_DWORD *)(a1 + 184) & 0x20) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 184) & 1) != 0 )
        goto LABEL_51;
      v13 = *(_QWORD *)(a1 + 8);
      v14 = (_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v13 + 8) != a1 + 8 )
        goto LABEL_9;
      v15 = *(_QWORD **)(a1 + 16);
      if ( (_QWORD *)*v15 != v14 )
        goto LABEL_9;
      *v15 = v13;
      *(_QWORD *)(v13 + 8) = v15;
      v16 = *(_DWORD *)(a1 + 404);
      v17 = *(_QWORD *)(v4 + 24);
      if ( *(_QWORD *)(v4 + 16LL * v16 + 2184) == v4 + 16LL * v16 + 2184 )
      {
        v18 = *(unsigned __int16 *)(v4 + 4);
        *(_DWORD *)(v4 + 1888) |= 1 << v16;
        if ( !_bittest64(*(const signed __int64 **)(v17 + 552), v18)
          && ((-1 << *(_DWORD *)(a1 + 404)) & *(_DWORD *)(v4 + 1892)) == 0
          && !*(_DWORD *)(v4 + 3028) )
        {
          RtlSetBitEx(v17 + 544, v18);
        }
      }
      if ( !*(_DWORD *)(v4 + 3004) )
      {
        if ( (unsigned __int8)RtlAreBitsClearEx(v9 + 496, 0LL, *(unsigned int *)(v9 + 84))
          && *(_DWORD *)(*(_QWORD *)(v9 + 16) + 160LL) == 1 )
        {
          if ( *(_DWORD *)(v4 + 16520) != -1 )
          {
            v40 = *(void (__fastcall **)(_QWORD))(v9 + 3312);
            if ( v40 )
              v40(*(_QWORD *)(v9 + 3352));
          }
          if ( *(_DWORD *)(v4 + 16520) != -1 )
          {
            v41 = *(void (__fastcall **)(_QWORD))(v9 + 3320);
            if ( v41 )
              v41(*(_QWORD *)(v9 + 3352));
          }
        }
        RtlSetBitEx(v9 + 496, *(unsigned __int16 *)(v4 + 4));
        v6 = v48;
      }
      ++*(_DWORD *)(v4 + 3004);
      *(_DWORD *)(a1 + 184) |= 1u;
      v19 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0);
      v20 = 16LL * *(unsigned int *)(a1 + 404);
      v21 = v19 == 1;
      v22 = v4 + 2184;
      if ( v21 )
      {
        v38 = (__int64 *)(v20 + v22);
        v39 = *v38;
        if ( *(__int64 **)(*v38 + 8) != v38 )
          goto LABEL_9;
        *v14 = v39;
        *(_QWORD *)(a1 + 16) = v38;
        *(_QWORD *)(v39 + 8) = v14;
        *v38 = (__int64)v14;
      }
      else
      {
        v23 = v20 + v22;
        v24 = *(_QWORD **)(v23 + 8);
        if ( *v24 != v23 )
          goto LABEL_9;
        *v14 = v23;
        *(_QWORD *)(a1 + 16) = v24;
        *v24 = v14;
        *(_QWORD *)(v23 + 8) = v14;
      }
      if ( *(_DWORD *)(a1 + 408) == 1 )
      {
        v25 = (_QWORD *)(a1 + 416);
        v26 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 32LL)
                                   + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 4LL))
                       + 216LL);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0) == 1 )
        {
          v37 = *v26;
          if ( *(_QWORD **)(*v26 + 8LL) == v26 )
          {
            *v25 = v37;
            v5 = 1;
            *(_QWORD *)(a1 + 424) = v26;
            *(_QWORD *)(v37 + 8) = v25;
            *v26 = v25;
            goto LABEL_51;
          }
          goto LABEL_9;
        }
        v27 = (_QWORD *)v26[1];
        if ( (_QWORD *)*v27 != v26 )
          goto LABEL_9;
        *v25 = v26;
        *(_QWORD *)(a1 + 424) = v27;
        *v27 = v25;
        v26[1] = v25;
      }
      v5 = 1;
      goto LABEL_51;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 1024LL, v9, v4, a1);
    WdLogGlobalForLineNumber = 906;
LABEL_55:
    *(_DWORD *)(a1 + 184) |= 0x80u;
    v34 = *(_QWORD **)(v4 + 2736);
    if ( *v34 == v4 + 2728 )
    {
      *v3 = v4 + 2728;
      v3[1] = v34;
      *v34 = v3;
      *(_QWORD *)(v4 + 2736) = v3;
      goto LABEL_51;
    }
    goto LABEL_9;
  }
  v10 = *(_QWORD *)(a1 + 8);
  v3 = (_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v10 + 8) != a1 + 8 )
    goto LABEL_9;
  v11 = *(_QWORD **)(a1 + 16);
  if ( (_QWORD *)*v11 != v3 )
    goto LABEL_9;
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  if ( (*(_DWORD *)(a1 + 184) & 1) != 0 )
  {
    v21 = (*(_DWORD *)(v4 + 3004))-- == 1;
    if ( v21 )
      RtlClearBitEx(v9 + 496, *(unsigned __int16 *)(v4 + 4), a3);
    v28 = *(_DWORD *)(a1 + 404);
    if ( *(_QWORD *)(v4 + 16LL * v28 + 2184) == v4 + 16LL * v28 + 2184 )
      *(_DWORD *)(v4 + 1888) &= ~(1 << v28);
    if ( *(_DWORD *)(a1 + 408) == 1 )
    {
      v29 = (_QWORD *)(a1 + 416);
      v30 = *(_QWORD *)(a1 + 416);
      if ( *(_QWORD *)(v30 + 8) != a1 + 416 )
        goto LABEL_9;
      v31 = *(_QWORD **)(a1 + 424);
      if ( (_QWORD *)*v31 != v29 )
        goto LABEL_9;
      *v31 = v30;
      *(_QWORD *)(v30 + 8) = v31;
      *(_QWORD *)(a1 + 424) = 0LL;
      *v29 = 0LL;
    }
    *(_DWORD *)(a1 + 184) &= ~1u;
  }
  if ( a2 )
  {
    if ( a2 != 8 )
    {
      switch ( a2 )
      {
        case 9:
          v46 = *(_QWORD **)(v4 + 2752);
          if ( *v46 == v4 + 2744 )
          {
            *v3 = v4 + 2744;
            *(_QWORD *)(a1 + 16) = v46;
            *v46 = v3;
            *(_QWORD *)(v4 + 2752) = v3;
            if ( !*(_BYTE *)(*(_QWORD *)(a1 + 104) + 1649LL) )
            {
              KeResetEvent((PRKEVENT)(v9 + 3216));
              *(_BYTE *)(*(_QWORD *)(a1 + 104) + 1649LL) = 1;
            }
            *(_DWORD *)(a1 + 184) |= 0x200u;
            ++*(_DWORD *)(*(_QWORD *)(a1 + 104) + 1652LL);
            goto LABEL_51;
          }
          break;
        case 10:
          v42 = *(_QWORD **)(v4 + 2752);
          if ( *v42 == v4 + 2744 )
          {
            *(_QWORD *)(a1 + 16) = v42;
            *v3 = v4 + 2744;
            *v42 = v3;
            v43 = a1 + 104;
            *(_QWORD *)(v4 + 2752) = v3;
            if ( (*(_DWORD *)(a1 + 184) & 0x200) != 0 )
            {
              --*(_DWORD *)(*(_QWORD *)v43 + 1652LL);
              *(_DWORD *)(a1 + 184) &= ~0x200u;
            }
            *(_DWORD *)(a1 + 184) |= 0x100u;
            *(_DWORD *)(a1 + 184) &= ~0x80u;
            v44 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 16520LL);
            if ( v44 != -1 )
            {
              v45 = *(__int64 **)(a1 + 664);
              if ( v45 != (__int64 *)(a1 + 664) )
              {
                do
                {
                  if ( (v45[6] & 0x10) != 0 )
                  {
                    v47 = *(void (__fastcall **)(_QWORD, _QWORD))(v9 + 3320);
                    if ( v47 )
                      v47(*(_QWORD *)(v9 + 3352), v44);
                    *((_DWORD *)v45 + 12) &= ~0x10u;
                  }
                  v45 = (__int64 *)*v45;
                }
                while ( v45 != (__int64 *)(a1 + 664) );
                v43 = a1 + 104;
              }
              v6 = v48;
            }
            if ( !*(_DWORD *)(*(_QWORD *)v43 + 1652LL) )
            {
              *(_BYTE *)(*(_QWORD *)v43 + 1648LL) = 1;
              *(_BYTE *)(*(_QWORD *)v43 + 1649LL) = 0;
              KeSetEvent((PRKEVENT)(v9 + 3216), 0, 0);
            }
            goto LABEL_51;
          }
          break;
        case 1:
          v32 = *(_QWORD **)(v4 + 2720);
          if ( *v32 == v4 + 2712 )
          {
            *v3 = v4 + 2712;
            *(_QWORD *)(a1 + 16) = v32;
            *v32 = v3;
            *(_QWORD *)(v4 + 2720) = v3;
            goto LABEL_51;
          }
          break;
        default:
          v35 = *(_QWORD **)(v4 + 2704);
          if ( *v35 == v4 + 2696 )
          {
            *v3 = v4 + 2696;
            *(_QWORD *)(a1 + 16) = v35;
            *v35 = v3;
            *(_QWORD *)(v4 + 2704) = v3;
            switch ( a2 )
            {
              case 2:
                *(_DWORD *)(a1 + 184) |= 8u;
                goto LABEL_51;
              case 3:
                *(_DWORD *)(a1 + 184) |= 0x10u;
                goto LABEL_51;
              case 4:
                v36 = *(_DWORD *)(a1 + 184) | 0x20;
                break;
              case 7:
                v36 = *(_DWORD *)(a1 + 184) | 0x40;
                break;
              default:
                goto LABEL_51;
            }
            *(_DWORD *)(a1 + 184) = v36;
            goto LABEL_51;
          }
          break;
      }
LABEL_9:
      __fastfail(3u);
    }
    goto LABEL_55;
  }
  v12 = *(_QWORD **)(v4 + 2720);
  if ( *v12 != v4 + 2712 )
    goto LABEL_9;
  *v3 = v4 + 2712;
  *(_QWORD *)(a1 + 16) = v12;
  *v12 = v3;
  *(_QWORD *)(v4 + 2720) = v3;
  *(_DWORD *)(a1 + 184) = 0;
LABEL_51:
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 316) + 188) = a2;
  *(_DWORD *)(a1 + 16 * (*(unsigned int *)(a1 + 316) + 12LL)) = v6;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 316) + 196) = *(_DWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 316) + 200) = *(_DWORD *)(a1 + 780);
  *(_DWORD *)(a1 + 316) = ((unsigned __int8)*(_DWORD *)(a1 + 316) + 1) & 7;
  if ( (byte_140081241 & 2) != 0 )
    McTemplateK0piixqq_EtwWriteTransfer();
  return v5;
}
