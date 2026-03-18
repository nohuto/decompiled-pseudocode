/*
 * XREFs of KeInitializeAffinityEx @ 0x14048B8D0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *__fastcall KeInitializeAffinityEx(_DWORD *a1)
{
  a1[1] = 0;
  *a1 = 1310721;
  return memset_0(a1 + 2, 0, 0xA0uLL);
}
