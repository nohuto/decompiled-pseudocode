/*
 * XREFs of ??_ECGlobalLightSet@@EEAAPEAXI@Z @ 0x1800C0E40
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CGlobalLightSet@@EEAA@XZ @ 0x1800C0D2C (--1CGlobalLightSet@@EEAA@XZ.c)
 */

CGlobalLightSet *__fastcall CGlobalLightSet::`vector deleting destructor'(CGlobalLightSet *this, char a2)
{
  CGlobalLightSet::~CGlobalLightSet(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CGlobalLightSet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
