/*
 * XREFs of MiFreeBootPageTable @ 0x140C3DF40
 * Callers:
 *     MxZeroBootMappings @ 0x140C3F394 (MxZeroBootMappings.c)
 * Callees:
 *     MiLockAndInsertPageInFreeList @ 0x140223D04 (MiLockAndInsertPageInFreeList.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiUpdateLargePageBitMap @ 0x14038D1D8 (MiUpdateLargePageBitMap.c)
 *     MiReturnMdlCharges @ 0x1404C47D4 (MiReturnMdlCharges.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFreeBootPageTable(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbx
  int v2; // eax
  ULONG_PTR v3; // r9
  unsigned __int8 v4; // al
  int v6; // [rsp+40h] [rbp+8h]
  int v7; // [rsp+40h] [rbp+8h]

  v1 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v2 = *(_DWORD *)(v1 + 32);
  if ( (_WORD)v2 )
  {
    v3 = *(_QWORD *)(v1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (_WORD)v2 != 2 || v3 != 1 )
      KeBugCheckEx(0x1Au, 0x303030FuLL, BugCheckParameter2, v3, (unsigned __int16)v2);
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL, 0x200uLL, 0);
    v4 = MiLockPageInline(v1);
    HIWORD(v6) = HIWORD(*(_DWORD *)(v1 + 32));
    LOWORD(v6) = 0;
    *(_DWORD *)(v1 + 32) = v6;
    *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
    v7 = *(_DWORD *)(v1 + 32);
    BYTE2(v7) = BYTE2(v7) & 0xF8 | 5;
    *(_DWORD *)(v1 + 32) = v7;
    MiUnlockPage(v1, v4);
    MiReturnMdlCharges((__int64)&MiSystemPartition, 1uLL, 0);
  }
  else
  {
    *(_QWORD *)(v1 + 40) |= 0x40000000000000uLL;
    *(_QWORD *)(v1 + 8) = 0LL;
  }
  return MiLockAndInsertPageInFreeList(v1);
}
