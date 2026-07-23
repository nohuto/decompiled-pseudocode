/*
 * XREFs of PipDmgRequestUpdateConsoleLockState @ 0x140730190
 * Callers:
 *     PipDmgFlushQueueAndRestartDevices @ 0x14072FC7C (PipDmgFlushQueueAndRestartDevices.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall PipDmgRequestUpdateConsoleLockState(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rcx
  _WORD *v3; // rcx
  __int64 v4; // rcx
  unsigned __int16 *v5; // rsi
  _WORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int128 v10; // [rsp+40h] [rbp-18h] BYREF

  if ( PipDmaGuardPolicy == 3 )
  {
    if ( BugCheckParameter2 )
    {
      IoAddTriageDumpDataBlock(BugCheckParameter2, (PVOID)*(unsigned __int16 *)(BugCheckParameter2 + 2));
      v2 = *(_QWORD *)(BugCheckParameter2 + 8);
      if ( v2 )
      {
        IoAddTriageDumpDataBlock(v2, (PVOID)(unsigned int)*(__int16 *)(v2 + 2));
        v3 = (_WORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL);
        if ( *v3 )
        {
          IoAddTriageDumpDataBlock((ULONG)v3, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
        }
      }
      v4 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
      if ( v4 )
      {
        v5 = (unsigned __int16 *)(v4 + 40);
        IoAddTriageDumpDataBlock(v4, (PVOID)0x388);
        if ( *v5 )
        {
          IoAddTriageDumpDataBlock((ULONG)v5, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v5 + 1), (PVOID)*v5);
        }
        v6 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL);
        if ( *v6 )
        {
          IoAddTriageDumpDataBlock((ULONG)v6, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL));
        }
        v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
        if ( v7 )
        {
          if ( *(_WORD *)(v7 + 56) )
          {
            IoAddTriageDumpDataBlock(v7 + 56, (PVOID)2);
            v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v8 + 64), (PVOID)*(unsigned __int16 *)(v8 + 56));
          }
        }
      }
    }
    KeBugCheckEx(0xCAu, 0x11uLL, BugCheckParameter2, 0LL, 0LL);
  }
  v10 = 0LL;
  return PnpRequestDeviceAction((PVOID)BugCheckParameter2, 0x1Bu, 0, &v10, 0LL, 0LL, 0LL);
}
