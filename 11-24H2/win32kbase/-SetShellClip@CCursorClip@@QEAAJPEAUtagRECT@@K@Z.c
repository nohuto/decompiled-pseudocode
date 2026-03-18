/*
 * XREFs of ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x140157CAC
 * Callers:
 *     NtSetShellCursorState @ 0x14014E690 (NtSetShellCursorState.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     SendShellClipChanged @ 0x14019ADE0 (SendShellClipChanged.c)
 *     ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x14019D6B0 (-SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z.c)
 *     ?EnsureValidCursorPosition@CCursorClip@@QEAAXXZ @ 0x14020B058 (-EnsureValidCursorPosition@CCursorClip@@QEAAXXZ.c)
 */

__int64 __fastcall CCursorClip::SetShellClip(CCursorClip *this, struct tagRECT *a2, unsigned int a3)
{
  CPushLock *v3; // rbx
  char *v7; // rcx
  int v8; // edi
  CCursorClip *v9; // rcx

  v3 = (CCursorClip *)((char *)this + 32);
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)this + 32));
  v7 = (char *)*((_QWORD *)this + 32);
  if ( v7 )
    GreDeleteFastMutex(v7);
  *((_QWORD *)this + 32) = a2;
  *((_DWORD *)this + 66) = a3;
  InputTraceLogging::Mouse::SetShellClip(a2, a3);
  v8 = *((_DWORD *)this + 66);
  CPushLock::ReleaseLock(v3);
  SendShellClipChanged(a2);
  if ( v8 )
    CCursorClip::EnsureValidCursorPosition(v9);
  return 0LL;
}
