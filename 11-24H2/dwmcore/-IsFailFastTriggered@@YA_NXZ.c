/*
 * XREFs of ?IsFailFastTriggered@@YA_NXZ @ 0x180245B80
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800823C0 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x180243AA0 (--1CFailFastError@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool IsFailFastTriggered(void)
{
  char v0; // bl

  v0 = 0;
  if ( g_dwFailFastForThreadId )
    return g_dwFailFastForThreadId == GetCurrentThreadId();
  return v0;
}
