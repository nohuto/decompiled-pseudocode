/*
 * XREFs of ?DestroyCoreState@DXGPROTECTEDSESSION@@QEAAJXZ @ 0x1401EFD84
 * Callers:
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1401F0660 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiDestroyProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAX@Z @ 0x1401A4984 (-DdiDestroyProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::DestroyCoreState(DXGPROTECTEDSESSION *this)
{
  __int64 v2; // r8
  void *v3; // rdx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1073;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsCoreResourceExclusiveOwner()",
      1073LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v3 = (void *)*((_QWORD *)this + 19);
  if ( v3 )
  {
    ADAPTER_DISPLAY::DdiDestroyProtectedSession(*((ADAPTER_DISPLAY **)this + 2), v3, v2);
    *((_QWORD *)this + 19) = 0LL;
  }
  return 0LL;
}
