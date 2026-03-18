/*
 * XREFs of OpenDwmHandle @ 0x14006F814
 * Callers:
 *     ?OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x14006D880 (-OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     NtDCompositionSyncWait @ 0x14006E540 (NtDCompositionSyncWait.c)
 *     ?OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z @ 0x14006F620 (-OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x14006F700 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x140070B34 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtag.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x14011D360 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x140148D10 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     ?EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1401969FC (-EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1402230B0 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionSetChildRootVisual @ 0x1402239E0 (NtDCompositionSetChildRootVisual.c)
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x14022412C (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 *     ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x140225204 (-VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z.c)
 *     ?EmitCreate@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140234544 (-EmitCreate@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreate@CDDisplayRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1402357F8 (-EmitCreate@CDDisplayRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1400231D0 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x14006F910 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x14006F960 (CheckOrAcquireDwmStateLock.c)
 *     UserDereferenceDwmProcess @ 0x14006F990 (UserDereferenceDwmProcess.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall OpenDwmHandle(
        PVOID Object,
        POBJECT_TYPE ObjectType,
        ACCESS_MASK DesiredAccess,
        __int64 a4,
        int a5,
        PHANDLE Handle)
{
  char v9; // al
  char v10; // di
  struct _KPROCESS *v11; // rax
  __int64 v12; // rcx
  struct _KPROCESS *v13; // rsi
  unsigned int v14; // ebx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v9 = CheckOrAcquireDwmStateLock();
  *Handle = (void *)-1LL;
  v10 = v9;
  v11 = (struct _KPROCESS *)ReferenceDwmProcess();
  v13 = v11;
  if ( v11 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v11, &ApcState);
    v14 = ObOpenObjectByPointer(Object, 0x40u, 0LL, DesiredAccess, ObjectType, 0, Handle);
    KeUnstackDetachProcess(&ApcState);
    UserDereferenceDwmProcess(v13);
  }
  else
  {
    v14 = -1073741823;
  }
  if ( v10 )
    GreUnlockDwmState(v12);
  return v14;
}
