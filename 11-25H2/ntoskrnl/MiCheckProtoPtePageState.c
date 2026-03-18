/*
 * XREFs of MiCheckProtoPtePageState @ 0x14033E110
 * Callers:
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     MiPurgeSubsection @ 0x1403400A0 (MiPurgeSubsection.c)
 *     MiAnyProtosAreMapped @ 0x14045BF40 (MiAnyProtosAreMapped.c)
 *     MiPurgeFileOnlyPfn @ 0x1406703DC (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14022BAA0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiLockOwnedProtoPage @ 0x140231FF0 (MiLockOwnedProtoPage.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiAreChargesNeededToLockPage @ 0x14033E460 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x14033E4E0 (MiIsPfnCommitNotCharged.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiCheckProtoPtePageState(__int64 a1, unsigned __int64 a2, char a3, _BYTE *a4)
{
  __int64 *v7; // rsi
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned __int8 v16; // al
  unsigned __int64 v17; // r14
  int v18; // eax
  char v20; // si
  ULONG *v21; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v24; // ett

  v7 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
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
      if ( MiInvalidPteConforms(*v7) )
      {
        if ( qword_140E2D940 )
        {
          if ( (v11 & 0x10) != 0 )
            v13 &= ~0x10uLL;
          else
            v13 = v11 & ~qword_140E2D940;
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
                  v20 = 0;
                  if ( *(__int64 *)(v15 + 40) < 0 && (*(_DWORD *)(v15 + 16) & 0x400LL) != 0
                    || (unsigned int)MiIsPfnCommitNotCharged(v15) )
                  {
                    v20 = 1;
                    v21 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL));
                    if ( !(unsigned int)MiChargeCommit((__int64)v21, 1uLL, 4) )
                      goto LABEL_14;
                  }
                  else
                  {
                    v21 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL));
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
              goto LABEL_34;
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
        goto LABEL_34;
      v13 = *v7;
      goto LABEL_7;
    }
    if ( !a1 || (*v7 & 0x402) != 1026 || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
LABEL_34:
      MmAccessFault(2uLL, a2, 0, 0LL);
      continue;
    }
    break;
  }
LABEL_20:
  *a4 = 17;
  return 0LL;
}
