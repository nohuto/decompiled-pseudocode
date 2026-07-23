/*
 * XREFs of MiPageFileNoFreeSpace @ 0x14046F624
 * Callers:
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiIssuePageExtendRequest @ 0x140464038 (MiIssuePageExtendRequest.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x14046FFF8 (MiMakePagefileWriterEntryAvailable.c)
 *     MiCauseOverCommitPopup @ 0x14047AF98 (MiCauseOverCommitPopup.c)
 *     MiStoreExtendVirtualPagefile @ 0x1404F3E10 (MiStoreExtendVirtualPagefile.c)
 *     MiFreeModifiedReservations @ 0x1404F676C (MiFreeModifiedReservations.c)
 */

__int64 __fastcall MiPageFileNoFreeSpace(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // rsi
  int v7; // r14d
  KIRQL v8; // dl
  unsigned __int128 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  unsigned __int64 v14; // rdi

  v2 = *(_QWORD *)(a1 + 216);
  v4 = 1LL;
  MiFreeModifiedReservations(a1, 1LL);
  v6 = 0LL;
  v7 = 0;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  if ( *(_DWORD *)(a1 + 12) )
  {
    MiMakePagefileWriterEntryAvailable(a2);
  }
  else
  {
    *(_BYTE *)(a1 + 174) |= 1u;
    v7 = 1;
  }
  *(_QWORD *)&v9 = MiReleaseSpinLockExclusive((_DWORD *)(a1 + 200), v8);
  if ( !v7 )
    return v9;
  *a2 = 2575857425LL;
  v10 = *(_QWORD *)(v2 + 19608);
  *(_QWORD *)&v9 = *(unsigned __int16 *)(a1 + 172);
  if ( (v9 & 0x10) != 0 )
    return v9;
  if ( (v9 & 0x40) != 0 )
  {
    *(_QWORD *)&v9 = MiStoreExtendVirtualPagefile(v2, a1);
    return v9;
  }
  v11 = *(_QWORD *)(v2 + 19608);
  if ( *(_QWORD *)(v2 + 19264) <= v10 )
    v11 = *(_QWORD *)(v2 + 19264);
  v9 = v10 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
  if ( v11 > (*((_QWORD *)&v9 + 1) & 0xFFFFFFFFFFFFFFF8uLL) && v10 < *(_QWORD *)(v2 + 16840) )
  {
    MiCauseOverCommitPopup(v2);
LABEL_22:
    *(_QWORD *)&v9 = *(_QWORD *)(v2 + 16840);
    if ( *(_QWORD *)(v2 + 19608) < (unsigned __int64)v9 )
      *(_QWORD *)&v9 = MiIssuePageExtendRequest(v2, v4, 6, 0);
    return v9;
  }
  if ( *(_QWORD *)(v2 + 19616) >= 0x1000uLL )
  {
    v12 = *(_DWORD *)(v2 + 18520);
    v13 = 0;
    if ( v12 )
    {
      *((_QWORD *)&v9 + 1) = v2 + 18528;
      do
      {
        if ( (*(_BYTE *)(**((_QWORD **)&v9 + 1) + 172LL) & 0x50) == 0 )
        {
          *(_QWORD *)&v9 = v6 + *(unsigned int *)(**((_QWORD **)&v9 + 1) + 12LL);
          if ( (unsigned __int64)v9 < v6 )
            break;
          v6 += *(unsigned int *)(**((_QWORD **)&v9 + 1) + 12LL);
        }
        ++v13;
        *((_QWORD *)&v9 + 1) += 8LL;
      }
      while ( v13 < v12 );
    }
    v14 = *(_QWORD *)(v2 + 19616);
    if ( v14 > v6 )
    {
      v4 = v14 - v6;
      if ( v4 )
        goto LABEL_22;
    }
  }
  return v9;
}
