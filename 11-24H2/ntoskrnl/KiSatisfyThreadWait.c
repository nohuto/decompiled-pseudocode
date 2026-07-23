/*
 * XREFs of KiSatisfyThreadWait @ 0x14027E6C0
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 *     KiExitThreadWaitReschedule @ 0x1402E1088 (KiExitThreadWaitReschedule.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall KiSatisfyThreadWait(
        struct _KPRCB *a1,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        __int64 *a4,
        int a5)
{
  unsigned int v5; // r15d
  struct _KPRCB *v6; // rsi
  __int64 v7; // r12
  __int64 *v8; // rdi
  __int64 *v9; // rcx
  char v10; // bl
  __int64 *v12; // rsi
  char v13; // al
  int v14; // ebx
  unsigned __int64 v15; // rdi
  volatile signed __int32 *v17; // r14
  __int64 **v18; // rax
  unsigned int v19; // edi
  ULONG_PTR v20; // rdx
  char v21; // al
  __int64 v22; // rax
  char v23; // al
  unsigned int v24; // eax
  __int64 v25; // [rsp+38h] [rbp-30h] BYREF

  v5 = 0;
  *(_BYTE *)(BugCheckParameter1 + 388) = 2;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  v6 = a1;
  v7 = *(_QWORD *)(BugCheckParameter1 + 200);
  v8 = a4;
  v9 = *(__int64 **)(BugCheckParameter1 + 976);
  v10 = a3;
  if ( v9 )
  {
    *(_QWORD *)(BugCheckParameter1 + 976) = 0LL;
    v22 = KeAbPreAcquire(v9, 0LL, 1LL);
    if ( v22 )
      *(_BYTE *)(v22 + 10) = 1;
  }
  if ( a5 )
  {
    v12 = &v8[6 * (unsigned __int8)a5];
    do
    {
      if ( *((_BYTE *)v8 + 17) < 5u )
      {
        v17 = (volatile signed __int32 *)v8[4];
        if ( _interlockedbittestandset(v17, 7u) )
        {
          do
          {
            if ( (++v5 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9, BugCheckParameter1, a3, a4) )
            {
              HvlNotifyLongSpinWait(v5);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( (*v17 & 0x80u) != 0 || _interlockedbittestandset(v17, 7u) );
        }
        if ( *((_BYTE *)v8 + 17) == 4 )
        {
          v9 = (__int64 *)*v8;
          v18 = (__int64 **)v8[1];
          if ( *(__int64 **)(*v8 + 8) != v8 || *v18 != v8 )
            __fastfail(3u);
          *v18 = v9;
          v9[1] = (__int64)v18;
        }
        _InterlockedAnd(v17, 0xFFFFFF7F);
        v5 = 0;
      }
      v8 += 6;
    }
    while ( v8 != v12 );
    v6 = a1;
  }
  v25 = 0LL;
  if ( (v10 & 2) != 0 )
  {
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v19 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9, BugCheckParameter1, a3, a4) )
        {
          HvlNotifyLongSpinWait(v19);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v20 = *(char *)(BugCheckParameter1 + 795);
    v21 = *(_BYTE *)(v20 + BugCheckParameter1 + 824);
    if ( !v21 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v20, 2uLL, 0LL);
    v23 = v21 - 1;
    *(_BYTE *)(v20 + BugCheckParameter1 + 824) = v23;
    if ( !v23 )
    {
      v24 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v20);
      *(_DWORD *)(BugCheckParameter1 + 856) = v24;
      if ( v24 < 1 << v20
        && *(char *)(BugCheckParameter1 + 195) <= 31
        && (int)KiComputeThreadPriority(BugCheckParameter1, 0LL, 0LL) < *(char *)(BugCheckParameter1 + 195) )
      {
        KiSetPriorityThread(BugCheckParameter1, &v25);
      }
    }
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  v13 = *(_BYTE *)(BugCheckParameter1 + 112);
  v14 = v10 & 1;
  if ( (v13 & 0x38) != 0 )
  {
    if ( (v13 & 0x18) != 0 )
    {
      KiExitThreadWaitReschedule(v6);
    }
    else
    {
      KiProcessDeferredReadyList(v6);
      KiDeliverApc(0LL, 0LL, 0LL);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
      __writecr8(0LL);
    }
  }
  else
  {
    v15 = *(unsigned __int8 *)(BugCheckParameter1 + 390);
    if ( v14 )
    {
      KiProcessDeferredReadyList(v6);
    }
    else
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v15);
      __writecr8(v15);
    }
  }
  return v7;
}
