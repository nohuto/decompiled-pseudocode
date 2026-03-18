/*
 * XREFs of MmOnlySystemCacheViewsPresent @ 0x140314B88
 * Callers:
 *     CcCoherencyFlushAndPurgeCache @ 0x1404DD130 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiLockSectionControlArea @ 0x140316190 (MiLockSectionControlArea.c)
 */

char __fastcall MmOnlySystemCacheViewsPresent(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // bl
  unsigned __int8 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v1 = MiLockSectionControlArea(a1, 1LL, &v4);
  if ( !v1 )
    return 1;
  v2 = *(_QWORD *)(v1 + 40) == *(unsigned int *)(v1 + 88);
  MiReleaseSpinLockExclusive((_DWORD *)(v1 + 72), v4);
  return v2;
}
