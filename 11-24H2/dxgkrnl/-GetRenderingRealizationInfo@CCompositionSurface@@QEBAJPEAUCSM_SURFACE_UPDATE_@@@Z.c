/*
 * XREFs of ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x14002C7D0
 * Callers:
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x140043E20 (NtQueryCompositionSurfaceRenderingRealization.c)
 * Callees:
 *     ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x14002D2FC (-GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAUCSM_RGNDATA_@@@Z @ 0x14002D36C (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAUCSM_RGNDATA_@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSurface::GetRenderingRealizationInfo(
        CCompositionSurface *this,
        struct CSM_SURFACE_UPDATE_ *a2)
{
  int v4; // edi
  struct CCompositionBuffer *RenderingBuffer; // rax
  struct CCompositionBuffer *v6; // rbx
  __int64 v7; // rax
  CBufferRealization *v8; // rcx
  CBufferRealization *v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = -1073741823;
  RenderingBuffer = CCompositionSurface::GetRenderingBuffer(this);
  v6 = RenderingBuffer;
  if ( RenderingBuffer )
  {
    v7 = *(_QWORD *)RenderingBuffer;
    v10 = 0LL;
    v4 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, CBufferRealization **))(v7 + 232))(v6, &v10);
    if ( v4 >= 0 )
    {
      *(_DWORD *)a2 = 3
                    - ((*(unsigned __int8 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v6 + 168LL))(v6) != 0);
      v8 = v10;
      *(_QWORD *)((char *)a2 + 4) = *((_QWORD *)this - 2);
      *((_QWORD *)a2 + 2) = *((_QWORD *)v6 + 2);
      *((_DWORD *)a2 + 6) = *((_DWORD *)v8 + 7);
      *((_DWORD *)a2 + 7) = *((_DWORD *)v6 + 73);
      CBufferRealization::OpenLifetimeDirtyRegion(v8, (struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 32));
      *((_DWORD *)a2 + 49) = 0;
      *((_OWORD *)a2 + 14) = *((_OWORD *)v6 + 3);
      *((_OWORD *)a2 + 15) = *((_OWORD *)v6 + 4);
      *((_OWORD *)a2 + 16) = *((_OWORD *)v6 + 5);
      *((_OWORD *)a2 + 17) = *((_OWORD *)v6 + 6);
      *((_OWORD *)a2 + 18) = *((_OWORD *)v6 + 7);
      *((_OWORD *)a2 + 19) = *((_OWORD *)v6 + 8);
      *((_OWORD *)a2 + 20) = *((_OWORD *)v6 + 9);
      *((_OWORD *)a2 + 21) = *((_OWORD *)v6 + 10);
      *((_OWORD *)a2 + 22) = *((_OWORD *)v6 + 11);
      *((_DWORD *)a2 + 92) = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v6 + 192LL))(v6);
      *((_DWORD *)a2 + 93) = *((_DWORD *)v10 + 20);
    }
  }
  else
  {
    *((_QWORD *)a2 + 2) = 0LL;
  }
  return (unsigned int)v4;
}
