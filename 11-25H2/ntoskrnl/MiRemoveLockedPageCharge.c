/*
 * XREFs of MiRemoveLockedPageCharge @ 0x140235C40
 * Callers:
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiCanBatchHardFaultPages @ 0x14023E1D4 (MiCanBatchHardFaultPages.c)
 *     MiHardFaultPageRelease @ 0x14023EBE8 (MiHardFaultPageRelease.c)
 *     MiSwapHardFaultPage @ 0x1402D11D4 (MiSwapHardFaultPage.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     MiFlushFileOnlyDeleteChain @ 0x1404F0DD4 (MiFlushFileOnlyDeleteChain.c)
 *     MiPurgeBadFileOnlyPages @ 0x1406701CC (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     MiBadRefCount @ 0x1402360FC (MiBadRefCount.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     MiRestockOverCommit @ 0x14040ADD4 (MiRestockOverCommit.c)
 */

__int64 __fastcall MiRemoveLockedPageCharge(__int64 a1)
{
  __int16 v1; // r8
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v5; // r9d
  unsigned __int64 v6; // rdi
  char v7; // al
  __int64 v9; // rsi
  __int64 v10; // r9
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 CachedResidentAvailable; // edx
  bool v13; // zf
  signed __int32 v14; // eax
  __int64 v15; // rbp
  struct _KPRCB *v16; // r8
  __int64 i; // rdx
  signed __int32 v18; // eax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  volatile LONG *v23; // rcx
  KIRQL v24; // r15
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  struct _KEVENT *v27; // rcx
  struct _KEVENT *v28; // rcx
  struct _KEVENT *v29; // rcx
  KIRQL v30; // bp
  volatile LONG *v31; // rcx
  int v32; // [rsp+50h] [rbp+8h]

  if ( !(unsigned __int16)*(_DWORD *)(a1 + 32) )
    MiBadRefCount(a1);
  HIWORD(v32) = HIWORD(*(_DWORD *)(a1 + 32));
  v1 = *(_DWORD *)(a1 + 32) - 1;
  LOWORD(v32) = v1;
  *(_DWORD *)(a1 + 32) = v32;
  if ( v1 || !_bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
  {
    if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) == 0 && !_bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
    {
      v2 = *(_DWORD *)(a1 + 32);
      v3 = 0;
      v4 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v5 = 0;
      v6 = 1LL;
      if ( !(_WORD)v2 )
        goto LABEL_11;
      if ( (_WORD)v2 == 1 )
      {
        if ( v4 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
          v5 = 1;
        if ( v5 )
        {
LABEL_11:
          LOBYTE(v3) = v1 == 0;
          if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
            || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL )
          {
            v7 = *(_BYTE *)(a1 + 35);
            if ( (v7 & 0x20) != 0 )
            {
              *(_BYTE *)(a1 + 35) = v7 & 0xDF;
              return v3;
            }
          }
          v9 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
          if ( (*(__int64 *)(a1 + 40) >= 0 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0)
            && ((*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
             || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL
             || (*(_BYTE *)(a1 + 35) & 0x20) == 0)
            && (v1 || (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0) )
          {
            goto LABEL_23;
          }
          v15 = 1LL;
          if ( *(_QWORD *)(v9 + 16904) )
          {
            v23 = (volatile LONG *)(v9 + 16888);
            if ( KeGetCurrentIrql() == 2 )
            {
              v24 = 17;
              ExAcquireSpinLockExclusiveAtDpcLevel(v23);
            }
            else
            {
              v24 = ExAcquireSpinLockExclusive(v23);
            }
            v15 = MiRestockOverCommit(v9, 1LL);
            MiReleaseSpinLockExclusive(v9 + 16888, v24);
            if ( !v15 )
            {
LABEL_23:
              v10 = 1LL;
              if ( (ULONG *)v9 == &MiSystemPartition )
              {
LABEL_24:
                CurrentPrcb = KeGetCurrentPrcb();
                CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
                if ( CachedResidentAvailable != -1 )
                {
                  do
                  {
                    if ( (unsigned __int64)(CachedResidentAvailable + 1LL) > 0x100 )
                      break;
                    v14 = _InterlockedCompareExchange(
                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                            CachedResidentAvailable + 1,
                            CachedResidentAvailable);
                    v13 = CachedResidentAvailable == v14;
                    CachedResidentAvailable = v14;
                    if ( v13 )
                      return v3;
                  }
                  while ( v14 != -1 );
                  if ( CachedResidentAvailable > 192
                    && CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
                  {
                    v10 = CachedResidentAvailable - 192 + 1LL;
                  }
                  v6 = v10;
                  if ( !v10 )
                    return v3;
                }
              }
              _InterlockedAdd64((volatile signed __int64 *)(v9 + 18752), v6);
              return v3;
            }
          }
          if ( (ULONG *)v9 == &MiSystemPartition )
          {
            v16 = KeGetCurrentPrcb();
            _m_prefetchw((const void *)&v16->CachedCommit);
            for ( i = v16->CachedCommit; (unsigned __int64)(i + v15) <= 0x100; i = v18 )
            {
              v18 = _InterlockedCompareExchange((volatile signed __int32 *)&v16->CachedCommit, i + v15, i);
              if ( v18 == i )
              {
                v10 = 1LL;
                goto LABEL_24;
              }
            }
          }
          _InterlockedAdd64((volatile signed __int64 *)(v9 + 19328), -v15);
          v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 19264), -v15);
          v20 = *(_QWORD *)(v9 + 16864);
          v21 = *(_QWORD *)(v9 + 16856);
          v22 = v19 - v15;
          if ( v19 - v15 > v19 )
          {
            if ( (v22 < v20 || v19 >= v20) && (v22 < v21 || v19 >= v21) )
              goto LABEL_23;
          }
          else if ( (v19 < v20 || v22 >= v20) && (v19 < v21 || v22 >= v21) )
          {
            goto LABEL_23;
          }
          v31 = (volatile LONG *)(v9 + 16888);
          if ( KeGetCurrentIrql() == 2 )
          {
            v30 = 17;
            ExAcquireSpinLockExclusiveAtDpcLevel(v31);
          }
          else
          {
            v30 = ExAcquireSpinLockExclusive(v31);
          }
          v25 = *(_QWORD *)(v9 + 19264);
          if ( v25 < *(_QWORD *)(v9 + 16856) )
          {
            v28 = *(struct _KEVENT **)(v9 + 296);
            if ( !v28->Header.SignalState )
              KeSetEvent(v28, 0, 0);
            v29 = *(struct _KEVENT **)(v9 + 304);
            if ( v29->Header.SignalState != 1 )
              goto LABEL_73;
            KeResetEvent(v29);
            v27 = *(struct _KEVENT **)(v9 + 312);
          }
          else
          {
            v26 = *(_QWORD *)(v9 + 304);
            if ( v25 >= *(_QWORD *)(v9 + 16864) )
            {
              if ( !*(_DWORD *)(v26 + 4) )
                KeSetEvent(*(PRKEVENT *)(v9 + 304), 0, 0);
              if ( *(_QWORD *)(v9 + 19608) == *(_QWORD *)(v9 + 16840) )
                KeSetEvent(*(PRKEVENT *)(v9 + 312), 0, 0);
              v27 = *(struct _KEVENT **)(v9 + 296);
              if ( v27->Header.SignalState != 1 )
                goto LABEL_73;
            }
            else
            {
              if ( *(_DWORD *)(v26 + 4) == 1 )
              {
                KeResetEvent(*(PRKEVENT *)(v9 + 304));
                KeResetEvent(*(PRKEVENT *)(v9 + 312));
              }
              v27 = *(struct _KEVENT **)(v9 + 296);
              if ( v27->Header.SignalState != 1 )
                goto LABEL_73;
            }
          }
          KeResetEvent(v27);
LABEL_73:
          MiReleaseSpinLockExclusive(v9 + 16888, v30);
          goto LABEL_23;
        }
      }
      else if ( (_WORD)v2 == 2 && v4 && (*(_BYTE *)(a1 + 34) & 8) != 0 )
      {
        goto LABEL_11;
      }
    }
    return 0LL;
  }
  return 1LL;
}
