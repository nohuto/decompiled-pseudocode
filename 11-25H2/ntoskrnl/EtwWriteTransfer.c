/*
 * XREFs of EtwWriteTransfer @ 0x14041EDF0
 * Callers:
 *     VrpRegistryCallback @ 0x14084D490 (VrpRegistryCallback.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     CmpInitHiveFromFile @ 0x14090E4F0 (CmpInitHiveFromFile.c)
 *     CmpLogHiveFileInaccessible @ 0x14091005C (CmpLogHiveFileInaccessible.c)
 *     EtwpWriteAppStateChange @ 0x1409209CC (EtwpWriteAppStateChange.c)
 *     VrpPostQueryKey @ 0x140948380 (VrpPostQueryKey.c)
 *     VrpPostEnumerateKey @ 0x140948938 (VrpPostEnumerateKey.c)
 *     CmpLogFlushPhaseEnd @ 0x140A3C20C (CmpLogFlushPhaseEnd.c)
 *     CmpLogFlushPhaseStart @ 0x140A3D754 (CmpLogFlushPhaseStart.c)
 *     FlushEventEntryList @ 0x140A487CC (FlushEventEntryList.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 */

NTSTATUS __stdcall EtwWriteTransfer(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return EtwWriteEx(RegHandle, EventDescriptor, 0LL, 0, ActivityId, RelatedActivityId, UserDataCount, UserData);
}
