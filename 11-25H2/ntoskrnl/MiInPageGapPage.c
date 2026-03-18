/*
 * XREFs of MiInPageGapPage @ 0x1402267E0
 * Callers:
 *     MiValidatePagefilePageHash @ 0x140226530 (MiValidatePagefilePageHash.c)
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInPageGapPage(__int64 a1)
{
  return (HIWORD(*(_DWORD *)(a1 + 32)) & 7) == 7 && *(_QWORD *)(a1 + 8) == -3LL;
}
