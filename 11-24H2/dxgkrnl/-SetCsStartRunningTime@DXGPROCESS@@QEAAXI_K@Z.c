/*
 * XREFs of ?SetCsStartRunningTime@DXGPROCESS@@QEAAXI_K@Z @ 0x14004EBC8
 * Callers:
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402E60FC (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGPROCESS::SetCsStartRunningTime(DXGPROCESS *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx

  v3 = a2;
  if ( a2 >= 6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1246;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"adapterOrdinal < DripsBlockerMaxAdapters",
      1246LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v3) = a3;
}
