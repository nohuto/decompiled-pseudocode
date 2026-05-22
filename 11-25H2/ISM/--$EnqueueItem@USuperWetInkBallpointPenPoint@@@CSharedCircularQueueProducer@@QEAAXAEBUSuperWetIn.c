/*
 * XREFs of ??$EnqueueItem@USuperWetInkBallpointPenPoint@@@CSharedCircularQueueProducer@@QEAAXAEBUSuperWetInkBallpointPenPoint@@@Z @ 0x1800AD130
 * Callers:
 *     ?OnInput@DelegatedInkCanvasProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800AD320 (-OnInput@DelegatedInkCanvasProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProces.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x18009BCBC (-terminate@details@gsl@@YAXXZ.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 */

void *__fastcall CSharedCircularQueueProducer::EnqueueItem<SuperWetInkBallpointPenPoint>(
        gsl::details *a1,
        const void *a2)
{
  volatile signed __int32 *v2; // rbx
  void *result; // rax

  if ( !a2 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x1800AD17DLL);
  }
  v2 = *(volatile signed __int32 **)a1;
  result = memcpy_0(
             (void *)(*((_DWORD *)a1 + 2)
                    * ((unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) % *((_DWORD *)a1 + 3))
                    + *(_QWORD *)a1
                    + 8LL),
             a2,
             *((unsigned int *)a1 + 2));
  _InterlockedIncrement(v2 + 1);
  return result;
}
