/*
 * XREFs of HampCltDelayCloseContextDestroy @ 0x18001B788
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x18000D8B0 (HamRegisterDesktopProcessWithAppContainerToken.c)
 *     HampCltDelayCloseCallback @ 0x18001B6D0 (HampCltDelayCloseCallback.c)
 *     HampCltDelayCloseContextCreate @ 0x18001B6E0 (HampCltDelayCloseContextCreate.c)
 * Callees:
 *     HamDisconnectFromServer @ 0x180005090 (HamDisconnectFromServer.c)
 *     ?Close@HamActivityWrapper@@QEAAXXZ @ 0x1800199F8 (-Close@HamActivityWrapper@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOLEAN __fastcall HampCltDelayCloseContextDestroy(__int64 *a1)
{
  HamActivityWrapper *v2; // rcx

  v2 = (HamActivityWrapper *)a1[1];
  if ( v2 )
  {
    HamActivityWrapper::Close(v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 16LL))(a1[1]);
  }
  if ( *a1 )
    HamDisconnectFromServer(*a1);
  PsmTimerCleanup(a1 + 2);
  return HamFreeBuffer(a1);
}
