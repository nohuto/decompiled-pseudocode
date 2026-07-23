/*
 * XREFs of EtwWriteTransfer @ 0x140410100
 * Callers:
 *     VrpRegistryCallback @ 0x1408454F0 (VrpRegistryCallback.c)
 *     EtwpWriteAppStateChange @ 0x1408F1C20 (EtwpWriteAppStateChange.c)
 *     VrpPostQueryKey @ 0x14092A060 (VrpPostQueryKey.c)
 *     VrpPostEnumerateKey @ 0x14092A618 (VrpPostEnumerateKey.c)
 *     CmpInitHiveFromFile @ 0x140930D5C (CmpInitHiveFromFile.c)
 *     CmpLogHiveFileInaccessible @ 0x140932734 (CmpLogHiveFileInaccessible.c)
 *     CmpLogFlushPhaseEnd @ 0x1409649B0 (CmpLogFlushPhaseEnd.c)
 *     CmpLogFlushPhaseStart @ 0x140964A9C (CmpLogFlushPhaseStart.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     FlushEventEntryList @ 0x140A41EEC (FlushEventEntryList.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
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
