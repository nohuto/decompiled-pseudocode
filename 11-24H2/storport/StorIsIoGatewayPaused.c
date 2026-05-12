/*
 * XREFs of StorIsIoGatewayPaused @ 0x140025B10
 * Callers:
 *     StorNextIoGatewayItem @ 0x140029150 (StorNextIoGatewayItem.c)
 *     StorReset @ 0x140040430 (StorReset.c)
 *     StorRemoveIoGatewayItem @ 0x140050F10 (StorRemoveIoGatewayItem.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorIsIoGatewayPaused(__int64 a1)
{
  return a1 && *(_DWORD *)(*(_QWORD *)(a1 + 48) + 988LL) != 0;
}
