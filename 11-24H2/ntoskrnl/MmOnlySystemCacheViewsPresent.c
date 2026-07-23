/*
 * XREFs of MmOnlySystemCacheViewsPresent @ 0x14047EE60
 * Callers:
 *     CcCoherencyFlushAndPurgeCache @ 0x1404D6B50 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiLockSectionControlArea @ 0x1402BED40 (MiLockSectionControlArea.c)
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
