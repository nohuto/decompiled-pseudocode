/*
 * XREFs of ?UpdateInterfacePathRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801877C4
 * Callers:
 *     ?SetInterfacePath@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJPEBG@Z @ 0x18018705C (-SetInterfacePath@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?UpdateInterfacePathRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801876F8 (-UpdateInterfacePathRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamo.c)
 */

__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateInterfacePathRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateInterfacePathRemoteCache(this, a1);
  return 0LL;
}
