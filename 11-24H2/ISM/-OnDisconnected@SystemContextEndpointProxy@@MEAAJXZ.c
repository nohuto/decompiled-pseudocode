/*
 * XREFs of ?OnDisconnected@SystemContextEndpointProxy@@MEAAJXZ @ 0x180140C60
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterSystemContextEndpoint@SystemContextManager@@QEAAJPEAVBamoSystemContextEndpointProxy@@@Z @ 0x1801408B0 (-UnregisterSystemContextEndpoint@SystemContextManager@@QEAAJPEAVBamoSystemContextEndpointProxy@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemContextEndpointProxy::OnDisconnected(SystemContextManager **this)
{
  SystemContextManager *v2; // rcx

  SystemContextManager::UnregisterSystemContextEndpoint(this[8], (struct BamoSystemContextEndpointProxy *)this);
  v2 = this[8];
  this[8] = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v2 + 2) + 8LL))((__int64)v2 + 16);
  return 0LL;
}
