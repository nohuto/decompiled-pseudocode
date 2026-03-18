/*
 * XREFs of PiDmaGuardProcessPostRemove @ 0x140A8BD58
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404926CC (PnpRemoveLockedDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x1404BD344 (PiDmaGuardQueueRemoveEntry.c)
 *     PiIommuUninitializeDeviceAts @ 0x1404C1094 (PiIommuUninitializeDeviceAts.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     PipDmgReevaluateQueue @ 0x140731E74 (PipDmgReevaluateQueue.c)
 *     PiIommuBlockDevice @ 0x140735F28 (PiIommuBlockDevice.c)
 *     PiDmaGuardQueueInsertEntry @ 0x14073A3A0 (PiDmaGuardQueueInsertEntry.c)
 *     PipDmgDestroyIommuExtension @ 0x1409C45C8 (PipDmgDestroyIommuExtension.c)
 */

void __fastcall PiDmaGuardProcessPostRemove(ULONG_PTR MaxDataSize, int a2, char a3)
{
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  ULONG_PTR v11; // rbp
  __int64 v12; // rax

  if ( *(_QWORD *)(MaxDataSize + 720) )
  {
    PiIommuUninitializeDeviceAts(MaxDataSize);
    v10 = PiIommuBlockDevice(*(_QWORD *)(MaxDataSize + 720), v7, v8, v9);
    v11 = v10;
    if ( v10 < 0 )
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
      v12 = *(_QWORD *)(MaxDataSize + 16);
      if ( v12 && *(_WORD *)(v12 + 56) )
      {
        IoAddTriageDumpDataBlock(v12 + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
      }
      KeBugCheckEx(0xCAu, 0x13uLL, 0x1001uLL, v11, MaxDataSize);
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
