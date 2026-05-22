/*
 * XREFs of ?DispatchDisconnectCallback@SipcEndpoint@@QEAAXXZ @ 0x18010CE28
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180062840 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SipcEndpoint::DispatchDisconnectCallback(SipcEndpoint *this)
{
  (*((void (__fastcall **)(SipcEndpoint *, _QWORD, _QWORD))this + 10))(this, 0LL, *((_QWORD *)this + 11));
}
