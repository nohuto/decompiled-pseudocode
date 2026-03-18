/*
 * XREFs of ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1400383AC
 * Callers:
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x140043640 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtOpenCompositionSurfaceRealizationInfo @ 0x1400453C0 (NtOpenCompositionSurfaceRealizationInfo.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x140046D80 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1400472D0 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x14009C660 (NtOpenCompositionSurfaceSectionInfo.c)
 *     ?Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z @ 0x1400A068C (-Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompositionSurfaceObject::LockForRead(
        CompositionSurfaceObject *this,
        const struct CCompositionSurface **a2)
{
  NTSTATUS v4; // r8d

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(this, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)this + 48, 0LL);
    v4 = 0;
    *a2 = (CompositionSurfaceObject *)((char *)this + 40);
  }
  return (unsigned int)v4;
}
