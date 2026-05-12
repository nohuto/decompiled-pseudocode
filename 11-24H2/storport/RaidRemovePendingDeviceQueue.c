/*
 * XREFs of RaidRemovePendingDeviceQueue @ 0x140053084
 * Callers:
 *     RaidRemoveIoQueue @ 0x140053044 (RaidRemoveIoQueue.c)
 * Callees:
 *     RiPeekDeviceQueue @ 0x1400146F0 (RiPeekDeviceQueue.c)
 *     RiDecrementDeviceQueueCount @ 0x140014A18 (RiDecrementDeviceQueueCount.c)
 *     RiDisableDeviceQueueFastPath @ 0x140026CB0 (RiDisableDeviceQueueFastPath.c)
 *     RaUnitUnlockForwardIo @ 0x14002B180 (RaUnitUnlockForwardIo.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x140055F24 (RaidGetQosEntryForDeviceEntry.c)
 */

__int64 __fastcall RaidRemovePendingDeviceQueue(__int64 a1)
{
  KIRQL v2; // bp
  union _SLIST_HEADER *v3; // rax
  __int64 v4; // rbx
  unsigned __int64 Alignment; // rcx
  _QWORD *Region; // rax
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rax

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  RiDisableDeviceQueueFastPath((struct _EX_RUNDOWN_REF *)a1, 1);
  v3 = RiPeekDeviceQueue((union _SLIST_HEADER *)a1);
  v4 = (__int64)v3;
  if ( !v3 )
    goto LABEL_15;
  if ( *(_QWORD *)(a1 + 144) == a1 + 144 )
  {
    ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 112));
  }
  else
  {
    Alignment = v3->Alignment;
    if ( *(union _SLIST_HEADER **)(v3->Alignment + 8) != v3 )
      goto LABEL_16;
    Region = (_QWORD *)v3->Region;
    if ( *Region != v4 )
      goto LABEL_16;
    *Region = Alignment;
    *(_QWORD *)(Alignment + 8) = Region;
  }
  if ( (*(_BYTE *)(v4 + 22) & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v4);
    v8 = *QosEntryForDeviceEntry;
    if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) == QosEntryForDeviceEntry )
    {
      v9 = (_QWORD *)QosEntryForDeviceEntry[1];
      if ( (_QWORD *)*v9 == QosEntryForDeviceEntry )
      {
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        goto LABEL_11;
      }
    }
LABEL_16:
    __fastfail(3u);
  }
LABEL_11:
  *(_BYTE *)(v4 + 20) &= 0xFCu;
  RiDecrementDeviceQueueCount(a1, v4);
  if ( (*(_BYTE *)(v4 + 20) & 4) != 0 )
  {
    v10 = *(_QWORD *)(a1 - 720 + 32);
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 80) & 0x100) != 0 )
        RaUnitUnlockForwardIo(a1 - 720, 0);
    }
  }
LABEL_15:
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v2);
  return v4;
}
