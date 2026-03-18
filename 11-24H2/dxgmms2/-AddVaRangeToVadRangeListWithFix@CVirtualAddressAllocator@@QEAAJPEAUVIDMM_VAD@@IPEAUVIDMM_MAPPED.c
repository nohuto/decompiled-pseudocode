/*
 * XREFs of ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x140099824
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400BE360 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140036F30 (-GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037628 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140037894 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x14003CA7C (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111K@Z @ 0x14004C118 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     Feature_Servicing_PteDeadLock__private_IsEnabledDeviceUsageNoInline @ 0x14004D620 (Feature_Servicing_PteDeadLock__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AddVaRangeToVadWithFix@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@PEAU_RTL_AVL_TREE@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x140099F98 (-AddVaRangeToVadWithFix@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@PEAU_RTL_AVL_TREE@@PEAUVID.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z @ 0x14009B574 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z.c)
 *     ValidateUniqueGpuVaMapping @ 0x14009B80C (ValidateUniqueGpuVaMapping.c)
 *     CompareVaRangeAddressWithin @ 0x1400FF750 (CompareVaRangeAddressWithin.c)
 *     ?VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z @ 0x140100E28 (-VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z.c)
 *     ?VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z @ 0x140103E80 (-VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeListWithFix(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        struct VIDMM_MAPPED_VA_RANGE *a4)
{
  __int64 v5; // rdi
  _QWORD *VidMmGlobalAllocFromOwner; // r15
  struct _RTL_AVL_TREE *v9; // rax
  _QWORD *i; // rbx
  _QWORD *v11; // rdi
  unsigned __int64 *v12; // rsi
  int v13; // eax
  _QWORD *v14; // rsi
  _QWORD *v15; // rdi
  int v16; // eax
  struct VIDMM_MAPPED_VA_RANGE *v17; // rdi
  struct VIDMM_MAPPED_VA_RANGE *v18; // rax
  struct VIDMM_MAPPED_VA_RANGE *v19; // r12
  unsigned int v20; // ebx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  _QWORD **v27; // rax
  _QWORD *v28; // rbp
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // r9
  int v38; // r10d
  struct VIDMM_VAD *v39; // rdx
  unsigned int v40; // edx
  unsigned int v41; // edx
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  unsigned __int64 v44; // rsi
  int v45; // ebx
  __int64 v46; // rax
  int v47; // r10d
  struct VIDMM_VAD *v48; // rdx
  __int64 VidMmAllocFromOwner; // rax
  __int64 v50; // r8
  __int64 v51; // rcx
  bool v52; // zf
  __int64 v53; // rcx
  __int64 v55; // [rsp+50h] [rbp-98h]
  struct _RTL_AVL_TREE *v56; // [rsp+78h] [rbp-70h]
  __int64 v57; // [rsp+80h] [rbp-68h]
  __int64 v58; // [rsp+88h] [rbp-60h]
  unsigned __int64 v59; // [rsp+90h] [rbp-58h]
  char v60; // [rsp+F0h] [rbp+8h]
  __int16 v62; // [rsp+100h] [rbp+18h]
  char v63; // [rsp+108h] [rbp+20h]

  v62 = a3;
  v5 = a3;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(*((_DWORD *)a4 + 18) & 0xF, *((_QWORD **)a4 + 8));
  v63 = 0;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v63 = 1;
  }
  v60 = 0;
  if ( !(unsigned int)Feature_Servicing_PteDeadLock__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !VidMmGlobalAllocFromOwner )
      goto LABEL_10;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 24, 0LL);
    goto LABEL_9;
  }
  if ( VidMmGlobalAllocFromOwner && (struct _KTHREAD *)VidMmGlobalAllocFromOwner[25] != KeGetCurrentThread() )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 24, 0LL);
    v60 = 1;
LABEL_9:
    VidMmGlobalAllocFromOwner[25] = KeGetCurrentThread();
  }
LABEL_10:
  v9 = (struct VIDMM_VAD *)((char *)a2 + 24 * v5 + 96);
  i = 0LL;
  v11 = *(_QWORD **)v9;
  v12 = (unsigned __int64 *)((char *)a4 + 104);
  v56 = v9;
  while ( 1 )
  {
    if ( !v11 )
      goto LABEL_27;
    v13 = CompareVaRangeAddressWithin((char *)a4 + 104, v11);
    if ( !v13 )
      break;
    if ( v13 >= 0 )
    {
      v11 = (_QWORD *)v11[1];
    }
    else
    {
      i = v11;
      v11 = (_QWORD *)*v11;
    }
  }
  i = v11;
  v14 = 0LL;
  v15 = (_QWORD *)*v11;
  if ( !v15 )
    goto LABEL_26;
  do
  {
    v16 = CompareVaRangeAddressWithin((char *)a4 + 104, v15);
    if ( v16 >= 0 )
    {
      if ( v16 > 0 )
      {
        v15 = (_QWORD *)v15[1];
        continue;
      }
      v14 = v15;
    }
    v15 = (_QWORD *)*v15;
  }
  while ( v15 );
  if ( v14 )
    i = v14;
LABEL_26:
  v12 = (unsigned __int64 *)((char *)a4 + 104);
LABEL_27:
  v17 = (struct VIDMM_MAPPED_VA_RANGE *)ExAllocateFromLookasideListEx(&g_VaRangeLookasideList);
  v18 = (struct VIDMM_MAPPED_VA_RANGE *)ExAllocateFromLookasideListEx(&g_VaRangeLookasideList);
  v19 = v18;
  if ( v17 && v18 )
  {
    if ( !(unsigned __int8)ValidateUniqueGpuVaMapping(a4) )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 10474;
      v20 = -1073741811;
      goto LABEL_65;
    }
    if ( (*((_DWORD *)a4 + 18) & 0x8000) != 0 )
    {
      v21 = (_QWORD *)((char *)a4 + 32);
      v22 = *((_QWORD *)a4 + 4);
      if ( v22 )
      {
        if ( *(_QWORD **)(v22 + 8) == v21 )
        {
          v23 = (_QWORD *)*((_QWORD *)a4 + 5);
          if ( (_QWORD *)*v23 == v21 )
          {
            *v23 = v22;
            *(_QWORD *)(v22 + 8) = v23;
            *v21 = 0LL;
            *((_QWORD *)a4 + 5) = 0LL;
            goto LABEL_36;
          }
        }
LABEL_44:
        __fastfail(3u);
      }
LABEL_36:
      v24 = (_QWORD *)((char *)a4 + 8);
      v25 = *((_QWORD *)a4 + 1);
      if ( *(struct VIDMM_MAPPED_VA_RANGE **)(v25 + 8) != (struct VIDMM_MAPPED_VA_RANGE *)((char *)a4 + 8) )
        goto LABEL_44;
      v26 = (_QWORD *)*((_QWORD *)a4 + 2);
      if ( (_QWORD *)*v26 != v24 )
        goto LABEL_44;
      *v26 = v25;
      *(_QWORD *)(v25 + 8) = v26;
      *v24 = 0LL;
      *((_QWORD *)a4 + 2) = 0LL;
      *((_DWORD *)a4 + 18) &= ~0x8000u;
    }
    if ( i )
    {
      while ( 1 )
      {
        v27 = (_QWORD **)i[1];
        v28 = i - 1;
        v29 = i;
        if ( v27 )
        {
          v30 = *v27;
          for ( i = (_QWORD *)i[1]; v30; v30 = (_QWORD *)*v30 )
            i = v30;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v29 )
              break;
            v29 = i;
          }
        }
        if ( *((_QWORD *)a4 + 14) <= v28[13] )
          break;
        _InterlockedIncrement((volatile signed __int32 *)v28 + 34);
        CVirtualAddressAllocator::RemoveVaRangeFromVad(
          (CVirtualAddressAllocator *)this,
          (struct VIDMM_MAPPED_VA_RANGE *)v28,
          0,
          0,
          1u);
        v31 = *v12;
        v32 = v28[13];
        v33 = *((_QWORD *)a4 + 14);
        v34 = v28[14];
        v59 = v32;
        v58 = v33;
        v57 = v34;
        if ( v31 > v32 )
        {
          if ( v33 < v34 )
          {
            if ( v17 )
              VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                (__int64)v17,
                (__int64)a2,
                v32,
                v31,
                v62,
                v28[8],
                v28[10],
                v28[9] & 0xF,
                v28[12],
                v28[11],
                v28[16],
                v28[15],
                *((_DWORD *)v28 + 18));
            CVirtualAddressAllocator::AddVaRangeToVadWithFix((CVirtualAddressAllocator *)this, a2, v56, v17);
            v42 = VidMmiCalculateNewOwnerOffset((struct VIDMM_MAPPED_VA_RANGE *)v28, *((_QWORD *)a4 + 13) - v32);
            v43 = *((_QWORD *)a4 + 14);
            v44 = v42;
            v45 = v28[9] & 0xF;
            v46 = VidMmiCalculateNewOwnerOffset((struct VIDMM_MAPPED_VA_RANGE *)v28, v43 - v59);
            VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
              (__int64)v19,
              (__int64)a2,
              v43,
              v57,
              v62,
              v28[8],
              v46,
              v45,
              v28[12],
              v28[11],
              v28[16],
              v28[15],
              v47);
            CVirtualAddressAllocator::AddVaRangeToVadWithFix((CVirtualAddressAllocator *)this, v48, v56, v19);
            VidMmiLogEndVaRangeMapping(
              (struct CVirtualAddressAllocator *)this,
              (struct VIDMM_MAPPED_VA_RANGE *)v28,
              v44,
              *((_QWORD *)a4 + 13),
              *((_QWORD *)a4 + 14));
            v17 = 0LL;
            goto LABEL_61;
          }
          if ( v17 )
            VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
              (__int64)v17,
              (__int64)a2,
              v32,
              v31,
              v62,
              v28[8],
              v28[10],
              v28[9] & 0xF,
              v28[12],
              v28[11],
              v28[16],
              v28[15],
              *((_DWORD *)v28 + 18));
          CVirtualAddressAllocator::AddVaRangeToVadWithFix((CVirtualAddressAllocator *)this, a2, v56, v17);
          v34 = v28[14];
          v17 = 0LL;
          v32 = *((_QWORD *)a4 + 13);
        }
        else if ( v33 < v34 )
        {
          v35 = v28[9] & 0xF;
          v36 = VidMmiCalculateNewOwnerOffset((struct VIDMM_MAPPED_VA_RANGE *)v28, v33 - v32);
          VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
            (__int64)v19,
            (__int64)a2,
            v58,
            v57,
            v62,
            v28[8],
            v36,
            v35,
            v37,
            v28[11],
            v28[16],
            v28[15],
            v38);
          CVirtualAddressAllocator::AddVaRangeToVadWithFix((CVirtualAddressAllocator *)this, v39, v56, v19);
          VidMmiLogEndVaRangeMapping(
            (struct CVirtualAddressAllocator *)this,
            (struct VIDMM_MAPPED_VA_RANGE *)v28,
            v28[10],
            v28[13],
            *((_QWORD *)a4 + 14));
LABEL_61:
          v19 = 0LL;
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v28, v40);
          break;
        }
        VidMmiLogEndVaRangeMapping(
          (struct CVirtualAddressAllocator *)this,
          (struct VIDMM_MAPPED_VA_RANGE *)v28,
          v28[10],
          v32,
          v34);
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v28, v41);
        if ( !i )
          break;
        v12 = (unsigned __int64 *)((char *)a4 + 104);
      }
    }
    CVirtualAddressAllocator::AddVaRangeToVadWithFix((CVirtualAddressAllocator *)this, a2, v56, a4);
    if ( (byte_140081242 & 0x40) != 0 )
    {
      VidMmAllocFromOwner = GetVidMmAllocFromOwner(*((_DWORD *)a4 + 18) & 0xF, *((_QWORD *)a4 + 8));
      LODWORD(v55) = v50;
      McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
        v51,
        &UpdateGpuVirtualAddressRangeMapping,
        v50,
        this,
        VidMmAllocFromOwner,
        *((_QWORD *)a4 + 10),
        *((_QWORD *)a4 + 13),
        *((_QWORD *)a4 + 14),
        *((_QWORD *)a4 + 12),
        *((_QWORD *)a4 + 11),
        v55,
        *((_QWORD *)a4 + 15),
        *((_QWORD *)a4 + 16));
    }
    v20 = 0;
  }
  else
  {
    _InterlockedIncrement(&dword_1400817E4);
    WdLogSingleEntry2(6LL, v17, v18);
    WdLogGlobalForLineNumber = 10465;
    DxgkLogInternalTriageEvent(v53, 262145LL);
    v20 = -1073741801;
  }
LABEL_65:
  if ( (unsigned int)Feature_Servicing_PteDeadLock__private_IsEnabledDeviceUsageNoInline() )
    v52 = v60 == 0;
  else
    v52 = VidMmGlobalAllocFromOwner == 0LL;
  if ( !v52 )
  {
    VidMmGlobalAllocFromOwner[25] = 0LL;
    ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 24, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v17 )
    ExFreeToLookasideListEx(&g_VaRangeLookasideList, v17);
  if ( v19 )
    ExFreeToLookasideListEx(&g_VaRangeLookasideList, v19);
  if ( v63 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return v20;
}
