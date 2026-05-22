/*
 * XREFs of ?GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_N@Z @ 0x180093158
 * Callers:
 *     ?GetBamoDataSourceStub@AnimationDataProvider@@UEBA?AV?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@V?$ComPtr@VDataSourcePrincipal@@@34@@Z @ 0x180058220 (-GetBamoDataSourceStub@AnimationDataProvider@@UEBA-AV-$ComPtr@VBamoDataSourceStub@@@WRL@Microsof.c)
 *     ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x180102460 (-CreateDataSource@AnimationDataProvider@@UEBA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 * Callees:
 *     ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x180054FD0 (-FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z.c)
 *     ?GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18006D6A8 (-GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 */

unsigned __int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::GetStub(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::Bamo::BaseBamoPeer *a2)
{
  int PeerId; // eax
  unsigned __int64 result; // rax

  PeerId = Microsoft::Bamo::BaseBamoPeer::GetPeerId(a2);
  result = (unsigned __int64)Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(this, PeerId);
  if ( result )
    result &= -(__int64)(*(_BYTE *)(result + 56) != 0);
  return result;
}
