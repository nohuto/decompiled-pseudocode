/*
 * XREFs of MiRemoveLockedPageCharge @ 0x14029D0B0
 * Callers:
 *     MiCanBatchHardFaultPages @ 0x140258170 (MiCanBatchHardFaultPages.c)
 *     MiHardFaultPageRelease @ 0x140258B7C (MiHardFaultPageRelease.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiSwapHardFaultPage @ 0x14038DB8C (MiSwapHardFaultPage.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     MiFlushFileOnlyDeleteChain @ 0x1404F26E4 (MiFlushFileOnlyDeleteChain.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067CB6C (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiBadRefCount @ 0x14029D568 (MiBadRefCount.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRestockOverCommit @ 0x14042CEF4 (MiRestockOverCommit.c)
 */

__int64 __fastcall MiRemoveLockedPageCharge(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // r8
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // r9d
  unsigned __int64 v8; // rdi
  char v9; // al
  __int64 v11; // rsi
  __int64 v12; // r9
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 CachedResidentAvailable; // edx
  bool v15; // zf
  signed __int32 v16; // eax
  __int64 v17; // rbp
  struct _KPRCB *v18; // r8
  __int64 i; // rdx
  signed __int32 v20; // eax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  volatile LONG *v25; // rcx
  KIRQL v26; // r15
  KIRQL v27; // bp
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  struct _KEVENT *v30; // rcx
  struct _KEVENT *v31; // rcx
  struct _KEVENT *v32; // rcx
  volatile LONG *v33; // rcx
  int v34; // [rsp+50h] [rbp+8h]

  if ( !(unsigned __int16)*(_DWORD *)(a1 + 32) )
    MiBadRefCount(a1, a2, a3);
  HIWORD(v34) = HIWORD(*(_DWORD *)(a1 + 32));
  v3 = *(_DWORD *)(a1 + 32) - 1;
  LOWORD(v34) = v3;
  *(_DWORD *)(a1 + 32) = v34;
  if ( v3 || !_bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
  {
    if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) == 0 && !_bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
    {
      v4 = *(_DWORD *)(a1 + 32);
      v5 = 0;
      v6 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v7 = 0;
      v8 = 1LL;
      if ( !(_WORD)v4 )
        goto LABEL_11;
      if ( (_WORD)v4 == 1 )
      {
        if ( v6 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
          v7 = 1;
        if ( v7 )
        {
LABEL_11:
          LOBYTE(v5) = v3 == 0;
          if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
            || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL )
          {
            v9 = *(_BYTE *)(a1 + 35);
            if ( (v9 & 0x20) != 0 )
            {
              *(_BYTE *)(a1 + 35) = v9 & 0xDF;
              return v5;
            }
          }
          v11 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
          if ( (*(__int64 *)(a1 + 40) >= 0 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0)
            && ((*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
             || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL
             || (*(_BYTE *)(a1 + 35) & 0x20) == 0)
            && (v3 || (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0) )
          {
            goto LABEL_21;
          }
          v17 = 1LL;
          if ( *(_QWORD *)(v11 + 16904) )
          {
            v25 = (volatile LONG *)(v11 + 16888);
            if ( KeGetCurrentIrql() == 2 )
            {
              v26 = 17;
              ExAcquireSpinLockExclusiveAtDpcLevel(v25);
            }
            else
            {
              v26 = ExAcquireSpinLockExclusive(v25);
            }
            v17 = MiRestockOverCommit(v11, 1LL);
            MiReleaseSpinLockExclusive(v11 + 16888, v26);
            if ( !v17 )
            {
LABEL_21:
              v12 = 1LL;
              if ( (ULONG *)v11 == &MiSystemPartition )
              {
LABEL_22:
                CurrentPrcb = KeGetCurrentPrcb();
                CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
                if ( CachedResidentAvailable != -1 )
                {
                  do
                  {
                    if ( (unsigned __int64)(CachedResidentAvailable + 1LL) > 0x100 )
                      break;
                    v16 = _InterlockedCompareExchange(
                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                            CachedResidentAvailable + 1,
                            CachedResidentAvailable);
                    v15 = CachedResidentAvailable == v16;
                    CachedResidentAvailable = v16;
                    if ( v15 )
                      return v5;
                  }
                  while ( v16 != -1 );
                  if ( CachedResidentAvailable > 192
                    && CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
                  {
                    v12 = CachedResidentAvailable - 192 + 1LL;
                  }
                  v8 = v12;
                  if ( !v12 )
                    return v5;
                }
              }
              _InterlockedAdd64((volatile signed __int64 *)(v11 + 18752), v8);
              return v5;
            }
          }
          if ( (ULONG *)v11 == &MiSystemPartition )
          {
            v18 = KeGetCurrentPrcb();
            _m_prefetchw((const void *)&v18->CachedCommit);
            for ( i = v18->CachedCommit; (unsigned __int64)(i + v17) <= 0x100; i = v20 )
            {
              v20 = _InterlockedCompareExchange((volatile signed __int32 *)&v18->CachedCommit, i + v17, i);
              if ( v20 == i )
              {
                v12 = 1LL;
                goto LABEL_22;
              }
            }
          }
          _InterlockedAdd64((volatile signed __int64 *)(v11 + 19328), -v17);
          v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 19264), -v17);
          v22 = *(_QWORD *)(v11 + 16864);
          v23 = *(_QWORD *)(v11 + 16856);
          v24 = v21 - v17;
          if ( v21 - v17 > v21 )
          {
            if ( (v24 < v22 || v21 >= v22) && (v24 < v23 || v21 >= v23) )
              goto LABEL_21;
          }
          else if ( (v21 < v22 || v24 >= v22) && (v21 < v23 || v24 >= v23) )
          {
            goto LABEL_21;
          }
          v33 = (volatile LONG *)(v11 + 16888);
          if ( KeGetCurrentIrql() == 2 )
          {
            v27 = 17;
            ExAcquireSpinLockExclusiveAtDpcLevel(v33);
          }
          else
          {
            v27 = ExAcquireSpinLockExclusive(v33);
          }
          v28 = *(_QWORD *)(v11 + 19264);
          if ( v28 < *(_QWORD *)(v11 + 16856) )
          {
            v31 = *(struct _KEVENT **)(v11 + 296);
            if ( !v31->Header.SignalState )
              KeSetEvent(v31, 0, 0);
            v32 = *(struct _KEVENT **)(v11 + 304);
            if ( v32->Header.SignalState != 1 )
              goto LABEL_74;
            KeResetEvent(v32);
            v30 = *(struct _KEVENT **)(v11 + 312);
          }
          else
          {
            v29 = *(_QWORD *)(v11 + 304);
            if ( v28 >= *(_QWORD *)(v11 + 16864) )
            {
              if ( !*(_DWORD *)(v29 + 4) )
                KeSetEvent(*(PRKEVENT *)(v11 + 304), 0, 0);
              if ( *(_QWORD *)(v11 + 19608) == *(_QWORD *)(v11 + 16840) )
                KeSetEvent(*(PRKEVENT *)(v11 + 312), 0, 0);
              v30 = *(struct _KEVENT **)(v11 + 296);
              if ( v30->Header.SignalState != 1 )
                goto LABEL_74;
            }
            else
            {
              if ( *(_DWORD *)(v29 + 4) == 1 )
              {
                KeResetEvent(*(PRKEVENT *)(v11 + 304));
                KeResetEvent(*(PRKEVENT *)(v11 + 312));
              }
              v30 = *(struct _KEVENT **)(v11 + 296);
              if ( v30->Header.SignalState != 1 )
                goto LABEL_74;
            }
          }
          KeResetEvent(v30);
LABEL_74:
          MiReleaseSpinLockExclusive(v11 + 16888, v27);
          goto LABEL_21;
        }
      }
      else if ( (_WORD)v4 == 2 && v6 && (*(_BYTE *)(a1 + 34) & 8) != 0 )
      {
        goto LABEL_11;
      }
    }
    return 0LL;
  }
  return 1LL;
}
