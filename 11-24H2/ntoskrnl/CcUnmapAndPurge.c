/*
 * XREFs of CcUnmapAndPurge @ 0x14023F5D8
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1402CCE98 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     CcPurgeCacheSection @ 0x14023EF70 (CcPurgeCacheSection.c)
 *     CcUnmapVacbArray @ 0x14023F290 (CcUnmapVacbArray.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14024109C (CcReferenceSharedCacheMapFileObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 */

void __fastcall CcUnmapAndPurge(__int64 a1, char a2)
{
  unsigned __int64 v4; // rsi
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  v4 = CcReferenceSharedCacheMapFileObject();
  CcUnmapVacbArray(a1, 0LL, 0, a2, 1, 0);
  if ( (*(_DWORD *)(a1 + 152) & 0x10) != 0 )
    CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v4 + 40), 0LL, 0, 2u);
  _m_prefetchw((const void *)(a1 + 96));
  v5 = *(_QWORD *)(a1 + 96);
  do
  {
    if ( (v4 ^ v5) >= 0xF )
    {
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v4, 0x63536343u);
      return;
    }
    v6 = v5;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), v5 + 1, v5);
  }
  while ( v6 != v5 );
  if ( ObpTraceFlags )
    ObpPushStackInfo(v4 - 48);
}
