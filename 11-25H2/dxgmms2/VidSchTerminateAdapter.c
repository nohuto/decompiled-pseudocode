/*
 * XREFs of VidSchTerminateAdapter @ 0x1400FBC90
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1400FBC20 (VidSchiHandleControlEvent.c)
 *     VidSchiWaitForSchedulerEvents @ 0x140115870 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchInitializeAdapter @ 0x140115D50 (VidSchInitializeAdapter.c)
 * Callees:
 *     VidSchiClearPeriodicFrameNotifications @ 0x140028078 (VidSchiClearPeriodicFrameNotifications.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     VidSchiAcceptsIncomingWork @ 0x140028DE0 (VidSchiAcceptsIncomingWork.c)
 *     VidSchTerminateHwContext @ 0x1400291F0 (VidSchTerminateHwContext.c)
 *     VidSchTerminateHwQueue @ 0x14002AE50 (VidSchTerminateHwQueue.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140036650 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     VidSchIsWorkerThread @ 0x140036A80 (VidSchIsWorkerThread.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x140037FD4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x14003AD6C (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1_VIDSCH_GLOBAL@@QEAA@XZ @ 0x14004A2EC (--1_VIDSCH_GLOBAL@@QEAA@XZ.c)
 *     VidSchiBlockDriverCallback @ 0x14008F928 (VidSchiBlockDriverCallback.c)
 *     VidSchiSetSchedulerStatus @ 0x1400A5228 (VidSchiSetSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1400A5430 (VidSchFlushAdapter.c)
 *     VidSchTerminateDevice @ 0x1400D8C80 (VidSchTerminateDevice.c)
 *     VidSchControlVSyncAdapter @ 0x1400D92A0 (VidSchControlVSyncAdapter.c)
 *     VidSchTerminateContext @ 0x1401005F0 (VidSchTerminateContext.c)
 *     VidSchiTerminateNode @ 0x140110BF0 (VidSchiTerminateNode.c)
 *     VidSchiRequestSchedulerStatus @ 0x140115710 (VidSchiRequestSchedulerStatus.c)
 */

