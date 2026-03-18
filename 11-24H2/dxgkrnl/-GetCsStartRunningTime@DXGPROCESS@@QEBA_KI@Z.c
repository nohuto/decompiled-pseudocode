/*
 * XREFs of ?GetCsStartRunningTime@DXGPROCESS@@QEBA_KI@Z @ 0x140050AEC
 * Callers:
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402E60FC (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int64 __fastcall DXGPROCESS::GetCsStartRunningTime(DXGPROCESS *this, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a2;
  if ( a2 >= 6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1240;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"adapterOrdinal < DripsBlockerMaxAdapters",
      1240LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v2);
}
