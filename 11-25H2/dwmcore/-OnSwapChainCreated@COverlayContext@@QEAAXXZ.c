/*
 * XREFs of ?OnSwapChainCreated@COverlayContext@@QEAAXXZ @ 0x180239FE4
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x18023EE50 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x18023F450 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x18028F6F0 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z @ 0x18022A814 (-Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z.c)
 *     ??1CKMAdapterHandle@@QEAA@XZ @ 0x1802326FC (--1CKMAdapterHandle@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CursorScaledByHW@@@details@wil@@QEAA_NXZ @ 0x180277A44 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CursorScaledByHW@@@details@wil@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::OnSwapChainCreated(COverlayContext *this)
{
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rsi
  int (__fastcall *v7)(_QWORD, GUID *, __int64 *); // r14
  __int64 v8; // rcx
  char v9; // al
  int v10; // eax
  __int64 i; // rcx
  char v12; // al
  bool v13; // cc
  __int64 v14; // rax
  struct _LUID *v15; // rax
  _DWORD v16[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v17; // [rsp+28h] [rbp-18h]
  int v18; // [rsp+30h] [rbp-10h]
  int v19; // [rsp+34h] [rbp-Ch]
  int v20; // [rsp+70h] [rbp+30h] BYREF
  __int64 v21; // [rsp+78h] [rbp+38h] BYREF
  __int64 v22; // [rsp+80h] [rbp+40h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 280LL))(*(_QWORD *)this);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
  v4 = *(_QWORD *)this;
  v5 = v3;
  v21 = 0LL;
  v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 280LL))(v4);
  v7 = **v6;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v7(v6, &GUID_cf12c0b8_aae0_4ef0_b8e3_97cd3b4d6f91, &v21) >= 0 )
  {
    *((_BYTE *)this + 19768) = 1;
    v9 = 0;
  }
  else
  {
    v8 = *(_QWORD *)this;
    *((_BYTE *)this + 19768) = 0;
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 272LL))(v8);
  }
  *((_BYTE *)this + 19777) = v9;
  *((_DWORD *)this + 4938) = *(_DWORD *)(v5 + 620);
  *((_BYTE *)this + 19770) = 0;
  v10 = *(_DWORD *)(v5 + 896);
  if ( v10 == 32902 )
  {
    if ( *(__int64 *)(v5 + 624) <= 0x140013000F112DLL )
      *((_BYTE *)this + 19769) = 1;
    for ( i = 0LL; (unsigned int)i < 0x2B; i = (unsigned int)(i + 1) )
    {
      if ( *(_DWORD *)(v5 + 900) == `IsIntelFullDesktopClipRequired'::`2'::s_deviceIds[i] )
      {
        v12 = 1;
        goto LABEL_19;
      }
    }
    v12 = 0;
LABEL_19:
    *((_BYTE *)this + 19770) = v12;
  }
  else if ( v10 == 1297040209 && *(_DWORD *)(v5 + 900) == 1177957426 && *(__int64 *)(v5 + 624) <= 0xB001204360026LL )
  {
    *((_BYTE *)this + 19771) = 1;
  }
  if ( CCommonRegistryData::m_customRefreshRateMode == 1
    && *((int *)this + 4938) >= 2200
    && (*(_DWORD *)(v5 + 896) != 32902 || (unsigned __int16)(*(_WORD *)(v5 + 624) - 7011) > 0x139u) )
  {
    *((_BYTE *)this + 19773) = 1;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CursorScaledByHW>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CursorScaledByHW>::GetImpl'::`2'::impl) )
  {
    v13 = *((_DWORD *)this + 4938) < 2100;
    *((_BYTE *)this + 19772) = 0;
    if ( !v13 )
    {
      v14 = *(_QWORD *)v2;
      v20 = 0;
      v15 = (struct _LUID *)(*(__int64 (__fastcall **)(__int64, __int64 *))(v14 + 216))(v2, &v22);
      if ( (int)CKMAdapterHandle::Initialize((CKMAdapterHandle *)&v20, *v15) >= 0 )
      {
        v22 = 0LL;
        v19 = 0;
        v16[0] = v20;
        v17 = &v22;
        v16[1] = 74;
        v18 = 8;
        if ( (int)D3DKMTQueryAdapterInfo(v16) >= 0 )
          *((_BYTE *)this + 19772) = (v22 & 2) != 0;
      }
      CKMAdapterHandle::~CKMAdapterHandle((CKMAdapterHandle *)&v20);
    }
  }
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
}
