/*
 * XREFs of MiInPageSkipPage @ 0x140256790
 * Callers:
 *     MiInitializeReadInProgressPfn @ 0x1402558FC (MiInitializeReadInProgressPfn.c)
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiValidateInPage @ 0x1404291F0 (MiValidateInPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInPageSkipPage(__int64 a1)
{
  return a1 == qword_140E37470 || (HIWORD(*(_DWORD *)(a1 + 32)) & 7) == 7 && *(_QWORD *)(a1 + 8) == -3LL;
}
