/*
 * XREFs of ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140018D84
 * Callers:
 *     NtUnBindCompositionSurface @ 0x140019EB0 (NtUnBindCompositionSurface.c)
 *     ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001BDDC (-NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtNotifyPresentToCompositionSurface @ 0x140028FC0 (NtNotifyPresentToCompositionSurface.c)
 *     NtQueryCompositionSurfaceFrameRate @ 0x140037EC0 (NtQueryCompositionSurfaceFrameRate.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x140043640 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x140043E20 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtBindCompositionSurface @ 0x1400442C0 (NtBindCompositionSurface.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1400450D0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtOpenCompositionSurfaceRealizationInfo @ 0x1400453C0 (NtOpenCompositionSurfaceRealizationInfo.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x140046D80 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1400472D0 (NtQueryCompositionSurfaceBinding.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1400480B0 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1400537D0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x140062654 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 *     NtConfirmCompositionSurfaceIndependentFlipEntry @ 0x14009C4E0 (NtConfirmCompositionSurfaceIndependentFlipEntry.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x14009C660 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x14009C870 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x14009C980 (NtSetCompositionSurfaceStatistics.c)
 *     ?Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z @ 0x1400A068C (-Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z.c)
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
