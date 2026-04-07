/*
 * XREFs of ??_GCLivePreview@@MEAAPEAXI@Z @ 0x1800C6190
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x1800C5FD0 (--1CLivePreview@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CLivePreview::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CLivePreview::~CLivePreview(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
