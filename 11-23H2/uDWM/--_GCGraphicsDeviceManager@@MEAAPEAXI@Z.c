/*
 * XREFs of ??_GCGraphicsDeviceManager@@MEAAPEAXI@Z @ 0x1800C1550
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CGraphicsDeviceManager@@MEAA@XZ @ 0x1800C14C8 (--1CGraphicsDeviceManager@@MEAA@XZ.c)
 */

CGraphicsDeviceManager *__fastcall CGraphicsDeviceManager::`scalar deleting destructor'(
        CGraphicsDeviceManager *this,
        char a2)
{
  CGraphicsDeviceManager::~CGraphicsDeviceManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CGraphicsDeviceManager *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
