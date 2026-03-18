/*
 * XREFs of ExpGetExtensionHostForCrossVmObject @ 0x1406F91E0
 * Callers:
 *     NtAcquireCrossVmMutant @ 0x1407C3A60 (NtAcquireCrossVmMutant.c)
 *     ExpObCloseCrossVmEvent @ 0x1407C5680 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x1407C56F0 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x1407C5760 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x1407C57B0 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x1407C57F4 (ExpPulseCrossVmEvent.c)
 *     ExpReleaseCrossVmMutant @ 0x1407C5850 (ExpReleaseCrossVmMutant.c)
 *     ExpResetCrossVmEvent @ 0x1407C58AC (ExpResetCrossVmEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
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
