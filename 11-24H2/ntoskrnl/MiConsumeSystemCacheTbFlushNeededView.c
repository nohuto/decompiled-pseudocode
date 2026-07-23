/*
 * XREFs of MiConsumeSystemCacheTbFlushNeededView @ 0x1404185E8
 * Callers:
 *     MiObtainSystemCacheView @ 0x140209EE0 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiRebalanceSystemCacheFreedViews @ 0x140355700 (MiRebalanceSystemCacheFreedViews.c)
 *     MiInsertReadiedSystemCacheViews @ 0x140355814 (MiInsertReadiedSystemCacheViews.c)
 *     MiTbFlushListPromoteThreshold @ 0x140418800 (MiTbFlushListPromoteThreshold.c)
 */

__int64 __fastcall MiConsumeSystemCacheTbFlushNeededView(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // r8
  _QWORD *v4; // rax
  unsigned int v5; // r9d
  __int64 *ProcessorFlushList; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // r12
  unsigned int v11; // r14d
  _QWORD *v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  signed __int32 v17[8]; // [rsp+0h] [rbp-50h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  __int128 v19; // [rsp+40h] [rbp-10h]

  v2 = a1 + 2160;
  v3 = 0LL;
  v4 = (_QWORD *)(a1 + 2176);
  v18 = 0LL;
  v5 = 0;
  v19 = 0LL;
  while ( 1 )
  {
    v3 += *v4;
    if ( v3 >= a2 )
      break;
    ++v5;
    v4 += 4;
    if ( v5 >= 4 )
      return 0LL;
  }
  *(_QWORD *)&v19 = 0LL;
  *((_QWORD *)&v18 + 1) = &v18;
  *(_QWORD *)&v18 = &v18;
  ProcessorFlushList = MiGetProcessorFlushList();
  MiInitializeTbFlushList((__int64)ProcessorFlushList, a1 + 18816, *((_DWORD *)ProcessorFlushList + 3), 8, 1);
  v10 = MiTbFlushListPromoteThreshold(v9);
  v11 = 0;
  while ( 1 )
  {
    v12 = *(_QWORD **)v2;
    if ( *(_QWORD *)v2 == v2 )
      goto LABEL_14;
    if ( v12[1] != v2 )
      goto LABEL_10;
    v13 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 )
      goto LABEL_10;
    *(_QWORD *)v2 = v13;
    *(_QWORD *)(v13 + 8) = v2;
    --*(_QWORD *)(v2 + 16);
    v12[4] = v12[4] & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
    MiInsertTbFlushEntry((__int64)ProcessorFlushList, v12[2] & 0xFFFFFFFFFFFFF000uLL, 64LL, 0);
    v14 = (_QWORD *)*((_QWORD *)&v18 + 1);
    if ( **((__int128 ***)&v18 + 1) != &v18 )
      goto LABEL_10;
    v12[1] = *((_QWORD *)&v18 + 1);
    *v12 = &v18;
    *v14 = v12;
    *(_QWORD *)&v19 = v19 + 1;
    *((_QWORD *)&v18 + 1) = v12;
    if ( *((_DWORD *)ProcessorFlushList + 7) == *((_DWORD *)ProcessorFlushList + 3) || ProcessorFlushList[4] + 1 >= v10 )
    {
      v11 = 3;
LABEL_14:
      ++v11;
      v2 += 32LL;
      if ( v11 >= 4 )
        break;
    }
  }
  MiFlushTbList((__int64)ProcessorFlushList);
  v15 = v18;
  v16 = *(_QWORD *)v18;
  if ( *(__int128 **)(v18 + 8) != &v18 || *(_QWORD *)(v16 + 8) != (_QWORD)v18 )
LABEL_10:
    __fastfail(3u);
  *(_QWORD *)&v18 = *(_QWORD *)v18;
  *(_QWORD *)(v16 + 8) = &v18;
  *(_QWORD *)&v19 = v19 - 1;
  MiInsertReadiedSystemCacheViews(a1, &v18);
  MiReleaseProcessorFlushList();
  _InterlockedOr(v17, 0);
  MiRebalanceSystemCacheFreedViews(a1, KiTbFlushTimeStamp, 0);
  return v15;
}
