/*
 * XREFs of PiDmListRemoveList @ 0x140724BA4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PiDmGetObjectManagerForObjectType @ 0x1408B2B50 (PiDmGetObjectManagerForObjectType.c)
 *     KsepCacheLock @ 0x1408B8ED0 (KsepCacheLock.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CE46C (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectReleaseLock @ 0x1408CECD4 (PiDmObjectReleaseLock.c)
 *     PiDmListRemoveObjectWorker @ 0x140A6AAE8 (PiDmListRemoveObjectWorker.c)
 */

__int64 __fastcall PiDmListRemoveList(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  ULONG_PTR v5; // rdi
  int ObjectManagerForObjectType; // eax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r9
  _QWORD **v9; // r15
  int v10; // ebp
  _QWORD *i; // r14

  v5 = a2;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(unsigned int *)(a2 + 28));
  v9 = (_QWORD **)(v8 + 88);
  v10 = ObjectManagerForObjectType;
  if ( v7 >= v8 )
  {
    if ( v7 > v8 )
      PiDmObjectAcquireSharedLock(a4);
    KsepCacheLock(v5);
  }
  else
  {
    KsepCacheLock(v7);
    PiDmObjectAcquireSharedLock(a4);
  }
  for ( i = *v9; i != v9; i = (_QWORD *)*i )
  {
    PiDmObjectAcquireSharedLock(i - 8);
    PiDmListRemoveObjectWorker(2, v10, v5, (_DWORD)i - 64, 0LL);
    PiDmObjectReleaseLock((ULONG_PTR)(i - 8));
  }
  if ( v5 >= a4 )
  {
    if ( v5 > a4 )
    {
      PiDmObjectReleaseLock(v5);
      v5 = a4;
    }
  }
  else
  {
    PiDmObjectReleaseLock(a4);
  }
  return PiDmObjectReleaseLock(v5);
}
