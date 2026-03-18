/*
 * XREFs of MmOnlySystemCacheViewsPresent @ 0x140483028
 * Callers:
 *     CcCoherencyFlushAndPurgeCache @ 0x1404DDA40 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiLockSectionControlArea @ 0x14034CE80 (MiLockSectionControlArea.c)
 */

char __fastcall MmOnlySystemCacheViewsPresent(_QWORD *a1)
{
  __int64 v1; // rax
  bool v2; // bl
  unsigned __int8 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v1 = MiLockSectionControlArea(a1, 1, &v4);
  if ( !v1 )
    return 1;
  v2 = *(_QWORD *)(v1 + 40) == *(unsigned int *)(v1 + 88);
  MiReleaseSpinLockExclusive((_DWORD *)(v1 + 72), v4);
  return v2;
}
