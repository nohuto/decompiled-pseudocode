/*
 * XREFs of ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1400FCC08
 * Callers:
 *     ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1400FCBD4 (-OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OF.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchSubmitDeviceCommand @ 0x140033344 (VidSchSubmitDeviceCommand.c)
 *     ?VidMmOfferAllocationCallback@@YAXPEAX@Z @ 0x1400338C0 (-VidMmOfferAllocationCallback@@YAXPEAX@Z.c)
 *     VidMmAddOfferReference @ 0x14003AC1C (VidMmAddOfferReference.c)
 *     McTemplateK0pu_EtwWriteTransfer @ 0x14003F4D4 (McTemplateK0pu_EtwWriteTransfer.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004C558 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140056340 (memset.c)
 *     VidSchFlushDevice @ 0x1400B5320 (VidSchFlushDevice.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OfferOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  unsigned int v4; // esi
  char v5; // bl
  __int64 v6; // r15
  struct VIDMM_ALLOC *v7; // r13
  __int64 v9; // r14
  int v10; // ecx
  int v11; // r15d
  int v12; // r15d
  int v13; // r15d
  __int64 v14; // r15
  _QWORD *v15; // rax
  VIDMM_GLOBAL *v16; // rcx
  VIDMM_GLOBAL **v17; // rdx
  bool v18; // r9
  _QWORD *v19; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  int v24; // edx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // r15
  _QWORD *v32; // r14
  _QWORD *i; // rbx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  char v41; // [rsp+38h] [rbp-69h]
  _BYTE v42[3]; // [rsp+39h] [rbp-68h]
  int v43[2]; // [rsp+40h] [rbp-61h]
  _QWORD *v44; // [rsp+40h] [rbp-61h]
  __int64 v45; // [rsp+50h] [rbp-51h]
  __int128 v46; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v47[10]; // [rsp+68h] [rbp-39h] BYREF
  _BYTE v48[32]; // [rsp+B8h] [rbp+17h] BYREF

  v4 = 0;
  v5 = (char)a4.0;
  v6 = a3;
  v7 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 5872;
  }
  v9 = **(_QWORD **)v7;
  v45 = v9;
  *(_QWORD *)v43 = *(_QWORD *)v9;
  v10 = **(_DWORD **)(v9 + 392);
  if ( (v10 & 0x40000000) != 0 || v10 < 0 )
  {
    WdLogSingleEntry1(3LL, v7);
    WdLogGlobalForLineNumber = 5884;
    return 3221225485LL;
  }
  if ( (unsigned int)(v6 - 1) > 3 )
  {
    WdLogSingleEntry2(3LL, v7, v6);
    WdLogGlobalForLineNumber = 5891;
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 328, 0LL);
  *(_QWORD *)(v9 + 336) = KeGetCurrentThread();
  if ( *(_DWORD *)(v9 + 184) )
  {
    if ( (*((_BYTE *)this + 40936) & 0x20) == 0 )
    {
      WdLogSingleEntry1(3LL, v7);
      WdLogGlobalForLineNumber = 5912;
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
      {
        *(_QWORD *)(v9 + 336) = 0LL;
        ExReleasePushLockExclusiveEx(v9 + 328, 0LL);
        KeLeaveCriticalRegion();
        return 3221225485LL;
      }
    }
  }
  v11 = v6 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
          *(_DWORD *)(v9 + 312) = *(_DWORD *)(*(_QWORD *)v9 + 48LL) < 0xA0000000 ? 2 : 4;
      }
      else
      {
        *(_DWORD *)(v9 + 312) = 3;
      }
    }
    else
    {
      *(_DWORD *)(v9 + 312) = 2;
    }
  }
  else
  {
    *(_DWORD *)(v9 + 312) = 1;
  }
  VidMmAddOfferReference((__int64)v7);
  v42[0] = 0;
  v41 = 0;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 136));
  *(_WORD *)&v42[1] = _InterlockedCompareExchange16((volatile signed __int16 *)(*((_QWORD *)v7 + 12) + 8LL), 1, 0);
  *(_QWORD *)(v9 + 336) = 0LL;
  ExReleasePushLockExclusiveEx(v9 + 328, 0LL);
  KeLeaveCriticalRegion();
  if ( !*(_WORD *)&v42[1] )
  {
    if ( ((v5 & 2) != 0 || dword_1400815EC)
      && (*((_BYTE *)this + 40936) & 0x20) == 0
      && (*(_DWORD *)(v9 + 28) & 0xC000) == 0 )
    {
      *(_DWORD *)(v9 + 32) |= 0x40u;
      v14 = *(_QWORD *)v43;
      v41 = 1;
      _InterlockedAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 8LL) + 32LL) + 440LL),
        *(_QWORD *)(*(_QWORD *)v43 + 16LL));
      _InterlockedAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 8LL) + 32LL) + 432LL),
        1uLL);
      goto LABEL_26;
    }
    v41 = 0;
  }
  v14 = *(_QWORD *)v43;
LABEL_26:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v9 + 136));
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v48, (struct _KTHREAD **)this + 4988);
  if ( !*(_WORD *)&v42[1] )
  {
    v15 = (_QWORD *)((char *)this + 39888);
    v16 = (VIDMM_GLOBAL *)(v9 + 280);
    v17 = (VIDMM_GLOBAL **)*((_QWORD *)this + 4987);
    v18 = *v15 == (_QWORD)v15;
    *(_WORD *)v42 = v18;
    if ( *v17 != (VIDMM_GLOBAL *)((char *)this + 39888) )
      goto LABEL_37;
    *(_QWORD *)v16 = v15;
    *(_QWORD *)(v9 + 288) = v17;
    *v17 = v16;
    *((_QWORD *)this + 4987) = v16;
    *(_QWORD *)(v9 + 320) = *((_QWORD *)this + 570);
    if ( v41 )
    {
      v19 = (_QWORD *)(v9 + 296);
      v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 8LL) + 16LL)
                      + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
      v21 = *(_QWORD **)(v20 + 112);
      v22 = v20 + 104;
      if ( *v21 == v22 )
      {
        *v19 = v22;
        *(_QWORD *)(v9 + 304) = v21;
        *v21 = v19;
        *(_QWORD *)(v22 + 8) = v19;
        v42[0] = v18;
        goto LABEL_31;
      }
LABEL_37:
      __fastfail(3u);
    }
  }
LABEL_31:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48);
  if ( *(_WORD *)&v42[1] )
  {
    WdLogSingleEntry2(3LL, v7, *(unsigned __int16 *)(*((_QWORD *)v7 + 12) + 8LL));
    WdLogGlobalForLineNumber = 6197;
    v4 = DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
  }
  else
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
    v24 = **(_DWORD **)(v9 + 392) & 0x20000000;
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( v24 )
      {
        if ( (v5 & 2) != 0 || dword_1400815EC )
        {
          v25 = *(_QWORD *)(v14 + 16);
          _InterlockedAdd((volatile signed __int32 *)this + 1946, 1u);
          _InterlockedAdd64((volatile signed __int64 *)this + 974, v25);
        }
        v26 = *(_QWORD *)(v14 + 16);
        _InterlockedAdd((volatile signed __int32 *)this + 1942, 1u);
        _InterlockedAdd64((volatile signed __int64 *)this + 972, v26);
      }
      v27 = *(_QWORD *)(v14 + 16);
      _InterlockedAdd((volatile signed __int32 *)this + 1938, 1u);
      _InterlockedAdd64((volatile signed __int64 *)this + 970, v27);
    }
    else
    {
      if ( v24 )
      {
        if ( (v5 & 2) != 0 || dword_1400815EC )
        {
          v28 = *(_QWORD *)(v14 + 16);
          ++*((_DWORD *)this + 1946);
          *((_QWORD *)this + 974) += v28;
        }
        v29 = *(_QWORD *)(v14 + 16);
        ++*((_DWORD *)this + 1942);
        *((_QWORD *)this + 972) += v29;
      }
      v30 = *(_QWORD *)(v14 + 16);
      ++*((_DWORD *)this + 1938);
      *((_QWORD *)this + 970) += v30;
    }
    if ( (v5 & 1) == 0 )
    {
      memset(v47, 0, sizeof(v47));
      LODWORD(v47[5]) = 3;
      v47[3] = VidMmOfferAllocationCallback;
      LODWORD(v47[0]) = 1;
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 136));
      v31 = *(_QWORD **)(v9 + 112);
      if ( v31 != (_QWORD *)(v9 + 112) )
      {
        v32 = (_QWORD *)(v9 + 112);
        do
        {
          for ( i = (_QWORD *)*(v31 - 2); i != v31 - 2; i = (_QWORD *)*i )
          {
            if ( (*(_DWORD *)(i - 1) & 1) == 0 )
            {
              VidMmAddOfferReference((__int64)(i - 5));
              v35 = *(_QWORD *)(v34 + 8);
              v47[6] = v34;
              v44 = *(_QWORD **)(v35 + 32);
              v36 = VidSchSubmitDeviceCommand(v44, (__int64)v47);
              if ( v36 < 0 )
              {
                WdLogSingleEntry1(3LL, v36);
                WdLogGlobalForLineNumber = 6160;
                v46 = 0LL;
                LODWORD(v46) = 5;
                VidSchFlushDevice((__int64)v44, (int *)&v46, 0xFFFFFFFD, 0LL);
                LODWORD(v47[0]) = 0;
                VidSchSubmitDeviceCommand(v44, (__int64)v47);
              }
            }
          }
          v31 = (_QWORD *)*v31;
        }
        while ( v31 != v32 );
        v9 = v45;
        v7 = a2;
      }
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v9 + 136));
    }
    if ( v42[0] )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 24LL), 0, 0);
  }
  VidMmOfferAllocationCallback(v7);
  if ( (byte_140081241 & 1) != 0 )
  {
    LOBYTE(v38) = *(_BYTE *)(v9 + 312);
    McTemplateK0pu_EtwWriteTransfer(v38, v37, v39, v7, v38);
  }
  return v4;
}
