/*
 * XREFs of ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x18002CC60
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18002CA40 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x1801E7150 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::HaveOverlayCandidatesChanged(COverlayContext *this)
{
  char v1; // bp
  __int64 v3; // r10
  unsigned __int64 v4; // rcx
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8

  v1 = 0;
  if ( *((_BYTE *)this + 19778) )
  {
    v1 = 1;
    *((_BYTE *)this + 19778) = 0;
  }
  v3 = *((_QWORD *)this + 11);
  v4 = 0x8F5C28F5C28F5C29uLL * ((*((_QWORD *)this + 12) - v3) >> 4);
  if ( v4 != 0x8F5C28F5C28F5C29uLL * ((__int64)(*((_QWORD *)this + 815) - *((_QWORD *)this + 814)) >> 4)
    || *((_BYTE *)this + 19775) != *((_BYTE *)this + 19776) )
  {
    return 1;
  }
  v6 = 0;
  if ( !(_DWORD)v4 )
    return v1;
  while ( 1 )
  {
    v7 = 400LL * v6;
    COverlayContext::ComparePlaneAttributes(
      (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v7 + v3 + 32),
      (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v7 + *((_QWORD *)this + 814) + 32LL),
      (bool *)(v7 + v3 + 369),
      (bool *)(v7 + v3 + 370));
    v8 = *((_QWORD *)this + 11);
    if ( *(_BYTE *)(v8 + v7 + 369) )
      break;
    v9 = *((_QWORD *)this + 814);
    if ( *(_QWORD *)(v8 + v7 + 16) != *(_QWORD *)(v9 + v7 + 16)
      || *(_QWORD *)(v8 + v7 + 24) != *(_QWORD *)(v9 + v7 + 24)
      || *(_BYTE *)(v8 + v7 + 365) != *(_BYTE *)(v9 + v7 + 365)
      || *(float *)(v8 + v7 + 144) != *(float *)(v9 + v7 + 144)
      || *(float *)(v8 + v7 + 148) != *(float *)(v9 + v7 + 148)
      || *(float *)(v8 + v7 + 152) != *(float *)(v9 + v7 + 152)
      || *(float *)(v8 + v7 + 156) != *(float *)(v9 + v7 + 156)
      || (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl)
      && *(_QWORD *)(400LL * v6 + *((_QWORD *)this + 11) + 352) != *(_QWORD *)(400LL * v6 + *((_QWORD *)this + 814) + 352) )
    {
      break;
    }
    v10 = *((_QWORD *)this + 814);
    v11 = *((_QWORD *)this + 11);
    v12 = 400LL * v6;
    if ( *(_DWORD *)(v12 + v11 + 228) != *(_DWORD *)(v12 + v10 + 228)
      || *(_DWORD *)(v12 + v11 + 232) != *(_DWORD *)(v12 + v10 + 232)
      || *(_DWORD *)(v12 + v11 + 236) != *(_DWORD *)(v12 + v10 + 236)
      || *(_DWORD *)(v12 + v11 + 240) != *(_DWORD *)(v12 + v10 + 240)
      || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + v11 + 16) + 120LL))(*(_QWORD *)(v12 + v11 + 16))
      && *(_DWORD *)(400LL * v6 + *((_QWORD *)this + 814) + 376) != *(_DWORD *)(400LL * v6 + *((_QWORD *)this + 11) + 376) )
    {
      break;
    }
    v3 = *((_QWORD *)this + 11);
    if ( ++v6 >= -1030792151 * (unsigned int)((*((_QWORD *)this + 12) - v3) >> 4) )
      return v1;
  }
  return 1;
}
