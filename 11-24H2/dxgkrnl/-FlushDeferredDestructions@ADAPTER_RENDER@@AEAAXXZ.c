/*
 * XREFs of ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x14019D6E4
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140195458 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x14019FC38 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140029490 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1403B2418 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 */

void __fastcall ADAPTER_RENDER::FlushDeferredDestructions(DXGDEVICE **this)
{
  DXGDEVICE *i; // rbx
  __int64 v3; // rcx
  DXGDEVICE **v4; // rdi
  DXGDEVICE *j; // rbx
  __int64 v6; // rcx
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-48h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner((ADAPTER_RENDER *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2317;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsCoreResourceExclusiveOwner()",
      2317LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((struct _KTHREAD **)this[2] + 18) != KeGetCurrentThread() && !*((_BYTE *)this[2] + 3053) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2322;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsStopResetLockExclusiveOwner() || GetAdapter()->IsTdrPending()",
      2322LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = this[18]; i != (DXGDEVICE *)(this + 18) && i; i = *(DXGDEVICE **)i )
  {
    v3 = *((_QWORD *)i + 5);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v3 + 56), &ApcState);
    DXGDEVICE::FlushDeferredDestruction(i, 0LL, 0, 0);
    KeUnstackDetachProcess(&ApcState);
  }
  v4 = this + 20;
  for ( j = *v4; j != (DXGDEVICE *)v4 && j; j = *(DXGDEVICE **)j )
  {
    v6 = *((_QWORD *)j + 5);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v6 + 56), &ApcState);
    DXGDEVICE::FlushDeferredDestruction(j, 0LL, 0, 0);
    KeUnstackDetachProcess(&ApcState);
  }
}
