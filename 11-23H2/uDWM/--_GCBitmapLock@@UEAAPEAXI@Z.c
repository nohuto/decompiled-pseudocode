/*
 * XREFs of ??_GCBitmapLock@@UEAAPEAXI@Z @ 0x180059DC0
 * Callers:
 *     ??_ECBitmapLock@@WBA@EAAPEAXI@Z @ 0x180066A00 (--_ECBitmapLock@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CBitmapLock@@UEAA@XZ @ 0x18005AB1C (--1CBitmapLock@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

CBitmapLock *__fastcall CBitmapLock::`scalar deleting destructor'(CBitmapLock *this, char a2)
{
  CBitmapLock::~CBitmapLock(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CBitmapLock *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
