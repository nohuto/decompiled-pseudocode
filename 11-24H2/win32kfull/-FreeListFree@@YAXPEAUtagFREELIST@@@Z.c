/*
 * XREFs of ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x14008D5F0
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x14008B5E8 (zzzUpdateWindowsAfterModeChange.c)
 *     UpdateMonitorForWindowAndChildren @ 0x14008BA78 (UpdateMonitorForWindowAndChildren.c)
 *     xxxInheritWindowMonitor @ 0x14008C114 (xxxInheritWindowMonitor.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1402B10A0 (xxxCleanupAndFreeDdeConv.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeListFree(struct tagFREELIST *a1)
{
  struct tagFREELIST *v1; // rbx
  struct tagFREELIST *v2; // rcx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      v1 = *(struct tagFREELIST **)v1;
      Win32FreePool(v2);
    }
    while ( v1 );
  }
}
