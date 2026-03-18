/*
 * XREFs of WmipWaitForCollectionEnabled @ 0x1407A60E0
 * Callers:
 *     WmipSendEnableRequest @ 0x140A909B4 (WmipSendEnableRequest.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 */

NTSTATUS __fastcall WmipWaitForCollectionEnabled(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 16) & 8) == 0 )
  {
    KeInitializeEvent(*(PRKEVENT *)(a1 + 96), NotificationEvent, 0);
    *(_DWORD *)(a1 + 16) |= 8u;
  }
  KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  KeWaitForSingleObject(*(PVOID *)(a1 + 96), Executive, 0, 0, 0LL);
  return KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
}
