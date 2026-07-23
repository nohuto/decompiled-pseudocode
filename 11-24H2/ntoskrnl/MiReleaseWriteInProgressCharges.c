/*
 * XREFs of MiReleaseWriteInProgressCharges @ 0x14042CD34
 * Callers:
 *     MiAddPageToInsertList @ 0x140257CC0 (MiAddPageToInsertList.c)
 *     MiBuildMappedCluster @ 0x1402EC958 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 *     MiFreeModWriterEntry @ 0x14042CCD0 (MiFreeModWriterEntry.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiSignalCommitSignals @ 0x14029EE00 (MiSignalCommitSignals.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRestockOverCommit @ 0x14042CEF4 (MiRestockOverCommit.c)
 */

void __fastcall MiReleaseWriteInProgressCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 i; // rdx
  signed __int32 v8; // eax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r8
  struct _KPRCB *v11; // r9
  signed __int32 CachedResidentAvailable; // edx
  bool v13; // zf
  signed __int32 v14; // eax
  _DWORD *v15; // rbp
  volatile LONG *v16; // rcx
  KIRQL v17; // r14

  v3 = a2;
  if ( a3 )
  {
    v5 = a2;
    if ( a2 )
    {
      if ( !*(_QWORD *)(a1 + 16904) )
        goto LABEL_4;
      v15 = (_DWORD *)(a1 + 16888);
      v16 = (volatile LONG *)(a1 + 16888);
      if ( KeGetCurrentIrql() == 2 )
      {
        v17 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(v16);
      }
      else
      {
        v17 = ExAcquireSpinLockExclusive(v16);
      }
      v5 = MiRestockOverCommit(a1, v3);
      MiReleaseSpinLockExclusive(v15, v17);
      if ( v5 )
      {
LABEL_4:
        if ( (ULONG *)a1 == &MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
          for ( i = CurrentPrcb->CachedCommit; (unsigned __int64)(i + v5) <= 0x100; i = v8 )
          {
            v8 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedCommit, i + v5, i);
            if ( v8 == i )
            {
              v9 = v3;
              goto LABEL_11;
            }
          }
        }
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 19328), -v5);
        v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 19264), -v5);
        MiSignalCommitSignals(a1, v10 - v5, v10);
      }
    }
    v9 = v3;
    if ( (ULONG *)a1 == &MiSystemPartition )
    {
LABEL_11:
      v11 = KeGetCurrentPrcb();
      CachedResidentAvailable = v11->CachedResidentAvailable;
      if ( CachedResidentAvailable != -1 )
      {
        do
        {
          if ( v3 + CachedResidentAvailable > 0x100 || v3 >= 0x80000 )
            break;
          v14 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v11->CachedResidentAvailable,
                  v3 + CachedResidentAvailable,
                  CachedResidentAvailable);
          v13 = CachedResidentAvailable == v14;
          CachedResidentAvailable = v14;
          if ( v13 )
            return;
        }
        while ( v14 != -1 );
        if ( CachedResidentAvailable > 192
          && CachedResidentAvailable == _InterlockedCompareExchange(
                                          (volatile signed __int32 *)&v11->CachedResidentAvailable,
                                          192,
                                          CachedResidentAvailable) )
        {
          v9 = v3 + CachedResidentAvailable - 192;
        }
        v3 = v9;
      }
    }
    if ( v3 )
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 18752), v3);
  }
  else
  {
    MiReturnResident(a1, a2);
  }
}
