/*
 * XREFs of ?OnSwapChainCreated@COverlayContext@@QEAAXXZ @ 0x1802330FC
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x1802357C0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x180235DA0 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x180284150 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z @ 0x18021F384 (-Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z.c)
 *     ??1CKMAdapterHandle@@QEAA@XZ @ 0x180226C1C (--1CKMAdapterHandle@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180240E28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@QEAA_NXZ @ 0x18025C744 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::OnSwapChainCreated(COverlayContext *this)
{
  __int64 v2; // r15
  __int64 v3; // rdi
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rsi
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // r14
  __int64 v10; // rcx
  char v11; // al
  int v12; // edx
  int v13; // r8d
  int v14; // eax
  int v15; // ecx
  _DWORD *v16; // rax
  unsigned int v17; // edx
  char v18; // dl
  __int64 v19; // rax
  struct _LUID *v20; // rax
  _DWORD v21[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v22; // [rsp+28h] [rbp-18h]
  __int64 v23; // [rsp+30h] [rbp-10h]
  unsigned int v24; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v25; // [rsp+84h] [rbp+44h]
  __int64 v26; // [rsp+88h] [rbp+48h] BYREF
  __int64 v27; // [rsp+90h] [rbp+50h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 280LL))(*(_QWORD *)this);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ComposedFlipPerf>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ComposedFlipPerf>::GetImpl'::`2'::impl) )
  {
    *((_QWORD *)this + 2443) = 0LL;
    *((_QWORD *)this + 2442) = 0LL;
    v5 = *(_QWORD *)this + 8LL;
    *((_BYTE *)this + 19576) = 0;
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 40LL))(v5, &v24);
    v6 = v24 * (unsigned __int64)v25;
    *((_QWORD *)this + 2446) = v6;
    if ( CCommonRegistryData::GameAreaScreenRatio )
    {
      v4 = v6 % (unsigned int)CCommonRegistryData::GameAreaScreenRatio;
      *((_QWORD *)this + 2446) = v6 / (unsigned int)CCommonRegistryData::GameAreaScreenRatio;
    }
    else
    {
      *((_QWORD *)this + 2446) = 0LL;
    }
  }
  v7 = *(_QWORD *)this;
  v27 = 0LL;
  v8 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v7 + 280LL))(
                                                          v7,
                                                          v4);
  v9 = **v8;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v9(v8, &GUID_cf12c0b8_aae0_4ef0_b8e3_97cd3b4d6f91, &v27) >= 0 )
  {
    *((_BYTE *)this + 19577) = 1;
    v11 = 0;
  }
  else
  {
    v10 = *(_QWORD *)this;
    *((_BYTE *)this + 19577) = 0;
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 272LL))(v10);
  }
  *((_BYTE *)this + 19587) = v11;
  v12 = *(_DWORD *)(v3 + 620);
  *((_DWORD *)this + 4880) = v12;
  *((_BYTE *)this + 19579) = 0;
  v13 = *(_DWORD *)(v3 + 896);
  if ( v13 == 32902 )
  {
    if ( *(__int64 *)(v3 + 624) <= 0x140013000F112DLL )
      *((_BYTE *)this + 19578) = 1;
    v16 = &`IsIntelFullDesktopClipRequired'::`2'::s_deviceIds;
    v17 = 0;
    while ( *(_DWORD *)(v3 + 900) != *v16 )
    {
      ++v17;
      ++v16;
      if ( v17 >= 0x2B )
      {
        v18 = 0;
        goto LABEL_22;
      }
    }
    v18 = 1;
LABEL_22:
    v15 = *((_DWORD *)this + 4880);
    v14 = v15;
    *((_BYTE *)this + 19579) = v18;
  }
  else
  {
    v14 = v12;
    v15 = v12;
    if ( v13 == 1297040209 && *(_DWORD *)(v3 + 900) == 1177957426 && *(__int64 *)(v3 + 624) <= 0xB001204360026LL )
      *((_BYTE *)this + 19580) = 1;
  }
  if ( CCommonRegistryData::m_customRefreshRateMode == 1 )
  {
    v14 = v15;
    if ( v15 >= 2200 )
    {
      if ( *(_DWORD *)(v3 + 896) != 32902 || (unsigned __int16)(*(_WORD *)(v3 + 624) - 7011) > 0x139u )
        *((_BYTE *)this + 19583) = 1;
      v14 = v15;
    }
  }
  *(_WORD *)((char *)this + 19581) = 256;
  if ( v14 < 2100 )
  {
    if ( *(_DWORD *)(v3 + 896) == 4098 )
    {
      *((_BYTE *)this + 19581) = 1;
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
        *((_BYTE *)this + 19582) = 0;
    }
  }
  else
  {
    v19 = *(_QWORD *)v2;
    v24 = 0;
    v20 = (struct _LUID *)(*(__int64 (__fastcall **)(__int64, __int64 *))(v19 + 216))(v2, &v26);
    if ( (int)CKMAdapterHandle::Initialize((CKMAdapterHandle *)&v24, *v20) >= 0 )
    {
      v21[0] = v24;
      v22 = &v26;
      v26 = 0LL;
      v23 = 8LL;
      v21[1] = 74;
      if ( (int)D3DKMTQueryAdapterInfo(v21) >= 0 )
      {
        *((_BYTE *)this + 19581) = (v26 & 2) != 0;
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
          *((_BYTE *)this + 19582) = (v26 & 4) == 0;
      }
    }
    CKMAdapterHandle::~CKMAdapterHandle((CKMAdapterHandle *)&v24);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
}
