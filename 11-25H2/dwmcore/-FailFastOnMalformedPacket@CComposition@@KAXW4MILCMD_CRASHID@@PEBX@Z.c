/*
 * XREFs of ?FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z @ 0x1801991F8
 * Callers:
 *     ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x1800AE180 (-DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z.c)
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURSOR@@@Z @ 0x1801985F0 (-Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_P.c)
 *     ?Channel_ReleaseResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_RELEASERESOURCE@@@Z @ 0x180198E30 (-Channel_ReleaseResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILC.c)
 *     ?Channel_SetDescription@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SETDESCRIPTION@@PEBXI@Z @ 0x1801D92E0 (-Channel_SetDescription@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?Partition_SetExcludeFromDDA@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x180266258 (-Partition_SetExcludeFromDDA@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtag.c)
 *     ?Partition_SetMagnifier@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x1802662EC (-Partition_SetMagnifier@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x1801994B0 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ?IncludeLastBatchMemoryInDump@CComposition@@SAXXZ @ 0x180257368 (-IncludeLastBatchMemoryInDump@CComposition@@SAXXZ.c)
 */

void __fastcall __noreturn CComposition::FailFastOnMalformedPacket(int a1, const void *a2)
{
  CComposition::IncludeLastBatchMemoryInDump();
  MilFailFastForHR(a1, a2);
  JUMPOUT(0x180199216LL);
}
