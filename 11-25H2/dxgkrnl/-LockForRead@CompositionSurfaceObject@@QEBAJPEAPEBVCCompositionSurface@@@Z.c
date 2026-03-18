/*
 * XREFs of ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x140038720
 * Callers:
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x140043960 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtOpenCompositionSurfaceRealizationInfo @ 0x140045760 (NtOpenCompositionSurfaceRealizationInfo.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x140047360 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtQueryCompositionSurfaceBinding @ 0x140047970 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x14009A510 (NtOpenCompositionSurfaceSectionInfo.c)
 *     ?Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z @ 0x14009E32C (-Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z.c)
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
