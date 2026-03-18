/*
 * XREFs of MiGetPageForWriteCluster @ 0x14040D5F4
 * Callers:
 *     MiBuildReservationCluster @ 0x14040BF84 (MiBuildReservationCluster.c)
 * Callees:
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockTransitionLeafPageEx @ 0x14040D774 (MiLockTransitionLeafPageEx.c)
 *     MiReferencePageForModifiedWrite @ 0x14040DA18 (MiReferencePageForModifiedWrite.c)
 */

unsigned __int64 __fastcall MiGetPageForWriteCluster(
        __int64 a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        int *a4,
        _DWORD *a5)
{
  int v7; // esi
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rcx

  v7 = 0;
  *a5 = 1;
  v9 = MiLockTransitionLeafPageEx(a2);
  v10 = v9;
  if ( v9 )
  {
    if ( (*(_BYTE *)(v9 + 34) & 7) == 3
      && !(unsigned __int16)*(_DWORD *)(v9 + 32)
      && (*(_QWORD *)(v9 + 16) & 0xFFFFFFFFFC00FC1FuLL) == a3 )
    {
      v12 = a3;
      if ( qword_140E2D940 && (a3 & 0x10) == 0 )
        v12 = a3 & ~qword_140E2D940;
      v13 = v10;
      if ( !_bittest64(*(const signed __int64 **)(a1 + 8), HIDWORD(v12)) )
      {
        *a5 = MiReferencePageForModifiedWrite(v10);
        MiUnlockPage(v10, 0);
        if ( *a5 )
          goto LABEL_8;
        return -1LL;
      }
    }
    else
    {
      v13 = v9;
    }
    MiUnlockPage(v13, 0);
  }
  if ( (unsigned int)*a4 <= 0x1F )
  {
    if ( qword_140E2D940 )
    {
      if ( (a3 & 0x10) == 0 )
        a3 &= ~qword_140E2D940;
    }
    if ( !_bittest64(*(const signed __int64 **)(a1 + 8), HIDWORD(a3)) )
    {
      v10 = 48 * qword_140E37138 - 0x220000000000LL;
      v7 = *a4 + 1;
LABEL_8:
      *a4 = v7;
      return 0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4);
    }
  }
  return -1LL;
}
