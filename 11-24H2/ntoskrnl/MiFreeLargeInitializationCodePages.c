/*
 * XREFs of MiFreeLargeInitializationCodePages @ 0x14066BFA0
 * Callers:
 *     MiFreeInitializationCode @ 0x140AE80CC (MiFreeInitializationCode.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReleaseFreshPageLocked @ 0x14043C168 (MiReleaseFreshPageLocked.c)
 *     MiAddExpansionNonPagedPool @ 0x14067DBDC (MiAddExpansionNonPagedPool.c)
 */

__int64 __fastcall MiFreeLargeInitializationCodePages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __int64 i; // rbx
  unsigned __int8 v10; // si
  int v11; // [rsp+48h] [rbp+20h]

  if ( (unsigned int)MiGetPfnSlabType(a1) == 9 )
    return MiAddExpansionNonPagedPool(v6, a3);
  result = 48 * a3;
  for ( i = 48 * a3 + a1; a3; --a3 )
  {
    i -= 48LL;
    v10 = MiLockPageInline(i, v5, v6, v7);
    if ( (MiFlags & 0x8000) != 0 && (MiFlags & 0x4000) != 0 && ((*(_QWORD *)(i + 40) >> 60) & 7) == 3 )
      MiSetPfnIdentity(i, 0);
    v11 = *(_DWORD *)(i + 32);
    BYTE2(v11) = BYTE2(v11) & 0xF8 | 5;
    *(_DWORD *)(i + 32) = v11;
    *(_QWORD *)(i + 16) = 0LL;
    MiSetOriginalPtePfnFromFreeList((__int64 *)(i + 16));
    MiReleaseFreshPageLocked(i);
    result = MiUnlockPage(i, v10);
  }
  return result;
}
