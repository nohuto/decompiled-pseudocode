/*
 * XREFs of FsRtlInsertPerFileContextWithReserve @ 0x140450C00
 * Callers:
 *     FsRtlInsertPerFileContext @ 0x14057D330 (FsRtlInsertPerFileContext.c)
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x1403B432C (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x1403B44A4 (FsRtlReleaseAutoExpandPushLockExclusive.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlInsertPerFileContextWithReserve(volatile signed __int64 *a1, _QWORD *a2, int a3)
{
  char v3; // bp
  _QWORD *v7; // rbx
  _QWORD *Pool2; // rax
  _QWORD *v9; // rax
  signed __int64 v10; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rcx

  v3 = 0;
  if ( !a1 )
    return 3221225488LL;
  v7 = (_QWORD *)*a1;
  if ( *a1 )
    goto LABEL_7;
  Pool2 = (_QWORD *)ExAllocatePool2(0x42uLL, 0x28uLL, 0x63665346u);
  v7 = Pool2;
  if ( Pool2 )
  {
    Pool2[1] = 0LL;
    *Pool2 = 0LL;
    v9 = Pool2 + 2;
    v9[1] = v9;
    *v9 = v9;
    v7[4] = 0LL;
    if ( !a3 )
    {
      if ( (_QWORD *)v9[1] != v9 )
        goto FatalListEntryError_8;
      *a2 = v9;
      v3 = 1;
      a2[1] = v9;
      v9[1] = a2;
      *v9 = a2;
    }
    v10 = _InterlockedCompareExchange64(a1, (signed __int64)v7, 0LL);
    if ( v10 )
    {
      v3 = 0;
      ExFreePoolWithTag(v7, 0x63665346u);
      v7 = (_QWORD *)v10;
    }
LABEL_7:
    if ( a3 )
    {
      v7[4] = a2;
      return 0LL;
    }
    if ( v3 )
      return 0LL;
    FsRtlAcquireAutoExpandPushLockExclusive((__int64)v7);
    v12 = v7 + 2;
    v13 = v7[2];
    if ( *(_QWORD **)(v13 + 8) == v7 + 2 )
    {
      *a2 = v13;
      a2[1] = v12;
      *(_QWORD *)(v13 + 8) = a2;
      *v12 = a2;
      FsRtlReleaseAutoExpandPushLockExclusive(v7);
      return 0LL;
    }
FatalListEntryError_8:
    __fastfail(3u);
  }
  return 3221225626LL;
}
