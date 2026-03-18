/*
 * XREFs of KeSaveExtendedAndSupervisorState @ 0x1404FAACC
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140B54710 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140B65E10 (PopHandleNextState.c)
 * Callees:
 *     KiSaveExtendedAndSupervisorState @ 0x1403E5F5C (KiSaveExtendedAndSupervisorState.c)
 */

__int64 __fastcall KeSaveExtendedAndSupervisorState(ULONG_PTR a1, __int64 a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  return KiSaveExtendedAndSupervisorState(a1, a2, retaddr);
}
