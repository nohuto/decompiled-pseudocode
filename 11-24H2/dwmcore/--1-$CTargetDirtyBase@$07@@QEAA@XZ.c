/*
 * XREFs of ??1?$CTargetDirtyBase@$07@@QEAA@XZ @ 0x1801E4E90
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1801E4CCC (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??1CDDARenderTarget@@UEAA@XZ @ 0x1801E4DA8 (--1CDDARenderTarget@@UEAA@XZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801E4DFC (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CDDisplayRenderTarget@@MEAA@XZ @ 0x1802750D4 (--1CDDisplayRenderTarget@@MEAA@XZ.c)
 *     ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x1802752E0 (--1CRemoteAppRenderTarget@@MEAA@XZ.c)
 *     ??1CRemoteRenderTarget@@UEAA@XZ @ 0x180275360 (--1CRemoteRenderTarget@@UEAA@XZ.c)
 * Callees:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800F8AFC (--1COcclusionContext@@QEAA@XZ.c)
 */

__int64 __fastcall CTargetDirtyBase<8>::~CTargetDirtyBase<8>(__int64 a1)
{
  COcclusionContext::~COcclusionContext((COcclusionContext *)(a1 + 472));
  return std::unique_ptr<CRegion>::~unique_ptr<CRegion>(a1 + 464);
}
