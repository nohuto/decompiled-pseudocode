/*
 * XREFs of PiDqObjectManagerInit @ 0x1407285B8
 * Callers:
 *     PiDqInit @ 0x140C24F10 (PiDqInit.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1403655E0 (ExInitializeResourceLite.c)
 *     KeInitializeGuardedMutex @ 0x14045D660 (KeInitializeGuardedMutex.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 (__fastcall *__fastcall PiDqObjectManagerInit(PERESOURCE Resource, int a2))(PERESOURCE Resource)
{
  __int64 (__fastcall *result)(PERESOURCE); // rax

  memset_0(Resource, 0, 0xF0uLL);
  *(_DWORD *)&Resource[2].ActiveCount = a2;
  ExInitializeResourceLite(Resource);
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&Resource[1]);
  Resource[1].SpinLock = (KSPIN_LOCK)&Resource[1].CreatorBackTraceIndex;
  Resource[1].CreatorBackTraceIndex = (ULONG_PTR)&Resource[1].CreatorBackTraceIndex;
  Resource[2].SystemResourcesList.Blink = &Resource[2].SystemResourcesList;
  Resource[2].SystemResourcesList.Flink = &Resource[2].SystemResourcesList;
  result = PiDqObjectManagerServiceActionQueue;
  *(_QWORD *)&Resource[1].OwnerEntry.0 = 0LL;
  *(_QWORD *)&Resource[1].NumberOfSharedWaiters = PiDqObjectManagerServiceActionQueue;
  Resource[1].Reserved2 = Resource;
  return result;
}
