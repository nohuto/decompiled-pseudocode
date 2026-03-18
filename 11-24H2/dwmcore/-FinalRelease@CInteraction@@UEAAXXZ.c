/*
 * XREFs of ?FinalRelease@CInteraction@@UEAAXXZ @ 0x1801924F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x180192540 (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 */

void __fastcall CInteraction::FinalRelease(CInteraction *this)
{
  struct CInteraction::HANDLE_ENTRY *Entry; // rax

  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  Entry = CInteraction::GetEntry(*((_DWORD *)this + 430));
  if ( Entry )
    *((_QWORD *)Entry + 1) = 0LL;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
}
