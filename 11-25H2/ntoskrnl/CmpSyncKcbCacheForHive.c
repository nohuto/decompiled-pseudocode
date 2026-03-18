/*
 * XREFs of CmpSyncKcbCacheForHive @ 0x1407CC6A0
 * Callers:
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 * Callees:
 *     CmpIsKeyDeleted @ 0x140871220 (CmpIsKeyDeleted.c)
 *     CmpRebuildKcbCache @ 0x140885EF0 (CmpRebuildKcbCache.c)
 */

__int64 __fastcall CmpSyncKcbCacheForHive(ULONG_PTR a1, __int64 a2)
{
  if ( (!a2 || *(_QWORD *)(a1 + 32) == a2)
    && !(unsigned __int8)CmpIsKeyDeleted(a1, 0LL)
    && *(_QWORD *)(a1 + 32)
    && (*(_DWORD *)(a1 + 184) & 0x100000) == 0 )
  {
    CmpRebuildKcbCache(a1);
  }
  return 0LL;
}
