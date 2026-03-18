/*
 * XREFs of ?Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z @ 0x18021F384
 * Callers:
 *     ?Initialize@CKMAdapterHandle@@QEAAJPEAUIDXGIAdapter@@@Z @ 0x1801BD8F0 (-Initialize@CKMAdapterHandle@@QEAAJPEAUIDXGIAdapter@@@Z.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAXXZ @ 0x1802330FC (-OnSwapChainCreated@COverlayContext@@QEAAXXZ.c)
 *     ?GetAdapterInfo@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAUDXGI_ADAPTER_DESC@@@Z @ 0x1802BD1C0 (-GetAdapterInfo@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CKMAdapterHandle::Initialize(CKMAdapterHandle *this, struct _LUID a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  struct _LUID v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v6 = a2;
  v3 = 0;
  v7 = 0;
  v4 = D3DKMTOpenAdapterFromLuid(&v6);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4 | 0x10000000, 0x32u, 0LL);
  }
  else
  {
    *(_DWORD *)this = v7;
  }
  return v3;
}
