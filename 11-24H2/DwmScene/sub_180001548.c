/*
 * XREFs of sub_180001548 @ 0x180001548
 * Callers:
 *     sub_180001010 @ 0x180001010 (sub_180001010.c)
 *     sub_180001174 @ 0x180001174 (sub_180001174.c)
 *     sub_1800012B8 @ 0x1800012B8 (sub_1800012B8.c)
 *     sub_1800015EC @ 0x1800015EC (sub_1800015EC.c)
 *     sub_180001764 @ 0x180001764 (sub_180001764.c)
 *     sub_180001908 @ 0x180001908 (sub_180001908.c)
 *     sub_180001A04 @ 0x180001A04 (sub_180001A04.c)
 *     sub_180001B40 @ 0x180001B40 (sub_180001B40.c)
 *     sub_180001C40 @ 0x180001C40 (sub_180001C40.c)
 *     sub_180001DD8 @ 0x180001DD8 (sub_180001DD8.c)
 *     sub_1800020C4 @ 0x1800020C4 (sub_1800020C4.c)
 *     sub_180002270 @ 0x180002270 (sub_180002270.c)
 *     sub_180002508 @ 0x180002508 (sub_180002508.c)
 *     sub_180002658 @ 0x180002658 (sub_180002658.c)
 *     sub_1800029C0 @ 0x1800029C0 (sub_1800029C0.c)
 *     sub_180002B14 @ 0x180002B14 (sub_180002B14.c)
 *     sub_180002C98 @ 0x180002C98 (sub_180002C98.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_180001548(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONGLONG v6; // rax
  unsigned __int16 *v7; // rdx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v6;
  UserData->Ptr = *(_QWORD *)(a1 + 8);
  UserData->Size = **(unsigned __int16 **)(a1 + 8);
  UserData[1].Ptr = (ULONGLONG)v7;
  UserData->Reserved = 2;
  UserData[1].Size = *v7;
  UserData[1].Reserved = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, a3, a4, UserDataCount, UserData);
}
