/*
 * XREFs of ??_E?$CTimeline@I@@UEAAPEAXI@Z @ 0x1801062A0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CTimelineBase@@UEAA@XZ @ 0x1800E4DD4 (--1CTimelineBase@@UEAA@XZ.c)
 */

CTimelineBase *__fastcall CTimeline<unsigned int>::`vector deleting destructor'(CTimelineBase *a1, char a2)
{
  CTimelineBase::~CTimelineBase(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(a1);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CTimelineBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        a1);
  }
  return a1;
}
