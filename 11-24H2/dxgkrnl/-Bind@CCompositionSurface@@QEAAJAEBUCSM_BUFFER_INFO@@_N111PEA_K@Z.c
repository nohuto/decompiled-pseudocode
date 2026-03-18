/*
 * XREFs of ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z @ 0x1400182C0
 * Callers:
 *     NtBindCompositionSurface @ 0x1400442C0 (NtBindCompositionSurface.c)
 *     ?PairedBind@CompositionSurfaceObject@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x14009CD60 (-PairedBind@CompositionSurfaceObject@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 * Callees:
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x140016F88 (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x14001842C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_NPEAPEAV1@@Z @ 0x140018450 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_NPEAPEAV1@.c)
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z @ 0x140018B8C (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x140018DFC (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x14001ECA8 (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x14009D280 (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 */

__int64 __fastcall CCompositionSurface::Bind(
        CCompositionSurface *this,
        const struct CSM_BUFFER_INFO *a2,
        char a3,
        char a4,
        bool a5,
        bool a6,
        unsigned __int64 *a7)
{
  struct CFlipExBuffer *v7; // rsi
  struct CCompositionBuffer *ActiveBuffer; // rax
  __int64 v12; // rdx
  bool v13; // r8
  __int64 v14; // r10
  bool v15; // bp
  signed int v16; // ebx
  struct CCompositionBuffer *v17; // rbx
  struct CCompositionBuffer *v19; // [rsp+20h] [rbp-28h] BYREF
  struct CFlipExBuffer *v20; // [rsp+50h] [rbp+8h] BYREF

  v19 = 0LL;
  v7 = 0LL;
  v20 = 0LL;
  ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
  v15 = a6;
  v16 = ActiveBuffer != 0LL ? 0xC0000510 : 0;
  if ( (*((_QWORD *)this + 20) || a6) && *(_DWORD *)v12 != 2 )
    return (unsigned int)-1073741790;
  if ( !ActiveBuffer )
  {
    if ( *(_DWORD *)v12 == 1 )
    {
      v16 = CCompositionBuffer::Create(
              (const struct CSM_BUFFER_ATTRIBUTES *)(v14 + 16),
              (const struct CSM_SINGLE_BUFFER_INFO *)(v12 + 160),
              &v19);
      if ( v16 < 0 )
        return (unsigned int)v16;
      v17 = v19;
      goto LABEL_8;
    }
    if ( *(_DWORD *)v12 != 2 )
      return (unsigned int)-1073741811;
    v16 = CFlipExBuffer::Create(
            (const struct CSM_BUFFER_ATTRIBUTES *)(v14 + 16),
            (const struct CSM_SWAPCHAIN_BUFFER_INFO_ *)(v12 + 160),
            v13,
            &v20);
    if ( v16 >= 0 )
    {
      v7 = v20;
      v17 = v20;
LABEL_8:
      if ( a4 )
        *((_BYTE *)v17 + 41) = 1;
      if ( !a3 )
        CCompositionSurface::ReleaseAllBuffers(this);
      v16 = CCompositionSurface::Bind(this, v17, a7);
      if ( v16 >= 0 && v7 )
      {
        if ( *((_QWORD *)this + 20) )
        {
          v16 = CCompositionSurface::PairBind(this, v7);
          if ( v16 < 0 )
            CCompositionSurface::UnBind(this, 0);
        }
        else
        {
          *((_BYTE *)this + 168) = v15;
          *((_BYTE *)v7 + 646) = v15;
        }
      }
    }
  }
  return (unsigned int)v16;
}
