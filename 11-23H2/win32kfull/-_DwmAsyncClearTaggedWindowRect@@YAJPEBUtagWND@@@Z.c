/*
 * XREFs of ?_DwmAsyncClearTaggedWindowRect@@YAJPEBUtagWND@@@Z @ 0x1C01F6DC8
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00E9820 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     DwmAsyncClearTaggedWindowRect @ 0x1C026BDC0 (DwmAsyncClearTaggedWindowRect.c)
 */

__int64 __fastcall _DwmAsyncClearTaggedWindowRect(const struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  void *v4; // rax

  v1 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v4 = (void *)ReferenceDwmApiPort(v3, v2);
    return (unsigned int)DwmAsyncClearTaggedWindowRect(v4);
  }
  return v1;
}
