/*
 * XREFs of MiReferencePageForModifiedWrite @ 0x14040DA18
 * Callers:
 *     MiBuildReservationCluster @ 0x14040BF84 (MiBuildReservationCluster.c)
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 *     MiAddToReservationCluster @ 0x14040D120 (MiAddToReservationCluster.c)
 *     MiFillNoReservationCluster @ 0x14040D3B0 (MiFillNoReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x14040D5F4 (MiGetPageForWriteCluster.c)
 *     MiBuildMappedCluster @ 0x14040DB84 (MiBuildMappedCluster.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiChargeForWriteInProgressPage @ 0x14022E660 (MiChargeForWriteInProgressPage.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140388D44 (MiCanPfnOriginalPteBeLost.c)
 */

__int64 __fastcall MiReferencePageForModifiedWrite(ULONG_PTR BugCheckParameter2, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int v7; // esi
  char v8; // r11
  __int64 result; // rax
  int v10; // edx
  int v11; // [rsp+38h] [rbp+10h]
  int v12; // [rsp+38h] [rbp+10h]
  int v13; // [rsp+38h] [rbp+10h]

  v6 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  if ( (a2 & 1) != 0 )
  {
    v7 = 1;
LABEL_3:
    if ( (a2 & 4) == 0 )
    {
      MiUnlinkPageFromListEx(BugCheckParameter2, 0);
      *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
    }
    v8 = 8;
    v11 = *(_DWORD *)(BugCheckParameter2 + 32);
    LOWORD(v11) = v11 + 1;
    *(_DWORD *)(BugCheckParameter2 + 32) = v11;
    if ( (a2 & 8) == 0 )
    {
      v13 = *(_DWORD *)(BugCheckParameter2 + 32);
      if ( (v13 & 0x80000) != 0
        && (unsigned int)MiCanPfnOriginalPteBeLost(BugCheckParameter2)
        && (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) == 0
        && (*(_DWORD *)(BugCheckParameter2 + 16) & 4) != 0 )
      {
        *(_QWORD *)(BugCheckParameter2 + 16) &= ~4uLL;
      }
      BYTE2(v13) &= ~0x10u;
      *(_DWORD *)(BugCheckParameter2 + 32) = v13;
    }
    v12 = *(_DWORD *)(BugCheckParameter2 + 32);
    BYTE2(v12) |= v8;
    *(_DWORD *)(BugCheckParameter2 + 32) = v12;
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && (MiGetPagePrivilege(BugCheckParameter2, 1, 0LL) & 0x10) != 0 )
    {
      MiClearPfnImageVerified(BugCheckParameter2, 28);
    }
    return v7;
  }
  v10 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1 | 2;
  if ( (a2 & 2) == 0 )
    LOBYTE(v10) = (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400) != 0;
  result = MiChargeForWriteInProgressPage(v6, v10, (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1, a4);
  v7 = result;
  if ( (_DWORD)result )
    goto LABEL_3;
  return result;
}
