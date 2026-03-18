/*
 * XREFs of IoStartDiskIoAttributionForContext @ 0x140462C4C
 * Callers:
 *     PspIoRateEntryActivate @ 0x14085F29C (PspIoRateEntryActivate.c)
 *     PspSetJobIoAttribution @ 0x1408EA0D0 (PspSetJobIoAttribution.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 *     IopDiskIoAttributionTreeCompare @ 0x140462D48 (IopDiskIoAttributionTreeCompare.c)
 */

void __fastcall IoStartDiskIoAttributionForContext(unsigned __int64 a1)
{
  KIRQL v2; // al
  unsigned __int64 v3; // rdi
  bool v4; // bl
  KIRQL v5; // r15
  int v6; // esi
  unsigned __int64 v7; // rax

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  v3 = IopDiskIoAttributionTree;
  v4 = 0;
  v5 = v2;
  if ( (BYTE8(IopDiskIoAttributionTree) & 1) != 0 )
  {
    if ( (_QWORD)IopDiskIoAttributionTree )
      v3 = (unsigned __int64)&IopDiskIoAttributionTree ^ IopDiskIoAttributionTree;
    else
      v3 = 0LL;
  }
  v6 = BYTE8(IopDiskIoAttributionTree) & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( (int)IopDiskIoAttributionTreeCompare(a1 + 24, v3) >= 0 )
      {
        v7 = *(_QWORD *)(v3 + 8);
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_11;
          v7 ^= v3;
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
        v7 = *(_QWORD *)v3;
        if ( v6 )
        {
          if ( !v7 )
            break;
          v7 ^= v3;
        }
        if ( !v7 )
          break;
      }
      v3 = v7;
    }
  }
  RtlRbInsertNodeEx((__int64 *)&IopDiskIoAttributionTree, v3, v4, a1);
  ExReleaseSpinLockExclusive(&IopDiskIoAttributionLock, v5);
}
