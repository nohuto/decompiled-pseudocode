/*
 * XREFs of SmKmFileInfoCleanup @ 0x140AB19B0
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14037E000 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreFileCreate @ 0x14079A748 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x14079ABFC (SmKmStoreFileCreateForIoType.c)
 *     SmcCacheCleanup @ 0x14079CFE4 (SmcCacheCleanup.c)
 *     SmKmFileInfoDuplicate @ 0x140AB181C (SmKmFileInfoDuplicate.c)
 * Callees:
 *     IoReuseIrp @ 0x14031A320 (IoReuseIrp.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     IoSetThreadHardErrorMode @ 0x14045D2F0 (IoSetThreadHardErrorMode.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     SmKmSendUsageNotification @ 0x14079A678 (SmKmSendUsageNotification.c)
 *     IoUnregisterPlugPlayNotification @ 0x140A8E890 (IoUnregisterPlugPlayNotification.c)
 */

BOOLEAN __fastcall SmKmFileInfoCleanup(__int64 a1)
{
  BOOLEAN v2; // al
  void *v3; // rcx
  BOOLEAN v4; // di
  void *v5; // rcx
  IRP *v6; // rcx
  void *v7; // rcx
  struct _PRIVILEGE_SET *v8; // rcx

  v2 = IoSetThreadHardErrorMode(0);
  v3 = *(void **)(a1 + 32);
  v4 = v2;
  if ( v3 )
    IoUnregisterPlugPlayNotification(v3);
  v5 = *(void **)(a1 + 16);
  if ( v5 )
    ObfDereferenceObject(v5);
  v6 = *(IRP **)(a1 + 40);
  if ( v6 )
  {
    IoReuseIrp(v6, 0);
    SmKmSendUsageNotification(*(PIRP *)(a1 + 40), *(PFILE_OBJECT *)(a1 + 8), 1);
    IoFreeIrp(*(PIRP *)(a1 + 40));
  }
  v7 = *(void **)(a1 + 8);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( *(_QWORD *)a1 )
    ZwClose(*(HANDLE *)a1);
  v8 = *(struct _PRIVILEGE_SET **)(a1 + 48);
  if ( v8 )
    CmSiFreeMemory(v8);
  return IoSetThreadHardErrorMode(v4);
}
