/*
 * XREFs of KeSaveExtendedAndSupervisorState @ 0x1404F83AC
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140B56760 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140B67F50 (PopHandleNextState.c)
 * Callees:
 *     KiSaveExtendedAndSupervisorState @ 0x1403D3AFC (KiSaveExtendedAndSupervisorState.c)
 */

__int64 __fastcall KeSaveExtendedAndSupervisorState(ULONG_PTR a1, PVOID *a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  return KiSaveExtendedAndSupervisorState(a1, a2, retaddr);
}
