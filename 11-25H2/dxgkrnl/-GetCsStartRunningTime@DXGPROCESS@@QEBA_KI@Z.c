/*
 * XREFs of ?GetCsStartRunningTime@DXGPROCESS@@QEBA_KI@Z @ 0x14005107C
 * Callers:
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402EC610 (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int64 __fastcall DXGPROCESS::GetCsStartRunningTime(DXGPROCESS *this, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a2;
  if ( a2 >= 6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1262;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"adapterOrdinal < DripsBlockerMaxAdapters",
      1262LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v2);
}
