/*
 * XREFs of FsRtlPrivateRemoveLock @ 0x1404D8BCC
 * Callers:
 *     FsRtlPrivateLock @ 0x140248460 (FsRtlPrivateLock.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14024ACAC (FsRtlPrivateCheckWaitingLocks.c)
 * Callees:
 *     FsRtlFastUnlockSingleExclusive @ 0x1402498C0 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x14024A1C0 (FsRtlFastUnlockSingleShared.c)
 */

__int64 __fastcall FsRtlPrivateRemoveLock(_QWORD *a1, __int64 a2, char a3)
{
  int v3; // eax
  _SLIST_ENTRY **v4; // r9
  _RTL_SPLAY_LINKS *v5; // r10
  bool v7; // zf
  _RTL_SPLAY_LINKS *v8; // rdx

  v3 = *(_DWORD *)(a2 + 20);
  v4 = (_SLIST_ENTRY **)(a2 + 8);
  v5 = *(_RTL_SPLAY_LINKS **)(a2 + 32);
  v7 = *(_BYTE *)(a2 + 16) == 0;
  v8 = *(_RTL_SPLAY_LINKS **)(a2 + 24);
  if ( v7 )
    return FsRtlFastUnlockSingleShared(a1, (__int64)v8, (unsigned __int64 *)a2, v4, (__int64)v5, v3, 0LL, 1, a3);
  else
    return FsRtlFastUnlockSingleExclusive(a1, v8, (_RTL_SPLAY_LINKS **)a2, (_RTL_SPLAY_LINKS **)v4, v5, v3, 0LL, 1, a3);
}
