/*
 * XREFs of ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18000BC80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasedImage@@MEAA@XZ @ 0x18000BCDC (--1CAtlasedImage@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CAtlasedImage *__fastcall CAtlasedImage::`vector deleting destructor'(CAtlasedImage *this, char a2)
{
  CAtlasedImage::~CAtlasedImage(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x80uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CAtlasedImage *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
