/*
 * XREFs of sub_140010270 @ 0x140010270
 * Callers:
 *     sub_1400064C4 @ 0x1400064C4 (sub_1400064C4.c)
 *     sub_140006530 @ 0x140006530 (sub_140006530.c)
 *     sub_1400065A4 @ 0x1400065A4 (sub_1400065A4.c)
 *     sub_14000664C @ 0x14000664C (sub_14000664C.c)
 *     sub_1400066B4 @ 0x1400066B4 (sub_1400066B4.c)
 *     sub_1400292EC @ 0x1400292EC (sub_1400292EC.c)
 *     sub_140029368 @ 0x140029368 (sub_140029368.c)
 *     sub_140029DD0 @ 0x140029DD0 (sub_140029DD0.c)
 *     sub_14002A254 @ 0x14002A254 (sub_14002A254.c)
 *     sub_14002A5D0 @ 0x14002A5D0 (sub_14002A5D0.c)
 *     sub_14002A690 @ 0x14002A690 (sub_14002A690.c)
 *     sub_14002A970 @ 0x14002A970 (sub_14002A970.c)
 *     sub_14002AFD8 @ 0x14002AFD8 (sub_14002AFD8.c)
 *     sub_14002B054 @ 0x14002B054 (sub_14002B054.c)
 *     sub_14002B0D0 @ 0x14002B0D0 (sub_14002B0D0.c)
 *     sub_14002B198 @ 0x14002B198 (sub_14002B198.c)
 *     sub_14002B380 @ 0x14002B380 (sub_14002B380.c)
 *     sub_14002B600 @ 0x14002B600 (sub_14002B600.c)
 *     sub_14002B688 @ 0x14002B688 (sub_14002B688.c)
 *     sub_140048008 @ 0x140048008 (sub_140048008.c)
 *     sub_14004903C @ 0x14004903C (sub_14004903C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140010270(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
