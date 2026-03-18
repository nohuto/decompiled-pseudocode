/*
 * XREFs of ??1CCompositionBuffer@@UEAA@XZ @ 0x1400101E8
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x140010128 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ??_GCCompositionBuffer@@UEAAPEAXI@Z @ 0x14009AFA0 (--_GCCompositionBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ @ 0x140010224 (-RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionBuffer::~CCompositionBuffer(CCompositionBuffer *this)
{
  void (__fastcall ***v2)(_QWORD); // rcx

  *(_QWORD *)this = &CCompositionBuffer::`vftable';
  CCompositionBuffer::RemoveAllRealizations(this);
  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 37);
  if ( v2 )
    (**v2)(v2);
}
