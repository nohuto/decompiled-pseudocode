/*
 * XREFs of ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x140392150
 * Callers:
 *     <none>
 * Callees:
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14003ADD4 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 */

unsigned __int64 __fastcall SysMmGetLogicalAddress(const struct SYSMM_LOGICAL_BLOCK *a1)
{
  return SmmGetLogicalAddress(a1);
}
