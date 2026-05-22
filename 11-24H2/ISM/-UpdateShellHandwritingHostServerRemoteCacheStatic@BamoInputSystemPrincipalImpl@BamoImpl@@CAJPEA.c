/*
 * XREFs of ?UpdateShellHandwritingHostServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012EEF0
 * Callers:
 *     ?SetShellHandwritingHostServer@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoShellHandwritingHostServerPrincipal@@@Z @ 0x18012E918 (-SetShellHandwritingHostServer@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoShellHandwrit.c)
 * Callees:
 *     ?UpdateShellHandwritingHostServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18004606C (-UpdateShellHandwritingHostServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBam.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateShellHandwritingHostServerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateShellHandwritingHostServerRemoteCache(this, a1);
  return 0LL;
}
