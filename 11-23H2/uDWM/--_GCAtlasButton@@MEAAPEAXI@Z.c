/*
 * XREFs of ??_GCAtlasButton@@MEAAPEAXI@Z @ 0x180037260
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585CC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CAtlasButton *__fastcall CAtlasButton::`scalar deleting destructor'(CAtlasButton *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &CAtlasButton::`vftable';
  v4 = *((_QWORD *)this + 16);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
    *((_QWORD *)this + 16) = 0LL;
  }
  *(_QWORD *)this = &CAtlasedImage::`vftable';
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
    *((_QWORD *)this + 9) = 0LL;
  }
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
    *((_QWORD *)this + 11) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x98uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CAtlasButton *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
