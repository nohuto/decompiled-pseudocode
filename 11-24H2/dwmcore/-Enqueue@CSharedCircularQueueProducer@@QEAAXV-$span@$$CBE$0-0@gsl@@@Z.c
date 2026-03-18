/*
 * XREFs of ?Enqueue@CSharedCircularQueueProducer@@QEAAXV?$span@$$CBE$0?0@gsl@@@Z @ 0x18029BC78
 * Callers:
 *     ?EnqueueComputeScribbleOnHost@CGenericInk@@UEAAJ_KPEAVCComputeScribble@@@Z @ 0x18029BCC0 (-EnqueueComputeScribbleOnHost@CGenericInk@@UEAAJ_KPEAVCComputeScribble@@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

void *__fastcall CSharedCircularQueueProducer::Enqueue(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rbx
  void *result; // rax

  v2 = *(volatile signed __int32 **)a1;
  result = memcpy_0(
             (void *)(*(_DWORD *)(a1 + 8)
                    * ((unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) % *(_DWORD *)(a1 + 12))
                    + *(_QWORD *)a1
                    + 8LL),
             *(const void **)(a2 + 8),
             *(unsigned int *)(a1 + 8));
  _InterlockedIncrement(v2 + 1);
  return result;
}
