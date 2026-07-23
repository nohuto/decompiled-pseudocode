/*
 * XREFs of MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE @ 0x140684AA8
 * Callers:
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 *     MiReplicatePteChangeToProcess @ 0x14068E570 (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 */

__int64 __fastcall MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE(__int64 a1, unsigned __int64 a2)
{
  if ( a1 )
    return *(_QWORD *)(a1 + 40) >> 12;
  else
    return MiGetContainingPageTable(a2);
}
