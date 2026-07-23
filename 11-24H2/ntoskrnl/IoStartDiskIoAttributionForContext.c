/*
 * XREFs of IoStartDiskIoAttributionForContext @ 0x14045825C
 * Callers:
 *     PspSetJobIoAttribution @ 0x14085B900 (PspSetJobIoAttribution.c)
 *     PspIoRateEntryActivate @ 0x140A6D2B4 (PspIoRateEntryActivate.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     IopDiskIoAttributionTreeCompare @ 0x140458358 (IopDiskIoAttributionTreeCompare.c)
 */

void __fastcall IoStartDiskIoAttributionForContext(PRTL_BALANCED_NODE Node)
{
  KIRQL v2; // al
  unsigned __int64 Root; // rdi
  BOOLEAN v4; // bl
  KIRQL v5; // r15
  int v6; // esi
  unsigned __int64 v7; // rax

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  Root = (unsigned __int64)IopDiskIoAttributionTree.Root;
  v4 = 0;
  v5 = v2;
  if ( (*(_BYTE *)&IopDiskIoAttributionTree.0 & 1) != 0 )
  {
    if ( IopDiskIoAttributionTree.Root )
      Root = (unsigned __int64)&IopDiskIoAttributionTree ^ (unsigned __int64)IopDiskIoAttributionTree.Root;
    else
      Root = 0LL;
  }
  v6 = *(_BYTE *)&IopDiskIoAttributionTree.0 & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (int)IopDiskIoAttributionTreeCompare(&Node[1], Root) >= 0 )
      {
        v7 = *(_QWORD *)(Root + 8);
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_11;
          v7 ^= Root;
        }
        if ( !v7 )
        {
LABEL_11:
          v4 = 1;
          break;
        }
      }
      else
      {
        v7 = *(_QWORD *)Root;
        if ( v6 )
        {
          if ( !v7 )
            break;
          v7 ^= Root;
        }
        if ( !v7 )
          break;
      }
      Root = v7;
    }
  }
  RtlRbInsertNodeEx(&IopDiskIoAttributionTree, (PRTL_BALANCED_NODE)Root, v4, Node);
  ExReleaseSpinLockExclusive(&IopDiskIoAttributionLock, v5);
}
