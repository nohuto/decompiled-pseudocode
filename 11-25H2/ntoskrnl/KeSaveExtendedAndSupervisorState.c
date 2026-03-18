/*
 * XREFs of KeSaveExtendedAndSupervisorState @ 0x1404F862C
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140B44710 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140B55D00 (PopHandleNextState.c)
 * Callees:
 *     KiSaveExtendedAndSupervisorState @ 0x14043B9BC (KiSaveExtendedAndSupervisorState.c)
 */

__int64 __fastcall KeSaveExtendedAndSupervisorState(ULONG_PTR a1, PVOID *a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  return KiSaveExtendedAndSupervisorState(a1, a2, retaddr);
}
