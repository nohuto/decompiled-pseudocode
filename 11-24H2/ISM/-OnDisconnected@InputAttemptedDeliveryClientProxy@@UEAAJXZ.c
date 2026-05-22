/*
 * XREFs of ?OnDisconnected@InputAttemptedDeliveryClientProxy@@UEAAJXZ @ 0x18015D1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180028A8C (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058BD8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@InputAttemptedTargetManager@@QEAAXAEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@Z @ 0x18015E518 (-Unregister@InputAttemptedTargetManager@@QEAAXAEBV-$ComPtr@VBamoInputAttemptedDeliveryClientProx.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputAttemptedDeliveryClientProxy::OnDisconnected(InputAttemptedDeliveryClientProxy *this)
{
  __int64 v2; // rbx
  __int64 (__fastcall ***v4)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 7);
  v4 = (__int64 (__fastcall ***)(_QWORD))this;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v4);
  InputAttemptedTargetManager::Unregister(v2 + 64, &v4);
  if ( this )
    (*(void (__fastcall **)(InputAttemptedDeliveryClientProxy *))(*(_QWORD *)this + 8LL))(this);
  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)this + 7);
  return 0LL;
}
