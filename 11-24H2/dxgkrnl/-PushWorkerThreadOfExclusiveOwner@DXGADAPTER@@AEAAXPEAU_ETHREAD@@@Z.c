/*
 * XREFs of ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1400299B4
 * Callers:
 *     ??0ADAPTEROWNERTRACKER@@QEAA@PEAVDXGADAPTER@@0@Z @ 0x1400296EC (--0ADAPTEROWNERTRACKER@@QEAA@PEAVDXGADAPTER@@0@Z.c)
 *     ?DxgkCddPushWorkerThreadOfOwner@@YAXQEAX0PEAU_ETHREAD@@@Z @ 0x1403CF7F0 (-DxgkCddPushWorkerThreadOfOwner@@YAXQEAX0PEAU_ETHREAD@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGADAPTER::PushWorkerThreadOfExclusiveOwner(DXGADAPTER *this, struct _ETHREAD *a2)
{
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3110;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsCoreResourceExclusiveOwner()",
      3110LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 24) )
  {
    WdLogSingleEntry5(0LL, 275LL, 17LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 3116;
  }
  *((_QWORD *)this + 24) = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = a2;
}
