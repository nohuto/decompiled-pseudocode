/*
 * XREFs of ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z @ 0x180102480
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180101448 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800320D0 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1801025B0 (-IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1801D096C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned __int16 *v8; // rax

  if ( CGlobalCompositionSurfaceInfo::IsSwapChain(*(CGlobalCompositionSurfaceInfo **)this) && !*((_QWORD *)this + 36) )
  {
    v4 = *((_QWORD *)this + 12);
    if ( !v4 )
      v4 = **((_QWORD **)this + 9);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 120LL))(v4) == 1 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( a2[v5] );
      v6 = v5 + 1;
      if ( v6 > 1 )
      {
        v7 = v6;
        v8 = (unsigned __int16 *)MIDL_user_allocate(saturated_mul(v6, 2uLL));
        *((_QWORD *)this + 36) = v8;
        if ( v8 )
        {
          StringCchCopyW(v8, v7, a2);
          if ( *((_QWORD *)this + 36) )
            *((_QWORD *)this + 28) = CComposition::GetFrameTargetTime(g_pComposition);
        }
      }
    }
  }
}
