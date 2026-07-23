/*
 * XREFs of KeReinitializeAffinityEx @ 0x1404352A0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall KeReinitializeAffinityEx(unsigned __int16 *a1)
{
  void *result; // rax

  result = memset_0(a1 + 4, 0, 8LL * *a1);
  *a1 = 1;
  return result;
}
