/*
 * XREFs of ??1?$CTargetDirtyBase@$07@@QEAA@XZ @ 0x1801A9FC0
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1801A885C (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??1CDDARenderTarget@@UEAA@XZ @ 0x1801A9C18 (--1CDDARenderTarget@@UEAA@XZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801A9FEC (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CDDisplayRenderTarget@@MEAA@XZ @ 0x18027F880 (--1CDDisplayRenderTarget@@MEAA@XZ.c)
 *     ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x18027FA30 (--1CRemoteAppRenderTarget@@MEAA@XZ.c)
 *     ??1CRemoteRenderTarget@@UEAA@XZ @ 0x18027FAB0 (--1CRemoteRenderTarget@@UEAA@XZ.c)
 * Callees:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x180083B2C (--1COcclusionContext@@QEAA@XZ.c)
 */

__int64 __fastcall CTargetDirtyBase<8>::~CTargetDirtyBase<8>(__int64 a1)
{
  COcclusionContext::~COcclusionContext((COcclusionContext *)(a1 + 472));
  return std::unique_ptr<CRegion>::~unique_ptr<CRegion>(a1 + 464);
}
