/*
 * XREFs of ??_G?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400892D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CProcessorTransaction@@SAXPEAX@Z @ 0x14000C894 (--3CProcessorTransaction@@SAXPEAX@Z.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x140045410 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14004E698 (--1-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 */

CSpatialCrossProcessServerInputEndpoint *__fastcall ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`scalar deleting destructor'(
        CSpatialCrossProcessServerInputEndpoint *a1,
        char a2)
{
  ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::~CComObject<CSpatialCrossProcessServerInputEndpoint>(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(a1);
    else
      CProcessorTransaction::operator delete(a1);
  }
  return a1;
}