__int64 __fastcall VidSchTerminateAdapter(struct _VIDSCH_GLOBAL *a1)
{
  int v2; // r14d
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rbx
  unsigned int i; // ebx
  unsigned int *v10; // rbx
  unsigned int j; // esi
  struct _VIDSCH_CONTEXT *v12; // rcx
  unsigned int v13; // esi
  struct _VIDSCH_CONTEXT *v14; // rcx
  unsigned int v15; // esi
  struct VIDSCH_HW_QUEUE *v16; // rcx
  unsigned int k; // esi
  void *v18; // rcx
  __int64 v19; // rcx
  unsigned int m; // ebx
  __int64 *v21; // rcx
  __int64 v22; // rsi
  struct _VIDSCH_CONTEXT *v23; // rcx
  struct _VIDSCH_CONTEXT *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int n; // ebx
  PVOID *v28; // rax
  _QWORD *v29; // rax
  unsigned int ii; // ebp
  char *v31; // rcx
  char *v32; // rbx
  unsigned int jj; // ebx
  void *v34; // rcx
  void *v35; // rcx
  void *v36; // rbx
  _BYTE v38[32]; // [rsp+30h] [rbp-48h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+80h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    v3 = (_QWORD *)((char *)a1 + 3792);
    if ( *((_QWORD *)a1 + 474) )
    {
      DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
        (DXGAUTOEXPUSHLOCKEXCLUSIVE *)v38,
        (struct _EX_PUSH_LOCK *const)&gAdapterListLock);
      v4 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      *(_OWORD *)v3 = 0LL;
      DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v38);
    }
    if ( VidSchiAcceptsIncomingWork((__int64)a1) )
    {
      if ( !VidSchIsWorkerThread(v7) )
      {
        VidSchFlushAdapter(a1, 17);
        v8 = (void *)*((_QWORD *)a1 + 21);
        ObfReferenceObject(v8);
        VidSchiRequestSchedulerStatus(a1, 2LL, 0LL);
        KeWaitForSingleObject(v8, Executive, 0, 0, 0LL);
        ObfDereferenceObject(v8);
        return 0LL;
      }
      VidSchFlushAdapter(a1, 17);
      for ( i = 0; i < *((_DWORD *)a1 + 10); ++i )
      {
        if ( *((_DWORD *)a1 + i + 520) )
        {
          *((_DWORD *)a1 + i + 520) = 1;
          VidSchControlVSyncAdapter(a1, 5u, 0, i);
        }
      }
      VidSchiBlockDriverCallback((__int64)a1);
      while ( *((_DWORD *)a1 + 630) )
      {
        Interval.QuadPart = -1000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      if ( (*((_DWORD *)a1 + 698) & 2) != 0 )
        ExReleaseResourceLite((PERESOURCE)((char *)a1 + 1136));
      v2 = 1;
    }
    v10 = (unsigned int *)((char *)a1 + 76);
    if ( *((_QWORD *)a1 + 43) )
    {
      for ( j = 0; j < *v10; ++j )
      {
        v12 = *(struct _VIDSCH_CONTEXT **)(*((_QWORD *)a1 + 43) + 8LL * j);
        if ( v12 )
          VidSchTerminateContext(v12);
      }
      ExFreePoolWithTag(*((PVOID *)a1 + 43), 0);
      *((_QWORD *)a1 + 43) = 0LL;
    }
    if ( *((_QWORD *)a1 + 40) )
    {
      v13 = 0;
      if ( *v10 )
      {
        do
        {
          v14 = *(struct _VIDSCH_CONTEXT **)(*((_QWORD *)a1 + 40) + 8LL * v13);
          if ( v14 )
            VidSchTerminateContext(v14);
          ++v13;
        }
        while ( v13 < *v10 );
        v10 = (unsigned int *)((char *)a1 + 76);
      }
      ExFreePoolWithTag(*((PVOID *)a1 + 40), 0);
      *((_QWORD *)a1 + 40) = 0LL;
    }
    if ( *((_QWORD *)a1 + 42) )
    {
      v15 = 0;
      if ( *v10 )
      {
        do
        {
          v16 = *(struct VIDSCH_HW_QUEUE **)(*((_QWORD *)a1 + 42) + 8LL * v15);
          if ( v16 )
            VidSchTerminateHwQueue(v16);
          ++v15;
        }
        while ( v15 < *v10 );
        v10 = (unsigned int *)((char *)a1 + 76);
      }
      ExFreePoolWithTag(*((PVOID *)a1 + 42), 0);
      *((_QWORD *)a1 + 42) = 0LL;
    }
    if ( *((_QWORD *)a1 + 41) )
    {
      for ( k = 0; k < *v10; ++k )
      {
        v18 = *(void **)(*((_QWORD *)a1 + 41) + 8LL * k);
        if ( v18 )
          VidSchTerminateHwContext(v18);
      }
      ExFreePoolWithTag(*((PVOID *)a1 + 41), 0);
      *((_QWORD *)a1 + 41) = 0LL;
    }
    v19 = *((_QWORD *)a1 + 39);
    if ( v19 )
    {
      VidSchTerminateDevice(v19);
      *((_QWORD *)a1 + 39) = 0LL;
    }
    for ( m = 0; m < *((_DWORD *)a1 + 20); ++m )
    {
      v21 = (__int64 *)*((_QWORD *)a1 + 86);
      if ( m < *((_DWORD *)a1 + 190) )
        v21 += m;
      v22 = *v21;
      if ( *v21 )
      {
        v23 = *(struct _VIDSCH_CONTEXT **)(v22 + 32);
        if ( v23 )
        {
          VidSchTerminateContext(v23);
          *(_QWORD *)(v22 + 32) = 0LL;
        }
      }
    }
    v24 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)a1 + 33);
    if ( v24 )
    {
      VidSchTerminateContext(v24);
      *((_QWORD *)a1 + 33) = 0LL;
    }
    v25 = *((_QWORD *)a1 + 32);
    if ( v25 )
    {
      VidSchTerminateDevice(v25);
      *((_QWORD *)a1 + 32) = 0LL;
    }
    v26 = *((_QWORD *)a1 + 24);
    if ( v26 )
    {
      LOBYTE(v6) = 1;
      ExDeleteTimer(v26, v6, 0LL, 0LL);
    }
    for ( n = 0; n < *((_DWORD *)a1 + 21); ++n )
    {
      v28 = (PVOID *)*((_QWORD *)a1 + 86);
      if ( n < *((_DWORD *)a1 + 190) )
        v28 += n;
      if ( *v28 )
      {
        VidSchiTerminateNode(*v28);
        v29 = (_QWORD *)*((_QWORD *)a1 + 86);
        if ( n < *((_DWORD *)a1 + 190) )
          v29 += n;
        *v29 = 0LL;
      }
    }
    VidSchiSetSchedulerStatus((__int64)a1, 2, 0);
    for ( ii = 0; ii < *((_DWORD *)a1 + 10); ++ii )
    {
      if ( *((_QWORD *)a1 + ii + 429) )
      {
        VidSchiClearPeriodicFrameNotifications((__int64)a1, ii);
        v31 = *(char **)(*((_QWORD *)a1 + ii + 429) + 136LL);
        if ( v31 )
        {
          v32 = v31 - 8;
          `vector destructor iterator'(
            v31,
            112LL,
            *((_QWORD *)v31 - 1),
            (void (__fastcall *)(char *))VIDSCH_FLIP_QUEUE_HISTORY_ENTRY::~VIDSCH_FLIP_QUEUE_HISTORY_ENTRY);
          operator delete(v32);
        }
        operator delete(*(void **)(*((_QWORD *)a1 + ii + 429) + 44408LL));
        if ( !*((_BYTE *)a1 + 59) )
        {
          for ( jj = 0; jj < *((_DWORD *)a1 + 38); ++jj )
          {
            v34 = *(void **)(304LL * jj + *((_QWORD *)a1 + ii + 429) + 432);
            if ( v34 )
              ExFreePoolWithTag(v34, 0);
          }
        }
        ExFreePoolWithTag(*((PVOID *)a1 + ii + 429), 0);
        *((_QWORD *)a1 + ii + 429) = 0LL;
      }
      v35 = (void *)*((_QWORD *)a1 + ii + 839);
      if ( v35 )
      {
        ExFreePoolWithTag(v35, 0);
        *((_QWORD *)a1 + ii + 839) = 0LL;
      }
    }
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 3112));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 376));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1344));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1136));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1032));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1240));
    if ( *((_BYTE *)a1 + 7048) )
    {
      ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 6928));
      if ( *((struct _VIDSCH_GLOBAL **)a1 + 863) != (struct _VIDSCH_GLOBAL *)((char *)a1 + 6904) )
        KeWaitForSingleObject((char *)a1 + 7024, Executive, 0, 0, 0LL);
    }
    if ( *((_BYTE *)a1 + 1024) )
    {
      ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 928));
      *((_BYTE *)a1 + 1024) = 0;
    }
    v36 = (void *)*((_QWORD *)a1 + 21);
    _VIDSCH_GLOBAL::~_VIDSCH_GLOBAL(a1);
    ExFreePoolWithTag(a1, 0);
    if ( v2 )
    {
      ObfDereferenceObject(v36);
      PsTerminateSystemThread(0);
    }
  }
  return 0LL;
}
