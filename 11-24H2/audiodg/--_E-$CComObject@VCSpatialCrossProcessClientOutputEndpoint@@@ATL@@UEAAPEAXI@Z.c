/*
 * XREFs of ??_E?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140089280
 * Callers:
 *     <none>
 * Callees:
 *     ??3CProcessorTransaction@@SAXPEAX@Z @ 0x14000C894 (--3CProcessorTransaction@@SAXPEAX@Z.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x140045410 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140088F50 (--1-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 */

CSpatialCrossProcessClientOutputEndpoint *__fastcall ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vector deleting destructor'(
        CSpatialCrossProcessClientOutputEndpoint *a1,
        char a2)
{
  ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::~CComObject<CSpatialCrossProcessClientOutputEndpoint>(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(a1);
    else
      CProcessorTransaction::operator delete(a1);
  }
  return a1;
}
