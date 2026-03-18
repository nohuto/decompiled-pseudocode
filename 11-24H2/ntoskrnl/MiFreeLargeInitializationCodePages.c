/*
 * XREFs of MiFreeLargeInitializationCodePages @ 0x14066ADD0
 * Callers:
 *     MiFreeInitializationCode @ 0x140AE67EC (MiFreeInitializationCode.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
 *     MiReleaseFreshPageLocked @ 0x14044321C (MiReleaseFreshPageLocked.c)
 *     MiAddExpansionNonPagedPool @ 0x14067C9FC (MiAddExpansionNonPagedPool.c)
 */

__int64 __fastcall MiFreeLargeInitializationCodePages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 result; // rax
  __int64 i; // rbx
  unsigned __int8 v8; // si
  int v9; // [rsp+48h] [rbp+20h]

  if ( (unsigned int)MiGetPfnSlabType(a1) == 9 )
    return MiAddExpansionNonPagedPool(v5, a3);
  result = 48 * a3;
  for ( i = 48 * a3 + a1; a3; --a3 )
  {
    i -= 48LL;
    v8 = MiLockPageInline(i);
    if ( (MiFlags & 0x8000) != 0 && (MiFlags & 0x4000) != 0 && ((*(_QWORD *)(i + 40) >> 60) & 7) == 3 )
      MiSetPfnIdentity(i, 0);
    v9 = *(_DWORD *)(i + 32);
    BYTE2(v9) = BYTE2(v9) & 0xF8 | 5;
    *(_DWORD *)(i + 32) = v9;
    *(_QWORD *)(i + 16) = 0LL;
    MiSetOriginalPtePfnFromFreeList((__int64 *)(i + 16));
    MiReleaseFreshPageLocked(i);
    result = MiUnlockPage(i, v8);
  }
  return result;
}
