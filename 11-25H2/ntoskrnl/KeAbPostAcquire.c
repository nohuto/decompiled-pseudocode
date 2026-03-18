/*
 * XREFs of KeAbPostAcquire @ 0x14041E200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeAbPostAcquire(__int64 a1)
{
  *(_BYTE *)(a1 + 10) = 1;
}
