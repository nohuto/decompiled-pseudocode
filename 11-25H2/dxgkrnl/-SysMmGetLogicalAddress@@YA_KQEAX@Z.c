/*
 * XREFs of ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14039A1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14003A634 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 */

unsigned __int64 __fastcall SysMmGetLogicalAddress(const struct SYSMM_LOGICAL_BLOCK *a1)
{
  return SmmGetLogicalAddress(a1);
}
