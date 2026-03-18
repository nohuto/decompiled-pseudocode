/*
 * XREFs of ??1?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801D0C24
 * Callers:
 *     ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801CEFA0 (-Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801CF9C4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1801D047C (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x1801D0AB0 (-OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z.c)
 *     ?OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x1801D0B90 (-OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1801D0E10 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801D0F24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x18027816C (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 *     ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x180278280 (--1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 *     ??_GBamoDataProviderRegistrarPrincipal@@MEAAPEAXI@Z @ 0x18027AA80 (--_GBamoDataProviderRegistrarPrincipal@@MEAAPEAXI@Z.c)
 *     ??_GBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18027AAC0 (--_GBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_EDataProviderRegistrarPrincipal@@UEAAPEAXI@Z @ 0x18027AB80 (--_EDataProviderRegistrarPrincipal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801D0C50 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

unsigned int __fastcall wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
        Microsoft::BamoImpl::BamoImplObject **a1)
{
  Microsoft::BamoImpl::BamoImplObject *v1; // rcx
  unsigned int result; // eax

  v1 = *a1;
  if ( v1 )
    return Microsoft::BamoImpl::BamoImplObject::Release(v1);
  return result;
}
