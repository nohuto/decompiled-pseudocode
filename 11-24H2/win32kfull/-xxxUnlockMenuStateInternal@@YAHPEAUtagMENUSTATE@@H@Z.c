/*
 * XREFs of ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x14009A560
 * Callers:
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxMNStartMenuState @ 0x14024F334 (xxxMNStartMenuState.c)
 *     NtUserMNDragLeave @ 0x140299B10 (NtUserMNDragLeave.c)
 *     xxxMNDragOver @ 0x1402E7CF0 (xxxMNDragOver.c)
 * Callees:
 *     xxxMNEndMenuState @ 0x14009A5F0 (xxxMNEndMenuState.c)
 */

__int64 __fastcall xxxUnlockMenuStateInternal(struct tagMENUSTATE *a1, int a2)
{
  int v4; // r9d

  if ( (*((_DWORD *)a1 + 10))-- != 1 )
    return 0LL;
  v4 = *((_DWORD *)a1 + 2);
  if ( (v4 & 4) != 0 && (**(_DWORD **)a1 & 0x8000) == 0 )
    return 0LL;
  if ( !a2 && (v4 & 0x1000000) == 0 )
    return 0LL;
  xxxMNEndMenuState(a1);
  return 1LL;
}
