/*
 * XREFs of ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x180055FD0
 * Callers:
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x180055BC0 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 *     ?RmpOfferLazyDecommitCheckQueueWork@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180055EE4 (-RmpOfferLazyDecommitCheckQueueWork@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempListEntryIsNull @ 0x18000C08C (CempListEntryIsNull.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x18001F300 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpPartitionTableActOnActivePartitions(
        struct _RM_PARTITION_TABLE *a1,
        __int64 a2,
        int (*a3)(struct _RM_PARTITION *, void *),
        void *a4)
{
  _QWORD *v4; // rsi
  struct _RM_PARTITION_TABLE *v8; // rdx
  __int64 i; // rdi
  volatile signed __int64 *v10; // r9
  signed __int64 *v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  signed __int64 v15; // rbp
  signed __int64 v16; // rax
  bool v17; // cc
  signed __int64 v18; // rax

  v4 = (_QWORD *)*((_QWORD *)a1 + 8);
  memset_0(v4, 0, 8LL * *((unsigned int *)a1 + 18));
  RtlAcquireSRWLockShared(a1);
  v8 = (struct _RM_PARTITION_TABLE *)*((_QWORD *)a1 + 2);
  for ( i = 0LL; v8 != (struct _RM_PARTITION_TABLE *)((char *)a1 + 16); v8 = *(struct _RM_PARTITION_TABLE **)v8 )
  {
    v10 = (volatile signed __int64 *)((char *)v8 - 8);
    if ( (*((_DWORD *)v8 + 58) & 3) == 1 )
    {
      if ( _InterlockedIncrement64(v10) <= 1 )
        __fastfail(0xEu);
      v4[i] = v10;
      i = (unsigned int)(i + 1);
    }
  }
  RtlReleaseSRWLockShared(a1);
  if ( (_DWORD)i )
  {
    do
    {
      v11 = (signed __int64 *)*v4;
      ((void (__fastcall *)(_QWORD, void *))a3)(*v4, a4);
      _m_prefetchw(v11);
      v12 = *v11;
      while ( v12 - 1 > 0 )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange64(v11, v12 - 1, v12);
        if ( v13 == v12 )
          goto LABEL_10;
      }
      if ( v12 != 1 )
        __fastfail(0xEu);
      v15 = v11[3];
      RtlAcquireSRWLockExclusive(v15 + 312);
      *(_DWORD *)(v15 + 320) = GetCurrentThreadId();
      v16 = _InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL);
      v17 = v16 <= 1;
      v18 = v16 - 1;
      if ( v17 )
      {
        if ( v18 )
          __fastfail(0xEu);
        if ( (unsigned int)CempListEntryIsNull(v11 + 1) )
        {
          RmpPartitionCleanup((struct _RM_PARTITION *)v11);
          HampFreeHeap(v11);
        }
        else
        {
          *((_DWORD *)v11 + 60) = v11[30] & 0xFFFFFFFC | 2;
          SetEvent((HANDLE)v11[8]);
        }
      }
      *(_DWORD *)(v15 + 320) = 0;
      RtlReleaseSRWLockExclusive(v15 + 312);
LABEL_10:
      ++v4;
      --i;
    }
    while ( i );
  }
  return 0LL;
}
