/*
 * XREFs of ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x140018EE8
 * Callers:
 *     NtUnBindCompositionSurface @ 0x140019EB0 (NtUnBindCompositionSurface.c)
 *     ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001BDDC (-NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtBindCompositionSurface @ 0x1400442C0 (NtBindCompositionSurface.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1400450D0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1400480B0 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1400537D0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x140062654 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 *     NtConfirmCompositionSurfaceIndependentFlipEntry @ 0x14009C4E0 (NtConfirmCompositionSurfaceIndependentFlipEntry.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x14009C870 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x14009C980 (NtSetCompositionSurfaceStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompositionSurfaceObject::LockForWrite(
        CompositionSurfaceObject *this,
        struct CCompositionSurface **a2)
{
  NTSTATUS v4; // r8d

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(this, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 48, 0LL);
    *((_QWORD *)this + 7) = PsGetCurrentThreadId();
    v4 = 0;
    *a2 = (CompositionSurfaceObject *)((char *)this + 40);
  }
  return (unsigned int)v4;
}
