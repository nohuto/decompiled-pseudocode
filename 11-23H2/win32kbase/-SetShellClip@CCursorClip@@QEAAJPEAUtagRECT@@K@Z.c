/*
 * XREFs of ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C01DC274
 * Callers:
 *     NtSetShellCursorState @ 0x1C0142BA0 (NtSetShellCursorState.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C009C3B0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x1C01DC328 (-SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z.c)
 *     SendShellClipChanged @ 0x1C01E8AC0 (SendShellClipChanged.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C020684C (ApiSetEditionInternalSetCursorPos.c)
 */

__int64 __fastcall CCursorClip::SetShellClip(CCursorClip *this, struct tagRECT *a2, unsigned int a3)
{
  PVOID Reserved; // rdi
  CPushLock *v6; // rbx
  char *v7; // rdx
  int v8; // edi

  Reserved = WPP_MAIN_CB.Reserved;
  v6 = (CPushLock *)((char *)WPP_MAIN_CB.Reserved + 32);
  CPushLock::AcquireLockExclusive((CPushLock *)((char *)WPP_MAIN_CB.Reserved + 32));
  v7 = (char *)*((_QWORD *)Reserved + 33);
  if ( v7 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
  *((_QWORD *)Reserved + 33) = a2;
  *((_DWORD *)Reserved + 68) = a3;
  InputTraceLogging::Mouse::SetShellClip(a2, a3);
  v8 = *((_DWORD *)Reserved + 68);
  CPushLock::ReleaseLock(v6);
  SendShellClipChanged(a2);
  if ( v8 )
    ApiSetEditionInternalSetCursorPos(*((unsigned int *)gpsi + 1240), *((unsigned int *)gpsi + 1241), 2LL);
  return 0LL;
}
