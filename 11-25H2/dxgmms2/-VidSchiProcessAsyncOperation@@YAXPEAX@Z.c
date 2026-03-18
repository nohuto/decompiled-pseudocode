/*
 * XREFs of ?VidSchiProcessAsyncOperation@@YAXPEAX@Z @ 0x140027170
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x140052888 (VidSchiCreateNodeSchedulingLog.c)
 */

void __fastcall VidSchiProcessAsyncOperation(struct _VIDSCH_NODE **a1)
{
  if ( *((_DWORD *)a1 + 10) == 1 )
    VidSchiCreateNodeSchedulingLog(a1[6]);
  _InterlockedDecrement((volatile signed __int32 *)a1[4] + 4122);
  KeSetEvent((PRKEVENT)((char *)a1[4] + 16496), 0, 0);
  operator delete(a1);
}
