/*
 * XREFs of ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x1802CA6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPhysicalBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z @ 0x18002D0F0 (-GetPhysicalBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800615A0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180063EA4 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x1801CCE2C (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     ?GetPhysicalFrontBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@XZ @ 0x1801E8DE0 (-GetPhysicalFrontBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::CopyFrontToBackBuffer(CLegacyStereoSwapChain *this)
{
  struct ISwapChainBuffer *PhysicalBuffer; // rax
  int **v3; // rdi
  struct ISwapChainBuffer *v4; // rax
  __int64 v5; // rsi
  struct ISwapChainBuffer *PhysicalFrontBuffer; // rax
  __int64 v7; // rbp
  int v8; // r8d
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rcx
  FastRegion::Internal::CRgnData *v12; // rcx
  unsigned int v14; // [rsp+50h] [rbp-48h] BYREF
  int v15; // [rsp+54h] [rbp-44h]
  int v16; // [rsp+58h] [rbp-40h]
  int v17; // [rsp+5Ch] [rbp-3Ch]
  char v18[8]; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-30h]
  int *v20; // [rsp+70h] [rbp-28h]
  __int64 v21; // [rsp+78h] [rbp-20h]
  int v22; // [rsp+80h] [rbp-18h]

  PhysicalBuffer = CLegacySwapChain::GetPhysicalBuffer(this, *((_DWORD *)this + 119));
  v3 = (int **)(*(__int64 (__fastcall **)(struct ISwapChainBuffer *))(*(_QWORD *)PhysicalBuffer + 96LL))(PhysicalBuffer);
  if ( **v3 )
  {
    v4 = CLegacySwapChain::GetPhysicalBuffer(this, *((_DWORD *)this + 119));
    v5 = (*(__int64 (__fastcall **)(struct ISwapChainBuffer *))(*(_QWORD *)v4 + 152LL))(v4);
    PhysicalFrontBuffer = CLegacySwapChain::GetPhysicalFrontBuffer(this);
    v7 = (*(__int64 (__fastcall **)(struct ISwapChainBuffer *))(*(_QWORD *)PhysicalFrontBuffer + 152LL))(PhysicalFrontBuffer);
    FastRegion::CRegion::BeginIterator(v3, (__int64)v18);
    while ( (unsigned __int64)v20 < v19 )
    {
      v8 = v20[2];
      v9 = 2 * v22;
      v15 = *v20;
      v17 = v8;
      v10 = *(_DWORD *)(v21 + 4 * v9);
      v16 = *(_DWORD *)(v21 + 4 * v9 + 4);
      v11 = *((_QWORD *)this + 5);
      v14 = v10;
      CD3DDevice::CopySubresourceRegion(v11, v7, 1, (int *)&v14, v5, 1u, v10, v15, 0);
      FastRegion::Internal::CRgnData::StepIterator(v12, (struct FastRegion::CRegion::Iterator *)v18);
    }
  }
  return COverlaySwapChain::CopyFrontToBackBuffer(this);
}
