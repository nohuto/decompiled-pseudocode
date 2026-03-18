/*
 * XREFs of ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140114340
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400A9EF4 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DE.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140037894 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x14003CA7C (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z @ 0x14009B574 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400B970C (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400FBDB4 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 */

void __fastcall CVirtualAddressAllocator::FreeAllocMappedVaRangeList(
        CVirtualAddressAllocator *this,
        struct VIDMM_ALLOC *a2)
{
  struct _KTHREAD *v2; // r8
  char v5; // r12
  volatile signed __int32 **v6; // rsi
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rax
  __int64 VidMmAllocFromOwner; // rax
  __int64 v10; // r8
  volatile signed __int32 **v11; // rax
  _QWORD *v12; // rcx
  _QWORD **v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // r9
  volatile signed __int32 *v18; // rdx
  _QWORD *v19; // rbx
  VIDMM_MAPPED_VA_RANGE *v20; // rsi
  __int64 v21; // [rsp+50h] [rbp-30h]
  _QWORD *v22; // [rsp+70h] [rbp-10h] BYREF
  volatile signed __int32 *v23; // [rsp+78h] [rbp-8h]

  v2 = (struct _KTHREAD *)*((_QWORD *)this + 8);
  v23 = (volatile signed __int32 *)&v22;
  v22 = &v22;
  v5 = 0;
  if ( v2 != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((CVirtualAddressAllocator *)((char *)this + 56));
    v5 = 1;
  }
  v6 = (volatile signed __int32 **)((char *)a2 + 128);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (volatile signed __int32 *)v6 )
      break;
    if ( *((volatile signed __int32 ***)v7 + 1) != v6 )
      goto LABEL_22;
    v8 = *(_QWORD *)v7;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_22;
    *v6 = (volatile signed __int32 *)v8;
    *(_QWORD *)(v8 + 8) = v6;
    *(_QWORD *)v7 = 0LL;
    *((_QWORD *)v7 + 1) = 0LL;
    _InterlockedIncrement(v7 + 26);
    if ( (byte_140081242 & 0x40) != 0 )
    {
      VidMmAllocFromOwner = GetVidMmAllocFromOwner(v7[10] & 0xF, *((_QWORD *)v7 + 4));
      LODWORD(v21) = v10;
      McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
        *((_QWORD *)v7 + 6),
        &EndGpuVirtualAddressRangeMapping,
        v10,
        this,
        VidMmAllocFromOwner,
        *((_QWORD *)v7 + 6),
        *((_QWORD *)v7 + 9),
        *((_QWORD *)v7 + 10),
        *((_QWORD *)v7 + 8),
        *((_QWORD *)v7 + 7),
        v21,
        *((_QWORD *)v7 + 11),
        *((_QWORD *)v7 + 12));
    }
    CVirtualAddressAllocator::RemoveVaRangeFromVad(this, (struct VIDMM_MAPPED_VA_RANGE *)(v7 - 8), 1, 1, 0);
    v11 = (volatile signed __int32 **)v23;
    if ( *(_QWORD ***)v23 != &v22 )
LABEL_22:
      __fastfail(3u);
    *((_QWORD *)v7 + 1) = v23;
    *(_QWORD *)v7 = &v22;
    *v11 = v7;
    v23 = v7;
  }
  if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
  {
    v12 = (_QWORD *)((char *)a2 + 144);
    while ( 1 )
    {
      v13 = (_QWORD **)*v12;
      if ( (_QWORD *)*v12 == v12 )
        break;
      if ( v13[1] != v12 )
        goto LABEL_22;
      v14 = (__int64)*v13;
      if ( (_QWORD **)(*v13)[1] != v13 )
        goto LABEL_22;
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      *v13 = 0LL;
      v13[1] = 0LL;
      if ( (_QWORD **)MEMORY[8] != v13 )
        goto LABEL_22;
      if ( (_QWORD **)MEMORY[0] != v13 )
        goto LABEL_22;
      MEMORY[0] = 0LL;
      v15 = v13 - 3;
      MEMORY[8] = 0LL;
      *v13 = 0LL;
      v13[1] = 0LL;
      v16 = (__int64)*(v13 - 3);
      if ( *(_QWORD ***)(v16 + 8) != v13 - 3 )
        goto LABEL_22;
      v17 = (_QWORD *)v15[1];
      if ( (_QWORD *)*v17 != v15 )
        goto LABEL_22;
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      *((_DWORD *)v13 + 10) &= ~0x8000u;
      *v15 = 0LL;
      v15[1] = 0LL;
      v18 = v23;
      if ( *(_QWORD ***)v23 != &v22 )
        goto LABEL_22;
      v13[1] = v23;
      *v13 = &v22;
      *(_QWORD *)v18 = v13;
      v23 = (volatile signed __int32 *)v13;
    }
  }
  if ( v5 )
  {
    *((_QWORD *)this + 8) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 56, 0LL);
    KeLeaveCriticalRegion();
  }
  v19 = v22;
  while ( v19 != &v22 )
  {
    v20 = (VIDMM_MAPPED_VA_RANGE *)(v19 - 4);
    if ( (v19[5] & 0x1C00) != 0 )
    {
      VIDMM_GLOBAL::UncommitVirtualAddressRange(
        *((VIDMM_GLOBAL **)this + 11),
        this,
        (struct VIDMM_MAPPED_VA_RANGE *)(v19 - 4),
        KeGetCurrentThread() == *(struct _KTHREAD **)(**((_QWORD **)this + 11) + 8LL),
        0LL);
      *((_DWORD *)v20 + 18) &= 0xFFFFEBFF;
    }
    v19 = (_QWORD *)*v19;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v20, (struct _KTHREAD **)this);
  }
}
