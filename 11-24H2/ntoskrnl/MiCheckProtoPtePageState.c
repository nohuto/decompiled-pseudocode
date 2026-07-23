/*
 * XREFs of MiCheckProtoPtePageState @ 0x140345BB0
 * Callers:
 *     MiPurgeSubsection @ 0x140204780 (MiPurgeSubsection.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiAnyProtosAreMapped @ 0x1404506B8 (MiAnyProtosAreMapped.c)
 *     MiPurgeFileOnlyPfn @ 0x14067CD7C (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiLockOwnedProtoPage @ 0x1403354A0 (MiLockOwnedProtoPage.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x14033ECD0 (MiChargePartitionResidentAvailable.c)
 *     MiAreChargesNeededToLockPage @ 0x140345EF0 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140345F70 (MiIsPfnCommitNotCharged.c)
 *     MiInvalidPteConforms @ 0x1403461F0 (MiInvalidPteConforms.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiCheckProtoPtePageState(__int64 a1, unsigned __int64 a2, char a3, _BYTE *a4)
{
  unsigned __int64 *v7; // rsi
  int v8; // ebp
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  ULONG_PTR v14; // rcx
  __int64 v15; // rdi
  unsigned __int8 v16; // al
  unsigned __int64 v17; // r14
  int v18; // eax
  char v20; // si
  ULONG *v21; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v24; // ett

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
        if ( qword_140E2DCC0 )
        {
          if ( (v11 & 0x10) != 0 )
            v13 &= ~0x10uLL;
          else
            v13 = v11 & ~qword_140E2DCC0;
        }
LABEL_7:
        v14 = v10 & (v13 >> 12);
        v15 = v9 + 48 * v14;
        v16 = MiSafeLockPage(v14);
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
                  v20 = 0;
                  if ( *(__int64 *)(v15 + 40) < 0 && (*(_DWORD *)(v15 + 16) & 0x400LL) != 0
                    || (unsigned int)MiIsPfnCommitNotCharged(v15) )
                  {
                    v20 = 1;
                    v21 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL));
                    if ( !(unsigned int)MiChargeCommit((__int64)v21, 1uLL, 4) )
                      goto LABEL_14;
                  }
                  else
                  {
                    v21 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL));
                  }
                  if ( v21 == &MiSystemPartition )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
                    while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
                    {
                      v24 = CachedResidentAvailable;
                      CachedResidentAvailable = _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  CachedResidentAvailable - 1,
                                                  CachedResidentAvailable);
                      if ( v24 == CachedResidentAvailable )
                        goto LABEL_13;
                    }
                  }
                  if ( !(unsigned int)MiChargePartitionResidentAvailable((__int64)v21, 1uLL, 0xFFFFFFFFLL) )
                  {
                    if ( v20 )
                      MiReturnCommit((__int64)v21, 1LL, 0);
                    goto LABEL_14;
                  }
                }
LABEL_13:
                v18 = *(_DWORD *)(v15 + 32);
                LOWORD(v18) = v18 + 1;
                *(_DWORD *)(v15 + 32) = v18;
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
