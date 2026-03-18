/*
 * XREFs of ?Enqueue@CSharedCircularQueueProducer@@QEAAXV?$span@$$CBE$0?0@gsl@@@Z @ 0x1802A5A38
 * Callers:
 *     ?EnqueueComputeScribbleOnHost@CGenericInk@@UEAAJ_KPEAVCComputeScribble@@@Z @ 0x1802A5A80 (-EnqueueComputeScribbleOnHost@CGenericInk@@UEAAJ_KPEAVCComputeScribble@@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
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
