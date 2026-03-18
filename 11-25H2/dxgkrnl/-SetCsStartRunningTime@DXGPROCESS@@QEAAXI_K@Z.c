/*
 * XREFs of ?SetCsStartRunningTime@DXGPROCESS@@QEAAXI_K@Z @ 0x14004F1E0
 * Callers:
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402EC610 (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGPROCESS::SetCsStartRunningTime(DXGPROCESS *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx

  v3 = a2;
  if ( a2 >= 6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1268;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"adapterOrdinal < DripsBlockerMaxAdapters",
      1268LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v3) = a3;
}
