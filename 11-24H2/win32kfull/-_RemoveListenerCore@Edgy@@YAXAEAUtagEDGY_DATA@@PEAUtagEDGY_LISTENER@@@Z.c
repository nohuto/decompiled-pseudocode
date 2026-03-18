/*
 * XREFs of ?_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z @ 0x1402A4CDC
 * Callers:
 *     EdgyUnregisterListener @ 0x140219360 (EdgyUnregisterListener.c)
 *     ?_RemoveListenersForDevice@Edgy@@YAXAEAUtagEDGY_DATA@@PEAX@Z @ 0x1402A4D44 (-_RemoveListenersForDevice@Edgy@@YAXAEAUtagEDGY_DATA@@PEAX@Z.c)
 * Callees:
 *     memmove @ 0x140340480 (memmove.c)
 */

void __fastcall Edgy::_RemoveListenerCore(Edgy *this, struct tagEDGY_DATA *a2, struct tagEDGY_LISTENER *a3)
{
  __int64 v4; // r10
  int v5; // ecx
  __int64 v6; // r9

  if ( a2 == *((struct tagEDGY_DATA **)this + 23) )
    *((_QWORD *)this + 23) = 0LL;
  v4 = *((_QWORD *)this + 1);
  v5 = *(_DWORD *)this;
  v6 = ((__int64)a2 - v4) >> 5;
  if ( (_DWORD)v6 != v5 - 1 )
    memmove(
      (void *)(v4 + 32LL * (unsigned int)v6),
      (const void *)(v4 + 32LL * (unsigned int)(v6 + 1)),
      32LL * (unsigned int)(v5 - v6 - 1));
  --*(_DWORD *)this;
}
