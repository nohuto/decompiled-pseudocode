/*
 * XREFs of ??1CKMAdapterHandle@@QEAA@XZ @ 0x180226C1C
 * Callers:
 *     ?DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ @ 0x1801BD400 (-DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1802232EC (--1CD3DDevice@@MEAA@XZ.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAXXZ @ 0x1802330FC (-OnSwapChainCreated@COverlayContext@@QEAAXXZ.c)
 *     ?GetAdapterInfo@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAUDXGI_ADAPTER_DESC@@@Z @ 0x1802BD1C0 (-GetAdapterInfo@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVE.c)
 * Callees:
 *     <none>
 */

void __fastcall CKMAdapterHandle::~CKMAdapterHandle(CKMAdapterHandle *this)
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)this )
  {
    v1 = *(_DWORD *)this;
    D3DKMTCloseAdapter(&v1);
  }
}
