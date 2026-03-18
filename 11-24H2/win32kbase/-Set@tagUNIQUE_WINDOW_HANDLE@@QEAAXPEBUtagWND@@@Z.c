/*
 * XREFs of ?Set@tagUNIQUE_WINDOW_HANDLE@@QEAAXPEBUtagWND@@@Z @ 0x1401A7450
 * Callers:
 *     <none>
 * Callees:
 *     _HMPkheFromObjectWorker @ 0x1400E1208 (_HMPkheFromObjectWorker.c)
 */

void __fastcall tagUNIQUE_WINDOW_HANDLE::Set(tagUNIQUE_WINDOW_HANDLE *this, const struct tagWND *a2)
{
  if ( a2 )
  {
    *(_QWORD *)this = *(_QWORD *)a2;
    *((_QWORD *)this + 1) = *(_QWORD *)(HMPkheFromObjectWorker((int *)a2) + 32);
  }
  else if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
  }
}
