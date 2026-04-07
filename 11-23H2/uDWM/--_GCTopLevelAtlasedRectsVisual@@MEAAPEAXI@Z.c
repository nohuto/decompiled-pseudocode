/*
 * XREFs of ??_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x1800337C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x18003406C (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CTopLevelAtlasedRectsVisual *__fastcall CTopLevelAtlasedRectsVisual::`scalar deleting destructor'(
        CTopLevelAtlasedRectsVisual *this,
        char a2)
{
  *(_QWORD *)this = &CTopLevelAtlasedRectsVisual::`vftable';
  CAtlasedRectsVisual::~CAtlasedRectsVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x120uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CTopLevelAtlasedRectsVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
