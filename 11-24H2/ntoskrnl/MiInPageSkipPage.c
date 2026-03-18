/*
 * XREFs of MiInPageSkipPage @ 0x1402F0980
 * Callers:
 *     MiInitializeReadInProgressPfn @ 0x1402EF9B8 (MiInitializeReadInProgressPfn.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiValidateInPage @ 0x140436770 (MiValidateInPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInPageSkipPage(__int64 a1)
{
  return a1 == qword_140E37330 || (HIWORD(*(_DWORD *)(a1 + 32)) & 7) == 7 && *(_QWORD *)(a1 + 8) == -3LL;
}
