/*
 * XREFs of KiSignalWaitDisconnectLock @ 0x1405BE05C
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x1404449DC (KiDisconnectInterruptCommon.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall KiSignalWaitDisconnectLock(struct _KEVENT *a1, char a2)
{
  if ( a2 )
    return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
  else
    return KeSetEvent(a1, 0, 0);
}
