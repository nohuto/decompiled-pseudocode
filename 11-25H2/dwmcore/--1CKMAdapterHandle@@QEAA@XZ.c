/*
 * XREFs of ??1CKMAdapterHandle@@QEAA@XZ @ 0x1802326FC
 * Callers:
 *     ?DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ @ 0x1801B3214 (-DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x18022EA8C (--1CD3DDevice@@MEAA@XZ.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAXXZ @ 0x180239FE4 (-OnSwapChainCreated@COverlayContext@@QEAAXXZ.c)
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
