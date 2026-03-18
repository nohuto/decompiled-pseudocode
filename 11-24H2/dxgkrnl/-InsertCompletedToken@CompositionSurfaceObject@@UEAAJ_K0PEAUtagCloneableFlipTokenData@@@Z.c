/*
 * XREFs of ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x14009CC00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x14001A800 (DxgkGetSessionTokenManager.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x14001EAC8 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x14001EC7C (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x14002F6E0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x14009BC6C (-CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEA.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionSurfaceObject::InsertCompletedToken(
        CompositionSurfaceObject *this,
        __int64 a2,
        unsigned __int64 a3,
        struct tagCloneableFlipTokenData *a4)
{
  int Buffer; // edi
  struct CCompositionBuffer *v8; // rsi
  struct CCompositionBuffer *v9; // rcx
  struct CFlipExBuffer *v10; // rax
  struct CCompositionBuffer *v11; // rbx
  struct CCompositionBuffer *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  Buffer = CFlipToken::CreateCloned(a2, a3, (CompositionSurfaceObject *)((char *)this - 32), a4, &v13);
  if ( Buffer < 0 )
  {
    CompositionSurfaceObject::SignalGpuFence((CompositionSurfaceObject *)((char *)this - 32), a2, a3, 1);
  }
  else
  {
    v8 = v13;
    Buffer = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 16));
    v9 = v8;
    if ( Buffer < 0 )
      goto LABEL_9;
    v13 = 0LL;
    Buffer = CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 8), a2, &v13);
    if ( Buffer >= 0 )
    {
      v10 = CFlipExBuffer::FromBuffer((unsigned __int64)v13);
      if ( a3 )
        *((_QWORD *)v10 + 46) = a3;
    }
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 16));
    v9 = v8;
    if ( Buffer < 0 )
      goto LABEL_9;
    v13 = 0LL;
    Buffer = DxgkGetSessionTokenManager(&v13);
    v9 = v8;
    if ( Buffer < 0
      || (v11 = v13,
          (*(void (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v13 + 16LL))(v13),
          Buffer = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, struct CCompositionBuffer *))(*(_QWORD *)v11 + 200LL))(
                     v11,
                     v8),
          (*(void (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v11 + 24LL))(v11),
          (*(void (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v11 + 8LL))(v11),
          v9 = v8,
          Buffer < 0) )
    {
LABEL_9:
      if ( v9 )
        (**(void (__fastcall ***)(struct CCompositionBuffer *, __int64))v9)(v9, 1LL);
    }
  }
  return (unsigned int)Buffer;
}
