/*
 * XREFs of ?GetAdapterInfo@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAUDXGI_ADAPTER_DESC@@@Z @ 0x18024A298
 * Callers:
 *     ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z @ 0x1801981D4 (-CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z @ 0x18022A814 (-Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wil@@QEAA_NXZ @ 0x18024A5F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wi.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::GetAdapterInfo(
        struct IDXGIAdapter *a1,
        bool *a2,
        enum D3D_FEATURE_LEVEL *a3,
        enum _QAI_DRIVERVERSION *a4,
        union _LARGE_INTEGER *a5,
        struct DXGI_ADAPTER_DESC *a6)
{
  struct DXGI_ADAPTER_DESC *v7; // r14
  enum D3D_FEATURE_LEVEL v10; // edi
  struct IDXGIAdapterVtbl *lpVtbl; // rax
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // esi
  __int64 v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  int v26; // eax
  int v27; // eax
  int v28; // r9d
  bool v29; // al
  enum _QAI_DRIVERVERSION *v30; // rcx
  int v31; // eax
  unsigned int v33; // [rsp+20h] [rbp-E0h]
  unsigned int v34; // [rsp+30h] [rbp-D0h] BYREF
  int v35; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v36; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B0h]
  enum _QAI_DRIVERVERSION *v39; // [rsp+58h] [rbp-A8h]
  union _LARGE_INTEGER *v40; // [rsp+60h] [rbp-A0h]
  _BYTE v41[256]; // [rsp+70h] [rbp-90h] BYREF
  int v42; // [rsp+170h] [rbp+70h]
  struct _LUID v43; // [rsp+198h] [rbp+98h]

  v7 = a6;
  v36 = 0LL;
  v40 = a5;
  v39 = a4;
  v38 = 0LL;
  v35 = 1000;
  v10 = D3D_FEATURE_LEVEL_9_1;
  v37 = 0LL;
  memset_0(v41, 0, 0x130uLL);
  lpVtbl = a1->lpVtbl;
  v12 = 0;
  v34 = 0;
  v13 = ((__int64 (__fastcall *)(struct IDXGIAdapter *, _BYTE *))lpVtbl->GetDesc)(a1, v41);
  v14 = v13;
  if ( v13 < 0 )
  {
    v28 = v13;
    v33 = 90;
    goto LABEL_35;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::GetImpl'::`2'::impl)
    && a6 )
  {
    v15 = 2LL;
    v16 = v41;
    do
    {
      v17 = v16[1];
      *(_OWORD *)v7->Description = *v16;
      v18 = v16[2];
      *(_OWORD *)&v7->Description[8] = v17;
      v19 = v16[3];
      *(_OWORD *)&v7->Description[16] = v18;
      v20 = v16[4];
      *(_OWORD *)&v7->Description[24] = v19;
      v21 = v16[5];
      *(_OWORD *)&v7->Description[32] = v20;
      v22 = v16[6];
      *(_OWORD *)&v7->Description[40] = v21;
      v23 = v16[7];
      v16 += 8;
      *(_OWORD *)&v7->Description[48] = v22;
      v7 = (struct DXGI_ADAPTER_DESC *)((char *)v7 + 128);
      *(_OWORD *)&v7[-1].SharedSystemMemory = v23;
      --v15;
    }
    while ( v15 );
    v24 = v16[1];
    *(_OWORD *)v7->Description = *v16;
    v25 = v16[2];
    *(_OWORD *)&v7->Description[8] = v24;
    *(_OWORD *)&v7->Description[16] = v25;
  }
  v26 = CKMAdapterHandle::Initialize((CKMAdapterHandle *)&v34, v43);
  v14 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x64u, 0LL);
    v12 = v34;
    goto LABEL_36;
  }
  v12 = v34;
  *((_QWORD *)&v37 + 1) = &v35;
  *(_QWORD *)&v37 = v34 | 0xD00000000LL;
  LODWORD(v38) = 4;
  v27 = D3DKMTQueryAdapterInfo(&v37);
  if ( v27 < 0 )
  {
    v33 = 107;
LABEL_10:
    v14 = v27 | 0x10000000;
    v28 = v27 | 0x10000000;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, v33, 0LL);
    goto LABEL_36;
  }
  if ( v35 < 2000 )
  {
    v29 = 0;
  }
  else
  {
    v34 = 0;
    *((_QWORD *)&v37 + 1) = &v34;
    *(_QWORD *)&v37 = v12 | 0xF00000000LL;
    LODWORD(v38) = 4;
    v27 = D3DKMTQueryAdapterInfo(&v37);
    if ( v27 < 0 )
    {
      v33 = 120;
      goto LABEL_10;
    }
    v29 = (v34 & 0x20) != 0;
  }
  *a2 = v29;
  if ( ((int (__fastcall *)(struct IDXGIAdapter *, GUID *, __int64 *))a1->lpVtbl->CheckInterfaceSupport)(
         a1,
         &GUID_9b7e4c8f_342c_4106_a19f_4f2704f689f0,
         &v36) < 0 )
  {
    if ( ((int (__fastcall *)(struct IDXGIAdapter *, GUID *, __int64 *))a1->lpVtbl->CheckInterfaceSupport)(
           a1,
           &GUID_9b7e4c0f_342c_4106_a19f_4f2704f689f0,
           &v36) < 0 )
    {
      v36 = 0LL;
      goto LABEL_29;
    }
    v10 = D3D_FEATURE_LEVEL_10_0;
    if ( v42 == 4318 && v36 <= 0x7000F000B18E1LL )
      v10 = D3D_FEATURE_LEVEL_9_3;
    if ( (unsigned int)v10 < D3D_FEATURE_LEVEL_10_0 )
      goto LABEL_30;
  }
  else
  {
    v10 = D3D_FEATURE_LEVEL_12_1;
  }
  if ( !CCommonRegistryData::m_fForce10Level9 )
  {
    if ( v35 < 1105 && !CCommonRegistryData::m_fForce10OnWDDM1_0 )
      v10 = D3D_FEATURE_LEVEL_9_3;
    goto LABEL_30;
  }
LABEL_29:
  v10 = D3D_FEATURE_LEVEL_9_3;
LABEL_30:
  if ( CCommonRegistryData::MaxD3DFeatureLevel >= 37120 && CCommonRegistryData::MaxD3DFeatureLevel < v10 )
    v10 = CCommonRegistryData::MaxD3DFeatureLevel;
LABEL_36:
  v30 = v39;
  v31 = v35;
  *a3 = v10;
  *(_DWORD *)v30 = v31;
  v40->QuadPart = v36;
  if ( v12 )
  {
    v34 = v12;
    D3DKMTCloseAdapter(&v34);
  }
  return v14;
}
