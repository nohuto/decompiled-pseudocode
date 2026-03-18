/*
 * XREFs of MiCheckProtoPtePageState @ 0x14023BE50
 * Callers:
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MiPurgeSubsection @ 0x14023C9F0 (MiPurgeSubsection.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiAnyProtosAreMapped @ 0x14045B2B8 (MiAnyProtosAreMapped.c)
 *     MiPurgeFileOnlyPfn @ 0x14067BB9C (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiLockOwnedProtoPage @ 0x1402158F0 (MiLockOwnedProtoPage.c)
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiAreChargesNeededToLockPage @ 0x14023C190 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x14023C210 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F6BC0 (MiChargePartitionResidentAvailable.c)
 *     MiInvalidPteConforms @ 0x140302590 (MiInvalidPteConforms.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiCheckProtoPtePageState(__int64 a1, unsigned __int64 a2, char a3, _BYTE *a4)
{
  unsigned __int64 *v7; // rsi
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  ULONG_PTR v14; // rcx
  __int64 v15; // rdi
  unsigned __int8 v16; // al
  unsigned __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  char v22; // si
  ULONG *v23; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v26; // ett

  v7 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = a3 & 1;
LABEL_2:
  while ( 2 )
  {
    v9 = 0xFFFFDE0000000000uLL;
    v10 = 0xFFFFFFFFFFLL;
    while ( 1 )
    {
      v11 = *v7;
      v12 = *v7 & 1;
      if ( v8 )
        break;
      if ( v12 )
      {
        if ( (v11 & 0x200) != 0 )
          goto LABEL_20;
        v13 = *v7;
        goto LABEL_7;
      }
      if ( (*v7 & 0xC00) != 0x800 )
        goto LABEL_20;
      if ( (unsigned int)MiInvalidPteConforms(*v7) )
      {
        if ( qword_140E2DB80 )
        {
          if ( (v11 & 0x10) != 0 )
            v13 &= ~0x10uLL;
          else
            v13 = v11 & ~qword_140E2DB80;
        }
LABEL_7:
        v14 = v10 & (v13 >> 12);
        v15 = v9 + 48 * v14;
        v16 = MiSafeLockPage(v14, v9, v10);
        v17 = v16;
        v10 = 0xFFFFFFFFFFLL;
        v9 = 0xFFFFDE0000000000uLL;
        if ( v16 != 17 )
        {
          if ( *v7 == v11 )
          {
            if ( (*v7 & 1) != 0 )
            {
              if ( v8 || (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
              {
                if ( (unsigned int)MiAreChargesNeededToLockPage(v15) )
                {
                  v22 = 0;
                  if ( *(__int64 *)(v15 + 40) < 0 && (*(_DWORD *)(v15 + 16) & 0x400LL) != 0
                    || (unsigned int)MiIsPfnCommitNotCharged(v15, v18, v19) )
                  {
                    v22 = 1;
                    v23 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL));
                    if ( !(unsigned int)MiChargeCommit((__int64)v23, 1uLL, 4) )
                      goto LABEL_14;
                  }
                  else
                  {
                    v23 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL));
                  }
                  if ( v23 == &MiSystemPartition )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
                    while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
                    {
                      v26 = CachedResidentAvailable;
                      CachedResidentAvailable = _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  CachedResidentAvailable - 1,
                                                  CachedResidentAvailable);
                      if ( v26 == CachedResidentAvailable )
                        goto LABEL_13;
                    }
                  }
                  if ( !(unsigned int)MiChargePartitionResidentAvailable(v23, 1LL, 0xFFFFFFFFLL) )
                  {
                    if ( v22 )
                      MiReturnCommit(v23, 1LL, 0LL);
                    goto LABEL_14;
                  }
                }
LABEL_13:
                v20 = *(_DWORD *)(v15 + 32);
                LOWORD(v20) = v20 + 1;
                *(_DWORD *)(v15 + 32) = v20;
LABEL_14:
                *a4 = v17;
                MiLockOwnedProtoPage(v15);
                return v15;
              }
            }
            else if ( (*(_BYTE *)(v15 + 34) & 7u) >= 6 )
            {
              MiUnlockPage(v15, v16);
              goto LABEL_30;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v16 < 2u )
            {
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
              __writecr8(v17);
            }
            goto LABEL_20;
          }
          MiUnlockPage(v15, v16);
          goto LABEL_2;
        }
      }
    }
    if ( v12 )
    {
      if ( (v11 & 0x200) != 0 )
        goto LABEL_30;
      v13 = *v7;
      goto LABEL_7;
    }
    if ( !a1 || (*v7 & 0x402) != 1026 || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
LABEL_30:
      MmAccessFault(2uLL, a2, 0, 0LL);
      continue;
    }
    break;
  }
LABEL_20:
  *a4 = 17;
  return 0LL;
}
