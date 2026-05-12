/*
 * XREFs of RaCreateBus @ 0x140183924
 * Callers:
 *     RaidCreateAdapter @ 0x140043580 (RaidCreateAdapter.c)
 * Callees:
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

void *__fastcall RaCreateBus(_BYTE *a1)
{
  *a1 = 0;
  return memset_0(a1 + 8, 0, 0x40uLL);
}
