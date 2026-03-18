/*
 * XREFs of ExpGetExtensionHostForCrossVmObject @ 0x1406ED5A0
 * Callers:
 *     NtAcquireCrossVmMutant @ 0x1407B5550 (NtAcquireCrossVmMutant.c)
 *     ExpObCloseCrossVmEvent @ 0x1407B5EB0 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x1407B5F20 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x1407B5F90 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x1407B5FE0 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x1407B6024 (ExpPulseCrossVmEvent.c)
 *     ExpReleaseCrossVmMutant @ 0x1407B6080 (ExpReleaseCrossVmMutant.c)
 *     ExpResetCrossVmEvent @ 0x1407B60DC (ExpResetCrossVmEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 */

unsigned __int64 __fastcall ExpGetExtensionHostForCrossVmObject(__int64 a1, __int64 *a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rcx

  result = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot);
  if ( result )
  {
    v4 = ExpCrossVmIntExtensionHostRoot;
LABEL_3:
    *a2 = v4;
    return result;
  }
  result = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest);
  if ( result )
  {
    v4 = ExpCrossVmIntExtensionHostGuest;
    goto LABEL_3;
  }
  return result;
}
