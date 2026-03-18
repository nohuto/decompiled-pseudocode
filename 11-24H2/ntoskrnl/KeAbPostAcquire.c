/*
 * XREFs of KeAbPostAcquire @ 0x14041B6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeAbPostAcquire(__int64 a1)
{
  *(_BYTE *)(a1 + 10) = 1;
}
