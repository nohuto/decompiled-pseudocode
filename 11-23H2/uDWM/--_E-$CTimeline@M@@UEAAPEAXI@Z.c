/*
 * XREFs of ??_E?$CTimeline@M@@UEAAPEAXI@Z @ 0x1800385A0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CTimeline<float>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  __int64 v4; // rcx

  *a1 = &CTimelineBase::`vftable';
  v4 = a1[8];
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    a1[8] = 0LL;
  }
  *a1 = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(a1, 0x78uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        a1);
  }
  return a1;
}
