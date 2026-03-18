/*
 * XREFs of EtwWriteTransfer @ 0x14041C2C0
 * Callers:
 *     VrpRegistryCallback @ 0x140849230 (VrpRegistryCallback.c)
 *     VrpPostQueryKey @ 0x140927F20 (VrpPostQueryKey.c)
 *     VrpPostEnumerateKey @ 0x1409284D8 (VrpPostEnumerateKey.c)
 *     CmpInitHiveFromFile @ 0x14092EC1C (CmpInitHiveFromFile.c)
 *     CmpLogHiveFileInaccessible @ 0x1409305F4 (CmpLogHiveFileInaccessible.c)
 *     EtwpWriteAppStateChange @ 0x14094D6B0 (EtwpWriteAppStateChange.c)
 *     CmpLogFlushPhaseEnd @ 0x14097C1A0 (CmpLogFlushPhaseEnd.c)
 *     CmpLogFlushPhaseStart @ 0x14097C28C (CmpLogFlushPhaseStart.c)
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 *     FlushEventEntryList @ 0x140A4B18C (FlushEventEntryList.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
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
