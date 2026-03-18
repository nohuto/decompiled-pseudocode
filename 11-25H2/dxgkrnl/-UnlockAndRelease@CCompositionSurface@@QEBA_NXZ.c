/*
 * XREFs of ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140009854
 * Callers:
 *     NtUnBindCompositionSurface @ 0x14000A980 (NtUnBindCompositionSurface.c)
 *     ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14000C8FC (-NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtNotifyPresentToCompositionSurface @ 0x140026A70 (NtNotifyPresentToCompositionSurface.c)
 *     NtQueryCompositionSurfaceFrameRate @ 0x140038230 (NtQueryCompositionSurfaceFrameRate.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x140043960 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x140044140 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtBindCompositionSurface @ 0x1400445E0 (NtBindCompositionSurface.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1400453F0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtOpenCompositionSurfaceRealizationInfo @ 0x140045760 (NtOpenCompositionSurfaceRealizationInfo.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x140047360 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtQueryCompositionSurfaceBinding @ 0x140047970 (NtQueryCompositionSurfaceBinding.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x140048880 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x140053B20 (NtSetCompositionSurfaceDirectFlipState.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x140061D60 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 *     NtConfirmCompositionSurfaceIndependentFlipEntry @ 0x14009A390 (NtConfirmCompositionSurfaceIndependentFlipEntry.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x14009A510 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x14009A720 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x14009A830 (NtSetCompositionSurfaceStatistics.c)
 *     ?Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z @ 0x14009E32C (-Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurface::UnlockAndRelease(CCompositionSurface *this)
{
  HANDLE CurrentThreadId; // rax
  char *v3; // rcx

  CurrentThreadId = PsGetCurrentThreadId();
  v3 = (char *)this + 8;
  if ( CurrentThreadId == *((HANDLE *)this + 2) )
  {
    *((_QWORD *)this + 2) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v3, 0LL);
  }
  KeLeaveCriticalRegion();
  return ObfDereferenceObject((char *)this - 40) == 0;
}
