/*
 * XREFs of MiChargeForWriteInProgressPage @ 0x14033A660
 * Callers:
 *     MiMappedPageWriter @ 0x1402EB500 (MiMappedPageWriter.c)
 *     MiReferencePageForModifiedWrite @ 0x1402EC7E8 (MiReferencePageForModifiedWrite.c)
 *     MiAddPageToFlushMdl @ 0x14033A230 (MiAddPageToFlushMdl.c)
 *     MiAllocateModWriterEntry @ 0x14046930C (MiAllocateModWriterEntry.c)
 * Callees:
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x14033ECD0 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeForWriteInProgressPage(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  __int64 v7; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v10; // ett
  unsigned __int64 v11; // rbx
  unsigned int v12; // edi
  struct _KPRCB *v14; // r8
  signed __int32 v15; // edx
  bool v16; // zf
  signed __int32 v17; // eax

  v5 = 4;
  if ( (a2 & 2) == 0 )
    v5 = 8;
  v7 = (unsigned int)-((a2 & 2) != 0);
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
    {
      v10 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - 1,
                                  CachedResidentAvailable);
      if ( v10 == CachedResidentAvailable )
      {
        v11 = 1LL;
        v12 = 1;
        goto LABEL_8;
      }
    }
  }
  v11 = 1LL;
  v12 = MiChargePartitionResidentAvailable(a1, 1LL, v7, a4);
  if ( !v12 )
    return 0LL;
LABEL_8:
  if ( (a2 & 1) == 0 || (unsigned int)MiChargeCommit(a1, 1LL, v5, a4) )
    return v12;
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    v14 = KeGetCurrentPrcb();
    v15 = v14->CachedResidentAvailable;
    if ( v15 != -1 )
    {
      do
      {
        if ( (unsigned __int64)(v15 + 1LL) > 0x100 )
          break;
        v17 = _InterlockedCompareExchange((volatile signed __int32 *)&v14->CachedResidentAvailable, v15 + 1, v15);
        v16 = v15 == v17;
        v15 = v17;
        if ( v16 )
          return 0LL;
      }
      while ( v17 != -1 );
      if ( v15 > 192
        && v15 == _InterlockedCompareExchange((volatile signed __int32 *)&v14->CachedResidentAvailable, 192, v15) )
      {
        v11 = v15 - 192 + 1LL;
      }
      if ( !v11 )
        return 0LL;
    }
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 18752), v11);
  return 0LL;
}
