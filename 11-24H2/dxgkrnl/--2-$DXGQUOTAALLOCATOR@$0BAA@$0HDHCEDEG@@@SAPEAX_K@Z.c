/*
 * XREFs of ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDHCEDEG@@@SAPEAX_K@Z @ 0x140057D10
 * Callers:
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x14001972C (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@PEAUPresentationSurfaceInfo@@@Z @ 0x1400A0568 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@PEAUPresentat.c)
 * Callees:
 *     <none>
 */

__int64 DXGQUOTAALLOCATOR<256,1936868166>::operator new()
{
  return ExAllocatePool2(257LL, 72LL, 1936868166LL);
}
