/*
 * XREFs of ??1ScopedRead@ReaderWriterLock@@QEAA@XZ @ 0x18022133C
 * Callers:
 *     _IsGameManager::LoadKGLFromGameDVRFolder_::_1_::dtor$4 @ 0x1806D1FC3 (_IsGameManager--LoadKGLFromGameDVRFolder_--_1_--dtor$4.c)
 *     _IsGameManager::CheckKGLForIsGameFromAppId_::_1_::dtor$0 @ 0x1806D9B39 (_IsGameManager--CheckKGLForIsGameFromAppId_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ReaderWriterLock::ScopedRead::~ScopedRead(PSRWLOCK *this)
{
  ReleaseSRWLockShared(*this);
}
