/*
 * XREFs of MiInPageGapPage @ 0x1402E5A38
 * Callers:
 *     MiValidatePagefilePageHash @ 0x1402E57B0 (MiValidatePagefilePageHash.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInPageGapPage(__int64 a1)
{
  return (HIWORD(*(_DWORD *)(a1 + 32)) & 7) == 7 && *(_QWORD *)(a1 + 8) == -3LL;
}
