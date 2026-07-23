/*
 * XREFs of KeInitializeAffinityEx @ 0x1404866A0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall KeInitializeAffinityEx(_DWORD *a1)
{
  a1[1] = 0;
  *a1 = 1310721;
  return memset_0(a1 + 2, 0, 0xA0uLL);
}
