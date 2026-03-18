/*
 * XREFs of MiChargeForWriteInProgressPage @ 0x140211300
 * Callers:
 *     MiAddPageToFlushMdl @ 0x140210ED0 (MiAddPageToFlushMdl.c)
 *     MiMappedPageWriter @ 0x140369760 (MiMappedPageWriter.c)
 *     MiReferencePageForModifiedWrite @ 0x14036AA48 (MiReferencePageForModifiedWrite.c)
 *     MiAllocateModWriterEntry @ 0x14046EBF8 (MiAllocateModWriterEntry.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F6BC0 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeForWriteInProgressPage(__int64 a1, char a2)
{
  unsigned int v3; // ebp
  __int64 v5; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v8; // ett
  unsigned __int64 v9; // rbx
  unsigned int v10; // edi
  struct _KPRCB *v12; // r8
  signed __int32 v13; // edx
  bool v14; // zf
  signed __int32 v15; // eax

  v3 = 4;
  if ( (a2 & 2) == 0 )
    v3 = 8;
  v5 = (unsigned int)-((a2 & 2) != 0);
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
    {
      v8 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - 1,
                                  CachedResidentAvailable);
      if ( v8 == CachedResidentAvailable )
      {
        v9 = 1LL;
        v10 = 1;
        goto LABEL_8;
      }
    }
  }
  v9 = 1LL;
  v10 = MiChargePartitionResidentAvailable(a1, 1LL, v5);
  if ( !v10 )
    return 0LL;
LABEL_8:
  if ( (a2 & 1) == 0 || (unsigned int)MiChargeCommit(a1, 1LL, v3) )
    return v10;
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    v12 = KeGetCurrentPrcb();
    v13 = v12->CachedResidentAvailable;
    if ( v13 != -1 )
    {
      do
      {
        if ( (unsigned __int64)(v13 + 1LL) > 0x100 )
          break;
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)&v12->CachedResidentAvailable, v13 + 1, v13);
        v14 = v13 == v15;
        v13 = v15;
        if ( v14 )
          return 0LL;
      }
      while ( v15 != -1 );
      if ( v13 > 192
        && v13 == _InterlockedCompareExchange((volatile signed __int32 *)&v12->CachedResidentAvailable, 192, v13) )
      {
        v9 = v13 - 192 + 1LL;
      }
      if ( !v9 )
        return 0LL;
    }
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 18752), v9);
  return 0LL;
}
