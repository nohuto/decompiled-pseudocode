/*
 * XREFs of MiInPageSkipPage @ 0x14023C4E0
 * Callers:
 *     MiInitializeReadInProgressPfn @ 0x14023B62C (MiInitializeReadInProgressPfn.c)
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MiValidateInPage @ 0x1403F3C40 (MiValidateInPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInPageSkipPage(__int64 a1)
{
  return a1 == qword_140E370F0 || (HIWORD(*(_DWORD *)(a1 + 32)) & 7) == 7 && *(_QWORD *)(a1 + 8) == -3LL;
}
