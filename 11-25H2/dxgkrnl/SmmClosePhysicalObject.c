/*
 * XREFs of SmmClosePhysicalObject @ 0x14001094C
 * Callers:
 *     ?SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14000FE80 (-SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 *     DxgkDestroyPhysicalMemoryObjectCB @ 0x14000FFD0 (DxgkDestroyPhysicalMemoryObjectCB.c)
 *     DxgkClosePhysicalMemoryObjectCB @ 0x140010070 (DxgkClosePhysicalMemoryObjectCB.c)
 *     ?SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1400105D4 (-SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     SmmRemoveObjectFromAdapter @ 0x140010B48 (SmmRemoveObjectFromAdapter.c)
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x140010C80 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x140039B20 (-SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMM.c)
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14003A634 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x140052398 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140092F28 (-SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
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
  if ( (dword_14015E600 & 0x20) != 0 && **((_QWORD **)v3 + 3) != *((_QWORD *)v3 + 3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 154;
    DxgkLogInternalTriageEvent(
      0,
      262146,
      -1,
      (unsigned int)L"IsListEmpty(&pPhysicalObject->Debug->AdlListHead)",
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
  else if ( (v7 & 1) != 0 && (dword_14015E600 & 0x18) == 0 )
  {
    SmmFreeLogicalAddress(*(struct SYSMM_LOGICAL_ALLOCATOR **)(v4 + 384), *((struct SYSMM_LOGICAL_BLOCK **)a1 + 3));
  }
  SysMmUnreferencePhysicalObject((struct SYSMM_PHYSICAL_OBJECT *)v3);
}
