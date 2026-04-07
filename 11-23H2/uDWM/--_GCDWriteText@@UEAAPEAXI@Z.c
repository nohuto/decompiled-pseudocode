/*
 * XREFs of ??_GCDWriteText@@UEAAPEAXI@Z @ 0x180030790
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDWriteText@@UEAA@XZ @ 0x18003082C (--1CDWriteText@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CDWriteText *__fastcall CDWriteText::`scalar deleting destructor'(CDWriteText *this, char a2)
{
  CDWriteText::~CDWriteText(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x218uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDWriteText *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
