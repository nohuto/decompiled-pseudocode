/*
 * XREFs of ??_G?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400891E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CProcessorTransaction@@SAXPEAX@Z @ 0x14000C894 (--3CProcessorTransaction@@SAXPEAX@Z.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x140045410 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ @ 0x14008912C (--1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ.c)
 */

CSpatialCrossProcessClientOutputEndpoint *__fastcall ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`scalar deleting destructor'(
        CSpatialCrossProcessClientOutputEndpoint *a1,
        __int64 a2,
        __int64 a3)
{
  char v3; // di

  v3 = a2;
  CSpatialCrossProcessClientOutputEndpoint::~CSpatialCrossProcessClientOutputEndpoint(a1, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(a1);
    else
      CProcessorTransaction::operator delete(a1);
  }
  return a1;
}
