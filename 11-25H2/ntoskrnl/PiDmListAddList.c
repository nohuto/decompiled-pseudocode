/*
 * XREFs of PiDmListAddList @ 0x140A81AD0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     KsepCacheLock @ 0x14082C0D4 (KsepCacheLock.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CCF68 (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectReleaseLock @ 0x1408CE958 (PiDmObjectReleaseLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140968CF0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListAddObjectWorker @ 0x140969C78 (PiDmListAddObjectWorker.c)
 */

__int64 __fastcall PiDmListAddList(__int64 a1, __int64 a2, __int64 a3, volatile signed __int64 *a4)
{
  unsigned __int64 *v5; // rdi
  struct _ERESOURCE *ObjectManagerForObjectType; // rax
  unsigned __int64 v7; // rdx
  volatile signed __int64 *v8; // r9
  _QWORD **v9; // r15
  struct _ERESOURCE *v10; // rbp
  _QWORD *i; // r14

  v5 = (unsigned __int64 *)a2;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  v9 = (_QWORD **)(v8 + 11);
  v10 = ObjectManagerForObjectType;
  if ( v7 < (unsigned __int64)v8 )
  {
    KsepCacheLock(v5);
    PiDmObjectAcquireSharedLock(a4);
  }
  else
  {
    if ( v7 > (unsigned __int64)v8 )
      PiDmObjectAcquireSharedLock(v8);
    KsepCacheLock(v5);
  }
  for ( i = *v9; i != v9; i = (_QWORD *)*i )
  {
    PiDmObjectAcquireSharedLock(i - 8);
    PiDmListAddObjectWorker(2, v10, (__int64)v5, (__int64)(i - 8), 0LL);
    PiDmObjectReleaseLock(i - 8);
  }
  if ( v5 >= (unsigned __int64 *)a4 )
  {
    if ( v5 > (unsigned __int64 *)a4 )
    {
      PiDmObjectReleaseLock((signed __int64 *)v5);
      v5 = (unsigned __int64 *)a4;
    }
  }
  else
  {
    PiDmObjectReleaseLock((signed __int64 *)a4);
  }
  return PiDmObjectReleaseLock((signed __int64 *)v5);
}
