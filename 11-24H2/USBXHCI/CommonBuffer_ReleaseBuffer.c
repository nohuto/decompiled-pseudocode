/*
 * XREFs of CommonBuffer_ReleaseBuffer @ 0x14001F6A4
 * Callers:
 *     TR_Disable_Internal @ 0x140004708 (TR_Disable_Internal.c)
 *     TR_AcquireSecureSegments @ 0x140016D88 (TR_AcquireSecureSegments.c)
 *     XilCoreUsbDevice_FreeResources @ 0x14001DDE8 (XilCoreUsbDevice_FreeResources.c)
 *     TR_WdfEvtCleanupCallback @ 0x14001F5F0 (TR_WdfEvtCleanupCallback.c)
 *     XilCommonBuffer_ReleaseBuffer @ 0x14001F74C (XilCommonBuffer_ReleaseBuffer.c)
 *     XilEndpoint_ReleaseBuffer @ 0x14001F92C (XilEndpoint_ReleaseBuffer.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x140035038 (XilEndpoint_AllocateStreamContextArray.c)
 *     XilCommand_FreeResources @ 0x14003E954 (XilCommand_FreeResources.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x140046CE4 (XilEndpoint_FreeStreamContextArray.c)
 *     TR_CreateSecureObject @ 0x14004AE90 (TR_CreateSecureObject.c)
 *     TR_SetClientAddressesForOffload @ 0x14004B464 (TR_SetClientAddressesForOffload.c)
 *     Crashdump_UcxEvtFreeDumpData @ 0x140050E30 (Crashdump_UcxEvtFreeDumpData.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x140050F90 (Crashdump_UcxEvtGetDumpData.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x140056764 (XilCoreDeviceSlot_FreeResources.c)
 * Callees:
 *     XilCoreCommonBuffer_ReleaseBufferInternal @ 0x14002F794 (XilCoreCommonBuffer_ReleaseBufferInternal.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x14003C838 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     CommonBuffer_ReleaseCommonBufferFromPhysicalAddress @ 0x14003F338 (CommonBuffer_ReleaseCommonBufferFromPhysicalAddress.c)
 */

void __fastcall CommonBuffer_ReleaseBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rbx

  v2 = *(_DWORD *)(a2 + 80);
  switch ( v2 )
  {
    case 1:
      v4 = a1 + 88;
      *(_BYTE *)(a1 + 113) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
      XilCoreCommonBuffer_ReleaseBufferInternal(v4, a2);
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 16), *(_BYTE *)(v4 + 25));
      return;
    case 2:
      goto LABEL_6;
    case 3:
      SecureDmaEnabler_FreeCommonBufferPage(*(_QWORD *)(*(_QWORD *)a1 + 104LL), *(_QWORD *)(a2 + 104));
LABEL_6:
      ExFreePoolWithTag((PVOID)a2, 0x49434858u);
      return;
    case 4:
      CommonBuffer_ReleaseCommonBufferFromPhysicalAddress((PVOID)a2);
      break;
  }
}
