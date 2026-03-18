/*
 * XREFs of ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C
 * Callers:
 *     NtDCompositionBoostCompositorClock @ 0x14006CE90 (NtDCompositionBoostCompositorClock.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x14006D07C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     NtDCompositionSyncWait @ 0x14006E540 (NtDCompositionSyncWait.c)
 *     NtDCompositionEnableMMCSS @ 0x14006FEF0 (NtDCompositionEnableMMCSS.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1400735D0 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x14007365C (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     DCompositionIsShellProcess @ 0x140073840 (DCompositionIsShellProcess.c)
 *     DCompositionBoostCompositionClockForInput @ 0x140073CCC (DCompositionBoostCompositionClockForInput.c)
 *     ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x140074AB0 (-Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1400BD900 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1400BF1A0 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1400CE2F0 (NtDCompositionWaitForCompositorClock.c)
 *     NtDCompositionGetStatistics @ 0x1400D17F0 (NtDCompositionGetStatistics.c)
 *     DCompositionForceRender @ 0x1400E8CF8 (DCompositionForceRender.c)
 *     NtDCompositionGetTargetStatistics @ 0x1400EFC70 (NtDCompositionGetTargetStatistics.c)
 *     NtDCompositionGetFrameId @ 0x140112960 (NtDCompositionGetFrameId.c)
 *     NtDCompositionSetBlurredWallpaperSurface @ 0x140146580 (NtDCompositionSetBlurredWallpaperSurface.c)
 *     DCompositionDwmInitialize @ 0x140152A00 (DCompositionDwmInitialize.c)
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 *     DCompositionEnableHwProtectionTeardown @ 0x1402229F4 (DCompositionEnableHwProtectionTeardown.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x140222CB0 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1402230B0 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDesktopCaptureBits @ 0x140223AF0 (NtDesktopCaptureBits.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CConnection *__fastcall DirectComposition::CConnection::GetDefaultConnection(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v3; // rdi
  struct _ERESOURCE *v4; // rbx
  __int64 DCompSessionState; // rdi
  struct _ERESOURCE *v6; // rsi

  v1 = 0LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  if ( !CurrentProcessWin32Process )
    goto LABEL_7;
  if ( !*CurrentProcessWin32Process )
    goto LABEL_7;
  v3 = CurrentProcessWin32Process[32];
  if ( !v3 )
    goto LABEL_7;
  v4 = *(struct _ERESOURCE **)(v3 + 32);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v4, 1u);
  v1 = *(_QWORD *)(v3 + 24);
  if ( v1 )
    _InterlockedIncrement((volatile signed __int32 *)(v1 + 8));
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 32));
  KeLeaveCriticalRegion();
  if ( !v1 )
  {
LABEL_7:
    DCompSessionState = W32GetDCompSessionState();
    v6 = *(struct _ERESOURCE **)(DCompSessionState + 32);
    if ( v6 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v6, 1u);
      v1 = *(_QWORD *)(DCompSessionState + 16);
      if ( v1 )
        _InterlockedIncrement((volatile signed __int32 *)(v1 + 8));
      ExReleaseResourceLite(*(PERESOURCE *)(DCompSessionState + 32));
      KeLeaveCriticalRegion();
    }
  }
  return (struct DirectComposition::CConnection *)v1;
}
