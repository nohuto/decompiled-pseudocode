/*
 * XREFs of ?UpdateTestCommandsRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012EF48
 * Callers:
 *     ?SetTestCommands@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoTestCommandsPrincipal@@@Z @ 0x18012EA28 (-SetTestCommands@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoTestCommandsPrincipal@@@Z.c)
 * Callees:
 *     ?UpdateTestCommandsRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800464AC (-UpdateTestCommandsRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Mic.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateTestCommandsRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateTestCommandsRemoteCache(this, a1);
  return 0LL;
}
