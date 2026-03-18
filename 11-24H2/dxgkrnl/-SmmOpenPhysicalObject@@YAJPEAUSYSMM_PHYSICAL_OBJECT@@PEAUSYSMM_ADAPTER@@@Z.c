/*
 * XREFs of ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x140020FA0
 * Callers:
 *     ?SysMmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14001F550 (-SysMmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@PEAPEAUSYSMM_ADAPTER_.c)
 *     ?SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAX@Z @ 0x14001F82C (-SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY.c)
 *     SmmCreatePhysicalObjectForMdl @ 0x140020778 (SmmCreatePhysicalObjectForMdl.c)
 *     SmmCreatePhysicalObject @ 0x140020860 (SmmCreatePhysicalObject.c)
 *     ?SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@IQEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@_NPEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAU_MDL@@@Z @ 0x1400209DC (-SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE.c)
 * Callees:
 *     SmmAddObjectToAdapter @ 0x1400212C8 (SmmAddObjectToAdapter.c)
 *     ?SmmMapObjectToIommu@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x14003A24C (-SmmMapObjectToIommu@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@.c)
 *     ?SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x14003A2C4 (-SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMM.c)
 *     ??0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z @ 0x140047EE0 (--0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z.c)
 *     ??1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ @ 0x14004BCF8 (--1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x140051DE8 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?SmmAllocateLogicalAddress@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_KPEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140095148 (-SmmAllocateLogicalAddress@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_KPEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14009542C (-SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140286BC0 (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 */

__int64 __fastcall SmmOpenPhysicalObject(struct SYSMM_PHYSICAL_OBJECT *a1, struct SYSMM_ADAPTER *a2)
{
  char v4; // r12
  int v5; // eax
  int LogicalAddressAt; // ebx
  KIRQL CurrentIrql; // r15
  int v8; // r8d
  __int64 (__fastcall *v10)(struct SYSMM_ADAPTER *, unsigned __int64, unsigned __int64 *, __int64); // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // eax
  unsigned __int64 v14; // rdx
  int LogicalAddress; // eax
  int v16; // eax
  int v17; // eax
  struct SYSMM_LOGICAL_BLOCK *v18; // rdx
  _BYTE v19[16]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  ExAcquirePushLockExclusiveEx((char *)a1 + 32, 0LL);
  v5 = *((_DWORD *)a2 + 23);
  if ( (v5 & 4) != 0 )
  {
    v10 = (__int64 (__fastcall *)(struct SYSMM_ADAPTER *, unsigned __int64, unsigned __int64 *, __int64))*((_QWORD *)a2 + 44);
    v11 = *(_QWORD *)a1;
    if ( v10 )
    {
      v12 = *((_QWORD *)a2 + 46);
      v20 = 0LL;
      v13 = v10(a2, v11, &v20, v12);
      LogicalAddressAt = v13;
      if ( v13 < 0 )
      {
        WdLogSingleEntry2(3LL, a1, v13);
        WdLogGlobalForLineNumber = 940;
        goto LABEL_35;
      }
      v14 = v20;
      *((_BYTE *)a1 + 100) = 1;
      LogicalAddressAt = SmmAllocateLogicalAddressAt(
                           *((struct SYSMM_LOGICAL_ALLOCATOR **)a2 + 48),
                           v14,
                           *(_QWORD *)a1,
                           (char *)a1 + 64,
                           (struct SYSMM_LOGICAL_BLOCK **)a1 + 11);
      if ( LogicalAddressAt < 0 )
      {
        (*((void (__fastcall **)(struct SYSMM_ADAPTER *, unsigned __int64, _QWORD))a2 + 45))(
          a2,
          v20,
          *((_QWORD *)a2 + 46));
        goto LABEL_35;
      }
    }
    else
    {
      LogicalAddress = SmmAllocateLogicalAddress(
                         *((struct SYSMM_LOGICAL_ALLOCATOR **)a2 + 48),
                         v11,
                         (char *)a1 + 64,
                         (struct SYSMM_LOGICAL_BLOCK **)a1 + 11);
      LogicalAddressAt = LogicalAddress;
      if ( LogicalAddress < 0 )
      {
        WdLogSingleEntry2(3LL, a1, LogicalAddress);
        WdLogGlobalForLineNumber = 973;
        goto LABEL_35;
      }
    }
    *((_BYTE *)a1 + 101) = 1;
  }
  else if ( (v5 & 1) == 0 || (dword_140161610 & 0x18) != 0 )
  {
    LogicalAddressAt = 0;
  }
  else
  {
    v16 = SmmAllocateLogicalAddress(
            *((struct SYSMM_LOGICAL_ALLOCATOR **)a2 + 48),
            *(_QWORD *)a1,
            (char *)a1 + 64,
            (struct SYSMM_LOGICAL_BLOCK **)a1 + 11);
    LogicalAddressAt = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry2(3LL, a1, v16);
      WdLogGlobalForLineNumber = 996;
      goto LABEL_35;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)a2 + 18);
  else
    ExAcquirePushLockSharedEx((char *)a2 + 80, 0LL);
  if ( !*((_DWORD *)a2 + 26) )
  {
    v17 = SmmMapObjectToIommu(
            a1,
            (struct SYSMM_PHYSICAL_OBJECT *)((char *)a1 + 64),
            (struct SYSMM_ADAPTER *)((char *)a2 + 64));
    LogicalAddressAt = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry2(3LL, a1, v17);
      WdLogGlobalForLineNumber = 1022;
    }
    else
    {
      v4 = 1;
    }
  }
  if ( CurrentIrql >= 2u )
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)a2 + 18);
  else
    ExReleasePushLockSharedEx((char *)a2 + 80, 0LL);
  if ( LogicalAddressAt >= 0 )
  {
    SmmAddObjectToAdapter(a2, (char *)a1 + 64);
    goto LABEL_11;
  }
  if ( v4 )
  {
    SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
      (SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v19,
      (struct SYSMM_ADAPTER *)((char *)a2 + 64));
    if ( !*((_DWORD *)a2 + 26) )
      SmmUnmapObjectFromIommu(
        a1,
        (struct SYSMM_PHYSICAL_OBJECT *)((char *)a1 + 64),
        (struct SYSMM_ADAPTER *)((char *)a2 + 64));
    SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v19);
  }
LABEL_35:
  v18 = (struct SYSMM_LOGICAL_BLOCK *)*((_QWORD *)a1 + 11);
  if ( v18 )
  {
    SmmFreeLogicalAddress(*((struct SYSMM_LOGICAL_ALLOCATOR **)a2 + 48), v18);
    *((_QWORD *)a1 + 11) = 0LL;
  }
LABEL_11:
  ExReleasePushLockExclusiveEx((char *)a1 + 32, 0LL);
  if ( LogicalAddressAt >= 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)a1 + 10);
    if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        (unsigned int)&SysMmControlGuid_Context,
        (unsigned int)"\a",
        v8,
        (_DWORD)a2,
        (char)a1,
        (_BYTE)a1 + 64);
  }
  return (unsigned int)LogicalAddressAt;
}
