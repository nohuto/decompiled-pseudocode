/*
 * XREFs of MiReferencePageForModifiedWrite @ 0x14036AA48
 * Callers:
 *     MiBuildReservationCluster @ 0x140368F90 (MiBuildReservationCluster.c)
 *     MiGatherMappedPages @ 0x140369B20 (MiGatherMappedPages.c)
 *     MiAddToReservationCluster @ 0x14036A110 (MiAddToReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x14036A3A0 (MiGetPageForWriteCluster.c)
 *     MiFillNoReservationCluster @ 0x14036A7DC (MiFillNoReservationCluster.c)
 *     MiBuildMappedCluster @ 0x14036ABB8 (MiBuildMappedCluster.c)
 * Callees:
 *     MiChargeForWriteInProgressPage @ 0x140211300 (MiChargeForWriteInProgressPage.c)
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiClearPfnImageVerified @ 0x14036C0C0 (MiClearPfnImageVerified.c)
 *     MiCanPfnOriginalPteBeLost @ 0x14039E1D0 (MiCanPfnOriginalPteBeLost.c)
 */

__int64 __fastcall MiReferencePageForModifiedWrite(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rcx
  int v5; // r8d
  char v6; // dl
  unsigned int v7; // esi
  char v8; // r11
  int v10; // [rsp+38h] [rbp+10h]
  int v11; // [rsp+38h] [rbp+10h]
  int v12; // [rsp+38h] [rbp+10h]

  v4 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  if ( (a2 & 1) != 0 )
  {
    v7 = 1;
  }
  else
  {
    v5 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1;
    v6 = v5 | 2;
    if ( (a2 & 2) == 0 )
      v6 = v5;
    v7 = MiChargeForWriteInProgressPage(v4, v6);
    if ( !v7 )
      return 0LL;
  }
  if ( (a2 & 4) == 0 )
  {
    MiUnlinkPageFromListEx(BugCheckParameter2, 0);
    *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
  }
  v8 = 8;
  v10 = *(_DWORD *)(BugCheckParameter2 + 32);
  LOWORD(v10) = v10 + 1;
  *(_DWORD *)(BugCheckParameter2 + 32) = v10;
  if ( (a2 & 8) == 0 )
  {
    v11 = *(_DWORD *)(BugCheckParameter2 + 32);
    if ( (v11 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(BugCheckParameter2)
      && (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) == 0
      && (*(_DWORD *)(BugCheckParameter2 + 16) & 4) != 0 )
    {
      *(_QWORD *)(BugCheckParameter2 + 16) &= ~4uLL;
    }
    BYTE2(v11) &= ~0x10u;
    *(_DWORD *)(BugCheckParameter2 + 32) = v11;
  }
  v12 = *(_DWORD *)(BugCheckParameter2 + 32);
  BYTE2(v12) |= v8;
  *(_DWORD *)(BugCheckParameter2 + 32) = v12;
  if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
    && (MiGetPagePrivilege(BugCheckParameter2, 1, 0LL) & 0x10) != 0 )
  {
    MiClearPfnImageVerified(BugCheckParameter2, 28LL);
  }
  return v7;
}
