/*
 * XREFs of MmTrimSection @ 0x1404724C4
 * Callers:
 *     CcPurgeCacheSection @ 0x1402070C0 (CcPurgeCacheSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1404D6B50 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     MiFlushRelease @ 0x1402594B0 (MiFlushRelease.c)
 *     MiComputeFlushRange @ 0x140302AC8 (MiComputeFlushRange.c)
 *     MiTrimSection @ 0x1403612B0 (MiTrimSection.c)
 */

__int64 __fastcall MmTrimSection(__int64 *a1, __int64 *a2, int a3, char a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 result; // rax
  unsigned int v7; // ebx
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]
  __int128 v10; // [rsp+50h] [rbp-18h]
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v4 = a4 & 1 | 0x20;
  if ( (a4 & 2) == 0 )
    v4 = a4 & 1;
  if ( a2 )
  {
    v5 = *a2;
    a2 = &v11;
    v11 = v5;
  }
  result = MiComputeFlushRange(a1, (int)a2, a3, v4 >= 0x20, (__int64)&v8);
  if ( (_DWORD)result )
  {
    v7 = MiTrimSection(&v8, 0LL, 0, v4);
    MiFlushRelease(v8, *((_QWORD **)&v9 + 1), (_QWORD *)v10);
    return v7;
  }
  return result;
}
