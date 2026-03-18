/*
 * XREFs of MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE @ 0x14068394C
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140395744 (MiInitializeSystemPageTable.c)
 *     MiReplicatePteChangeToProcess @ 0x14068D440 (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 */

__int64 __fastcall MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE(__int64 a1, unsigned __int64 a2)
{
  if ( a1 )
    return *(_QWORD *)(a1 + 40) >> 12;
  else
    return MiGetContainingPageTable(a2);
}
