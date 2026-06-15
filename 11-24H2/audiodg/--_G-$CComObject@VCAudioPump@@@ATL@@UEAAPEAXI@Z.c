/*
 * XREFs of ??_G?$CComObject@VCAudioPump@@@ATL@@UEAAPEAXI@Z @ 0x140042EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CProcessorTransaction@@SAXPEAX@Z @ 0x14000C894 (--3CProcessorTransaction@@SAXPEAX@Z.c)
 *     ??1?$CComObject@VCAudioPump@@@ATL@@UEAA@XZ @ 0x140042EEC (--1-$CComObject@VCAudioPump@@@ATL@@UEAA@XZ.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x140045410 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 */

CAudioPump *__fastcall ATL::CComObject<CAudioPump>::`scalar deleting destructor'(CAudioPump *a1, char a2)
{
  ATL::CComObject<CAudioPump>::~CComObject<CAudioPump>(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(a1);
    else
      CProcessorTransaction::operator delete(a1);
  }
  return a1;
}
