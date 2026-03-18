/*
 * XREFs of NtUserSetDesktopColorTransform @ 0x1C01DADE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     DwmAsyncSetDesktopColorTransform @ 0x1C026D0A0 (DwmAsyncSetDesktopColorTransform.c)
 */

_BOOL8 NtUserSetDesktopColorTransform()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rdx
  void *v2; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v2 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 456) + 8LL), v1);
  return (int)DwmAsyncSetDesktopColorTransform(v2) >= 0;
}
