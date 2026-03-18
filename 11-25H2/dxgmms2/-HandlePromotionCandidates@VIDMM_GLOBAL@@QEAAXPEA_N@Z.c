/*
 * XREFs of ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x140114C70
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400F23A0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     VidSchIsDeviceBusy @ 0x140034FC8 (VidSchIsDeviceBusy.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140036484 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140036C74 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x140037BC4 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_IsEnabledDeviceUsageNoInline @ 0x14004DA74 (Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_IsEnabledDeviceUsageNoInline.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400AB430 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400ACAE4 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1400DFCB4 (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 *     ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E05F4 (-VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_A.c)
 */

void __fastcall VIDMM_GLOBAL::HandlePromotionCandidates(VIDMM_GLOBAL *this, bool *a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned int v17; // r12d
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD **v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // r9
  __int64 v25; // r11
  __int64 v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rdi
  _QWORD *v29; // r10
  _QWORD *v30; // r8
  __int64 v31; // rax
  _QWORD *v32; // r13
  __int64 v33; // rcx
  _QWORD *v34; // rsi
  _QWORD *v35; // r15
  __int64 **v36; // rax
  struct VIDMM_GLOBAL_ALLOC ***v37; // rbp
  __int64 *v38; // r10
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rbx
  __int64 v50; // [rsp+30h] [rbp-C8h]
  char *v51; // [rsp+38h] [rbp-C0h]
  int v52; // [rsp+40h] [rbp-B8h]
  _QWORD *v53; // [rsp+48h] [rbp-B0h]
  _QWORD **v54; // [rsp+50h] [rbp-A8h]
  _BYTE v55[8]; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+60h] [rbp-98h]
  int v57; // [rsp+68h] [rbp-90h]
  _BYTE v58[8]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v59; // [rsp+78h] [rbp-80h]
  int v60; // [rsp+80h] [rbp-78h]
  __int64 v61; // [rsp+88h] [rbp-70h]
  __int64 v62; // [rsp+90h] [rbp-68h]
  _QWORD *v63; // [rsp+98h] [rbp-60h]
  _QWORD *v64; // [rsp+A0h] [rbp-58h]
  __int64 v65; // [rsp+A8h] [rbp-50h]
  _QWORD *v66; // [rsp+B0h] [rbp-48h]
  char v67; // [rsp+110h] [rbp+18h]
  int v68; // [rsp+118h] [rbp+20h]

  if ( (unsigned int)Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_IsEnabledDeviceUsageNoInline()
    && !byte_14008158C
    || (*((_DWORD *)this + 1746) & 0x2000) != 0 )
  {
    *a2 = 0;
    return;
  }
  if ( *((_DWORD *)this + 11174) )
    goto LABEL_101;
  if ( !*((_BYTE *)this + 44704) )
    goto LABEL_8;
  if ( !VIDMM_GLOBAL::IsPenaltyBoxEmpty((__int64)this) )
  {
LABEL_101:
    *a2 = 1;
    return;
  }
  *((_QWORD *)this + 5585) = VidMmiQuerySystemTime();
  *((_BYTE *)this + 44704) = 0;
LABEL_8:
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v58, (struct _KTHREAD **)this + 5135);
  v4 = *((_DWORD *)this + 1736);
  v5 = 0LL;
  if ( !v4 )
  {
LABEL_11:
    v6 = v60;
    *((_DWORD *)this + 11175) = 0;
    *a2 = 0;
    if ( v6 == 1 )
    {
      v7 = v59;
      v60 = 0;
      _InterlockedDecrement((volatile signed __int32 *)(v59 + 16));
      ExReleasePushLockSharedEx(v7, 0LL);
      KeLeaveCriticalRegion();
    }
    else if ( v6 == 2 )
    {
      v49 = v59;
      v60 = 0;
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v49 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v49, 0LL);
      KeLeaveCriticalRegion();
    }
    return;
  }
  while ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8 * v5) + 520LL) == *(_QWORD *)(*((_QWORD *)this + 5029)
                                                                                           + 8 * v5)
                                                                               + 520LL )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= v4 )
      goto LABEL_11;
  }
  if ( v60 == 1 )
  {
    v8 = v59;
    v60 = 0;
    _InterlockedDecrement((volatile signed __int32 *)(v59 + 16));
    ExReleasePushLockSharedEx(v8, 0LL);
  }
  else
  {
    if ( v60 != 2 )
      goto LABEL_18;
    v9 = v59;
    v60 = 0;
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v9 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
  }
  KeLeaveCriticalRegion();
