/*
 * XREFs of FreeW32Thread @ 0x140105DBC
 * Callers:
 *     W32pThreadCallout @ 0x140105BB0 (W32pThreadCallout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x140105FF4 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall FreeW32Thread(__int64 a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(a1);
  vMarkFreeW32Thread(ThreadWin32Thread);
  v3 = W32GetThreadWin32Thread(a1);
  return DereferenceW32Thread(v3);
}
