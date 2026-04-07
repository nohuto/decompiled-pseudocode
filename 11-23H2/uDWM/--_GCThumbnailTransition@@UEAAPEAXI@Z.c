/*
 * XREFs of ??_GCThumbnailTransition@@UEAAPEAXI@Z @ 0x1800E4190
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CThumbnailTransition@@UEAA@XZ @ 0x1800E4150 (--1CThumbnailTransition@@UEAA@XZ.c)
 */

CThumbnailTransition *__fastcall CThumbnailTransition::`scalar deleting destructor'(
        CThumbnailTransition *this,
        char a2)
{
  CThumbnailTransition::~CThumbnailTransition(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CThumbnailTransition *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
