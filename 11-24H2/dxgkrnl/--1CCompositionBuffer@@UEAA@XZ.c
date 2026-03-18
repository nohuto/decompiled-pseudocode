/*
 * XREFs of ??1CCompositionBuffer@@UEAA@XZ @ 0x14001F678
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x14001F5B8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ??_GCCompositionBuffer@@UEAAPEAXI@Z @ 0x14009D1D0 (--_GCCompositionBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ @ 0x14001F6B4 (-RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
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
