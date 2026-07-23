/*
 * XREFs of PiDmListAddList @ 0x140A80DA0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PiDmListAddObjectWorker @ 0x1408B1A14 (PiDmListAddObjectWorker.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1408B2B50 (PiDmGetObjectManagerForObjectType.c)
 *     KsepCacheLock @ 0x1408B8ED0 (KsepCacheLock.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CE46C (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectReleaseLock @ 0x1408CECD4 (PiDmObjectReleaseLock.c)
 */

__int64 __fastcall PiDmListAddList(__int64 a1, __int64 a2, __int64 a3, volatile signed __int64 *a4)
{
  unsigned __int64 *v5; // rdi
  struct _ERESOURCE *ObjectManagerForObjectType; // rax
  unsigned __int64 v7; // rdx
  volatile signed __int64 *v8; // r9
  _QWORD **v9; // r15
  __int64 v10; // rbp
  _QWORD *i; // r14

  v5 = (unsigned __int64 *)a2;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  v9 = (_QWORD **)(v8 + 11);
  v10 = (__int64)ObjectManagerForObjectType;
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
