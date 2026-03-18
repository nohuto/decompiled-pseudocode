/*
 * XREFs of ?DelayUnpinResources@CD3DDevice@@QEAAXV?$span@PEAVISwapChainRealization@@$0?0@gsl@@U_LUID@@II@Z @ 0x1802BA004
 * Callers:
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1801DF230 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCDelayUnpin@CD3DDevice@@_K0@Z @ 0x180245214 (-reserve_region@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@.c)
 *     ??0CDelayUnpin@CD3DDevice@@QEAA@PEAVIOverlayPlaneResource@@U_LUID@@II@Z @ 0x180245594 (--0CDelayUnpin@CD3DDevice@@QEAA@PEAVIOverlayPlaneResource@@U_LUID@@II@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _LUID *__fastcall CD3DDevice::DelayUnpinResources(
        __int64 a1,
        _QWORD *a2,
        struct _LUID a3,
        DWORD a4,
        unsigned int a5)
{
  __int64 *v5; // rdi
  struct _LUID *result; // rax
  __int64 *i; // rsi
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // r8
  struct _LUID *v14; // rax

  v5 = (__int64 *)a2[1];
  result = (struct _LUID *)*a2;
  for ( i = &v5[*a2]; v5 != i; ++v5 )
  {
    v11 = *v5;
    v12 = *v5 + 16;
    result = (struct _LUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12);
    if ( (_BYTE)result )
    {
      v14 = (struct _LUID *)detail::vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>::reserve_region(
                              (__int64 *)(a1 + 1216),
                              0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 1224) - *(_QWORD *)(a1 + 1216)) >> 3),
                              v13);
      result = CD3DDevice::CDelayUnpin::CDelayUnpin(
                 v14,
                 (struct IOverlayPlaneResource *)(v12 & -(__int64)(v11 != 0)),
                 a3,
                 a4,
                 a5);
    }
  }
  return result;
}
