/*
 * XREFs of ?UnPair@CompositionSurfaceObject@@QEAAJ_N@Z @ 0x140079E68
 * Callers:
 *     NtDxgkVailPromoteCompositionSurface @ 0x140203E90 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14000B474 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x14000F7EC (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1400102F8 (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionSurfaceObject::UnPair(CompositionSurfaceObject *this)
{
  int v2; // ebx
  CompositionSurfaceObject *i; // rbx
  CFlipExBuffer *v4; // rax

  v2 = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 48));
  if ( v2 >= 0 )
  {
    if ( *((_QWORD *)this + 20) )
    {
      for ( i = (CompositionSurfaceObject *)*((_QWORD *)this + 15);
            i != (CompositionSurfaceObject *)((char *)this + 120);
            i = *(CompositionSurfaceObject **)i )
      {
        v4 = CFlipExBuffer::FromBuffer((unsigned __int64)i - 24);
        CFlipExBuffer::DisableCascadedSignaling(v4);
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 16LL))(*((_QWORD *)this + 20));
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 20) + 8LL))(*((_QWORD *)this + 20), 0LL);
      *((_QWORD *)this + 20) = 0LL;
    }
    v2 = 0;
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return (unsigned int)v2;
}
