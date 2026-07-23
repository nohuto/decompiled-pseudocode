/*
 * XREFs of KiIsRecoveryPossibleOnCurrentStack @ 0x1405C3B84
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C2EB4 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     <none>
 */

bool KiIsRecoveryPossibleOnCurrentStack()
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 NestingLevel; // al
  bool result; // al

  result = !KeGetPcr()->Prcb.CombinedNmiMceActive
        && (CurrentPrcb = KeGetCurrentPrcb(), NestingLevel = CurrentPrcb->NestingLevel, NestingLevel < 2u)
        && (NestingLevel != 1 || CurrentPrcb->DpcRoutineActive)
        && (_DWORD)KiBugCheckData != 127
        && (_DWORD)KiBugCheckData != 226
        && (_DWORD)KiBugCheckData != 251
        && (_DWORD)KiBugCheckData != 265
        && (_DWORD)KiBugCheckData != 273
        && (_DWORD)KiBugCheckData != 313
        && (_DWORD)KiBugCheckData != 395
        && (_DWORD)KiBugCheckData != 456
        && (_DWORD)KiBugCheckData != 131073;
  return result;
}
