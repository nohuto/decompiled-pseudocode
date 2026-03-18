/*
 * XREFs of ?SetLastPointTimestamp@?$CDelegatedInkCanvasGeneratedT@VCDelegatedInkCanvas@@VCSuperWetSource@@@@QEAAJ_J@Z @ 0x180283828
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801AAC2C (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 */

__int64 __fastcall CDelegatedInkCanvasGeneratedT<CDelegatedInkCanvas,CSuperWetSource>::SetLastPointTimestamp(
        struct CSuperWetSource *a1,
        __int64 a2)
{
  if ( a2 != *((_QWORD *)a1 + 20) )
  {
    *((_QWORD *)a1 + 20) = a2;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0x_EventWriteTransfer((__int64)a1, &EVTDESC_DELEGATEDINKCANVAS_TIMESTAMPUPDATE, a2);
    CSuperWetInkManager::OnUpdatedInkReceived(
      *(struct CSuperWetInkManager::VailSuperWetStroke ***)(*((_QWORD *)a1 + 3) + 656LL),
      a1);
  }
  return 0LL;
}
