/*
 * XREFs of ?DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ @ 0x1800F2460
 * Callers:
 *     ??1KeyboardOverriderDispatcher@@UEAA@XZ @ 0x1800F2154 (--1KeyboardOverriderDispatcher@@UEAA@XZ.c)
 *     ?OnDisconnected@KeyboardOverriderDispatcher@@UEAAJPEAUIMessageProxy@@@Z @ 0x1800F2820 (-OnDisconnected@KeyboardOverriderDispatcher@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?SetOverriderState@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800F3460 (-SetOverriderState@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     ?DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ @ 0x1800F24B4 (-DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ.c)
 */

__int64 __fastcall KeyboardOverriderDispatcher::DestroyOverriderProxy(KeyboardOverriderDispatcher *this)
{
  NtMITSetKeyboardOverriderState(0LL);
  if ( *((_QWORD *)this + 7) )
    KeyboardOverriderDispatcher::DrainMessageQueue(this);
  *((_BYTE *)this + 704) = 0;
  return NarratorProxy::DestroyNarratorProxy(
           (KeyboardOverriderDispatcher *)((char *)this + 440),
           (struct IMessageProxyListener *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
}
