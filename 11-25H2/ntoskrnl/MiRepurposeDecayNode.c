/*
 * XREFs of MiRepurposeDecayNode @ 0x1403EDFB0
 * Callers:
 *     MiLockStandbyOldestPage @ 0x1403ED798 (MiLockStandbyOldestPage.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiRepurposeDecayNode(PSLIST_ENTRY ListEntry)
{
  unsigned __int64 v2; // rsi
  char v3; // di
  PSLIST_ENTRY result; // rax
  unsigned int Next; // [rsp+30h] [rbp+8h]

  MiUnlinkPageFromListEx((ULONG_PTR)ListEntry, 1);
  if ( ((__int64)ListEntry[2].Next & 0x8000000) != 0 )
  {
    Next = (unsigned int)ListEntry[2].Next;
    HIBYTE(Next) &= ~8u;
    result = (PSLIST_ENTRY)Next;
    LODWORD(ListEntry[2].Next) = Next;
  }
  else
  {
    v2 = (unsigned __int64)(-1431655765 * (unsigned int)((__int64)&ListEntry[0x22000000000LL] >> 4)
                          - (unsigned int)qword_140E358C0) >> 3;
    v3 = -85 * ((__int64)&ListEntry[0x22000000000LL] >> 4) - qword_140E358C0;
    if ( ((*(char *)(v2 + qword_140E358F0) >> (v3 & 7)) & 1) != 0 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E358E0);
      *(_BYTE *)(v2 + qword_140E358F0) &= ~(1 << (v3 & 7));
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E358E0);
    }
    return RtlpInterlockedPushEntrySList(&ListHead, ListEntry);
  }
  return result;
}
