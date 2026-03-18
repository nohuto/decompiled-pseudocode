/*
 * XREFs of ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x18005F2E0
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18005F0C0 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x1801DBBE4 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::HaveOverlayCandidatesChanged(COverlayContext *this)
{
  char v1; // bp
  __int64 v3; // r10
  __int64 v4; // rcx
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8

  v1 = 0;
  if ( *((_BYTE *)this + 19588) )
  {
    v1 = 1;
    *((_BYTE *)this + 19588) = 0;
  }
  v3 = *((_QWORD *)this + 11);
  v4 = 0x7D6343EB1A1F58D1LL * ((*((_QWORD *)this + 12) - v3) >> 3);
  if ( v4 != 0x7D6343EB1A1F58D1LL * ((__int64)(*((_QWORD *)this + 799) - *((_QWORD *)this + 798)) >> 3)
    || *((_BYTE *)this + 19585) != *((_BYTE *)this + 19586) )
  {
    return 1;
  }
  v6 = 0;
  if ( !(_DWORD)v4 )
    return v1;
  while ( 1 )
  {
    v7 = 392LL * v6;
    COverlayContext::ComparePlaneAttributes(
      (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v7 + v3 + 32),
      (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v7 + *((_QWORD *)this + 798) + 32LL),
      (bool *)(v7 + v3 + 368),
      (bool *)(v7 + v3 + 369));
    v8 = *((_QWORD *)this + 11);
    if ( *(_BYTE *)(v8 + v7 + 368) )
      break;
    v9 = *((_QWORD *)this + 798);
    if ( *(_QWORD *)(v8 + v7 + 16) != *(_QWORD *)(v9 + v7 + 16)
      || *(_QWORD *)(v8 + v7 + 24) != *(_QWORD *)(v9 + v7 + 24)
      || *(_BYTE *)(v8 + v7 + 365) != *(_BYTE *)(v9 + v7 + 365)
      || *(float *)(v8 + v7 + 144) != *(float *)(v9 + v7 + 144)
      || *(float *)(v8 + v7 + 148) != *(float *)(v9 + v7 + 148)
      || *(float *)(v8 + v7 + 152) != *(float *)(v9 + v7 + 152)
      || *(float *)(v8 + v7 + 156) != *(float *)(v9 + v7 + 156)
      || (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl)
      && *(_QWORD *)(392LL * v6 + *((_QWORD *)this + 11) + 352) != *(_QWORD *)(392LL * v6 + *((_QWORD *)this + 798) + 352) )
    {
      break;
    }
    v10 = *((_QWORD *)this + 798);
    v11 = *((_QWORD *)this + 11);
    v12 = 392LL * v6;
    if ( *(_DWORD *)(v12 + v11 + 228) != *(_DWORD *)(v12 + v10 + 228)
      || *(_DWORD *)(v12 + v11 + 232) != *(_DWORD *)(v12 + v10 + 232)
      || *(_DWORD *)(v12 + v11 + 236) != *(_DWORD *)(v12 + v10 + 236)
      || *(_DWORD *)(v12 + v11 + 240) != *(_DWORD *)(v12 + v10 + 240)
      || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + v11 + 16) + 120LL))(*(_QWORD *)(v12 + v11 + 16))
      && *(_DWORD *)(392LL * v6 + *((_QWORD *)this + 798) + 372) != *(_DWORD *)(392LL * v6 + *((_QWORD *)this + 11) + 372) )
    {
      break;
    }
    v3 = *((_QWORD *)this + 11);
    if ( ++v6 >= 438261969 * (unsigned int)((*((_QWORD *)this + 12) - v3) >> 3) )
      return v1;
  }
  return 1;
}
