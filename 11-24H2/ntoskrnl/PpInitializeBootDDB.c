/*
 * XREFs of PpInitializeBootDDB @ 0x140C25E38
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1403EAA00 (ExInitializeResourceLite2.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PpBootDDBHelper @ 0x1407228FC (PpBootDDBHelper.c)
 */

__int64 __fastcall PpInitializeBootDDB(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  void *v5; // rcx

  if ( a2 )
    return 0LL;
  PpDDBHandle = 0LL;
  PpBootDDB = 0LL;
  PpDDBPatchHandle = 0LL;
  PpBootDDBPatch = 0LL;
  ExInitializeResourceLite2(&PiDDBLock, -1);
  memset_0(&PiDDBCacheTable, 0, sizeof(PiDDBCacheTable));
  PiDDBCacheTable.TableContext = 0LL;
  PiDDBCacheTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PiCompareDDBCacheEntries;
  PiDDBCacheTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))PnpAllocateGenericTableEntry;
  PiDDBCacheTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))CMFFreeFn;
  qword_140FDA080 = (__int64)&PiDDBCacheList;
  PiDDBCacheList = (__int64)&PiDDBCacheList;
  PiDDBCacheTable.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&PiDDBCacheTable;
  if ( InitIsWinPEMode )
    return 3221225473LL;
  result = PpBootDDBHelper(
             *(void **)(*(_QWORD *)(a1 + 240) + 64LL),
             *(unsigned int *)(*(_QWORD *)(a1 + 240) + 72LL),
             &PpBootDDB,
             &PpDDBHandle);
  if ( (int)result >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 240);
    v5 = *(void **)(v4 + 80);
    if ( v5 )
      PpBootDDBHelper(v5, *(unsigned int *)(v4 + 88), &PpBootDDBPatch, &PpDDBPatchHandle);
    BYTE1(NlsMbCodePageTag) = 1;
    return 0LL;
  }
  return result;
}
