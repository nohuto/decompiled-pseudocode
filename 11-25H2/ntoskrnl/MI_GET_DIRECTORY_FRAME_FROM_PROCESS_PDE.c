/*
 * XREFs of MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE @ 0x1406780F8
 * Callers:
 *     MiInitializeSystemPageTable @ 0x1402D04C8 (MiInitializeSystemPageTable.c)
 *     MiReplicatePteChangeToProcess @ 0x140681BB0 (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 */

__int64 __fastcall MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE(__int64 a1, unsigned __int64 a2)
{
  if ( a1 )
    return *(_QWORD *)(a1 + 40) >> 12;
  else
    return MiGetContainingPageTable(a2);
}
