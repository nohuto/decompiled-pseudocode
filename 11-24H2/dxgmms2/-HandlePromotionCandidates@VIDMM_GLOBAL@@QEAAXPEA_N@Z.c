/*
 * XREFs of ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x140114F00
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140007FC0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     VidSchIsDeviceBusy @ 0x140033918 (VidSchIsDeviceBusy.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140035C74 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x1400365E4 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     Feature_Servicing_GraphicsKernel_PromotionRegistryKeyPerAdapter__private_IsEnabledDeviceUsageNoInline @ 0x14004D3D8 (Feature_Servicing_GraphicsKernel_PromotionRegistryKeyPerAdapter__private_IsEnabledDeviceUsageNoI.c)
 *     Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_IsEnabledDeviceUsageNoInline @ 0x14004D42C (Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_IsEnabledDeviceUsageNoInline.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400B3810 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400B4E94 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D5B8C (-VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_A.c)
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1400EA8A4 (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandlePromotionCandidates(VIDMM_GLOBAL *this, bool *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  volatile signed __int32 *v14; // rdi
  unsigned int v15; // r12d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD **v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // r9
  __int64 v23; // r11
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rdi
  _QWORD *v27; // r10
  _QWORD *v28; // r8
  __int64 v29; // rax
  _QWORD *v30; // r13
  __int64 v31; // rcx
  _QWORD *v32; // rsi
  _QWORD *v33; // r15
  __int64 **v34; // rax
  struct VIDMM_GLOBAL_ALLOC ***v35; // rbp
  __int64 *v36; // r10
  __int64 v37; // rdi
  __int64 v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rax
  volatile signed __int32 *v45; // rcx
  __int64 v46; // [rsp+50h] [rbp-98h]
  int v47; // [rsp+58h] [rbp-90h]
  _QWORD *v48; // [rsp+60h] [rbp-88h]
  _QWORD **v49; // [rsp+68h] [rbp-80h]
  __int64 v50; // [rsp+70h] [rbp-78h]
  __int64 v51; // [rsp+78h] [rbp-70h]
  _QWORD *v52; // [rsp+80h] [rbp-68h]
  _QWORD *v53; // [rsp+88h] [rbp-60h]
  __int64 v54; // [rsp+90h] [rbp-58h]
  _QWORD *v55; // [rsp+98h] [rbp-50h]
  char v56; // [rsp+100h] [rbp+18h]
  int v57; // [rsp+108h] [rbp+20h]

  if ( (unsigned int)Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_IsEnabledDeviceUsageNoInline()
    && !byte_1400815AC
    || (*((_DWORD *)this + 1746) & 0x2000) != 0 )
  {
    *a2 = 0;
    return;
  }
  if ( *((_DWORD *)this + 11174) )
    goto LABEL_97;
  if ( *((_BYTE *)this + 44704) )
  {
    if ( VIDMM_GLOBAL::IsPenaltyBoxEmpty((__int64)this) )
    {
      *((_QWORD *)this + 5585) = VidMmiQuerySystemTime();
      *((_BYTE *)this + 44704) = 0;
      goto LABEL_8;
    }
LABEL_97:
    *a2 = 1;
    return;
  }
LABEL_8:
  if ( this != (VIDMM_GLOBAL *)-41080LL && *((struct _KTHREAD **)this + 5136) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(v4, 262146LL);
  }
  DXGPUSHLOCK::AcquireShared((VIDMM_GLOBAL *)((char *)this + 41080));
  v5 = 0LL;
  if ( !*((_DWORD *)this + 1736) )
  {
LABEL_16:
    *((_DWORD *)this + 11175) = 0;
    *a2 = 0;
    _InterlockedDecrement((volatile signed __int32 *)this + 10274);
    ExReleasePushLockSharedEx((char *)this + 41080, 0LL);
    KeLeaveCriticalRegion();
    return;
  }
  while ( 1 )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernel_PromotionRegistryKeyPerAdapter__private_IsEnabledDeviceUsageNoInline();
    v7 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8 * v5);
    if ( (!IsEnabledDeviceUsageNoInline || (*(_BYTE *)(v7 + 36) & 2) != 0) && *(_QWORD *)(v7 + 520) != v7 + 520 )
      break;
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= *((_DWORD *)this + 1736) )
      goto LABEL_16;
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 10274);
  ExReleasePushLockSharedEx((char *)this + 41080, 0LL);
  KeLeaveCriticalRegion();
  v8 = *((_QWORD *)this + 5585);
  v9 = *((_QWORD *)this + 5586);
  v10 = *((_QWORD *)this + 570) - v8;
  *a2 = 1;
  if ( v10 >= v9 )
  {
    if ( !v8 || *((_DWORD *)this + 11175) )
    {
      *((_DWORD *)this + 11175) = 0;
      *((_QWORD *)this + 5586) = qword_140081590;
    }
    else
    {
      *((_QWORD *)this + 5586) = 2 * v9;
      if ( 2 * v9 > qword_140081598 )
        *((_QWORD *)this + 5586) = qword_140081598;
    }
    v13 = 0LL;
    v14 = (volatile signed __int32 *)((char *)this + 41080);
    v15 = 0;
    v50 = 0LL;
    if ( this != (VIDMM_GLOBAL *)-41080LL && *((struct _KTHREAD **)this + 5136) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1512;
      DxgkLogInternalTriageEvent(v16, 262146LL);
    }
    DXGPUSHLOCK::AcquireShared((VIDMM_GLOBAL *)((char *)this + 41080));
    v17 = 0LL;
    v57 = 0;
    if ( !*((_DWORD *)this + 1736) )
      goto LABEL_94;
    while ( 1 )
    {
      v18 = 8 * v17;
      v51 = 8 * v17;
      v19 = *(_QWORD *)(8 * v17 + *((_QWORD *)this + 5029));
      if ( (*(_BYTE *)(v19 + 478) & 4) == 0 )
        goto LABEL_89;
      v20 = (_QWORD **)(v19 + 520);
      v49 = v20;
      v21 = *v20;
      if ( *v20 == v20 )
        goto LABEL_89;
      do
      {
        v22 = v21;
        v48 = v21;
        v55 = (_QWORD *)*v21;
        if ( v21[36] || v21[35] )
        {
          v23 = 0LL;
          v56 = 1;
          v46 = 0LL;
        }
        else
        {
          v23 = 0LL;
          v56 = 0;
          v46 = 0LL;
          if ( !v21[32] && !v21[33] && !v21[34] || v21[25] >= v21[3] )
          {
            v24 = *v21;
            if ( *(_QWORD **)(*v22 + 8LL) != v22 || (v25 = (_QWORD *)v22[1], (_QWORD *)*v25 != v22) )
              __fastfail(3u);
            *v25 = v24;
            *(_QWORD *)(v24 + 8) = v25;
            *v22 = 0LL;
            v22[1] = 0LL;
            goto LABEL_87;
          }
          v20 = v49;
        }
        v26 = 0LL;
        v47 = 0;
        v54 = *(_QWORD *)(v18 + *((_QWORD *)this + 5029));
        if ( !*(_DWORD *)(v54 + 64) )
          goto LABEL_88;
        do
        {
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5029) + v18) + 1648LL) + 8 * v26)
                          + 104LL) & 0x1001) != 0 )
          {
            v27 = (_QWORD *)(*(_QWORD *)(304LL * (unsigned __int16)v17 + *(_QWORD *)(v22[2] + 16LL))
                           + 184LL * (unsigned __int16)v26
                           + 40);
            v53 = v27;
            v28 = (_QWORD *)*v27;
            if ( (_QWORD *)*v27 != v27 )
            {
              do
              {
                v29 = v28[4];
                v30 = v28;
                v28 = (_QWORD *)*v28;
                v52 = v28;
                v31 = *(_QWORD *)(v29 + 32);
                if ( v31
                  && (*(_BYTE *)(v29 + 312) & 7u) < 3
                  && (*(_QWORD *)(v31 + 192) >= *((_QWORD *)this + 5585) || VidSchIsDeviceBusy(v31)) )
                {
                  v32 = (_QWORD *)v30[2];
                  v33 = v30 + 2;
                  if ( v32 != v30 + 2 )
                  {
                    while ( 1 )
                    {
                      v34 = (__int64 **)*(v32 - 7);
                      v35 = (struct VIDMM_GLOBAL_ALLOC ***)(v32 - 7);
                      v36 = *v34;
                      v37 = **v34;
                      do
                        v32 = (_QWORD *)*v32;
                      while ( v32 != v33 && (__int64 **)*(v32 - 7) == v34 );
                      if ( (v36[3] & 0x400) != 0 )
                        goto LABEL_79;
                      v38 = v36[49];
                      if ( *(_WORD *)(v38 + 8) || *(int *)(v38 + 16) > 0 )
                        goto LABEL_79;
                      if ( v56 )
                      {
                        if ( *(_DWORD *)(v37 + 48) >= 0xA0000000 )
                          goto LABEL_60;
                      }
                      else if ( (unsigned __int64)(v23 + *(_QWORD *)(v37 + 16)) <= v22[3] - v22[25] )
                      {
LABEL_60:
                        if ( (*((_DWORD *)v36 + 7) & 0x20000) != 0 && *((_DWORD *)v36 + 46) )
                          goto LABEL_79;
                        if ( v15
                          && (v13 + *(_QWORD *)(v37 + 16) > (unsigned __int64)qword_1400815A0 || v15 > dword_1400815A8) )
                        {
                          goto LABEL_91;
                        }
                        if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 0x200) == 0 )
                          goto LABEL_75;
                        if ( *(_DWORD *)(v37 + 48) >= 0xA0000000 )
                          goto LABEL_75;
                        v39 = *(_DWORD *)(v37 + 44);
                        if ( !v39 )
                          goto LABEL_75;
                        if ( (v39 & 0x1F) != 0 )
                        {
                          v40 = (*(_DWORD *)(v37 + 44) & 0x1Fu) - 1;
LABEL_72:
                          v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8 * (v36[3] & 0x3F))
                                                      + 1648LL)
                                          + 8 * v40);
                          if ( !v42
                            || *(_QWORD *)(v42 + 248) - *(_QWORD *)(v42 + 256) >= (unsigned __int64)(3LL * *(_QWORD *)(v37 + 16))
                            && VIDMM_SEGMENT::GetLargestGap(v42, v36, 0, 1u) >= *(_QWORD *)(v37 + 16) )
                          {
                            goto LABEL_75;
                          }
                        }
                        else
                        {
                          v41 = (v39 >> 6) & 0x1F;
                          if ( v41 )
                          {
                            v40 = (unsigned int)(v41 - 1);
                            goto LABEL_72;
                          }
LABEL_75:
                          if ( (*(_BYTE *)(v30[4] + 58LL) & 4) == 0 )
                          {
                            ++*((_DWORD *)this + 11174);
                            v43 = v30[4];
                            *(_BYTE *)(v43 + 58) |= 4u;
                            *(LARGE_INTEGER *)(v43 + 48) = KeQueryPerformanceCounter(0LL);
                            v13 = v50;
                          }
                          v44 = *(_QWORD *)(v37 + 16);
                          v46 += v44;
                          v13 += v44;
                          v50 = v13;
                          ++v15;
                          VIDMM_GLOBAL::StartPreparation((__int64)this, 0xFFFFFFFF, 0LL, 0LL, 0x3ECu);
                          VidMmSuspendAccessToAllocation(*(VIDMM_GLOBAL ***)this, **v35);
                          VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0LL, 0LL, 0LL);
                          *((_DWORD *)**v35 + 6) |= 0x2000000u;
                        }
                        v22 = v48;
                      }
LABEL_79:
                      v23 = v46;
                      if ( v32 == v33 )
                      {
                        v28 = v52;
                        v27 = v53;
                        break;
                      }
                    }
                  }
                  if ( !*v28 )
                    v28 = (_QWORD *)*v27;
                }
                v23 = v46;
              }
              while ( v28 != v27 );
              LODWORD(v26) = v47;
            }
            LODWORD(v17) = v57;
            v18 = v51;
          }
          v26 = (unsigned int)(v26 + 1);
          v23 = v46;
          v47 = v26;
        }
        while ( (unsigned int)v26 < *(_DWORD *)(v54 + 64) );
LABEL_87:
        v20 = v49;
LABEL_88:
        v21 = v55;
      }
      while ( v55 != v20 );
LABEL_89:
      v17 = (unsigned int)(v17 + 1);
      v57 = v17;
      if ( (unsigned int)v17 >= *((_DWORD *)this + 1736) )
      {
        if ( v15 )
        {
LABEL_91:
          v45 = (volatile signed __int32 *)((char *)this + 41080);
          *((_BYTE *)this + 44704) = 1;
          _InterlockedDecrement((volatile signed __int32 *)this + 10274);
LABEL_95:
          ExReleasePushLockSharedEx(v45, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
        v14 = (volatile signed __int32 *)((char *)this + 41080);
LABEL_94:
        _InterlockedDecrement(v14 + 4);
        v45 = v14;
        goto LABEL_95;
      }
    }
  }
  v11 = v10 - v9;
  v12 = *(_QWORD *)this;
  if ( v11 > *(_QWORD *)(*(_QWORD *)this + 128LL) )
  {
    *(_QWORD *)(v12 + 128) = v11;
    *(_BYTE *)(v12 + 214) = 7;
  }
}
