/*
 * XREFs of ??_G?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140089230
 * Callers:
 *     <none>
 * Callees:
 *     ??3CProcessorTransaction@@SAXPEAX@Z @ 0x14000C894 (--3CProcessorTransaction@@SAXPEAX@Z.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x140045410 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ @ 0x1400586D8 (--1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ.c)
 */

CSpatialCrossProcessServerInputEndpoint *__fastcall ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`scalar deleting destructor'(
        CSpatialCrossProcessServerInputEndpoint *a1,
        __int64 a2,
        __int64 a3)
{
  char v3; // di

  v3 = a2;
  CSpatialCrossProcessServerInputEndpoint::~CSpatialCrossProcessServerInputEndpoint(a1, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(a1);
    else
      CProcessorTransaction::operator delete(a1);
  }
  return a1;
}
