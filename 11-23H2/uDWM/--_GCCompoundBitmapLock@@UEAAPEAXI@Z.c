/*
 * XREFs of ??_GCCompoundBitmapLock@@UEAAPEAXI@Z @ 0x180059D60
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CCompoundBitmapLock@@UEAA@XZ @ 0x18005A9E4 (--1CCompoundBitmapLock@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

CCompoundBitmapLock *__fastcall CCompoundBitmapLock::`scalar deleting destructor'(CCompoundBitmapLock *this, char a2)
{
  CCompoundBitmapLock::~CCompoundBitmapLock(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CCompoundBitmapLock *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
