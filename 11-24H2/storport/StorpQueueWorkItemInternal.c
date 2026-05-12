/*
 * XREFs of StorpQueueWorkItemInternal @ 0x140075B64
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x140009B34 (RaidAcquireAdapterRemoveLock.c)
 *     RaidpPortGetAdapter @ 0x1400255D0 (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     WPP_SF_qqq @ 0x140067F40 (WPP_SF_qqq.c)
 *     NvmeAdapterAcquireRemoveLock @ 0x1400CC668 (NvmeAdapterAcquireRemoveLock.c)
 */

__int64 __fastcall StorpQueueWorkItemInternal(
        __int64 a1,
        signed __int64 a2,
        volatile signed __int64 *a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned int v9; // ebx
  int v10; // eax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v11; // rcx
  _DWORD *v12; // rax
  struct _IO_WORKITEM *v13; // rcx
  int *v15; // [rsp+60h] [rbp+8h] BYREF
  int *v16; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  if ( !a1 || !a2 || !a3 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x40u,
        (__int64)&WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids,
        a1,
        a2,
        a3);
    }
    return (unsigned int)-1056964602;
  }
  if ( *((_DWORD *)a3 + 6) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x41u,
        (__int64)&WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
    }
    return (unsigned int)-1056964596;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    RaidpPortGetAdapter(a1, &v15, &v16);
    if ( v15 )
    {
      v10 = RaidAcquireAdapterRemoveLock((__int64)v15);
LABEL_20:
      if ( v10 >= 0 )
      {
        if ( _InterlockedCompareExchange64(a3 + 1, a2, 0LL) )
        {
          v9 = -1056964596;
          if ( v15 )
            v11 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)v15 + 42);
          else
            v11 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)v16 + 19);
          ExReleaseRundownProtectionCacheAware(v11);
        }
        else
        {
          v12 = a5;
          v13 = (struct _IO_WORKITEM *)*a3;
          *((_QWORD *)a3 + 2) = a4;
          if ( v12 )
            IoQueueWorkItemToNode(v13, StorPortWorkItemRoutine, 1LL, a3, *v12);
          else
            IoQueueWorkItem(v13, (PIO_WORKITEM_ROUTINE)StorPortWorkItemRoutine, DelayedWorkQueue, (PVOID)a3);
          return 0;
        }
      }
      else
      {
        return (unsigned int)-1056964599;
      }
      return v9;
    }
    if ( v16 )
    {
      v10 = NvmeAdapterAcquireRemoveLock(v16);
      goto LABEL_20;
    }
    return (unsigned int)-1056964602;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x42u,
      (__int64)&WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
  }
  return (unsigned int)-1056964600;
}
