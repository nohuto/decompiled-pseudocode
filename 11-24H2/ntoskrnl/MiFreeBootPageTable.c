/*
 * XREFs of MiFreeBootPageTable @ 0x140C51300
 * Callers:
 *     MxZeroBootMappings @ 0x140C52754 (MxZeroBootMappings.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiReturnMdlCharges @ 0x140397B54 (MiReturnMdlCharges.c)
 *     MiLockAndInsertPageInFreeList @ 0x14045BA98 (MiLockAndInsertPageInFreeList.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFreeBootPageTable(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  int v6; // eax
  ULONG_PTR v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 v11; // al
  int v13; // [rsp+40h] [rbp+8h]
  int v14; // [rsp+40h] [rbp+8h]

  v4 = BugCheckParameter2;
  v5 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v6 = *(_DWORD *)(v5 + 32);
  if ( (_WORD)v6 )
  {
    v7 = *(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (_WORD)v6 != 2 || v7 != 1 )
      KeBugCheckEx(0x1Au, 0x303030FuLL, BugCheckParameter2, v7, (unsigned __int16)v6);
    MiUpdateLargePageBitMap(
      (unsigned __int64)&MiSystemPartition,
      BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL,
      0x200uLL,
      0);
    v11 = MiLockPageInline(v5, v8, v9, v10);
    HIWORD(v13) = HIWORD(*(_DWORD *)(v5 + 32));
    LOWORD(v13) = 0;
    *(_DWORD *)(v5 + 32) = v13;
    *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
    v14 = *(_DWORD *)(v5 + 32);
    BYTE2(v14) = BYTE2(v14) & 0xF8 | 5;
    *(_DWORD *)(v5 + 32) = v14;
    MiUnlockPage(v5, v11);
    MiReturnMdlCharges((__int64)&MiSystemPartition, 1uLL, 0);
  }
  else
  {
    *(_QWORD *)(v5 + 40) |= 0x40000000000000uLL;
    *(_QWORD *)(v5 + 8) = 0LL;
  }
  return MiLockAndInsertPageInFreeList(v5, v4, a3, a4);
}
