/*
 * XREFs of ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F4748
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400B85FC (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DE.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140038E38 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x14003ED5C (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400B1374 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400B5380 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EE@Z @ 0x1400B575C (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EE@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VIDMM_GLOBAL **this, struct VIDMM_ALLOC *a2)
{
  char v4; // r12
  struct _KTHREAD **v5; // r15
  volatile signed __int32 **v6; // rdi
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rax
  __int64 VidMmAllocFromOwner; // rax
  __int64 v10; // r8
  volatile signed __int32 **v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rdi
  __int64 v14; // [rsp+50h] [rbp-48h]
  _QWORD *v15; // [rsp+70h] [rbp-28h] BYREF
  volatile signed __int32 *v16; // [rsp+78h] [rbp-20h]

  v16 = (volatile signed __int32 *)&v15;
  v4 = 0;
  v15 = &v15;
  v5 = this + 8;
  if ( !(unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *v5 == KeGetCurrentThread() )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( *v5 != KeGetCurrentThread() )
  {
LABEL_5:
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v4 = 1;
  }
LABEL_6:
  v6 = (volatile signed __int32 **)((char *)a2 + 128);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (volatile signed __int32 *)v6 )
      break;
    if ( *((volatile signed __int32 ***)v7 + 1) != v6 )
      goto LABEL_14;
    v8 = *(_QWORD *)v7;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_14;
    *v6 = (volatile signed __int32 *)v8;
    *(_QWORD *)(v8 + 8) = v6;
    *(_QWORD *)v7 = 0LL;
    *((_QWORD *)v7 + 1) = 0LL;
    _InterlockedIncrement(v7 + 26);
    if ( (byte_140081242 & 0x40) != 0 )
    {
      VidMmAllocFromOwner = GetVidMmAllocFromOwner(v7[10] & 0xF, *((_QWORD *)v7 + 4));
      LODWORD(v14) = v10;
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
        v14,
        *((_QWORD *)v7 + 11),
        *((_QWORD *)v7 + 12));
    }
    CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, (unsigned int *)v7 - 8, 1, 1);
    v11 = (volatile signed __int32 **)v16;
    if ( *(_QWORD ***)v16 != &v15 )
LABEL_14:
      __fastfail(3u);
    *((_QWORD *)v7 + 1) = v16;
    *(_QWORD *)v7 = &v15;
    *v11 = v7;
    v16 = v7;
  }
  if ( v4 )
  {
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
      this[8] = 0LL;
    else
      *v5 = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  v12 = v15;
  while ( v12 != &v15 )
  {
    v13 = v12 - 4;
    if ( (v12[5] & 0x1C00) != 0 )
    {
      VIDMM_GLOBAL::UncommitVirtualAddressRange(
        this[11],
        (struct CVirtualAddressAllocator *)this,
        (struct VIDMM_MAPPED_VA_RANGE *)(v12 - 4),
        KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this[11] + 8LL),
        0LL);
      *((_DWORD *)v13 + 18) &= 0xFFFFEBFF;
    }
    v12 = (_QWORD *)*v12;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
      (volatile signed __int32 *)v13,
      (struct CVirtualAddressAllocator *)this);
  }
}
