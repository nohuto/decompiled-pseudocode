/*
 * XREFs of ??0ShellHandwritingHostServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18015AA80
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000D7E8 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E01C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

ShellHandwritingHostServer *__fastcall ShellHandwritingHostServer::ShellHandwritingHostServer(
        ShellHandwritingHostServer *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  *(_QWORD *)this = &BamoShellHandwritingHostServerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &ShellHandwritingHostServer::`vftable'{for `IShellHandwritingHostServerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((ShellHandwritingHostServer *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoShellHandwritingHostServerPrincipalImpl::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &ShellHandwritingHostServer::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &ShellHandwritingHostServer::`vftable'{for `IShellHandwritingHostServerPrincipal'};
  return this;
}
