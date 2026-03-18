/*
 * XREFs of ?AllocateHandleTableEntry@CInteraction@@CAJPEAV1@PEAI@Z @ 0x1801B014C
 * Callers:
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x1801AFE54 (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x1801B06F8 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1801B0860 (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 */

__int64 __fastcall CInteraction::AllocateHandleTableEntry(struct CInteraction *a1, unsigned int *a2)
{
  unsigned int v4; // edx
  HANDLE_TABLE *v5; // rcx
  int NewEntry; // edi

  *a2 = 0;
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  NewEntry = HANDLE_TABLE::GetNewEntry(v5, v4, a2);
  if ( NewEntry >= 0 )
    *((_QWORD *)CInteraction::GetEntry(*a2) + 1) = a1;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  return (unsigned int)NewEntry;
}
