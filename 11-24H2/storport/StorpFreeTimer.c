/*
 * XREFs of StorpFreeTimer @ 0x1400542FC
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400255D0 (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     WPP_SF_q @ 0x140055B6C (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 */

__int64 __fastcall StorpFreeTimer(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int8 v6; // r10
  PDEVICE_OBJECT v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // ecx
  volatile signed __int32 *v11; // rax
  int *v12; // rcx
  struct _IO_WORKITEM *WorkItem; // rax
  int *v14; // [rsp+40h] [rbp+8h] BYREF
  int *v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v14 = 0LL;
  v15 = 0LL;
  if ( !a1 || !a2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 78LL, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids, a1, a2);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() > 2u )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 79LL, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
    }
    return 3238002696LL;
  }
  RaidpPortGetAdapter(a1, &v14, &v15);
  if ( !v14 && !v15 )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < v6 )
    {
      return 3238002694LL;
    }
    v8 = 80LL;
    v9 = a1;
LABEL_35:
    WPP_SF_q(v7->AttachedDevice, v8, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids, v9);
    return 3238002694LL;
  }
  if ( !*(_QWORD *)a2 || (v10 = **(_DWORD **)a2, v10 != 1094997074) && v10 != 1314275652 )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < v6 )
    {
      return 3238002694LL;
    }
    v8 = 81LL;
    v9 = a2;
    goto LABEL_35;
  }
  _InterlockedExchange64((volatile __int64 *)(a2 + 136), 0LL);
  if ( KeCancelTimer((PKTIMER)(a2 + 8)) )
  {
LABEL_21:
    ExFreePoolWithTag((PVOID)a2, 0x54416152u);
    if ( v14 )
      v11 = v14 + 1032;
    else
      v11 = v15 + 271;
    _InterlockedDecrement(v11);
    return 0LL;
  }
  KeRemoveQueueDpc((PRKDPC)(a2 + 72));
  if ( !KeGetCurrentIrql() )
  {
    KeFlushQueuedDpcs();
    goto LABEL_21;
  }
  v12 = v14;
  if ( !v14 )
    v12 = v15;
  WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)v12 + 1));
  *(_QWORD *)(a2 + 152) = WorkItem;
  if ( WorkItem )
    IoQueueWorkItem(WorkItem, StorpFreeTimerWorkItem, DelayedWorkQueue, (PVOID)a2);
  else
    return (unsigned int)-1056964605;
  return v2;
}
