/*
 * XREFs of EditionNotifyDwmForSystemVisualDestruction @ 0x1401D1B30
 * Callers:
 *     <none>
 * Callees:
 *     DwmAsyncDestroyDCompositionHwndTarget @ 0x1401D1B94 (DwmAsyncDestroyDCompositionHwndTarget.c)
 */

__int64 __fastcall EditionNotifyDwmForSystemVisualDestruction(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  void *v3; // rax

  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v3 = (void *)ReferenceDwmApiPort(v2, v1);
    DwmAsyncDestroyDCompositionHwndTarget(v3);
  }
  return 0LL;
}
