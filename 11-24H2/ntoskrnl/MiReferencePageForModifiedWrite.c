/*
 * XREFs of MiReferencePageForModifiedWrite @ 0x1402EC7E8
 * Callers:
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiGatherMappedPages @ 0x1402EB8C0 (MiGatherMappedPages.c)
 *     MiAddToReservationCluster @ 0x1402EBEB0 (MiAddToReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x1402EC140 (MiGetPageForWriteCluster.c)
 *     MiFillNoReservationCluster @ 0x1402EC57C (MiFillNoReservationCluster.c)
 *     MiBuildMappedCluster @ 0x1402EC958 (MiBuildMappedCluster.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiClearPfnImageVerified @ 0x1402EAB40 (MiClearPfnImageVerified.c)
 *     MiCanPfnOriginalPteBeLost @ 0x1402EE318 (MiCanPfnOriginalPteBeLost.c)
 *     MiChargeForWriteInProgressPage @ 0x14033A660 (MiChargeForWriteInProgressPage.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 */

__int64 __fastcall MiReferencePageForModifiedWrite(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // esi
  char v7; // r11
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+38h] [rbp+10h]
  int v12; // [rsp+38h] [rbp+10h]
  int v13; // [rsp+38h] [rbp+10h]

  v4 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  if ( (a2 & 1) != 0 )
  {
    v6 = 1;
  }
  else
  {
    v5 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1 | 2u;
    if ( (a2 & 2) == 0 )
      v5 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1;
    v6 = MiChargeForWriteInProgressPage(v4, v5);
    if ( !v6 )
      return 0LL;
  }
  if ( (a2 & 4) == 0 )
  {
    MiUnlinkPageFromListEx(BugCheckParameter2);
    *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
  }
  v7 = 8;
  v11 = *(_DWORD *)(BugCheckParameter2 + 32);
  LOWORD(v11) = v11 + 1;
  *(_DWORD *)(BugCheckParameter2 + 32) = v11;
  if ( (a2 & 8) == 0 )
  {
    v12 = *(_DWORD *)(BugCheckParameter2 + 32);
    if ( (v12 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(BugCheckParameter2)
      && (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) == 0
      && (*(_DWORD *)(BugCheckParameter2 + 16) & 4) != 0 )
    {
      *(_QWORD *)(BugCheckParameter2 + 16) &= ~4uLL;
    }
    BYTE2(v12) &= ~0x10u;
    *(_DWORD *)(BugCheckParameter2 + 32) = v12;
  }
  v13 = *(_DWORD *)(BugCheckParameter2 + 32);
  BYTE2(v13) |= v7;
  *(_DWORD *)(BugCheckParameter2 + 32) = v13;
  if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
    && (MiGetPagePrivilege(BugCheckParameter2, 1, 0LL) & 0x10) != 0 )
  {
    MiClearPfnImageVerified(BugCheckParameter2, 28LL, v9, v10);
  }
  return v6;
}
