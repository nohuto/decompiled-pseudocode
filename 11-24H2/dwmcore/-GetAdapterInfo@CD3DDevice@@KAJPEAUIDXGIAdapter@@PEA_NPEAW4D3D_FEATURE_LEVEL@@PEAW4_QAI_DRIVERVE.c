/*
 * XREFs of ?GetAdapterInfo@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAUDXGI_ADAPTER_DESC@@@Z @ 0x1802BD1C0
 * Callers:
 *     ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z @ 0x1801DEB7C (-CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z @ 0x18021F384 (-Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z.c)
 *     ??1CKMAdapterHandle@@QEAA@XZ @ 0x180226C1C (--1CKMAdapterHandle@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::GetAdapterInfo(
        struct IDXGIAdapter *a1,
        bool *a2,
        enum D3D_FEATURE_LEVEL *a3,
        enum _QAI_DRIVERVERSION *a4,
        union _LARGE_INTEGER *a5,
        struct DXGI_ADAPTER_DESC *a6)
{
  struct DXGI_ADAPTER_DESC *v7; // rbx
  enum D3D_FEATURE_LEVEL v11; // edi
  struct IDXGIAdapterVtbl *lpVtbl; // rax
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
  unsigned int v26; // ebx
  int v27; // eax
  int v28; // r9d
  int v29; // eax
  bool v30; // al
  int v31; // eax
  LONGLONG *v32; // rcx
  unsigned int v34; // [rsp+20h] [rbp-E0h]
  int v35; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v36; // [rsp+34h] [rbp-CCh] BYREF
  int v37; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v39; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A8h]
  union _LARGE_INTEGER *v41; // [rsp+60h] [rbp-A0h]
  _BYTE v42[256]; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+170h] [rbp+70h]
  struct _LUID v44; // [rsp+198h] [rbp+98h]

  v7 = a6;
  v38 = 0LL;
  v41 = a5;
  v35 = 1000;
  v40 = 0LL;
  v11 = D3D_FEATURE_LEVEL_9_1;
  v39 = 0LL;
  memset_0(v42, 0, 0x130uLL);
  lpVtbl = a1->lpVtbl;
  v36 = 0;
  v13 = ((__int64 (__fastcall *)(struct IDXGIAdapter *, _BYTE *))lpVtbl->GetDesc)(a1, v42);
  v14 = v13;
  if ( v13 < 0 )
  {
    v34 = 90;
    goto LABEL_34;
  }
  if ( a6 )
  {
    v15 = 2LL;
    v16 = v42;
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
  v13 = CKMAdapterHandle::Initialize((CKMAdapterHandle *)&v36, v44);
  v14 = v13;
  if ( v13 < 0 )
  {
    v34 = 97;
LABEL_34:
    v28 = v13;
    goto LABEL_35;
  }
  v26 = v36;
  *((_QWORD *)&v39 + 1) = &v35;
  *(_QWORD *)&v39 = v36 | 0xD00000000LL;
  LODWORD(v40) = 4;
  v27 = D3DKMTQueryAdapterInfo(&v39);
  if ( v27 < 0 )
  {
    v14 = v27 | 0x10000000;
    v34 = 104;
LABEL_9:
    v28 = v14;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, v34, 0LL);
    goto LABEL_36;
  }
  if ( v35 < 2000 )
  {
    v30 = 0;
  }
  else
  {
    v37 = 0;
    *((_QWORD *)&v39 + 1) = &v37;
    *(_QWORD *)&v39 = v26 | 0xF00000000LL;
    LODWORD(v40) = 4;
    v29 = D3DKMTQueryAdapterInfo(&v39);
    if ( v29 < 0 )
    {
      v14 = v29 | 0x10000000;
      v34 = 117;
      goto LABEL_9;
    }
    v30 = (v37 & 0x20) != 0;
  }
  *a2 = v30;
  if ( ((int (__fastcall *)(struct IDXGIAdapter *, GUID *, __int64 *))a1->lpVtbl->CheckInterfaceSupport)(
         a1,
         &GUID_9b7e4c8f_342c_4106_a19f_4f2704f689f0,
         &v38) < 0 )
  {
    if ( ((int (__fastcall *)(struct IDXGIAdapter *, GUID *, __int64 *))a1->lpVtbl->CheckInterfaceSupport)(
           a1,
           &GUID_9b7e4c0f_342c_4106_a19f_4f2704f689f0,
           &v38) < 0 )
    {
      v38 = 0LL;
      goto LABEL_28;
    }
    v11 = D3D_FEATURE_LEVEL_10_0;
    if ( v43 == 4318 && v38 <= 0x7000F000B18E1LL )
      v11 = D3D_FEATURE_LEVEL_9_3;
    if ( (unsigned int)v11 < D3D_FEATURE_LEVEL_10_0 )
      goto LABEL_29;
  }
  else
  {
    v11 = D3D_FEATURE_LEVEL_12_1;
  }
  if ( !CCommonRegistryData::m_fForce10Level9 )
  {
    if ( v35 < 1105 && !CCommonRegistryData::m_fForce10OnWDDM1_0 )
      v11 = D3D_FEATURE_LEVEL_9_3;
    goto LABEL_29;
  }
LABEL_28:
  v11 = D3D_FEATURE_LEVEL_9_3;
LABEL_29:
  if ( CCommonRegistryData::MaxD3DFeatureLevel >= 37120 && CCommonRegistryData::MaxD3DFeatureLevel < v11 )
    v11 = CCommonRegistryData::MaxD3DFeatureLevel;
LABEL_36:
  v31 = v35;
  v32 = (LONGLONG *)v41;
  *a3 = v11;
  *(_DWORD *)a4 = v31;
  *v32 = v38;
  CKMAdapterHandle::~CKMAdapterHandle((CKMAdapterHandle *)&v36);
  return v14;
}
