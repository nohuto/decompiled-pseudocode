/*
 * XREFs of ExpGetExtensionHostForCrossVmObject @ 0x1406F6E20
 * Callers:
 *     NtAcquireCrossVmMutant @ 0x1407C2660 (NtAcquireCrossVmMutant.c)
 *     ExpObCloseCrossVmEvent @ 0x1407C5AE0 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x1407C5B50 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x1407C5BC0 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x1407C5C10 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x1407C5C54 (ExpPulseCrossVmEvent.c)
 *     ExpReleaseCrossVmMutant @ 0x1407C5CB0 (ExpReleaseCrossVmMutant.c)
 *     ExpResetCrossVmEvent @ 0x1407C5D0C (ExpResetCrossVmEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
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
