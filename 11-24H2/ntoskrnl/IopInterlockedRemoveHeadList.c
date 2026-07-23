/*
 * XREFs of IopInterlockedRemoveHeadList @ 0x1404A5984
 * Callers:
 *     IopLoadUnloadDriver @ 0x140A66EE0 (IopLoadUnloadDriver.c)
 *     IopCallDriverReinitializationRoutines @ 0x140A706F4 (IopCallDriverReinitializationRoutines.c)
 *     IoShutdownSystem @ 0x140B5579C (IoShutdownSystem.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140C1F800 (IopCallBootDriverReinitializationRoutines.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 */

_QWORD *__fastcall IopInterlockedRemoveHeadList(_QWORD **a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rdi
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = *a1;
  if ( *a1 == a1 )
  {
    v3 = 0LL;
  }
  else
  {
    v5 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v3) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
