/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x140ABCEF8
 * Callers:
 *     WmipEnableCollectionForNewGuid @ 0x1409CB9CC (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1409CFA88 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDoDisableRequest @ 0x1409D11DC (WmipDoDisableRequest.c)
 *     WmipSendEnableRequest @ 0x140A909B4 (WmipSendEnableRequest.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 */

LONG __fastcall WmipReleaseCollectionEnabled(__int64 a1)
{
  LONG result; // eax

  result = *(_DWORD *)(a1 + 16);
  if ( (result & 8) != 0 )
  {
    result = KeSetEvent(*(PRKEVENT *)(a1 + 96), 0, 0);
    *(_DWORD *)(a1 + 16) &= ~8u;
  }
  return result;
}
