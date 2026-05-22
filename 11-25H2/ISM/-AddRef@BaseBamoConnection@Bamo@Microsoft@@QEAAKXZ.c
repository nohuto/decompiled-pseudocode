/*
 * XREFs of ?AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18000B4B8
 * Callers:
 *     ?RuntimeClassInitialize@ForegroundManager@@QEAAJXZ @ 0x18000B13C (-RuntimeClassInitialize@ForegroundManager@@QEAAJXZ.c)
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x18000D71C (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x18008D580 (-GetForCurrentThread@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClie.c)
 *     ??4?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConnection@@@Z @ 0x180145050 (--4-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConne.c)
 *     ??0MPCConstantManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z @ 0x18016A608 (--0MPCConstantManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned int __fastcall Microsoft::Bamo::BaseBamoConnection::AddRef(Microsoft::Bamo::BaseBamoConnection *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v1; // rax

  v1 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 56LL))(this);
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(v1);
}
