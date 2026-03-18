/*
 * XREFs of ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z @ 0x14009B574
 * Callers:
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x140099824 (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400BE360 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 *     RemoveVaRangeCb @ 0x1400FCB0C (RemoveVaRangeCb.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140114340 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037628 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140037894 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1400FBFBC (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::RemoveVaRangeFromVad(
        CVirtualAddressAllocator *this,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        char a3,
        char a4,
        unsigned __int8 a5)
{
  unsigned __int64 v5; // rax
  __int64 v7; // rsi
  __int64 v11; // rdx
  __int64 **VidMmAllocFromOwner; // r8
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  char *v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rcx
  char **v18; // rax
  __int64 v19; // rcx
  char **v20; // rax

  v5 = *((unsigned int *)a2 + 18);
  v7 = *(_QWORD *)a2;
  if ( (v5 & 0x4000) != 0 )
  {
    RtlAvlRemoveNode(v7 + 24 * (((v5 >> 4) & 0x3F) + 4), (char *)a2 + 8);
    *((_DWORD *)a2 + 18) &= ~0x4000u;
    LODWORD(v5) = *((_DWORD *)a2 + 18);
  }
  VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(v5 & 0xF, *((_QWORD *)a2 + 8));
  if ( VidMmAllocFromOwner )
  {
    v13 = (_QWORD *)((char *)a2 + 32);
    v11 = *((_QWORD *)a2 + 4);
    if ( v11 )
    {
      if ( *(_QWORD **)(v11 + 8) != v13 )
        goto LABEL_26;
      v14 = (_QWORD *)*((_QWORD *)a2 + 5);
      if ( (_QWORD *)*v14 != v13 )
        goto LABEL_26;
      *v14 = v11;
      *(_QWORD *)(v11 + 8) = v14;
      *v13 = 0LL;
    }
    v15 = (char *)a2 + 48;
    if ( !*((_QWORD *)a2 + 6) )
      goto LABEL_16;
    v16 = **VidMmAllocFromOwner;
    if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !a5 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v16 + 192, 0LL);
        *(_QWORD *)(v16 + 200) = KeGetCurrentThread();
      }
      v17 = *(_QWORD *)v15;
      if ( *(char **)(*(_QWORD *)v15 + 8LL) == v15 )
      {
        v18 = (char **)*((_QWORD *)a2 + 7);
        if ( *v18 == v15 )
        {
          *v18 = (char *)v17;
          *(_QWORD *)(v17 + 8) = v18;
          *(_QWORD *)v15 = 0LL;
          if ( a5 )
            goto LABEL_16;
          goto LABEL_15;
        }
      }
    }
    else
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v16 + 192, 0LL);
      *(_QWORD *)(v16 + 200) = KeGetCurrentThread();
      v19 = *(_QWORD *)v15;
      if ( *(char **)(*(_QWORD *)v15 + 8LL) == v15 )
      {
        v20 = (char **)*((_QWORD *)a2 + 7);
        if ( *v20 == v15 )
        {
          *v20 = (char *)v19;
          *(_QWORD *)(v19 + 8) = v20;
          *(_QWORD *)v15 = 0LL;
LABEL_15:
          *(_QWORD *)(v16 + 200) = 0LL;
          ExReleasePushLockExclusiveEx(v16 + 192, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_16;
        }
      }
    }
LABEL_26:
    __fastfail(3u);
  }
LABEL_16:
  --*(_DWORD *)(v7 + 76);
  if ( a4 )
    *(_QWORD *)a2 = 0LL;
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(a2, v11);
  if ( a3 && (*(_BYTE *)(v7 + 72) & 0xF) == 3 && !*(_DWORD *)(v7 + 76) )
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(this, (struct VIDMM_VAD *)v7);
}
