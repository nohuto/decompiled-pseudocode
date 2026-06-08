/*
 * XREFs of sub_1400074A0 @ 0x1400074A0
 * Callers:
 *     sub_14002B250 @ 0x14002B250 (sub_14002B250.c)
 * Callees:
 *     <none>
 */

char sub_1400074A0()
{
  unsigned __int64 v0; // rax

  v0 = __readmsr(0x1A0u);
  return BYTE2(v0) & 1;
}
