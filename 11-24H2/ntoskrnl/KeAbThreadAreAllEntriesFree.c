/*
 * XREFs of KeAbThreadAreAllEntriesFree @ 0x1403E29D0
 * Callers:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x1403E2874 (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     KeAbCrossThreadDelete @ 0x1405C11AC (KeAbCrossThreadDelete.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeAbThreadAreAllEntriesFree(__int64 a1)
{
  __int64 v1; // rax
  BOOL v2; // eax

  v1 = *(_QWORD *)(a1 + 1144);
  if ( v1 )
    v2 = (unsigned int)(1LL << *(_BYTE *)(v1 + 12)) - 1 == (*(unsigned __int16 *)(v1 + 8) | *(unsigned __int16 *)(v1 + 10));
  else
    v2 = 1;
  return (unsigned int)(1LL << *(_BYTE *)(*(_QWORD *)(a1 + 1136) + 12LL)) - 1 == (*(unsigned __int16 *)(*(_QWORD *)(a1 + 1136) + 8LL) | *(unsigned __int16 *)(*(_QWORD *)(a1 + 1136) + 10LL))
      && v2;
}
