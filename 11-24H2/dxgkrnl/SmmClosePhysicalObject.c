/*
 * XREFs of SmmClosePhysicalObject @ 0x14001FDDC
 * Callers:
 *     ?SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14001F310 (-SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 *     DxgkDestroyPhysicalMemoryObjectCB @ 0x14001F460 (DxgkDestroyPhysicalMemoryObjectCB.c)
 *     DxgkClosePhysicalMemoryObjectCB @ 0x14001F500 (DxgkClosePhysicalMemoryObjectCB.c)
 *     ?SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x14001FA64 (-SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     SmmRemoveObjectFromAdapter @ 0x14001FFD8 (SmmRemoveObjectFromAdapter.c)
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x140020110 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     ?SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x14003A2C4 (-SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMM.c)
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14003ADD4 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x140051DE8 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14009542C (-SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall SmmClosePhysicalObject(struct SYSMM_ADAPTER_OBJECT *a1, __int64 a2, int a3)
{
  char *v3; // rsi
  __int64 v4; // rdi
  KIRQL CurrentIrql; // r14
  int v7; // eax
  unsigned __int64 LogicalAddress; // rax

  v3 = (char *)a1 - 64;
  v4 = *((_QWORD *)a1 + 2);
  if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
    McTemplateK0ppp_EtwWriteTransfer(
      (unsigned int)&SysMmControlGuid_Context,
      (unsigned int)&ClosePhysicalObject,
      a3,
      v4,
      (_BYTE)a1 - 64,
      (char)a1);
  if ( (dword_140161610 & 0x20) != 0 && **((_QWORD **)v3 + 3) != *((_QWORD *)v3 + 3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 154;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsListEmpty(&pPhysicalObject->Debug->AdlListHead)",
      154LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  else
    ExAcquirePushLockSharedEx(v4 + 80, 0LL);
  SmmRemoveObjectFromAdapter(v4, a1);
  if ( !*(_DWORD *)(v4 + 104) )
    SmmUnmapObjectFromIommu((struct SYSMM_PHYSICAL_OBJECT *)v3, a1, (struct SYSMM_IOMMU *)(v4 + 64));
  if ( CurrentIrql >= 2u )
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  else
    ExReleasePushLockSharedEx(v4 + 80, 0LL);
  v7 = *(_DWORD *)(v4 + 92);
  if ( (v7 & 4) != 0 )
  {
    if ( *((_BYTE *)a1 + 36) )
    {
      LogicalAddress = SmmGetLogicalAddress(*((const struct SYSMM_LOGICAL_BLOCK **)a1 + 3));
      (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(v4 + 360))(v4, LogicalAddress, *(_QWORD *)(v4 + 368));
      *((_BYTE *)a1 + 36) = 0;
    }
    if ( *((_BYTE *)a1 + 37) )
    {
      SmmFreeLogicalAddress(*(struct SYSMM_LOGICAL_ALLOCATOR **)(v4 + 384), *((struct SYSMM_LOGICAL_BLOCK **)a1 + 3));
      *((_BYTE *)a1 + 37) = 0;
    }
  }
  else if ( (v7 & 1) != 0 && (dword_140161610 & 0x18) == 0 )
  {
    SmmFreeLogicalAddress(*(struct SYSMM_LOGICAL_ALLOCATOR **)(v4 + 384), *((struct SYSMM_LOGICAL_BLOCK **)a1 + 3));
  }
  SysMmUnreferencePhysicalObject((struct SYSMM_PHYSICAL_OBJECT *)v3);
}
