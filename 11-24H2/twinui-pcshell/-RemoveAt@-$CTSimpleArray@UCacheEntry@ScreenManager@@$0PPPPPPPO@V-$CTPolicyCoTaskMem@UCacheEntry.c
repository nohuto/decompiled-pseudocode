/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAJ_K@Z @ 0x1805240F0
 * Callers:
 *     ?ForgetView@ScreenManager@@AEAAXPEAUIApplicationView@@@Z @ 0x180523808 (-ForgetView@ScreenManager@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x1805238C0 (-GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPE.c)
 * Callees:
 *     ??1CacheEntry@ScreenManager@@QEAA@XZ @ 0x1805234E0 (--1CacheEntry@ScreenManager@@QEAA@XZ.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

__int64 __fastcall CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v5; // rsi
  __int64 v6; // rdx

  if ( a2 >= a1[1] )
    return 2147650721LL;
  v5 = 3 * a2;
  ScreenManager::CacheEntry::~CacheEntry((ScreenManager::CacheEntry *)(*a1 + 24 * a2));
  v6 = a1[1];
  if ( a2 != v6 - 1 )
    memmove_0((void *)(*a1 + 8 * v5), (const void *)(*a1 + 8 * v5 + 24), 24 * (v6 - a2) - 24);
  --a1[1];
  return 0LL;
}