LABEL_18:
  v10 = (char *)this + 44680;
  v11 = *((_QWORD *)this + 5585);
  v12 = *((_QWORD *)this + 5586);
  v13 = *((_QWORD *)this + 570) - v11;
  *a2 = 1;
  v51 = (char *)this + 44680;
  if ( v13 >= v12 )
  {
    if ( !v11 || *((_DWORD *)this + 11175) )
    {
      *((_DWORD *)this + 11175) = 0;
      *((_QWORD *)this + 5586) = qword_140081570;
    }
    else
    {
      *((_QWORD *)this + 5586) = 2 * v12;
      if ( 2 * v12 <= qword_140081578 )
        goto LABEL_27;
      *((_QWORD *)this + 5586) = qword_140081578;
      v10 = (char *)this + 44680;
    }
    v51 = v10;
LABEL_27:
    v16 = 0LL;
    v61 = 0LL;
    v17 = 0;
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v55, (struct _KTHREAD **)this + 5135);
    v18 = 0LL;
    v68 = 0;
    if ( !*((_DWORD *)this + 1736) )
      goto LABEL_93;
    while ( 1 )
    {
      v19 = *((_QWORD *)this + 5029);
      v20 = 8 * v18;
      v62 = 8 * v18;
      v21 = *(_QWORD *)(8 * v18 + v19);
      if ( (*(_BYTE *)(v21 + 478) & 4) != 0 )
      {
        v22 = (_QWORD **)(v21 + 520);
        v54 = v22;
        v23 = *v22;
        if ( *v22 != v22 )
          break;
      }
LABEL_88:
      v18 = (unsigned int)(v18 + 1);
      v68 = v18;
      if ( (unsigned int)v18 >= *((_DWORD *)this + 1736) )
      {
        if ( v17 )
LABEL_92:
          *((_BYTE *)this + 44704) = 1;
LABEL_93:
        if ( v57 == 1 )
        {
          v47 = v56;
          v57 = 0;
          _InterlockedDecrement((volatile signed __int32 *)(v56 + 16));
          ExReleasePushLockSharedEx(v47, 0LL);
        }
        else
        {
          if ( v57 != 2 )
            return;
          v48 = v56;
          v57 = 0;
          Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
          *(_QWORD *)(v48 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v48, 0LL);
        }
        KeLeaveCriticalRegion();
        return;
      }
      v10 = v51;
    }
    while ( 1 )
    {
      v24 = v23;
      v53 = v23;
      v66 = (_QWORD *)*v23;
      if ( v23[36] || v23[35] )
      {
        v25 = 0LL;
        v67 = 1;
        v50 = 0LL;
      }
      else
      {
        v25 = 0LL;
        v67 = 0;
        v50 = 0LL;
        if ( !v23[32] && !v23[33] && !v23[34] || v23[25] >= v23[3] )
        {
          v26 = *v23;
          if ( *(_QWORD **)(*v24 + 8LL) != v24 || (v27 = (_QWORD *)v24[1], (_QWORD *)*v27 != v24) )
            __fastfail(3u);
          *v27 = v26;
          *(_QWORD *)(v26 + 8) = v27;
          *v24 = 0LL;
          v24[1] = 0LL;
          goto LABEL_86;
        }
        v22 = v54;
      }
      v28 = 0LL;
      v52 = 0;
      v65 = *(_QWORD *)(v20 + *((_QWORD *)this + 5029));
      if ( *(_DWORD *)(v65 + 64) )
        break;
LABEL_87:
      v23 = v66;
      v10 = v51;
      if ( v66 == v22 )
        goto LABEL_88;
    }
    while ( 1 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5029) + v20) + 1648LL) + 8 * v28) + 104LL) & 0x1001) != 0 )
      {
        v29 = (_QWORD *)(*(_QWORD *)(304LL * (unsigned __int16)v18 + *(_QWORD *)(v24[2] + 16LL))
                       + 184LL * (unsigned __int16)v28
                       + 40);
        v64 = v29;
        v30 = (_QWORD *)*v29;
        if ( (_QWORD *)*v29 != v29 )
        {
          do
          {
            v31 = v30[4];
            v32 = v30;
            v30 = (_QWORD *)*v30;
            v63 = v30;
            v33 = *(_QWORD *)(v31 + 32);
            if ( v33
              && (*(_BYTE *)(v31 + 312) & 7u) < 3
              && (*(_QWORD *)(v33 + 192) >= *(_QWORD *)v10 || VidSchIsDeviceBusy(v33)) )
            {
              v34 = (_QWORD *)v32[2];
              v35 = v32 + 2;
              if ( v34 != v32 + 2 )
              {
                while ( 1 )
                {
                  v36 = (__int64 **)*(v34 - 7);
                  v37 = (struct VIDMM_GLOBAL_ALLOC ***)(v34 - 7);
                  v38 = *v36;
                  v39 = **v36;
                  do
                    v34 = (_QWORD *)*v34;
                  while ( v34 != v35 && (__int64 **)*(v34 - 7) == v36 );
                  if ( (v38[3] & 0x400) != 0 )
                    goto LABEL_78;
                  v40 = v38[47];
                  if ( *(_WORD *)(v40 + 8) || *(int *)(v40 + 16) > 0 )
                    goto LABEL_78;
                  if ( v67 )
                  {
                    if ( *(_DWORD *)(v39 + 48) >= 0xA0000000 )
                      goto LABEL_59;
                  }
                  else if ( (unsigned __int64)(v25 + *(_QWORD *)(v39 + 16)) <= v24[3] - v24[25] )
                  {
LABEL_59:
                    if ( (*((_DWORD *)v38 + 7) & 0x20000) != 0 && *((_DWORD *)v38 + 46) )
                      goto LABEL_78;
                    if ( v17
                      && (v16 + *(_QWORD *)(v39 + 16) > (unsigned __int64)qword_140081580 || v17 > dword_140081588) )
                    {
                      goto LABEL_92;
                    }
                    if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 0x200) == 0 )
                      goto LABEL_74;
                    if ( *(_DWORD *)(v39 + 48) >= 0xA0000000 )
                      goto LABEL_74;
                    v41 = *(_DWORD *)(v39 + 44);
                    if ( !v41 )
                      goto LABEL_74;
                    if ( (v41 & 0x1F) != 0 )
                    {
                      v42 = (*(_DWORD *)(v39 + 44) & 0x1Fu) - 1;
LABEL_71:
                      v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8 * (v38[3] & 0x3F)) + 1648LL)
                                      + 8 * v42);
                      if ( !v44
                        || *(_QWORD *)(v44 + 248) - *(_QWORD *)(v44 + 256) >= (unsigned __int64)(3LL
                                                                                               * *(_QWORD *)(v39 + 16))
                        && VIDMM_SEGMENT::GetLargestGap(v44, v38, 0, 1u) >= *(_QWORD *)(v39 + 16) )
                      {
                        goto LABEL_74;
                      }
                    }
                    else
                    {
                      v43 = (v41 >> 6) & 0x1F;
                      if ( v43 )
                      {
                        v42 = (unsigned int)(v43 - 1);
                        goto LABEL_71;
                      }
LABEL_74:
                      if ( (*(_BYTE *)(v32[4] + 58LL) & 4) == 0 )
                      {
                        ++*((_DWORD *)this + 11174);
                        v45 = v32[4];
                        *(_BYTE *)(v45 + 58) |= 4u;
                        *(LARGE_INTEGER *)(v45 + 48) = KeQueryPerformanceCounter(0LL);
                        v16 = v61;
                      }
                      v46 = *(_QWORD *)(v39 + 16);
                      v50 += v46;
                      v16 += v46;
                      v61 = v16;
                      ++v17;
                      VIDMM_GLOBAL::StartPreparation((__int64)this, 0xFFFFFFFF, 0LL, 0LL, 0x3ECu);
                      VidMmSuspendAccessToAllocation(*(VIDMM_GLOBAL ***)this, **v37);
                      VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0LL, 0LL, 0LL);
                      *((_DWORD *)**v37 + 6) |= 0x2000000u;
                    }
                    v24 = v53;
                  }
LABEL_78:
                  v25 = v50;
                  if ( v34 == v35 )
                  {
                    v30 = v63;
                    v29 = v64;
                    break;
                  }
                }
              }
              if ( !*v30 )
                v30 = (_QWORD *)*v29;
            }
            v25 = v50;
            v10 = v51;
          }
          while ( v30 != v29 );
          LODWORD(v28) = v52;
        }
        LODWORD(v18) = v68;
        v20 = v62;
      }
      v28 = (unsigned int)(v28 + 1);
      v25 = v50;
      v10 = v51;
      v52 = v28;
      if ( (unsigned int)v28 >= *(_DWORD *)(v65 + 64) )
      {
LABEL_86:
        v22 = v54;
        goto LABEL_87;
      }
    }
  }
  v14 = v13 - v12;
  v15 = *(_QWORD *)this;
  if ( v14 > *(_QWORD *)(*(_QWORD *)this + 128LL) )
  {
    *(_QWORD *)(v15 + 128) = v14;
    *(_BYTE *)(v15 + 214) = 7;
  }
}
