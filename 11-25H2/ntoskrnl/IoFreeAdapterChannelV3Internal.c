/*
 * XREFs of IoFreeAdapterChannelV3Internal @ 0x140331EB4
 * Callers:
 *     IoFreeAdapterChannelV3 @ 0x140331E60 (IoFreeAdapterChannelV3.c)
 *     HalpContinueProcessingWaitQueue @ 0x140331FDC (HalpContinueProcessingWaitQueue.c)
 * Callees:
 *     HalpFreeDmaChannels @ 0x140331490 (HalpFreeDmaChannels.c)
 *     IoFreeMapRegistersV3 @ 0x140331F10 (IoFreeMapRegistersV3.c)
 */

__int64 __fastcall IoFreeAdapterChannelV3Internal(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 248) )
  {
    result = IoFreeMapRegistersV3(a1, *(_QWORD *)(a1 + 240));
    *(_DWORD *)(a1 + 248) = 0;
  }
  if ( !*(_BYTE *)(a1 + 441) )
  {
    if ( *(_DWORD *)(a1 + 392) )
      return HalpFreeDmaChannels(a1);
  }
  return result;
}
