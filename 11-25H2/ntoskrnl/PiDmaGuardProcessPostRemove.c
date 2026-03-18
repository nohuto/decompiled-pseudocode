/*
 * XREFs of PiDmaGuardProcessPostRemove @ 0x140A87040
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404938EC (PnpRemoveLockedDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x1404BE3BC (PiDmaGuardQueueRemoveEntry.c)
 *     PiIommuUninitializeDeviceAts @ 0x1404C2898 (PiIommuUninitializeDeviceAts.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     PipDmgReevaluateQueue @ 0x140725C64 (PipDmgReevaluateQueue.c)
 *     PiIommuBlockDevice @ 0x140729C98 (PiIommuBlockDevice.c)
 *     PiDmaGuardQueueInsertEntry @ 0x14072E110 (PiDmaGuardQueueInsertEntry.c)
 *     PipDmgDestroyIommuExtension @ 0x14082C4C0 (PipDmgDestroyIommuExtension.c)
 */

void __fastcall PiDmaGuardProcessPostRemove(ULONG_PTR MaxDataSize, int a2, char a3)
{
  void *v6; // rcx
  int v7; // eax
  ULONG_PTR v8; // rbp
  __int64 v9; // rax

  if ( *(_QWORD *)(MaxDataSize + 720) )
  {
    PiIommuUninitializeDeviceAts(MaxDataSize);
    v7 = PiIommuBlockDevice(*(_QWORD *)(MaxDataSize + 720));
    v8 = v7;
    if ( v7 < 0 )
    {
      IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x388);
      if ( *(_WORD *)(MaxDataSize + 40) )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 40, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 48), (PVOID)*(unsigned __int16 *)(MaxDataSize + 40));
      }
      if ( *(_WORD *)(MaxDataSize + 56) )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 64), (PVOID)*(unsigned __int16 *)(MaxDataSize + 56));
      }
      v9 = *(_QWORD *)(MaxDataSize + 16);
      if ( v9 && *(_WORD *)(v9 + 56) )
      {
        IoAddTriageDumpDataBlock(v9 + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
      }
      KeBugCheckEx(0xCAu, 0x13uLL, 0x1001uLL, v8, MaxDataSize);
    }
    PipDmgDestroyIommuExtension(MaxDataSize);
  }
  if ( a3 && PipDmaGuardPolicy )
  {
    v6 = *(void **)(MaxDataSize + 32);
    if ( a2 == 55 )
    {
      PiDmaGuardQueueInsertEntry(v6, 6);
      PipDmgReevaluateQueue();
    }
    else
    {
      PiDmaGuardQueueRemoveEntry(v6);
    }
  }
}
