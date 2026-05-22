/*
 * XREFs of ?OnDisconnected@InputObserverClientProxy@@UEAAJXZ @ 0x180135F60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180079864 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnregisterObserverClientOfType@CInputObserverManager@@UEAAJPEAVBamoInputObserverManagerStub@@W4InputObserverType@InputObservation@@PEAVBamoInputObserverClientProxy@@@Z @ 0x180136D80 (-UnregisterObserverClientOfType@CInputObserverManager@@UEAAJPEAVBamoInputObserverManagerStub@@W4.c)
 */

__int64 __fastcall InputObserverClientProxy::OnDisconnected(InputObserverClientProxy *this)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)((char *)this + 48);
  CInputObserverManager::UnregisterObserverClientOfType(*((_QWORD *)this + 6), 0LL, *((unsigned int *)this + 14), this);
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(v1);
  return 0LL;
}
