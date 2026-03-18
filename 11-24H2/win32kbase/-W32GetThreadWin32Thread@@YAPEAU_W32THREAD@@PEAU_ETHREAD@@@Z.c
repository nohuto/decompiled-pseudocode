/*
 * XREFs of ?W32GetThreadWin32Thread@@YAPEAU_W32THREAD@@PEAU_ETHREAD@@@Z @ 0x1400BF844
 * Callers:
 *     GdiThreadCalloutCleanup @ 0x1400BF4F0 (GdiThreadCalloutCleanup.c)
 *     GdiThreadCallout @ 0x1400BF530 (GdiThreadCallout.c)
 * Callees:
 *     <none>
 */

struct _W32THREAD *__fastcall W32GetThreadWin32Thread(struct _ETHREAD *a1)
{
  __int64 v1; // rbx
  __int64 ThreadWin32Thread; // rax

  v1 = 0LL;
  ThreadWin32Thread = PsGetThreadWin32Thread(a1);
  if ( ThreadWin32Thread )
    return *(struct _W32THREAD **)ThreadWin32Thread;
  return (struct _W32THREAD *)v1;
}
