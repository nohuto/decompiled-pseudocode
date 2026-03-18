/*
 * XREFs of MiGetEngineType @ 0x1404F8630
 * Callers:
 *     MiInitializeZeroingDomains @ 0x1407FF580 (MiInitializeZeroingDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetEngineType(__int64 a1)
{
  return (unsigned int)(*(_BYTE *)(a1 + 35336) != 1) + 1;
}
