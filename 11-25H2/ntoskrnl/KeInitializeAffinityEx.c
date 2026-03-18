/*
 * XREFs of KeInitializeAffinityEx @ 0x14048BE70
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void *__fastcall KeInitializeAffinityEx(_DWORD *a1)
{
  a1[1] = 0;
  *a1 = 1310721;
  return memset_0(a1 + 2, 0, 0xA0uLL);
}
