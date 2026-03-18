/*
 * XREFs of ??9?$SGCRITTYPEgpresUser@PEAU_FAST_ERESOURCE@@@@QEBAH$$T@Z @ 0x14019B480
 * Callers:
 *     DrvNotifySessionStateChange @ 0x14008A3A0 (DrvNotifySessionStateChange.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x140165224 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SGCRITTYPEgpresUser<_FAST_ERESOURCE *>::operator!=(__int64 a1)
{
  return *(_QWORD *)W32GetUserSessionState(a1) != 0LL;
}
