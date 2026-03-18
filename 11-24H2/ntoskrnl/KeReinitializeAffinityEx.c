/*
 * XREFs of KeReinitializeAffinityEx @ 0x14043F330
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *__fastcall KeReinitializeAffinityEx(unsigned __int16 *a1)
{
  void *result; // rax

  result = memset_0(a1 + 4, 0, 8LL * *a1);
  *a1 = 1;
  return result;
}
