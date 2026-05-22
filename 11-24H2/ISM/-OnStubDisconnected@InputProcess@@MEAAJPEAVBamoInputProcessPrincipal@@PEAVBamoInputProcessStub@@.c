/*
 * XREFs of ?OnStubDisconnected@InputProcess@@MEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoInputProcessStub@@@Z @ 0x1800CC7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disconnected@InputProcess@InputTraceLogging@@SAXXZ @ 0x1800CC3D0 (-Disconnected@InputProcess@InputTraceLogging@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputProcess::OnStubDisconnected(
        InputProcess *this,
        struct BamoInputProcessPrincipal *a2,
        struct BamoInputProcessStub *a3)
{
  InputTraceLogging::InputProcess::Disconnected();
  (*(void (__fastcall **)(InputProcess *, struct BamoInputProcessPrincipal *, struct BamoInputProcessStub *))(*(_QWORD *)this + 48LL))(
    this,
    a2,
    a3);
  return 0LL;
}
