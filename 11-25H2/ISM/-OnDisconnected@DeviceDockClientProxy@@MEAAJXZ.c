/*
 * XREFs of ?OnDisconnected@DeviceDockClientProxy@@MEAAJXZ @ 0x1801810C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterDeviceDockClient@DeviceDockServer@@QEAAJPEAVBamoDeviceDockClientProxy@@@Z @ 0x180180384 (-UnregisterDeviceDockClient@DeviceDockServer@@QEAAJPEAVBamoDeviceDockClientProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DeviceDockClientProxy::OnDisconnected(DeviceDockServer **this)
{
  DeviceDockServer *v2; // rcx

  DeviceDockServer::UnregisterDeviceDockClient(this[6], (struct BamoDeviceDockClientProxy *)this);
  v2 = this[6];
  this[6] = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v2 + 2) + 8LL))((__int64)v2 + 16);
  return 0LL;
}
