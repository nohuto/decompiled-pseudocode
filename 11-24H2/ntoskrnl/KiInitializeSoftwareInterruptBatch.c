/*
 * XREFs of KiInitializeSoftwareInterruptBatch @ 0x1405BA990
 * Callers:
 *     KiInitPrcb @ 0x140B58254 (KiInitPrcb.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall KiInitializeSoftwareInterruptBatch(_DWORD *a1)
{
  memset_0(a1, 0, 0x210uLL);
  a1[1] = -1;
  *(_BYTE *)a1 = 2;
  a1[3] = 0;
  a1[2] = 2097153;
  return memset_0(a1 + 4, 0, 0x100uLL);
}
