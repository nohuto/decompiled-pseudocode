/*
 * XREFs of W32GetThreadWin32Thread @ 0x140105FF4
 * Callers:
 *     xxxQueryInformationThread @ 0x14003E6F4 (xxxQueryInformationThread.c)
 *     FreeW32Thread @ 0x140105DBC (FreeW32Thread.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x140105EAC (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     xxxSetInformationThread @ 0x140106AA0 (xxxSetInformationThread.c)
 *     ?InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1402561B4 (-InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall W32GetThreadWin32Thread(__int64 a1)
{
  __int64 v1; // rbx
  __int64 ThreadWin32Thread; // rax

  v1 = 0LL;
  ThreadWin32Thread = PsGetThreadWin32Thread(a1);
  if ( ThreadWin32Thread )
    return *(_QWORD *)ThreadWin32Thread;
  return v1;
}
