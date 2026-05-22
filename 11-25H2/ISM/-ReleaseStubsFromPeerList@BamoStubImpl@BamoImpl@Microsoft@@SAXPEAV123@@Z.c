/*
 * XREFs of ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z @ 0x180046B4C
 * Callers:
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046838 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJXZ @ 0x1800B8D20 (-Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(
        struct Microsoft::BamoImpl::BamoStubImpl *a1)
{
  __int64 v1; // rax
  struct Microsoft::BamoImpl::BamoStubImpl *v2; // rbx

  if ( a1 )
  {
    do
    {
      v1 = *(_QWORD *)a1;
      v2 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)a1 + 6);
      *((_QWORD *)a1 + 6) = 0LL;
      (*(void (**)(void))(v1 + 8))();
      a1 = v2;
    }
    while ( v2 );
  }
}
