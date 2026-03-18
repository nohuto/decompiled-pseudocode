/*
 * XREFs of ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1400B5CDC
 * Callers:
 *     CitProcessCallout @ 0x1400B5AC4 (CitProcessCallout.c)
 *     ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1400B5E4C (-CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x14023C4B0 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x14023CCE0 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CitpProcessInfoIsValid(struct _CIT_PROCESS *a1)
{
  return (unsigned __int64)a1 - 1 <= 0xCEEE || (unsigned __int64)a1 >= 0xCEF2;
}
