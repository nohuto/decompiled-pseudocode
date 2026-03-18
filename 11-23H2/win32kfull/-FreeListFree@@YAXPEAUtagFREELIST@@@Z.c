/*
 * XREFs of ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00AE3E0
 * Callers:
 *     UpdateMonitorForWindowAndChildren @ 0x1C00A4B9C (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00B04C0 (xxxInheritWindowMonitor.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C01FA850 (xxxCleanupAndFreeDdeConv.c)
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
