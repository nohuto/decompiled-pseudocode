/*
 * XREFs of ??_G?$CComObject@VCAudioProcessor@@@ATL@@UEAAPEAXI@Z @ 0x1400457A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CProcessorTransaction@@SAXPEAX@Z @ 0x14000C864 (--3CProcessorTransaction@@SAXPEAX@Z.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x140045710 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1?$CComObject@VCAudioProcessor@@@ATL@@UEAA@XZ @ 0x1400457EC (--1-$CComObject@VCAudioProcessor@@@ATL@@UEAA@XZ.c)
 */

CAudioProcessor *__fastcall ATL::CComObject<CAudioProcessor>::`scalar deleting destructor'(
        CAudioProcessor *a1,
        char a2)
{
  ATL::CComObject<CAudioProcessor>::~CComObject<CAudioProcessor>(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(a1);
    else
      CProcessorTransaction::operator delete(a1);
  }
  return a1;
}
