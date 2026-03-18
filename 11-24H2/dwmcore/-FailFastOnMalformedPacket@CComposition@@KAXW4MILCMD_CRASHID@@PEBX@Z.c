/*
 * XREFs of ?FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z @ 0x18019EA4C
 * Callers:
 *     ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x18007C1A0 (-DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z.c)
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURSOR@@@Z @ 0x18019DF3C (-Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_P.c)
 *     ?Channel_ReleaseResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_RELEASERESOURCE@@@Z @ 0x18019E680 (-Channel_ReleaseResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILC.c)
 *     ?Channel_SetDescription@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SETDESCRIPTION@@PEBXI@Z @ 0x1801CB040 (-Channel_SetDescription@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?Partition_SetExcludeFromDDA@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x18025BED4 (-Partition_SetExcludeFromDDA@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtag.c)
 *     ?Partition_SetMagnifier@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x18025BF68 (-Partition_SetMagnifier@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18019EC30 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ?IncludeLastBatchMemoryInDump@CComposition@@SAXXZ @ 0x18024BF98 (-IncludeLastBatchMemoryInDump@CComposition@@SAXXZ.c)
 */

void __fastcall __noreturn CComposition::FailFastOnMalformedPacket(int a1, const void *a2)
{
  CComposition::IncludeLastBatchMemoryInDump();
  MilFailFastForHR(a1, a2);
  JUMPOUT(0x18019EA6ALL);
}
