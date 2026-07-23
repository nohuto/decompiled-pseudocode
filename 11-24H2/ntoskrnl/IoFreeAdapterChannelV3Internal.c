/*
 * XREFs of IoFreeAdapterChannelV3Internal @ 0x14038C534
 * Callers:
 *     IoFreeAdapterChannelV3 @ 0x14038C4E0 (IoFreeAdapterChannelV3.c)
 *     HalpContinueProcessingWaitQueue @ 0x14038C65C (HalpContinueProcessingWaitQueue.c)
 * Callees:
 *     IoFreeMapRegistersV3 @ 0x14038C590 (IoFreeMapRegistersV3.c)
 *     HalpFreeDmaChannels @ 0x14038CCD8 (HalpFreeDmaChannels.c)
 */

__int64 __fastcall IoFreeAdapterChannelV3Internal(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(unsigned int *)(a1 + 248);
  if ( (_DWORD)v1 )
  {
    result = IoFreeMapRegistersV3(a1, *(_QWORD *)(a1 + 240), v1);
    *(_DWORD *)(a1 + 248) = 0;
  }
  if ( !*(_BYTE *)(a1 + 441) )
  {
    if ( *(_DWORD *)(a1 + 392) )
      return HalpFreeDmaChannels(a1);
  }
  return result;
}
